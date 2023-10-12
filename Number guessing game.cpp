#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num,guess,tries =0;
    srand(time(0));
    num=rand()%100+1;
    cout<<"Guess the number:\n\n";
    do{
        cout<<"Enter the guess number between 1 and 100:";
        cin>>guess;
        tries++;
        if(guess>num){
        cout<<"TOO HIGH!!\n\n";
    }
    else if(guess<num){
    cout<<"TOO LOW!!\n\n";}
    else
    cout<<"\nCorrect you got it in "<<tries<<" "<<"guesses\n\n";
}
while (guess!=num);
return 0;
}
