#include <cstdio>
#include <iostream>
#include <time.h>

using namespace std;

int inp(string text){
    cout << text;
    int a = 0;
    cin >> a;
    cout << endl;
    return a;
}

int main(){
    srand(time(NULL));

    int n = rand() % 100 +1;
    int guess = 0;

    guess = inp("Guess a number between 1 and 100: ");

    while(true){
        if (guess > n){
            cout << "\nToo high!\n";
            guess = inp("Guess again: ");
        } else if (guess < n){
            cout << "\nToo low!\n";
            guess = inp("Guess again: ");
        } else {
            cout << "\n\nYou guessed correctly!";
            break;
        }
    }

    return 0;
}
