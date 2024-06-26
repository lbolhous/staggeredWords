#include "functionality.h"
#include "display.h"
using namespace std;

int main() {

    displayIntro();
    displayMainMenu();

    char menuChoice;
    cin >> menuChoice;

    switch (menuChoice) {
    case '1':
        displayAllWords();
        break;
    case '2':
        chooseLetterToDisplay();
        break;
    case '3':
        break;
    default:
        cout << "Exiting program...";
        sleep(2);
        return 0;
    }

    return 0;
}