#ifndef FILTERGENERIC
#define FILTERGENERIC
#include <vector>
class FilterGeneric {

    private:
    virtual bool g (int x)=0;

    public:
    std::vector<int> filter(std::vector<int> FILTERINPUT);
    std::vector<int> FILTEROUTPUT;


};



#endif