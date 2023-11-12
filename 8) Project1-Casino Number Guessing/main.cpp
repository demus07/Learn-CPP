#include<iostream>
#include<string> //to work with strings 
#include<cstdlib> //to work with random numbers 
#include<ctime> 
using namespace std;

void rules() {
    cout<<"\t\t----Casino Number Guessing Rules!----\n";
    cout<<"\t1. Choose a number between 1 to 10\n" ;
    cout<<"\t2. Winner Gets 10x The money he bets\n";
    cout<<"\t3. Wrong Bet means you lose the amount.\n";
}

int main() {
    string name; //stores name of player.
    int balance, betAmt, guess, dice; //dice stores random number
    char choice;
    srand(time(0));
    cout<<"\t\t----Welcome to the Casino----\n";
    cout<<"\n What's your name: "<<endl;
    getline(cin,name);
    cout<<"\n Enter the starting balance to play the game: "<<endl;
    cin>>balance;
    do {   
    rules();
    cout<<"\n Your current balance is: "<<balance<<endl; 
    do {
    cout<<"Hey"<<name<<", Enter the bet amount: "<<endl;
    cin>>betAmt;
    if(betAmt>balance)
    cout<<"Betting Amount can't be more than current balance.\n"<<"\n Re-enter bet amount: ";
    } while(betAmt>balance);
    do {
        cout<<"Guess any number b/w 1&10: ";
        cin>>guess;
        if(guess<1 || guess>10)
        cout<<"Guess should be b/w 1 and 10!\n"<<"Re-Enter number:\n";
    }while(guess<1|| guess>10);

    dice=rand()%10+1; //gen random no. b/1 1 & 10
    if(dice==guess) {
        cout<<"Congratulations, You have won"<<betAmt*10;
        balance+=betAmt*10;
    }
    else {
        cout<<"You lost!"<<endl;
        balance-=betAmt;
    }
    cout<<"\n The winning number was: "<<dice<<endl;
    cout<<"\n"<<name<<", You have balance of: "<<balance<<endl;
    if(balance==0) {
        cout<<"You have no money to bet!"<<endl;
        
    }
    cout<<"\n --Do you want to play again (y/n)?"<<endl;
    cin>>choice;
    }while(choice=='y' || choice=='Y');

cout<<"Thanks for playing this game. Your balance is"<<balance<<endl;
}