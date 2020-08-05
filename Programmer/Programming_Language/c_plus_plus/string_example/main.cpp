#include <iostream>

using std::cout;
using std::endl;

int main() {
  std::cout << "Hello, World!" << std::endl;

  std::string st1("android.app.Activity");
  std::string st2("a.android.bytedance");
  std::string st3("a.andr");

  if (st1.compare(0, 8, "android.") == 0) {
    cout << "Pass 1" << endl;
  }

  if (st2.compare(0, 8, "android.") == 0) {
    cout << "Pass 2" << endl;
  }

  if (st3.compare(0, 8, "android.") == 0) {
    cout << "Pass 2" << endl;
  }

  return 0;
}
