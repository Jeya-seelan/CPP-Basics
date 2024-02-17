#include <iostream>
using namespace std;

int main()
{
    int n,i=2,flag=1;
    cout<<"Enter the number : ";
    cin>>n;

    while(i<=n/2){
       if(n%i==0){
            flag=0;
            break;
       }
       i++;
    }

    if(flag==0){
        cout<<n<<" is not a prime number"<<endl;
    }else{
        cout<<n<<" is a prime number"<<endl;
    }

    return 0;
}
