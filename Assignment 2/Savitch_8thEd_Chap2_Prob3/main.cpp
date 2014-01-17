/* 
 * File:   main.cpp
 * Author: Cesar Vasquez
 * Created on January 15, 2014, 3:29 PM
 * Savitch Chap2 Prob3
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants
const float PAY_INC=7.6e-2;//Pay increase retroactive

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variabls
    float pAnl_sal, rea_pay, nAnl_sal, nMon_sal;
    //pAnl_sal:previous annual
    //rea_pay:retroactve pay
    //nAnl_sal:new annual salary
    //nMon_sal:new monthly salary
    //input
    cout<<"Enter the employees previous \n"
       <<"annual salary.";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //calculation
    cin>>pAnl_sal;
    rea_pay=PAY_INC * (pAnl_sal/ 6);
    nAnl_sal=pAnl_sal + (rea_pay * 12);
    nMon_sal= rea_pay + (pAnl_sal / 12);
    //output
    cout<<"The amount of retroactive"
        <<"pay due is:"<<rea_pay<<endl;
    cout<<"New annual salary:"<<nAnl_sal<<endl;
    cout<<"New monthly salary:"<<nMon_sal<<endl;
    //end
    return (EXIT_SUCCESS);
}

