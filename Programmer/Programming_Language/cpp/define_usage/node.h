//
// Created by bytedance on 2020/6/15.
//

#ifndef DEFINE_USAGE_NODE_H
#define DEFINE_USAGE_NODE_H

#define DECLARE_INSTRUCTION(type)                   \
    const char* DebugName() const { return #type; }  \

#endif //DEFINE_USAGE_NODE_H
