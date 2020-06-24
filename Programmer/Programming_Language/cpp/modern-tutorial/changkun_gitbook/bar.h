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

#endif //MODERN_TUTORIAL_CHANGKUN_GITBOOK_BAR_H_
