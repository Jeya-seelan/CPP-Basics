#include <iostream>

using namespace std;

void swap_1(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void swap_2(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping : "<<a<<" "<<b<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the numbers :";
    cin>>a>>b;
    cout<<"Call by reference\nBefore swapping : "<<a<<" "<<b<<endl;
    swap_1(&a,&b);
    cout<<"After swapping : "<<a<<" "<<b<<endl;
    cout<<"\nEnter the numbers :";
    cin>>a>>b;
    cout<<"Call by value\nBefore swapping : "<<a<<" "<<b<<endl;
    swap_2(a,b);
    return 0;
}
