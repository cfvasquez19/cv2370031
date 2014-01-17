/* 
 * File:   main.cpp
 * Author: Cesar Vasquez
 * Created on January 16, 2014, 10:51 AM
 * Savitch 8thEd Chap2 Prob7
 */

//System libraries
#include <iostream>
using namespace std;

//Global constats
float const EMP_PAY=16.78;//employee pay
float const OT_PAY=16.78*1.5;//overtime pay
float const SOCS_TAX=6e-2;//social securty tax percentage
float const FED_TAX=1.4e-1;//fedaral tax percent
float const STA_TAX=5e-2;//state tax percent
float const UNI_DUE=10;//union dues
float const HEA_INS=35;//additional health care cost

//Fuction prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float wHour,depYo,grosPay,takPay,takPayD;
    cout<<"How many hours did you worked? ";
    cin>>wHour;
    cout<<"How many dependents do you have? ";
    cin>>depYo;
    //calculate
    if(wHour<=40){
        grosPay=EMP_PAY*40+1.5*EMP_PAY*(wHour-40);
    }
    else
    {
        grosPay=EMP_PAY*wHour;
    }
    takPay=grosPay-SOCS_TAX-FED_TAX-STA_TAX-UNI_DUE;
    cout<<"your pay is:"<<takPay<<"$"<<endl;
    if(depYo>=3){
        takPay=takPay-HEA_INS;
    }
    else
    {
        takPay;

    }
    //output
    cout<<"Your take home pay is "<<takPay<<"$"<<endl;
    //exit
    return (EXIT_SUCCESS);
}

