/*
 * File:  main.cpp
 * Author: Cesar F Vasquez
 * Created on January 8, 2014, 09:22 PM
 * Savitch Prob 9  Chap 1
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants
const float GRAVITY=32.174;//units=(ft/sect^s)

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //declare variables
    float time,frefall;
    //Input the time
    cout<<"Input the time in seconds"<<endl;
    cin>>time;
    //Calculate the distance dropped
    frefall=GRAVITY*time*time*1/2;
    //output the result
    //frefall=GRAVITY*time*time*1/2;
//Output Results
    cout<<"The Distance Dropped = "
            <<frefall<<"(ft)"<<endl;
//Exit Stage Right

    return 0;
}
