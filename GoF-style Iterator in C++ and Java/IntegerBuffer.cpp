#include "IntegerBuffer.h"

bool IntegerBuffer::add(int value) {
    if(dataLength < CAPACITY) {
        data[dataLength] = value;
        ++dataLength;
        return true;
    } else
        return false;
}

int IntegerBuffer::add(int values[], int numValues) {
    int count = 0;
    for(int i = 0; i < numValues; ++i)
        if(add(values[i]))
            ++count;
    return count;
}

GoFiterator* IntegerBuffer::createIterator() {
    return new IntegerBufferIterator(this);
}

void IntegerBuffer::IntegerBufferIterator::first() {
    cursor = 0;
}

void IntegerBuffer::IntegerBufferIterator::next() {
    if(!isDone())
        ++cursor;
}

bool IntegerBuffer::IntegerBufferIterator::isDone() {
    return cursor == collection->dataLength;
}

int IntegerBuffer::IntegerBufferIterator::currentItem() {
    if(isDone())
        return 0;
    else
        return collection->data[cursor];
}

