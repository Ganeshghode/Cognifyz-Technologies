//Write a program that takes a string as input and reverses it.
// Display the reversed string on the console.
#include<iostream>
using namespace std;
int main()
{
    string input;
    cout<<"Enter the string"<<endl;
    cin>>input;
    string reversed = " ";
    for (int i = input.length() - 1;i>=0;i--)
    {
        reversed += input[i];
    }
    cout<<"Reversed string: "<<reversed<<endl;
    return 0;
}