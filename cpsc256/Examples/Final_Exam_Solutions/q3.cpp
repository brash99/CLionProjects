#include <iostream>
#include <string>

using namespace std;

int main() {

    // Get the word from the user
    string word;
    cout << "Enter a word: ";
    cin >> word;

    // Get the length of the word
    unsigned long length = word.length();

    // Initialize the vowel count
    int vowel = 0;

    // Loop through the word and count the vowels
    for (int i = 0; i < length; i++) {
        char c = word[i]; // Get the character at position i
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel++;
        }
    }

    // Print the number of vowels
    cout << "The number of vowels in the word is: " << vowel << endl;

    return 0;
}