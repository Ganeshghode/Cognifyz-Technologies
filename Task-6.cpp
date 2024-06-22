/*Implement a simple rock-paper-scissors game. Prompt the user to choose
either rock, paper, or scissors, and geneate a random choice for the computer. 
Determine the winner based on the game rules and display the result.*/
#include<iostream>
#include<time.h>
using namespace std;
int main() 
{
    int mode,move1,move2;
    string player1,player2;
    srand(time(0));
    cout<<endl<<"========== Welcome in Rock Paper and Scissor Game ========="<<endl;
    cout<<endl<<"Press 1 for computer vs player and 2 for player vs player :"<<endl;
    cin>>mode;
    switch (mode)
    {
        case 1:
            cout<<"Enter the name of player :"<<endl;
            cin>>player2;
            cout<<player2<<" please select your move :"<<endl;
            cout<<"Enter 1 for rock :"<<endl;
            cout<<"Press 2 for paper :"<<endl;
            cout<<"Press 3 for scissor :"<<endl;
            cin>>move2;
            do
            {
                move1=rand()/6+1;
            } while (move1>0 && move1>=4);
            cout<<move1<<endl;
            if(move1 == 1)
            {
                if(move2  == 1)
                {   
                    cout<<"Match is tie"<<endl;;
                }
                else
                {
                    if(move2 == 2)
                    {
                        cout<<player2<<" won the match"<<endl;
                    }
                    if(move2 == 3)
                    {
                        cout<<"Computer won the match"<<endl;
                    }
                     if(move2>=4)
                    {
                        cout<<player2<<" you select wrong move"<<endl;
                    }
                }
            }
            if(move1 == 2)
            {
                if(move2  == 1)
                {   
                    cout<<"Computer won the match"<<endl;
                }
                else
                {
                    if(move2 == 2)
                    {
                        cout<<"Match is tie"<<endl;
                    }
                    if(move2 == 3)
                    {
                        cout<<player2<<" won the match"<<endl;
                    }
                     if(move2>=4)
                    {
                        cout<<player2<<" you select wrong move"<<endl;
                    }
                }
            }
            if(move1 == 3)
            {
                if(move2  == 1)
                {   
                    cout<<player2<<" won the match"<<endl;
                }
                else
                {
                    if(move2 == 2)
                    {
                        cout<<"Computer won the match"<<endl;
                    }
                    if(move2 == 3)
                    {
                        cout<<"Match is tie"<<endl;
                    }
                     if(move2>=4)
                    {
                        cout<<player2<<" you select wrong move"<<endl;
                    }
                }
            }
            break;
            case 2:
                cout<<endl<<"Enter the name of player1 :"<<endl;
                cin>>player1;
                cout<<endl<<"Enter the name of player2 :"<<endl;
                cin>>player2;
                cout<<player1<<" Please select your move :"<<endl<<endl;
                cout<<"Enter 1 for rock :"<<endl;
                cout<<"Press 2 for paper :"<<endl;
                cout<<"Press 3 for scissor :"<<endl;
                cin>>move1;
                cout<<player2<<" please select your move :"<<endl;
                cout<<"Press 1 for rock :"<<endl;
                cout<<"Press 2 for paper :"<<endl;
                cout<<"Press 3 for scissor :"<<endl;
                cin>>move2;
            if(move1 == 1)
            {
                if(move2  == 1)
                {   
                    cout<<"Match is tie"<<endl;
                }
                else
                {
                    if(move2 == 2)
                    {
                        cout<<player2<<" won the match"<<endl;
                    }
                    if(move2 == 3)
                    {
                        cout<<player1<<" won the match"<<endl;
                    }
                    if(move2>=4)
                    {
                        cout<<player2<<" you select wrong move"<<endl;
                        cout<<"Run again"<<endl;
                    }
                }
            }
            if(move1 == 2)
            {
                if(move2  == 1)
                {   
                    cout<<player1<<" won the match"<<endl;
                }
                else
                {
                    if(move2 == 2)
                    {
                        cout<<"Match is tie"<<endl;
                    }
                    if(move2 == 3)
                    {
                        cout<<player2<<" won the match"<<endl;
                    }
                     if(move2>=4)
                    {
                        cout<<player2<<" you select wrong move"<<endl;
                        cout<<"Run again"<<endl;
                    }
                }
            }
            if(move1 == 3)
            {
                if(move2  == 1)
                {   
                    cout<<player2<<" won the match"<<endl;
                }
                else
                {
                    if(move2 == 2)
                    {
                        cout<<player1<<" won the match"<<endl;
                    }
                    if(move2 == 3)
                    {
                        cout<<"Match is tie"<<endl;
                    }
                     if(move2>=4)
                    {
                        cout<<player2<<" you select wrong move"<<endl;
                        cout<<"Run again"<<endl;
                    }
                }
            }
            if(move1>=4)
            {
                cout<<player1<<" you select wrong move"<<endl;
                cout<<"Run again"<<endl;
            }
            break;
            default:
            {
                cout<<"You select wrong mode"<<endl;
                cout<<"Run again"<<endl;
            }
            break;
    }
    return 0;
}
