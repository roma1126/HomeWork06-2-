#include "counter.h"

Counter::Counter(int value)
{
    counterRes = value;
};

int Counter::currentCounter()
{
    return counterRes;
};

int Counter::plusCounter()
{
    return ++counterRes;
};

int Counter::minusCounter()
{
    return --counterRes;
};