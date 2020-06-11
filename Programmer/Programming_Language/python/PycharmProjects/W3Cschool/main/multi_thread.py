#!/usr/bin/python3

import threading
import time


class MyThread(threading.Thread):
    def __init__(self, tid, name, counter):
        threading.Thread.__init__(self)
        self.tid = tid
        self.name = name
        self.counter = counter

    def run(self):
        print("开始线程：" + self.name)
        self.print_time(self.name, self.counter, 5)
        print("退出线程：" + self.name)

    @staticmethod
    def print_time(thread_name, delay, counter):
        while counter:
            time.sleep(delay)
            print("%s: %s" % (thread_name, time.ctime(time.time())))
            counter -= 1


t1 = MyThread(101, 'Thread-101', 5)
t2 = MyThread(201, 'Thread-201', 5)
t1.start()
t2.start()
t1.join()
t2.join()
