/*
 * File:  main.cpp
 * Author: Cesar F Vasquez
 * Created on January 7, 2014, 10:30 PM
 * Savitch Prob 5 Chap 1
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution begins Here
int main(){
    //Declare variables
    float ftIntr,secIntr,intrSm,intrPro;
    //Input the first integer
    cout<<"Enter the first integer"<<endl;
          cin>>ftIntr;
    //Input the second integer
    cout<<"Enter the second integer"<<endl;
          cin>>secIntr;
    //Process Calculate the sum and product of the two integers
    intrSm=ftIntr + secIntr;
    intrPro=ftIntr * secIntr;
    //Output the sum and product of the integer
    cout<<"The sum of the integer = "
    <<intrSm<<endl;
    cout<<"The product of the integer = "
    <<intrPro<<endl;
    cout<< "This is the end of the program.\n";
    return 0;
}