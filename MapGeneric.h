#ifndef MAPGENERIC
#define MAPGENERIC

#include <vector>

class MapGeneric {
    private:
    virtual int f(int x)=0;
    
    public:
    std::vector<int> map(std::vector<int> INPUT);
    std::vector<int> OUTPUT;
};



#endif