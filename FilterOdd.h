#ifndef FILTERODD
#define FILTERODD
#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric {
    private:
    virtual bool g (int x);
};

#endif