/*
 * File:  main.cpp
 * Author: Cesar F Vasquez
 * Created on January 7, 2014, 10:02 PM
 * Savitch Prob 1 Chap 1
 */

//System Libraries
#include <iostream> //Put in the comments of the locations
using namespace std;

//System Constants

//Function Prototypes

//Execution Begins Here!

int main( ) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    //Input the number of pods, and the number of peas in a pod
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    //Calculate the number of peas in all pods
    total_peas = number_of_pods * peas_per_pod;
    //Output Result
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " pesa in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    return 0;
}