/*Implement a program that generates the Fibonacci series up to a given
number of terms. Prompt the user to enter the number of terms and display
the series.*/
#include<iostream>
using namespace std;
int main()
{
    int num,first=0,second=1,next;
    cout<<"Enter the number to be printed in the fibonacci series :"<<endl;
    cin>>num;
    cout<<"Fibonacci series : "<<endl;
    for (int i=0; i<num;i++)
    {
        cout<<first<<endl;
        next=first +second;
        first=second;
        second=next;
    }
    return 0;
}