/*
 * File:  main.cpp
 * Author: Cesar F Vasquez
 * Created on January 14, 2014, 9:19 PM
 * Savitch Prob 1  Chap 2
 */


//System Library
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes
const int MET_TON=35273.92;
//Execution Begins Here!

int main() {
    //Declare Variables
    float ounz_ce, weig_ton, met_ton, cer_box;
    //input the weight of cerial
    cout<<"Enter the weight of a cerial box"
        <<" in ounces.";
    //calculate
    cin>>ounz_ce;
    weig_ton= ounz_ce / MET_TON;
    cer_box=MET_TON / weig_ton;
    //output
    cout<<"The weight of a cerial box"
        <<" in metric tons is equal to "<<weig_ton<<"."<<endl;
    cout<<"And it will take " <<cer_box
        <<" cerial boxes to yeld one metric ton.\n";
    //exit
    return (EXIT_SUCCESS);
}

