#include <iostream> 

using namespace std; 

int main(){
int guess = 0;
int number = rand() % 10+1;
char question = 'Y';

do{
    cout<< "Guess A Number! from 1- 10!" <<endl;
    cin>> guess;
   if(guess > number) cout << "Too Big! Try again!" <<endl;
   else if(guess < number) cout << "Too small! Try Again!" <<endl;
   else if(guess = number)  {
       number = rand() % 10+1;
       cout << "You did it! Do you try again? Y/N";
       cin >> question;
   }
   if(toupper(question) == 'Y') continue;
   else return 0;
}while((guess != number) );
}