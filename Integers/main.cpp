#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int el_c; //may contain garbage value
    int li_c {}; //initialized to 0
    int do_c {10}; //initialized to 10
    int cat_c {15}; //initialized to 15

    int dom_an {do_c + cat_c}; //used as initializer
    cout<<el_c<<endl;
    cout<<li_c<<endl;
    cout<<do_c<<endl;
    cout<<cat_c<<endl;
    int narr_con (6.9);//less safe than braces initialization
    cout<<narr_con;
    cout<<" lol sucks to be you"<<endl;
    //checking the size using sizeof
    cout<<"sizeof int: "<<sizeof(int)<<endl;
    cout<<"sizeof li_c: "<<sizeof(li_c)<<endl;
    return 0;
}