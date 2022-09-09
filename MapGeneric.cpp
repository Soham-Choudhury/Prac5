#include "MapGeneric.h"
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;
//int MapGeneric::f(int x){
//    return x;
//};

std::vector<int> MapGeneric::map(std::vector<int> INPUT){
    int value=INPUT[0];//grabbing first value of input vector

    if (INPUT.size()==1){ //checking if size of input vector is 1, in which case its at the final value
        OUTPUT.push_back(f(INPUT[0])); //running final value of input vector through function f and documenting result
        //cout<<"Output (last):"<<OUTPUT.at(OUTPUT.size()-1)<<endl;
        return OUTPUT; //returing output vector
    }
    
    OUTPUT.push_back(f(value)); //running grabbed value andputting it through function f and putting result in output vector
    //cout<<"Output:"<<OUTPUT.at(OUTPUT.size()-1)<<endl;
    INPUT.erase(INPUT.begin()); //erasing input value from input vector as it was already read and its output documented
    return map(INPUT); //recursively calling map function again to read next vakue that is now at top of input vector
};



