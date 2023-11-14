#include <iostream>
using namespace std;
int countCommonCharacters(string s1, string s2);
main() 
{
    string word1, word2;
    cout << "Enter the first string: ";
    cin >> word1;
    cout << "Enter the second string: ";
    cin >> word2;
    cout << "Number of common characters: " << countCommonCharacters(word1, word2);
}

int countCommonCharacters(string s1, string s2) {
    int commonCount = 0;
    int charCount[26] = {0}; 
    for (int i = 0;s1[i] != '\0'; i++) 
    {
        char charachter = s1[i];
        charCount[charachter - 'a']++;
    }
    for (int i = 0;s2[i] != '\0'; i++)
    {
        char charachter = s2[i];
        if (charCount[charachter - 'a'] > 0) 
        {
            commonCount++;
            charCount[charachter - 'a']--;
        }
    }
    return commonCount;
}