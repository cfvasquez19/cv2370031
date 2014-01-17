/* 
 * File:   main.cpp
 * Author: Cesar Vasquez
 * Created on January 15, 2014, 6:15 PM
 * Savitch Chap 2 Prob 11
 */

#include <iostream>
using namespace std;

//Global constants

//Functions prototypes

//Execution begins here
int main() {
    //Declare variabls
    float cTer= 0, num= 0, sPost= 0,
        sNeg= 0, sAll= 0, aNeg, aPost, asAll;
    cout<<"This program will sum ten positive or negative \n";
    cout<<"integers. \n";
    //input
    cout<<"Please enter your integers, and press [ENTER] \n";
    cout<<"after each number:\n";
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
    //calculate
    sAll = sPost + sNeg;
    aPost= sPost / 10;
    aNeg= sNeg / 10;
    asAll= sAll / 10;
    cout<<"Ten integers have been received.\n\n";
    system("PAUSE");
    cout<<"\n";
    //output
    cout<<"The sum of all positive numbers is: " << sPost << "\n";
    cout<<"The average of all positive numbers is: " << aPost << "\n";
    cout<<"The sum of all nonpositive numbers is: " << sNeg << "\n";
    cout<<"The average of all nonpositive numbers is: " << aNeg << "\n";
    cout<<"The total sum of all numbers is:    " << sAll << "\n";
    cout<<"The average of all numbers is: " << asAll << "\n";
    cout<<"End.\n\n";
    system("PAUSE");
    //exit
    return 0;
}
