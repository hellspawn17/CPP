#include <iostream>
#include <string>
using namespace std;

int main()
{
 cout << "I never wanna hear you say, I want it that way." << endl;
 string backstreet;
 getline(cin, backstreet); //accepts all the blank spaces in a string input
 cout << "Epic:"<< backstreet;
}