/* 
 * File:   main.cpp
 * Author: Cesar Vasquez
 * Created on January 15, 2014, 9:19 PM
 * Savitch 8thEd Chap2 Prob 19
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Exectution Begins here
int main(int argc, char** argv) {
    //Declare variables
    float x,y,z,temp,tmp2=0,a,b;
    //input
    cout<<"How many exercises to input?";
    cin>>x;
    //calculate
    for(int j=0; j<x; j++){
        cout<<"Score recived for exercise: ";
        cin>>y;
        temp=temp+y;
        cout<<"Total points possible for exercise: ";
        cin>>a;
        tmp2=tmp2+a;

    }
    z=temp;
    b=100*(z/tmp2);
    //output
    cout<<"Your total points = "<<z<<endl;
    cout<<"Your total posible points = "<<tmp2<<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Or your score is "<<b<<" %"<<endl;
    //exit
    return (EXIT_SUCCESS);
}


