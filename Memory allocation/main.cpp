#include <iostream>

using namespace std;

int main()
{
    int *p1;
    p1 = new int;
    *p1 = 20;
    cout<<"Address : "<<p1<<"\nValue : "<<*p1;

    char *p2;
    p2 = new char;
    *p2 = 'A';
    cout<<"\nAddress : "<<p2<<"\nValue : "<<*p2;

    float *p3;
    p3 = new float;
    *p3 = 10000.00;
    cout<<"\nAddress : "<<p3<<"\nValue : "<<*p3;

    return 0;
}
