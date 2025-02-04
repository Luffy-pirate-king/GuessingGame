#include <iostream>
#include <vector>
using std::cin, std::cout;

int main(){
    int difficulty, lives = 0, guess, num, attemp = 1;
    std::string compare;
    cout << "Welcome to The Guessing Game everyone!!!\n" << "You will have to guess a number from 1 to 100 until it's correct!\n" << "There are 3 difficulties:\n" <<
"1. Easy (15 chances)\n" << "2. Medium (10 chances)\n" << "3. Hard (5 chances)\n" << "Choose your difficulty (1, 2, or 3): ";
    cin >> difficulty;
    while(lives == 0){
    if(difficulty == 1){
        lives = 15;
        cout << "You chose Easy!\n";
    } else if(difficulty == 2){
        lives = 10;
        cout << "You chose Medium!\n";
    } else if(difficulty == 3){
        lives = 5;
        cout << "You chose Hard!\n";
    } else {
        cout << "Invalid difficulty, please Try Again!\n" << std::endl << "Choose your difficulty (1, 2, or 3): ";
        cin >> difficulty;
    }
    }
    cout << "You're ready.Let's go!\n";
    srand(time(NULL));
    num = (rand() % 100 + 1);
    cout << "A random number was generated. It's your time to guess!\n";
    while(lives > 0){
       cout << "Enter your number: ";
       cin >> guess;
       if(guess != num){
           if(guess > num){
               compare = " less than ";
           } else {
               compare = " greater than ";
           }
           lives--;
           attemp++;
           cout << "Wrong guess! The answer is" << compare << "your guessed number\n";
       } else {
           cout << "Correct! You got it in " << attemp << " attemp(s)\n";
           lives = -1;
       }
    }
    if(lives == 0){
        cout << "You loss, but don't worry, you can always come back to challenge me again!";
    } else if(lives == -1){
        cout << "You won, you're a good player!";
    }
    return 0;
}