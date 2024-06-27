#pragma once
#include <iostream>
#include <fstream>
#include <string>

#ifdef _WIN32 // For keypress function
#include <windows.h>
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>
#endif

using namespace std;

#define FULL_LIST_NAME "SourceWordLists/FullWordList.txt"

void displayAllWords();
void chooseLetterToDisplay();
void displayFileContents(const string& fileName);
void findStaggeredWords();
bool checkIfValid(string);

void getKeypress();
void sleep(int);