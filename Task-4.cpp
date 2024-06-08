/*Implement a number guessing game.Generate a random number and prompt the
user to guess the number. Provide hints such as "higher" or "lower" to help
the user narrow down the guess.Continue until the user guesses the correct 
number.*/
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    cout<<"======= Number Guessing Game ======="<<endl;
    srand(time(0));
    int a,p,n;
    cout<<"Enter 1 for normal mode,Enter 2 for hard mode"<<endl;
    cin>>p;
    while (p==1 || p==2 )
    {
        if (p==1)
        {
            a=rand()%100+1;
            cout<<"You are playing normal mode, so its number range is 1 to 100"<<endl;
        }
        else
        {
            a=rand()%1000+1;
            cout<<"You are playing hard mode, so its number range is 1 to 1000"<<endl;   
        }
        cout<<"Choose a number"<<endl;
        cin>>n;
        while (n!=a)
        {
            if (n<a)
            {
                cout<<"Your guess is low"<<endl;
            }
            else
            {
                cout<<"Your guess is high"<<endl;
            }
            cout<<"Choose again "<<endl;
            cin>>n;
        }
        cout<<"Your guess is correct number is "<<a<<endl;


        cout<<"Enter 1 for normal mode,Enter 2 for hard mode"<<endl;
        cin>>p;    
}
return 0;
}