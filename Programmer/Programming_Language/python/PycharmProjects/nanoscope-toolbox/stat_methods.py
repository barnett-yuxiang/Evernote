#!/usr/bin/env python3

import sys
import os


def stat_total(target_file: str):
    result = 0
    pop_result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            result = result + 1
            if ':POP' in line:
                pop_result = pop_result + 1
    print('Number of total lines:        ', result)
    print('Number of total methods:      ', result - pop_result)
    print('Number of total POP:          ', pop_result)
    return result, (result - pop_result), pop_result


def stat_java(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'java.' in left:
                    # print(line)
                    result = result + 1
    print('Number of java lines:         ', result)
    return result


def stat_javax(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'javax.' in left:
                    # print(line)
                    result = result + 1
    print('Number of javax lines:        ', result)
    return result


def stat_android(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'android.' in left:
                    # print(line)
                    result = result + 1
    print('Number of android lines:      ', result)
    return result


def stat_libcore(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'libcore.' in left:
                    # print(line)
                    result = result + 1
    print('Number of libcore lines:      ', result)
    return result


def stat_dalvik(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'dalvik.' in left:
                    # print(line)
                    result = result + 1
    print('Number of dalvik lines:       ', result)
    return result


def stat_androidx(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'androidx.' in left:
                    # print(line)
                    result = result + 1
    print('Number of androidx lines:     ', result)
    return result


def stat_org_json(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'org.json.' in left:
                    # print(line)
                    result = result + 1
    print('Number of org.json lines:     ', result)
    return result


def stat_sun(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'sun.' in left:
                    # print(line)
                    result = result + 1
    print('Number of sun. lines:         ', result)
    return result


def stat_com_airbnb(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if '(' in line:
                left = line.split('(')[0]
                if 'com.airbnb.' in left:
                    # print(line)
                    result = result + 1
    print('Number of com.airbnb lines:   ', result)
    return result


def stat_bytedance(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if 'bytedance' in line:
                # print(line)
                result = result + 1
    print('Number of bytedance lines:    ', result)
    return result


def stat_others(target_file: str):
    result = 0
    with open(target_file, 'r') as target_file:
        for line in target_file:
            if not 'bytedance' in line:
                if '(' in line:
                    left = line.split('(')[0]
                    if not (
                            'androidx.' in left or 'android.' in left
                            or 'javax.' in left or 'java.' in left
                            or 'libcore.' in left or 'dalvik.' in left
                            or 'org.json.' in left or 'com.airbnb.' in left
                            or 'sun.' in left
                    ):
                        result = result + 1
                        print(line)
    print('Number of others lines:       ', result)
    return result


if __name__ == '__main__':
    target_file_path = str(sys.argv[1])
    print(target_file_path)
    total_lines, total_method_lines, total_POP_lines = stat_total(target_file_path)
    total_java_method_lines = stat_java(target_file_path)
    total_javax_method_lines = stat_javax(target_file_path)
    total_bytedance_method_lines = stat_bytedance(target_file_path)
    total_android_method_lines = stat_android(target_file_path)
    total_androidx_method_lines = stat_androidx(target_file_path)
    total_libcore_method_lines = stat_libcore(target_file_path)
    total_dalvik_method_lines = stat_dalvik(target_file_path)
    total_org_json_lines = stat_org_json(target_file_path)
    total_sun_lines = stat_sun(target_file_path)
    total_com_airbnb_lines = stat_com_airbnb(target_file_path)
    total_others_method_lines = stat_others(target_file_path)

    print("java.      : %.3f" % (total_java_method_lines / total_method_lines))
    print("javax.     : %.3f" % (total_javax_method_lines / total_method_lines))
    print("bytedance. : %.3f" % (total_bytedance_method_lines / total_method_lines))
    print("android.   : %.3f" % (total_android_method_lines / total_method_lines))
    print("androidx.  : %.3f" % (total_androidx_method_lines / total_method_lines))
    print("libcore.   : %.3f" % (total_libcore_method_lines / total_method_lines))
    print("dalvik.    : %.3f" % (total_dalvik_method_lines / total_method_lines))
    print("org.json.  : %.3f" % (total_org_json_lines / total_method_lines))
    print("sun.       : %.3f" % (total_sun_lines / total_method_lines))
    print("airbnb.    : %.3f" % (total_com_airbnb_lines / total_method_lines))
    print("others     : %.3f" % (total_others_method_lines / total_method_lines))
