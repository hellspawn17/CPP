#include <iostream>
using namespace std;
int main()
{
    int value = 69;
    cout<<"The value is: "<<value++<<endl; //this should be 69 for postfix increment as value is captured
    cout<<"The incremented value is: "<<value<<endl; //this will be 70 for postfix increment

    value=69; //reset
    cout<<"The value is: "<<value--<<endl; //this should be 69 for postfix decrement as value is captured
    cout<<"The decremented value is: "<<value<<endl; //this should be 68 for postfix decrement

    value=69; //reset
    cout<<"The prefix incremented value is: "<<++value<<endl; //this should be 70
    
    value=69; //reset
    cout<<"The prefix decremented value is: "<<--value<<endl; //this should be 68
}

