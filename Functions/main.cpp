#include <iostream>
using namespace std;
int add (int para1, int para2) //add function
{
    int res = para1 + para2;
    return res;
}

int divide (int para3, int para4) //divide function
{
    int res2 = para3 / para4;
    return res2;
}

int multiply (int para5, int para6) //multiply function
{
    int res3 = para5 * para6;
    return res3;
}
int main()
{
 int first_num {60};
 int second_num {9};
 cout<<"Number 1: "<< first_num << endl;
 cout<<"Number 2: "<< second_num << endl;
 int sum = first_num + second_num;
 cout<<"Sum: " << sum << endl;
 sum = add(60,9); //add function called
 cout<<"Sum for parameters: " << sum << endl;
 
 int div = first_num / second_num;
 cout << "Division for pre defined: "<< div << endl;
 div = divide(138, 2); //divide function called
 cout << "Division of parameters: " << div << endl;
 
 int multi = first_num * second_num;
 cout << "Multiplication of pre-definded: " << multi << endl;
 multi = multiply(23, 3); //multiply function called
 cout<< "Multiplication of parameters: " << multi<< endl;
 cout<< "Multiplication of parameters when inside the cout method: " << multiply(2323, 3)<< endl;


 return 0;
}