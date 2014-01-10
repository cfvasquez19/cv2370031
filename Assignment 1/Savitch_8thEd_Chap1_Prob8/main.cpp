/*
 * File:  main.cpp
 * Author: Cesar F Vasquez
 * Created on January 7, 2014, 10:50 PM
 * Savitch Prob 8  Chap 1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//function prototypes

//Execution begins Here
int main(){
    //Declare variables
    float quart,dim,nick,tolCha;
    //Input amount of quarters, dimes, and nickels
    cout<<"How much change do you have?"<<endl;
    cout<<"How many quarters do you have?"<<endl;
          cin>>quart;
    cout<<"How many dimes do you have?"<<endl;
          cin>>dim;
    cout<<"How many nickels do you have?"<<endl;
          cin>>nick;
    int qat_val = quart * 25;//The amount of quarters multiply by 25
    int dim_val = dim * 10;//The amount of dimes multiply by 10
    int nck_val = nick * 5;//The amount of nickels multiply by 5
    //Process - Calculate the amount of change
    tolCha=qat_val+dim_val+nck_val;
    //Output the amount of change
    cout<<"You have "
       <<tolCha<<" Cents."<<endl;
    return 0;
}