#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // 1. Word list
    vector<string> words = {"cat", "dog", "book", "code", "game"};

    // 2. Random word choose
    srand(time(0)); 
    string word = words[rand() % words.size()];

    // 3. Hidden word banaye (_ _ _)
    string hidden(word.size(), '_');

    int tries = 6; // max galat guess
    char guess;

    cout << "Welcome to Find the Word Game!\n";

    // 4. Game loop
    while (tries > 0 && hidden != word) {
        cout << "\nWord: " << hidden << endl;
        cout << "Tries left: " << tries << endl;
        cout << "Enter a letter: ";
        cin >> guess;

        bool correct = false;

        // 5. Check har letter
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == guess) {
                hidden[i] = guess;
                correct = true;
            }
        }

        if (correct) {
            cout << "Good guess!\n";
        } else {
            cout << "Wrong guess!\n";
            tries--;
        }
    }

    // 6. Result
    if (hidden == word) {
        cout << "\n🎉 You won! The word was: " << word << endl;
    } else {
        cout << "\n❌ You lost! The word was: " << word << endl;
    }

    return 0;
}