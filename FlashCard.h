#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream> // apparently this is the necessary header to make ofstream objects
#include <istream>	// necessary for reading info from files

class flashcard {
	std::string front, back ;
	public :
	std::string get_front(void);
	std::string get_back(void);
	flashcard () ;
	flashcard (std::string, std::string);
	void print_flashcard(std::string);
	void read_flashcard(std::string);
	void set_front(std::string);
	void set_back(std::string);
	};

//	default constructor	
flashcard::flashcard (){
	set_front("Please put something here");
	set_back("And also here");
	}
//	specific constructor
flashcard::flashcard (std::string x, std::string y){
	set_front(x);
	set_back(y);
	}

//	reading front/back of flash cards
std::string flashcard::get_front() {
	return front ;
	}
	
std::string flashcard::get_back() {
	return back ;
	}
	
//	printing front and back of flash card to file 
void flashcard::print_flashcard(std::string s) {
	std::ofstream newfile ;
	newfile.open(s);
	newfile << front << "\t" << back << std::endl;
	}

//	read existing file to set front and back of flash card	
void flashcard::read_flashcard(std::string s) {
	std::string inter ;
	std::ifstream newfile ;
	newfile.open(s) ;
	std::getline (newfile, inter, '\t'); // why do I need single quotes ' to mark \t as delimeter here but not above?
	front = inter ;
	std::getline (newfile, inter);
	back = inter ; 
	newfile.close();
	}

//	not quite sure if these will prove necessary	
void flashcard::set_front(std::string s) {
	front = s;
	}
	
void flashcard::set_back(std::string s) {
	back = s;
	}
	