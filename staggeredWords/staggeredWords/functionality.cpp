#include "functionality.h"
using namespace std;

void displayAllWords()
{
    ifstream file(FULL_LIST_NAME);
    if (file) {
        int wordCount = 0;
        string word;

        while (getline(file, word)) {
            ++wordCount;
            cout << wordCount << ". \t" << word << endl;
        }
        file.close();
        cout << endl;
    }
    else
    {
        cout << "Unable to open file\n";
    }
    getKeypress();
}

void chooseLetterToDisplay()
{
    cout << endl << "Enter the letter you want to view: ";
    char letter;
    cin >> letter;
    string fileName = "SourceWordLists/" + string(1, letter) + ".txt";
    displayFileContents(fileName);
}

void displayFileContents(const string& fileName) {
    cout << endl;
    ifstream file(fileName);

    if (file) {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
        cout << endl << "Use the right scroll bar to view results" << endl;
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
    getKeypress();
}

void findStaggeredWords()
{
    ifstream file(FULL_LIST_NAME);
    if (file) {
        int staggeredWordCount = 0;
        string word = "";
        cout << endl;
        
        while (getline(file, word)) {
            string subWord1 = "";
            string subWord2 = "";
            if (word.length() > 8) // Can be adjusted to find more words, at the cost of a much longer runtime
            {
                for (size_t i = 0; i < word.length(); i++)
                    if (i % 2 == 0)
                        subWord1 += word[i];
                    else
                        subWord2 += word[i];

                if (checkIfValid(subWord1))
                    if (checkIfValid(subWord2))
                    {
                        cout << word << " - " << subWord1 << ", " << subWord2 << endl;
                        staggeredWordCount++;
                    }
            }
        }
        file.close();
        cout << endl;
    }
    else
    {
        cout << "Unable to open file\n";
    }
    getKeypress();
}

bool checkIfValid(string word)
{
    string filename = "SourceWordLists/" + string(1, word[0]) + ".txt";
    string line;
    ifstream file(filename);

    if (file)
        while (getline(file, line))
            if (line == word)
                return true;

    return false;
}

void getKeypress()
{
    cout << "Press any key to continue..." << endl;

#ifdef _WIN32
    _getch();
#else
    termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    char ch;
    read(STDIN_FILENO, &ch, 1);

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
#endif
}

void sleep(int seconds)
{
#ifdef _WIN32
    Sleep(seconds * 1000);
#else
    sleep(seconds);
#endif
}