//
// Created by bytedance on 2020/6/24.
//

#ifndef MODERN_TUTORIAL_CHANGKUN_GITBOOK_FOO_H_
#define MODERN_TUTORIAL_CHANGKUN_GITBOOK_FOO_H_

#define PRINT_MACRO_HELPER(x) #x
#define PRINT_MACRO(x) #x"=" PRINT_MACRO_HELPER(x)
#pragma message(PRINT_MACRO(__cplusplus))

#ifdef __cplusplus__
extern "C" {
#endif

int add(int x, int y);

#ifdef __cplusplus__
}
#endif

#endif //MODERN_TUTORIAL_CHANGKUN_GITBOOK_FOO_H_
