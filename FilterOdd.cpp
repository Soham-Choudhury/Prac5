#include "FilterOdd.h"

bool FilterOdd::g(int x){
    if (x % 2==0){
        return false;
    }
    return true;
};