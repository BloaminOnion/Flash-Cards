#include <stdio.h>
#include <string>
#include <iostream>

class FlashCard {
	std::string front, back ;
	public :
	std::string get_front(void);
	std::string get_back(void);
	FlashCard () ;
	FlashCard (std::string, std::string);
	void set_front(std::string);
	void set_back(std::string);
	};
	
FlashCard::FlashCard (){
	set_front("Please put something here");
	set_back("And also here");
	}
	
FlashCard::FlashCard (std::string x, std::string y){
	set_front(x);
	set_back(y);
	}

	
std::string FlashCard::get_front() {
	return front ;
	}
	
std::string FlashCard::get_back() {
	return back ;
	}
	
void FlashCard::set_front(std::string s) {
	front = s;
	}
	
void FlashCard::set_back(std::string s) {
	back = s;
	}
	