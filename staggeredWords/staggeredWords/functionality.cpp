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
        while (std::getline(file, line)) { cout << line << endl; }
        file.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
    getKeypress();
}

void getKeypress()
{
    std::cout << "Press any key to continue..." << std::endl;

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