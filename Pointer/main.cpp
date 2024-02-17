/**
A company insures its drivers in the following cases :
If the driver is married
If the driver is unmarried,male & above 30 years of age,
If the driver is unmarried,female & above 25 years,
In all other cases,the driver is not insured.
If the marital status,sex and age of the driver are the inputs.

Write a program to determine the whether the driver should be insured or not.
*/

#include <iostream>
using namespace std;

struct Employee{
    char sex;
    string result;
    int age,marriedStatus;
}e[10];

void isEligible(Employee e[],int n){
    int i;
    for(i=0;i<n;i++){
        if(e[i].marriedStatus == 1){
            if(e[i].sex == 'M'){
                if(e[i].age > 30){
                    e[i].result = "Insured";
                }else{
                    e[i].result = "Not-Innsured";
                }
            }
            if(e[i].sex == 'F'){
                if(e[i].age > 25){
                    e[i].result = "Insured";
                }else{
                    e[i].result = "Not-Innsured";
                }
            }
        }
        if(e[i].marriedStatus == 2){
            e[i].result = "Not-Insured";
        }
    }
}

void display(Employee e[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"\nEmployee "<<i+1<<"\nInsurance status : "<<e[i].result<<"\n";
    }
}

int main()
{
    int i,n;
    cout<<"Enter the no. of employees : ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Employee "<<i+1<<"\n";
        cout<<" M - Male\n F - Female\nEnter : ";
        cin>>e[i].sex;
        cout<<" 1 - Married\n 2 - Unmarried\nEnter : ";
        cin>>e[i].marriedStatus;
        cout<<"Enter the age of employee : ";
        cin>>e[i].age;
        cout<<"\n";
    }

    isEligible(e,n);
    display(e,n);
    return 0;
}
