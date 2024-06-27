#include "display.h"
using namespace std;

void displayIntro()
{
	cout << "Welcome to Staggered Words!" << endl;
	cout << "This code is the result of an absurd question I had involving rearranging the letters in words." << endl;
	cout << "A word becomes \"staggered\" when the odd and even numbered letter are seperated into two new words." << endl;
	cout << "For example, \"computer\" would turn into \"cmue\" and \"optr\"." << endl;
	cout << "In this case, the resulting words are arbitrary and invalid." << endl;
	cout << "However, it is possible for both of these new words to be valid english words." << endl;
	cout << "If both words are valid, the original word is considered a \"Perfectly Staggered\" word." << endl;
	cout << "My absurd question is this: What is the longest Perfectly Staggered word?" << endl;
	cout << "You can find out for yourself using this program." << endl;
	cout << "Enjoy!" << endl << endl;
	cout << "----------------------------------------------------------------------------------------------------" << endl << endl;
}

void displayMainMenu()
{
	cout << "Select an option:" << endl;
	cout << "0. Exit program" << endl;
	cout << "1. View full word list (Estimated 50s to display all 194433 words)" << endl;
	cout << "2. View all words starting with a letter of your choice" << endl;
	cout << "3. Find every \"Perfectly Staggered\" word" << endl;
	cout << endl;
}