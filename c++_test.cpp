#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main() {

cout<< " Welcome to game where you have to gusess\n";
cout<< " the number that was randomly generated by a machine\n";
cout<<" "<<endl;
cout<<"Enter a max random number: ";
int randN;
cin>>randN;

int enGangTil=1;
int antRunder=0;
int totGjett=0;

  while (enGangTil==1){
    antRunder++;
    int gjettinger=1;
    int randNum=(rand()%randN);
    cout<<"What is you guess? ";
    int guess;
    cin>>guess;
      while (randNum != guess) {
        if (guess<randNum) {
          cout<<"To low\n";
          cout<<"What is you guess: ";
          cin>>guess;
          gjettinger++;
        }
        else if(guess>randNum){
          cout<<"To high\n";
          cout<<"What is you guess: ";
          cin>>guess;
          gjettinger++;
        }
      }
    totGjett=totGjett+gjettinger;

    cout<<"That is correct!\n";
    cout<<"It took you "<<gjettinger<<" tryes to guess right\n";
    if (gjettinger<5) {
      cout<<"You had less than 5 tryes, you did well!\n";
    }
    else {
      cout<<"You had more than 5 tryes, try doing a better job next time!\n";
    }
    cout<<"Do you want to continue playing? [Y/n]: ";
    char answer;
    cin>>answer;

    if (answer='N' || answer='n'){
      enGangTil=0;
    }
    else if (answer='Y' || answer='y'){
      enGangTil=1;
    }

  }
  int Average=totGjett/antRunder;
  cout<<"Hope you had a nice time playing!\n";
  cout<<"Douring " <<antRunder<<" round you palyed, \n";
  cout<<"your average was "<<Average<<" tryes per round.\n";
}
