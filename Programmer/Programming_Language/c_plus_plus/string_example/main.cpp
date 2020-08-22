#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

#define ACCEPT_NANOSCOPE_TRCE(method, key) \
    if (method.find(key) != std::string::npos) { return true; }

#define REFUSE_NANOSCOPE_TRCE(method, key, n) \
    if (method.compare(0, n, key) == 0) { return false; }

bool IfNanoscopeTrace(std::string method) {
  cout << "yuli: " << method << endl;
  if (method.size() < 1) { return false; }

  ACCEPT_NANOSCOPE_TRCE(method, "android.os.Handler.dispatchMessage")

  REFUSE_NANOSCOPE_TRCE(method, "android.", 8)
  REFUSE_NANOSCOPE_TRCE(method, "java.", 5)
  REFUSE_NANOSCOPE_TRCE(method, "javax.", 6)
  REFUSE_NANOSCOPE_TRCE(method, "libcore.", 8)
  REFUSE_NANOSCOPE_TRCE(method, "dalvik.", 7)
  REFUSE_NANOSCOPE_TRCE(method, "org.json.", 9)
  REFUSE_NANOSCOPE_TRCE(method, "sun.", 4)
  REFUSE_NANOSCOPE_TRCE(method, "com.airbnb.", 11)
  REFUSE_NANOSCOPE_TRCE(method, "com.google.", 11)
  REFUSE_NANOSCOPE_TRCE(method, "com.android.", 12)
  REFUSE_NANOSCOPE_TRCE(method, "com.meituan.", 12)
  REFUSE_NANOSCOPE_TRCE(method, "androidx.", 9)

  return true; // others
}

int main() {
  std::cout << "Hello, World!" << std::endl;

  std::string st1("com.ss.android.article.news.ArticleApplication.<init>");
  std::string st2("com.ss.android.article.news.ArticleApplication.attachBaseContext");
  std::string st3("com.ss.android.common.app.AbsApplication.<init>");
  std::string st4("com.ss.android.common.app.AbsApplication.attachBaseContext");
  std::string st5("kamakura.yx.android.nanoscope_trace_filter.MainActivity.<init>");
  std::string st6("kamakura.yx.android.nanoscope_trace_filter.MainActivity.onCreate");
  std::string st7("kamakura.yx.android.nanoscope_trace_filter.MainActivity.onCreateOptionsMenu");
  std::string st8("kamakura.yx.android.nanoscope_trace_filter.MainActivity.onOptionsItemSelected");

  cout << IfNanoscopeTrace("") << endl;
  cout << IfNanoscopeTrace(st1) << endl;
  cout << IfNanoscopeTrace(st2) << endl;
  cout << IfNanoscopeTrace(st3) << endl;
  cout << IfNanoscopeTrace(st4) << endl;
  cout << IfNanoscopeTrace(st5) << endl;
  cout << IfNanoscopeTrace(st6) << endl;
  cout << IfNanoscopeTrace(st7) << endl;
  cout << IfNanoscopeTrace(st8) << endl;

  //////////////////////////
  char str1[15];
  char str2[15];
  int ret;

  strcpy(str1, "android.bytedance");
  strcpy(str2, "com.android.");

  ret = strncmp(str1, str2, 12);
  if (ret < 0) {
    printf("str1 小于 str2\n");
  } else if (ret > 0) {
    printf("str2 小于 str1\n");
  } else {
    printf("str1 等于 str2\n");
  }

  cout << str1 << endl;

  return 0;
}
