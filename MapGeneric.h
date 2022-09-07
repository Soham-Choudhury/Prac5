#ifndef MAPGENERIC
#define MAPGENERIC

#include <vector>

class MapGeneric {
    private:
    virtual int f(int x);
    
    public:
    std::vector<int> map(std::vector<int> INPUT);
    std::vector<int> OUTPUT;
};



#endif