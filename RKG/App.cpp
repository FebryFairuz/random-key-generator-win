/**
* RKG 1.0
* Equan Pr.
* (c) 2013
*/
#include <iostream>
#include <string>

#include "NFDLL.h"

using namespace std;

string pwd_str;

int main(){	
	NFDLL nfd;
	nfd.info();
	cout << "Generated Password :" << endl;
	cout << endl;
	cout << endl;

	pwd_str = nfd.generatePassword();
	cout << pwd_str;
	
	cout << endl;
	cout << endl;

	nfd.saveToClipboard(pwd_str);
	nfd.saveToFile(pwd_str, "");
	cout << endl;
	cout << "Done" << endl;
	system("PAUSE");
	
	return 0;
}