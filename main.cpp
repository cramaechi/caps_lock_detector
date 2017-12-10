//A program that prints out words that suffer from "caps-lock" syndrome.
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void input(string& s);
//Reads input into string s.

void findCapsLockWords(string& s, vector<string>& capsLockWords);
//Precondition: s is non-empty. capsLockWords is empty.
//Postcondition: Finds potential caps-lock words and stores them in the
//capsLockWord array.

void output(vector<string>& capsLockWords);
//Prints out a list of caps-lock words, if any.

int main()
{
    vector<string> capsLockWords;
    string inputString;

    while(true)
    {
        input(inputString);
        if (inputString.empty())
            break;

        findCapsLockWords(inputString, capsLockWords);
        output(capsLockWords);
    }

    return 0;
}

void input(string& s)
{
    cout<<"Enter a sentence: ";
    getline(cin, s);
    cout<<endl;
}

void findCapsLockWords(string& s, vector<string>& capsLockWords)
{
    char cstring[s.length()];
    strcpy(cstring, s.c_str());
    char *word = strtok(cstring, " .,");

    while (word != NULL)
    {
        if (strlen(word) > 1 && islower(word[0]))
        {
            bool isCapsLockWord = false;
            for (int i = 1; i < strlen(word); i++)
            {
                if (isupper(word[i]) != 0)
                {
                    isCapsLockWord = true;
                    break;
                }
            }

            if (isCapsLockWord)
                capsLockWords.push_back(word);
        }

        word = strtok(NULL, " .,");
    } 
}

void output(vector<string>& capsLockWords)
{
    cout<<"Caps-Lock Word List\n";
    cout<<"-------------------\n";
    for (unsigned int i = 0; i < capsLockWords.size(); i++)
        cout<<capsLockWords[i]<<endl;

    capsLockWords.erase(capsLockWords.begin(), capsLockWords.end());
    cout<<endl;
}
