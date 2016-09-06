
#include <iostream>
using namespace std;

int main() {
    int numQuarterB = 0;
    double numQuarter = 0.25;
    int numNickelB = 0;
    double numDime = 0.10;
    int numNickelB = 0;
    double numNickel = 0.05;
    int numPennyB = 0;
    double numPenny = 0.01;
    double numTotal = 0;
    double numTotalB = 0;
    
    cout << "Enter the number of Quarters:" << endl;
    cin >> numQuarterB;
    cout << "Enter the number of Dimes:" << endl;
    cin >> numDimeB;
    cout << "Enter the number of Nickels:" << endl;
    cin >> numNickelB;
    cout << "Enter the number of Pennies:" <<endl;
    cin >> numPennyB;
    
    numTotal = (numQuarterB * numQuarter) + (numDimeB * numDime) + (numNickelB * numNickel) + (numPennyB * numPenny);
    numTotalB = numTotal / .109;
    
    cout << "You entered " <<numQuarterB<< " Quarters, " <<numDimeB<< " Dimes, " <<numNickelB<< " Nickels, and " <<numPennyB<< " Pennies." <<endl;
    cout << "Your total is: " <<numTotal<< ". After fee, your final total is: " <<numTotalB<< "." <<endl;
    cout << "Please take your ticket to the nearest cashier. Thank you for choosing CoinStar." <<endl;
    
    return 0;
}