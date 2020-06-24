//
// Created by bytedance on 2020/6/24.
//

#ifndef MODERN_TUTORIAL_CHANGKUN_GITBOOK_BAR_H_
#define MODERN_TUTORIAL_CHANGKUN_GITBOOK_BAR_H_

template<typename T, typename U>
auto add(T x, U y) -> decltype(x + y) {
  return x + y;
}

template<typename A, typename B>
class SuckType;

typedef SuckType<int, float> NewSuckType;

void learn_lambda_func_1() {
  int value_1 = 1;
  auto copy_value_1 = [value_1] {
    return value_1 + 1;
  };
  value_1 = 100;
  auto store_value_1 = copy_value_1();

  std::cout << "value_1:" << value_1 << std::endl;
  std::cout << "store_value_1:" << store_value_1 << std::endl;
}

#endif //MODERN_TUTORIAL_CHANGKUN_GITBOOK_BAR_H_
