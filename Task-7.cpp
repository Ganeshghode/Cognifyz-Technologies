/*Create a program that calculates the average grade of a student. Prompt the
user to enter the number of subjects,and then input the grades for each subject. 
Calculate the average grade and display it to the user.*/
#include<iostream>
using namespace std;
int main()
{
    int i,grade,averagegrade,choice=0,total=0;
    string arr1[20];
    cout<<"How many subjects do you want to enter : ";
    cin>>choice;
    cout<<endl;
    for(i=0;i<choice;i++)
    {
        cout<<"Enter the name of subject "<<i+1<<" : ";
        cin>>arr1[i];
    }
    cout <<endl;
    for (i = 1; i <=choice; ++i) 
    {
        cout<< "Enter the grade of subject " << i << " : ";
        cin >> grade;
        total += grade;
    }
    averagegrade = total / choice;
    cout <<endl<< "The average grade is: " << averagegrade;
    return 0;
}
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
