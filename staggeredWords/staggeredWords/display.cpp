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
	cout << "1. View full word list (Estimated 50s to display all 194433 words)" << endl;
	cout << "2. View all words starting with a letter or your choice" << endl;
	cout << "3. answer the main question" << endl;
	cout << endl;
}