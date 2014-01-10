/*
 * File:  main.cpp
 * Author: Cesar F Vasquez
 * Created on January 8, 2014, 1:15 PM
 * Savitch Prob 10  Chap 1
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here!

int main( ) {
    //Declare Variables
    char letter;
    //Input the letter
    cout<<"What character would you like to"
            <<" use to display a capital C?"<<endl;
    cin>>letter;
    //Output the capital etter C
    cout             <<"   "<<letter<<" "<<letter<<" "<<letter<<endl;
    cout    <<" "<<letter                                       <<"       "<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout    <<" "<<letter                                       <<"       "<<letter<<endl;
    cout             <<"   "<<letter<<" "<<letter<<" "<<letter<<endl;

//Exit
    return (EXIT_SUCCESS);
}

