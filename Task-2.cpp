/*Write a program that takes two numbers and an operator as input (+,-,*,/,%)
and performs the corresponding arithmetic operation.
Display the result on the console. */

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<"Enter First number and Second number"<<endl;
    cin>>num1>>num2;
    cout<<"Enter"<<endl<<" + for Addition"<<endl<<" - for Subtraction"<<endl<<" * for Multiplication"<<endl<<" / for Division"<<endl<<" % for Modulus"<<endl;
    cin>>op;
    switch (op)
    {
        case '+':
            cout<<"Addition of given numbers is : "<<num1+num2<<endl;
        break;
        case '-':
            cout<<"Subtraction of given numbers is : "<<num1-num2<<endl;
        break;
        case '*':
            cout<<"Multiplication of given numbers is : "<<num1*num2<<endl;
        break;
        case '/':
            cout<<"Division of given numbers is : "<<num1/num2<<endl;
        break;
        case '%':
            cout<<"Modulus of given numbers is : "<<num1%num2<<endl;
        break;
    }
    return 0;
}