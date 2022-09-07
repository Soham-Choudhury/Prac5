#ifndef FILTERFORTWODIGITPOSITIVE
#define FILTERFORTWODIGITPOSITIVE
#include "FilterGeneric.h"

class FilterForTwoDigitPositive  : public FilterGeneric {
    private:
    virtual bool g (int x);
};

#endif