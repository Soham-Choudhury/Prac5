#ifndef FILTERNONPOSITIVE
#define FILTERNONPOSITIVE
#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric {
    private:
    virtual bool g (int x);
};

#endif