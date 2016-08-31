//Jacob hilty
//8/30/16
//Created an MadLibs program. Finished at home due to time constraints.
// thanks to this link: http://www.cplusplus.com/forum/beginner/17639/ for teaching me how to use the char command. I was lost using int instead of char.

#include <iostream>
using namespace std;

int main() 
{
    
    char storeOne [80];
    //the first store name
    char storeItemOne [80];
    //the item sally is obtaining from the store
    char personOne [80];
    //the person sally met at the store
    char personTwo [80];
    //the person that sally was reminded of (sally is a bad friend)
    char storeTwo [80];
    //the second store sally visits to obtain a gift for friend 2
    char genderHeOrShe [80];
    //the gender of the person to make a cohesive sentence.
    
    cout << "Enter the name of a store: " << endl;
    cin >> storeOne;
    cout << "Enter the name of a product: " << endl;
    cin >> storeItemOne;
    cout << "Enter the name of a person: " <<endl;
    cin >> personOne;
    cout << "Enter the name of another person: " <<endl;
    cin >> personTwo;
    cout << "Enter the name of another store: " << endl;
    cin >> storeTwo;
    cout << "Enter the gender of the second person: " << endl;
    cout << "(Note: Use he or she)" << endl;
    cin >> genderHeOrShe;
    cout << endl;
    
    cout << "Enjoy your MadLib!" << endl;
    cout << endl;
    cout << "Sally went to the " <<storeOne<< " to pick up some " <<storeItemOne<< ". She met " <<personOne<< " at the store," <<endl;
    cout << "who reminded her that " <<personTwo<< "'s birthday was tomorrow. so Sally left" <<endl;
    cout << "and went to the " <<storeTwo<< " to pick up a gift for " <<personTwo<< ". When Sally went to" <<endl;
    cout << "the party for " <<personTwo<< "'s birthday, and gave " <<personTwo<< " the gift, " <<genderHeOrShe<< " was very pleased." <<endl;
    

    return 0;
}