#include <iostream>
using namespace std;
string longest(string array[], int);
bool eligible(string);
main()
{
    int num;
    cout << "Enter the number of words: ";
    cin >> num;
    string array[num];
    cout << "Enter the words, one by one:" << endl;
    string word;
    for (int i = 0; i < num; i++) {
        cin >> word;
        array[i] = word;
    }
    string result = longest(array, num);
    cout << "Longest 7-segment word: " << result;

}
string longest(string array[], int len) 
{   string longestWord = "";
    for (int i = 0; i < len ; i++){ 
        if (array[i].length() >= len && eligible(array[i]) && array[i].length() > longestWord.length())
            longestWord = array[i];
    }
    return longestWord;
}
bool eligible(string word){
    for (int  i = 0; i < word.length(); i++)
    {
        if (word[i] == 'k' || word[i] == 'm' || word[i] == 'v' || word[i] == 'w' || word[i] == 'x')
            return false;
    }
    return true;
}
