#include <iostream>
#include <string>
#include <algorithm> // For std::all_of
#include <cctype>  
using namespace std;

/**
 * Return the string containing the word you should say
 *
 * W1: the second-to-last word said
 * W2: the last word said
 */
int number;
string saywhat;
string solve(string W1, string W2) {
    if (all_of(W1.begin(), W1.end(), ::isdigit)){
        number = stoi(W1) + 2;
        if (number%3==0 && number%5==0){
            saywhat = "bizzfuzz";}
        else if (number%3==0){
            saywhat = "bizz";}
        else if (number%5 == 0){
            saywhat = "fuzz";}
        else {
            saywhat = to_string(number);
        }
    }

   
    else if (all_of(W2.begin(), W2.end(), ::isdigit)){
        number = stoi(W2) + 1;
        if (number%3==0 && number%5==0){
            saywhat = "bizzfuzz";}
        else if (number%3==0){
            saywhat = "bizz";}
        else if (number%5 == 0){
            saywhat = "fuzz";}
        else {
            saywhat = to_string(number);
        }
    }
   
    else {
        saywhat = "crap";
    }
    return saywhat;
}

int main() {
    int T;
    cin >> T;
   
    for (int i = 0; i < T; i++) {
        string W1, W2;
        cin >> W1 >> W2;
        cout << solve(W1, W2) << '\n';
    }
}