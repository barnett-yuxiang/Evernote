//
// Created by yuli on 2020/7/25.
//

#ifndef RING_BUFFER__RINGBUFFER_H_
#define RING_BUFFER__RINGBUFFER_H_

template<class T, size_t SIZE>
class RingBuffer {

 public:
  RingBuffer() {}
  ~RingBuffer() {}

  constexpr size_t capacity() const { return SIZE; }
  size_t size() const { return mCount; }

  T& next() {
    mHead = (mHead + 1) % SIZE;
    if (mHead < SIZE) {
      mCount++;
    }
    return mBuffer[mHead];
  }

  

 private:
  T mBuffer[SIZE];
  int mHead = -1;
  size_t mCount = 0;
};

#endif //RING_BUFFER__RINGBUFFER_H_
