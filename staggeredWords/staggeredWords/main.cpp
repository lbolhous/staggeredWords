#include "functionality.h"
#include "display.h"
using namespace std;

int main() {

    displayIntro();
    char menuChoice;
    bool continueProgram = true;

    while (continueProgram)
    {
        displayMainMenu();

        cin >> menuChoice;
        switch (menuChoice) {
        case '1':
            displayAllWords();
            break;
        case '2':
            chooseLetterToDisplay();
            break;
        case '3':
            findStaggeredWords();
            break;
        default:
            cout << "Exiting program...";
            continueProgram = false;
            sleep(2);
            return 0;
        }
        system("cls");
    }

    return 0;
}