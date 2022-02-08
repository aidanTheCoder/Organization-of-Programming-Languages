#pragma once
#include "GoFiterator.h"

class IntegerBuffer {
private:
    static const int CAPACITY = 32;
    int data[CAPACITY];
    int dataLength;
    class IntegerBufferIterator : public GoFiterator {
    private:
        IntegerBuffer* collection;
        int cursor;
    public:
        inline IntegerBufferIterator(IntegerBuffer* collection)
            : collection(collection), cursor(0) {}
        void first() override;
        void next() override;
        bool isDone() override;
        int currentItem() override;
    };      
public:
    inline IntegerBuffer() : data({0}), dataLength(0) {}
    bool add(int value);
    int add(int* values, int numValues);
    GoFiterator* createIterator();
};
