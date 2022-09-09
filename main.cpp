#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
using namespace std;
#include <iostream>
#include <vector>
#include <string>
int main (){
    cout<<"Enter Input: "<<endl;
    std::string input="";
    getline (cin >> ws,input); //taking input including spaces and commas
    std::vector <int> L; //making vector L to hold input integers
    string target=", "; //variable holding the target to aim for the comma and space to differentiate between different ints
    string hold=""; //variable and temp hold space
    int targetfound=0; // hold location of first area with comma, hence end of first int
    //int x=0;
    while (L.size()<20){ // run loop if L isnt at its full 20 element capacity
        targetfound=input.find(target); // finding location of first comma and space
        hold=input.substr(0,targetfound); // taking out first int out of string input
        L.push_back(stoi(hold)); //converting input number from string to integer and holding in vector L
        input.erase(0,targetfound+2); //erasing first int and comma and space in input string
    };
       
    MapSquare square; //making objects for classes 
    MapTriple triple;
    MapAbsoluteValue absolute;

    FilterOdd filterodd;
    FilterNonPositive nonpositive;
    FilterForTwoDigitPositive twodigitpostive;

    //std::vector <int> squareout=square.map(test);
    std::vector <int> tripleout=triple.map(L); //multiplying input by 3
    std::vector <int> Ldash=absolute.map(tripleout); //absolute value of inputs
   
    std::vector <int> filteroddout=filterodd.filter(Ldash); //getting odd numbers from input vector

    //std::vector <int> filternonpositive=nonpositive.filter(test);
       
    std::vector <int> Ldashdash=twodigitpostive.filter(filteroddout); //getting ints that are 2 digit and positive
   

    int size9=Ldashdash.size();
    int sizeL=L.size();
    //std::cout<<"Ldashdash:";
    for (int z=0; z<sizeL;z++){
        std::cout<<"L("<<z<<"): "<<L.at(z)<<endl;
    };
    cout<<"[";
    for (int i=0; i<size9;i++){
        if (i==size9-1){
            std::cout<<Ldashdash.at(i);
        }
        else {
            std::cout<<Ldashdash.at(i)<<", ";
        }
    };
    cout<<"]";
    std::cout<<'\n';


};
