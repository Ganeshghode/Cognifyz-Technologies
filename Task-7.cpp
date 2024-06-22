/*Write a program that checks whether a given word or phrase is a palindrome. 
A palindrome is a word or phrase that reads the same forwards and backwards. 
Prompt the user to input a word or phrase and display whether it is a 
palindrome or not.*/
#include <iostream>
using namespace std;
    bool is_palindrome(string text)
    {
        for(int i=0;i<text.length()/2;i++)
        if(text[i] !=text[text.length()-i-1])
        return false;
        
        return true;
    }
    int main()
    {
        string test1;
        cout<<"Enter word or phrase :"<<endl;
        cin>>test1;
        if(is_palindrome(test1))
        cout<<test1<<" is a palindrome"<<endl;
        else
        cout<<test1<<" is not palindrome"<<endl;

    return 0;
}
