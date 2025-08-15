#include <iostream>
using namespace std;
int main()
{
int a=5;
int b=6;
int c=8;
int d=20;
int e=10;
int f=16;
    int res=a+b*c-d/e-f; 
    cout<<res<<endl;
    /* b*c = 6*8=48 and d/e = 20/10=2.
    now 5+48-2-16 is the expression at hand
    so, using left to right precedence,
    48+5=53, 53-2=51, 51-16=35.*/
    res=(a+b)*c-d/e-f;
    cout<<res<<endl;
    /* First, bracket will be solved, so a+b=5+6=11.
    11*c-d/e-f = 11*8-20/10-16. 88-20/10-16.
    This becomes, 88-2-16. Finally, we have 70 as the answer.
    The compiler takes some extra time to figure out thr precedence in a mathematical expression, providing brackets helps the compiler to save some time.*/
}