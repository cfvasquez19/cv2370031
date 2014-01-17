/* 
 * File:   main.cpp
 * Author: Cesar Vasquez
 * Created on January 15, 2014, 9:00 AM
 * Savitch 8thEd Chap 2 Prob 10
 */

//System Library
#include <iostream>
using namespace std;

//Global constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare variabls
    int cTer= 0, num= 0, sPost= 0,
        sNeg= 0, sAll= 0;
	cout << "This program will sum ten positive or negative \n";
	cout << "integers. \n";
        //input
	cout << "Please enter your integers, and press [ENTER] \n";
	cout << "after each number:\n";
	while (cTer < 10)
	{
		cin >> num;
		if (num > 0) {
			sPost = sPost + num;
		} else {
			sNeg = sNeg + num;
		}
		cTer++;
	}
        //callculate
	sAll = sPost + sNeg;
	cout << "Ten integers have been received.\n\n";
	system("PAUSE");
        //output
	cout << "\n";
	cout << "The sum of all POSITIVE numbers entered is: " << sPost << "\n";
	cout << "The sum of all NEGATIVE numbers entered is: " << sNeg << "\n";
	cout << "The total sum of all numbers entered is:    " << sAll << "\n";
	cout << "End.\n\n";
	system("PAUSE");
        //exit
	return 0;
}

