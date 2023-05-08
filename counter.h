#pragma once
class Counter
{
private:
    int counterRes = 0;

public:
    Counter(int value);
    int currentCounter();
    int plusCounter();
    int minusCounter();
};