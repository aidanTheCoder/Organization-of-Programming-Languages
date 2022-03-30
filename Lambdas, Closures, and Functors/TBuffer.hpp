#pragma once

template <class T, int N> class 
TBuffer 
{
    T data[N];
    int dataLength = 0;
    void swap(T& a, T& b) 
    {
        T temp = a;
        a = b;
        b = temp;
    }
public:
    bool add(T value) 
    {
        if (dataLength < N) {
            data[dataLength] = value;
            ++dataLength;
            return true;
        } else
            return false;
    }
    template <typename FuncType>
    void map(FuncType funcDo) 
    {
        for (int i = 0; i < dataLength; ++i)
            funcDo(data[i]);
    }
    template <typename FuncType>
    void sort(FuncType funcCompare) 
    {
        for (int i = 1; i < dataLength; ++i)
            for (int j = 1; j < dataLength; ++j)
                if (funcCompare(data[j - 1], data[j]) > 0)
                    swap(data[j - 1], data[j]);
    }
};
