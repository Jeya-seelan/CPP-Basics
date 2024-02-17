#include <iostream>

using namespace std;

int main()
{
    int *p;
    int i,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array :\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    p = a;
    cout<<"Array elements : ";
    for(i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    return 0;
}
