import threading
import time


class MyThread(threading.Thread):
    def __init__(self, tid, name, counter):
        threading.Thread.__init__(self)
        self.tid = tid
        self.name = name
        self.counter = counter

    def run(self):
        print("开启线程： " + self.name)
        # 获取锁，用于线程同步
        threadLock.acquire()
        print_time(self.name, self.counter, 3)
        # 释放锁，开启下一个线程
        threadLock.release()


def print_time(thread_name, delay, counter):
    while counter:
        time.sleep(delay)
        print("%s: %s" % (thread_name, time.ctime(time.time())))
        counter -= 1


threadLock = threading.Lock()
threads = []

thread1 = MyThread(101, "Thread-101", 1)
thread2 = MyThread(201, "Thread-201", 2)

thread1.start()
thread2.start()

threads.append(thread1)
threads.append(thread2)

for t in threads:
    t.join()
print("退出主线程")
