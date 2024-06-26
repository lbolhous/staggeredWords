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
        generateFilesByFirstLetter(FULL_LIST_NAME);
        break;
    default:
        return 0;
    }

    return 0;
}