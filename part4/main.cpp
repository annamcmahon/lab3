//Katie Quinn
//CSE 20212 Lab 3
//2-8-15
//Part 2
//
//small driver program to display the contents of a derived TwoDayPackage 
//and a Overnight Package
//
#include <iostream>
using namespace std;
#include "Package.h" //include header files
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main(){
 TwoDayPackage twoDay; //instantiate a two day package
 OvernightPackage overNight; //instantiate an overnight package

 cout << "The cost of shipping a two day package is: "<< twoDay.calculateCost() <<endl;
 
 cout << "The cost of shipping an overnight package is: "<< overNight.calculateCost()<< endl;

 return 0; //function worked correctly
}
