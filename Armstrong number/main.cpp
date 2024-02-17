#include <iostream>
using namespace std;

int main()
{
    int temp,rem,result;

    cout<<"Armstrong numbers between 1 to 500 :\n";

    for(int i=1;i<=500;i++){
        temp=i;
        while(i>0){
            rem=i%10;
            result+=(rem*rem*rem);
            i/=10;
        }
        if(temp==result){
            cout<<result<<endl;
        }
    }

    return 0;
}
