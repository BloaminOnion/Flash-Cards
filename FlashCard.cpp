#include <stdio.h>
#include <string>
#include <iostream>
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
	
	return 0;
}