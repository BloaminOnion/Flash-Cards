#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream> // apparently this is the necessary header file for ofstream objects-[
#include <istream>	// necessary for reading info from files
#include "FlashCard.h"

using namespace std;

int main()
{
	FlashCard bubba ;
	FlashCard gump ("Test", "Success!");
	cout << bubba.get_front() << endl;
	cout << bubba.get_back() << endl;
	cout << gump.get_front() << endl;
	cout << gump.get_back() << endl;
	
	ofstream newfile ;
	newfile.open("bubbatest.txt");
	
	ofstream nextfile ;
	nextfile.open("gumptest.txt");
	
	newfile << bubba.get_front() << "\t" << bubba.get_back() << endl;
	nextfile << gump.get_front() << "\t" << gump.get_back() << endl;
	
	bubba.print_flashcard("bubbat2.txt");
	gump.print_flashcard("gumpt2.txt");
	
	newfile.close();
	nextfile.close();
	
	FlashCard bubbacopy ; 
	bubbacopy.read_flashcard("bubbat2.txt");
	
	cout << bubbacopy.get_front() << endl;
	cout << bubbacopy.get_back() << endl;
	
	return 0;
}