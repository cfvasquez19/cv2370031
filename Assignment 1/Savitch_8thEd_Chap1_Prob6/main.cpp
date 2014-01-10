/*
 * File:  main.cpp
 * Author: Cesar F Vasquez
 * Created on January 7, 2014, 10:45 PM
 * Savitch Prob 6 Chap 1
 */

//System Libraries
#include <iostream>//The is the error: main.cpp:9:21: warning:  iostream: No such file or directory
using namespace std;//main.cpp:9:10: error: #include expects "FILENAME" or <FILENAME>

//System Constants

//Function Prototypes

//Execution begins Here
int main(){//main.cpp:17: error: expected primary-expression before '{' token
    //make[2]: *** [dist/Debug/GNU-MacOSX/savitch_8thed_chap1_prob6] Error 1
    //make[1]: *** [.build-conf] Error 2
    //make: *** [.build-impl] Error 2
    //main.cpp:17: error: function definition does not declare parameters
    //Declare variables
    float ftIntr,secIntr,intrSm,intrPro;
    //Input the first integer
    cout<<"Enter the first integer"<<endl;//The error of cout: main.cpp:25: error: 'cut' was not declared in this scope
          cin>>ftIntr;
    //Input the second integer
    cout<<"Enter the second integer"<<endl;
          cin>>secIntr;
    //Process Calculate the sum and product of the two integers
    intrSm=ftIntr + secIntr;
    intrPro=ftIntr * secIntr;
    //Output the sum and product of the integer
    cout<<"The sum of the integer = "//Remove the >> main.cpp:35: error: invalid operands of types 'const char [26]' and 'float' to binary 'operator<<'
    <<intrSm<<endl;
    cout<<"The product of the integer = "
    <<intrPro<<endl;
    cout<< "This is the end of the program.\n";//main.cpp:39: error: expected `;' before 'return'
    return 0;
}//main.cpp:39: error: expected `}' at end of input
