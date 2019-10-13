#include <iostream>

using namespace std;

int main()
{
   int secretNum=8;
   int guess;
   int guessCount=0;
   int guessLimit=4;
   bool outOfGuesses=false;
   while (guess!=secretNum){
        if (guessCount<guessLimit){
                cout << "Enter your guess:";
                cin >> guess;
                guessCount++;

        }else{
             outOfGuesses=true;
             }

   }
   if (outOfGuesses){
    cout << "You Lose:";
   }else {
         cout << "YOu Win:";
         }
}
