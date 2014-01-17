/* 
 * File:   main.cpp
 * Author: Cesar Vasquez
 * Created on January 16, 2014, 9:03 AM
 * 
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//global constants
const int CNV_YR_MNS=12;//12 months for years
const int CNV_PERC=100;

//Function prototypes

//excecution begins here
int main(int argc, char** argv) {
    //declare variables
    float price,iRate, intst, paymnt,prin=0,owed,intpay=0,mpay=0;
    //input
    cout<<"What was the purchase price?"<<endl;
    cin>>price;
    cout<<"What was the finance rate? %"<<endl;
    cin>>intst;
    cout<<"what is your monthly payment? $"<<endl;
    cin>>paymnt;
    //convert andsetup heading
    intst/=(CNV_PERC*CNV_YR_MNS);
    owed=price;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Month  Owed  Intrest  Payment  Principal"<<endl;
    //loop on months till paid
    for(int month=0;owed>paymnt;month++){
        owed-=(mpay-intpay);
        mpay=paymnt;
        intpay=owed*intst;
        prin=mpay-intpay;
        cout<<setw(4)<<month<<setw(9)<<owed<<setw(11)<<intpay
            <<setw(9)<<paymnt<<setw(10)<<prin<<endl;
    }
    //Final Payment calculation
    cout<<"Your final payment = $"<<owed+intpay<<endl;
    //Exit stage right
    return (EXIT_SUCCESS);
}

