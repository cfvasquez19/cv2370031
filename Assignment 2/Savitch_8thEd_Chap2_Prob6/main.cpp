/* 
 * File:   main.cpp
 * Author: Cesar Vasquez
 * Created on January 16, 2014, 10:09 AM
 * Savitch 8thEd Chap2 Prob9
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int mxRom,peoAtt,addPeo,peoExe;
    \\input
    cout<<"What is the maximum room capacity? ";
    cin>>mxRom;
    cout<<"How many people are attending the meeting? ";
    cin>>peoAtt;
    //output
    if(peoAtt<=mxRom){
        cout<<"The meeting can be held at this location,\n";
        addPeo=mxRom-peoAtt;
        cout<<"and "<<addPeo<<" people can, also, attend the meeting.\n";
    }
    else
    {
        cout<<"The meeting can not be held at this location\n"
            <<"because it violates fire regulations.\n";
        peoExe=peoAtt-mxRom;
        cout<<peoExe<<" people must be excluded from the meeting\n"
            <<"so that fire regulations are not violated.\n"
            <<"Thank you!!!\n";

    }
    //exit
    return (EXIT_SUCCESS);
}

