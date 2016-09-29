#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream> // apparently this is the necessary header file for ofstream objects-[
#include <istream>	// necessary for reading info from files
#include "FlashCard.h"

using namespace std;

int main()
{
	flashcard bubba ;
	flashcard gump ("Test", "Success!");
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
	
	flashcard bubbacopy ; 
	bubbacopy.read_flashcard("bubbat2.txt");
	
	cout << bubbacopy.get_front() << endl;
	cout << bubbacopy.get_back() << endl;
	
	ofstream writefile ;
	writefile.open("basis.txt");
	
	writefile << "Never" << "\t" << "give" << endl;
	writefile << "up" << "\t" << "is" << endl;
	writefile << "such" << "\t" << "trite" << endl;
	writefile << "advice" << "\t" << "." << endl;
	
	writefile.close();
	
	ifstream readfile ;
	readfile.open("basis.txt");
	
//	Method to get number of lines in file of unknown length
	int n = 0;
	string filelengthstring ; 
	while( getline(readfile, filelengthstring) )
	{
		n++;
	}
	
	readfile.close();
	
	ifstream readfile2 ;
	readfile2.open("basis.txt");
		
	cout << n << " should be 4" << endl;
	
		
	flashcard forest[4] ;
	string filedata ;
	for(int i = 0 ; i < 4 ; i++)
	{
		getline(readfile2, filedata, '\t') ;
		forest[i].set_front(filedata) ;
		getline(readfile2, filedata) ;
		forest[i].set_back(filedata) ;
	}
		
	readfile2.close() ;
	
	cout << forest[0].get_front() << " " <<  forest[0].get_back() << endl;
	cout << forest[1].get_front() << " " <<  forest[1].get_back() << endl;
	cout << forest[2].get_front() << " " <<  forest[2].get_back() << endl;
	cout << forest[3].get_front() << " " <<  forest[3].get_back() << endl;
	
	return 0;
}