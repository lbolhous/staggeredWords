#include "display.h"
using namespace std;

void displayIntro()
{
	cout << "Welcome to Staggered Words!" << endl;
	cout << "An arbitrary question I had that this program will find the answer to." << endl << endl;
}

void displayMainMenu()
{
	cout << "Select an option:" << endl;
	cout << "0. Exit program" << endl;
	cout << "1. View full word list (Estimated 50s to load all 194433 words)" << endl;
	cout << "2. Answer THE BIG QUESTION" << endl;
}