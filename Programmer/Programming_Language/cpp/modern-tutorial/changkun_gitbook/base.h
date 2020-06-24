//
// Created by bytedance on 2020/6/24.
//

#ifndef MODERN_TUTORIAL_CHANGKUN_GITBOOK_BASE_H_
#define MODERN_TUTORIAL_CHANGKUN_GITBOOK_BASE_H_

struct Base {
  virtual void foo(int);
};

struct SubClass : Base {
  virtual void foo(int) override;
};

#endif //MODERN_TUTORIAL_CHANGKUN_GITBOOK_BASE_H_
