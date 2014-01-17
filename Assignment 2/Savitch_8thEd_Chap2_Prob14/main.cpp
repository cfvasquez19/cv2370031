/* 
 * File:   main.cpp
 * Cesar Vasquez
 * Created on January 15, 2014, 7:02 PM
 * Savitch 8thEd Chap2 Prob14
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string inNam, yrNam, aFod, aDjec, aCol, anAnil;
    int nubTwe;
    //Input
    cout<<"Enter the first or last name of your instructor.\n";
    cin>> inNam;
    cout<<"Enter your name.\n";
    cin>> yrNam;
    cout<<"Enter a food.\n";
    cin>> aFod;
    cout<<"Enter a number between 100 and 120.\n";
    cin>> nubTwe;
    cout<<"Enter an adjective.\n";
    cin>> aDjec;
    cout<<"Enter a color.\n";
    cin>> aCol;
    cout<<"Enter an animal.\n";
    cin>> anAnil;
    //Output
    cout<<"Dear Instructor"<<" "<<inNam<<endl;

    cout<<"I am sorry that I am unable to turn in my homework \n"
          "at this time. First, i ate a rotten"<<" "<<aFod<<", which\n"
          "made me turn"<<" "<<aCol<<" and extreamly ill. I came down\n"
          "with a fever of"<<" "<<nubTwe<<". Next, my"<<" "<<aDjec<<" pet\n"<<""<<anAnil<<
          " must have smelled the remains of the"<<" "<<aFod <<" on my\n"
          "homework, because he ate it. I am currently rewriting my\n"
          "homework and hope you will accept it late.\n";

    cout<<"Sincerely\n";
    cout<<yrNam<<endl;

    //exit
    return (EXIT_SUCCESS);
}

