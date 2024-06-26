#include "functionality.h"
using namespace std;

void displayAllWords()
{
    ifstream inputFile(FULL_LIST_NAME);
    if (inputFile) {
        int wordCount = 0;
        string word;

        while (getline(inputFile, word)) {
            ++wordCount;
            cout << wordCount << ". \t" << word << endl;
        }
        inputFile.close();

        cin >> word;
    }
    else
    {
        cout << "Unable to open file: WordList.txt\n";
    }
}