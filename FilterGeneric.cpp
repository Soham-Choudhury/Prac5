#include "FilterGeneric.h"
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

//bool FilterGeneric::g (int x){
//    return false;
//};

std::vector<int> FilterGeneric::filter(std::vector<int> FILTERINPUT){
    int value=FILTERINPUT[0];//grabbing first value of input vector
    if (FILTERINPUT.size()==1){ //checking if size of input vector is 1, in which case its at the final value
        if (g(value)==1){ //running final value of input vector through function g and if it passes, fill document it in output vector
            FILTEROUTPUT.push_back(value); //documenting output of value into end of output vector
        }
        //cout<<"Output (last):"<<OUTPUT.at(OUTPUT.size()-1)<<endl;
        return FILTEROUTPUT;//returing output vector
    }
    
    if (g(value)==1){
        FILTEROUTPUT.push_back(value);
        //cout<<"Filter Output:"<<FILTEROUTPUT.at(FILTEROUTPUT.size()-1)<<endl;
    }
    FILTERINPUT.erase(FILTERINPUT.begin());
    return filter(FILTERINPUT);
};
