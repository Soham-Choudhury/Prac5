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
    std::vector <int> L; //making vector L to hold input vectors
    string target=", "; //variable holding the target to aim for the comma and space to differentiate between different ints
    string hold=""; //variable and temp hold space
    int targetfound=0; // hold location of first area with comma, hence end of first int
    //int x=0;
    while (L.size()<20){ // program to take input line of integeres and 
        targetfound=input.find(target); // finding location of first comma and space
        hold=input.substr(0,targetfound); // taking out first int out of string input
        L.push_back(stoi(hold)); //converting string to integer and holding in vector L
        //Lh.push_back(hold);
        //std::cout<<"Lh: "<<Lh.at(1)<<std::endl;
        input.erase(0,targetfound+2); //erasing first int and comma and space in input string
    };
    //int Lhsize=Lh.size();
    //std::cout<<"Lh(1): "<<L.at(1)<<std::endl;
    
      
    //cout<<input<<endl;
    
    //std::vector <int> Lh={6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    //std::vector <int> L={6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
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
    //int size7=Ldash.size();
    //std::cout<<"Ldash:";
    //for (int i=0; i<size7;i++){
    //    std::cout<<Ldash.at(i)<<",";
    //};
    //std::cout<<"\n"<<std::endl;
    //std::vector <int> Ldashtest={18, 33, 159, 48, 219, 384, 315, 312, 213, 537, 306, 36, 63, 435, 297, 597, 468, 558, 129, 567};
    
    //int size8=Ldashtest.size();
    //std::cout<<"Ldash:";
    //for (int i=0; i<size8;i++){
    //    std::cout<<Ldashtest.at(i)<<",";
    //};
    //std::cout<<"\n"<<std::endl;

    int size9=Ldashdash.size();
    std::cout<<"Ldashdash:";
    for (int i=0; i<size9;i++){
        std::cout<<Ldashdash.at(i)<<",";
    };
    std::cout<<'\n';


};
