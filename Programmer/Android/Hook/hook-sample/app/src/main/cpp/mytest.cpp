//
// Created by bytedance on 2020/6/12.
//
#include <string.h>
#include <jni.h>
#include <stdio.h>
#include <android/log.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_kamakura_yx_hook_1sample_Local_readMapFile(JNIEnv *env, jobject thiz) {
    char line[512];
    FILE *fp;
    uintptr_t base_addr;
    char perm[5];
    unsigned long offset;
    int pathname_pos;

    if (NULL == (fp = fopen("/proc/self/maps", "r"))) {
        __android_log_print(ANDROID_LOG_DEBUG, "mytest", "fopen /proc/self/maps failed");
        return NULL;
    }

    __android_log_print(ANDROID_LOG_WARN, "mytest", "divider");

    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%""lx""""-%*lx %4s %lx %*x:%*x %*d%n", &base_addr, perm, &offset,
               &pathname_pos);
        __android_log_print(ANDROID_LOG_DEBUG, "mytest", "%s", line);
    }

    return (*env).NewStringUTF("Hello from JNI !");
}