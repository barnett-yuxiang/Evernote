package com.bytedance.platform.tracer.enhance;

public class FF {
    public int b(int mark) {
        int sum = mark * mark;
        System.out.println("FF invoke b with " + mark);
        return sum;
    }
}
