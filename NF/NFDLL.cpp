/**
*  RKG DLL
*  Equan Pr.
*  (c) 2013  
*/
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

#include <boost/random/random_device.hpp>
#include <boost/random/uniform_int_distribution.hpp>

#include "NFDLL.h"

using namespace std;

int PASSWORD_LENGTH = 32;

string str;
string chars(
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "1234567890"
        "!@#$%^&*()"
        "`~-_=+[{]{\\|;:'\",<.>/? ");

NFDLL::NFDLL(){

}

void NFDLL::info(){
	cout << "Random Password Generator" << endl;
	cout << "=========================" << endl;
	cout << "2013 (c) By Equan Pr." << endl;
	cout << endl;
}

string NFDLL::generatePassword(){
	boost::random::random_device rnd;
	boost::random::uniform_int_distribution<> index(0, chars.size() -1); 
	for(int i = 0; i < PASSWORD_LENGTH; ++i) {
		str += chars[index(rnd)];
    }	
    return str;	
}

void NFDLL::saveToClipboard(string data){
	
	// Multi-Byte Character Set 
	LPCTSTR text = data.c_str();

	if(OpenClipboard(NULL)){
		EmptyClipboard();
		HGLOBAL hmem = GlobalAlloc(GMEM_DDESHARE,lstrlen(text)+1);
		LPTSTR ptext = (LPTSTR)GlobalLock(hmem);
		lstrcpy(ptext, text);
		GlobalUnlock(hmem);
		SetClipboardData(CF_TEXT, hmem);
		CloseClipboard();
		cout << endl;
		cout << "Password saved to clipboard...OK" << endl;
	}
}

void NFDLL::saveToFile(string data, string filename) {
	string filen;

	if(filename.empty()){
		filen = "password.txt";
	}else {
		filen = filename;
	}

	ofstream file(filen);

	if(!file){
		//error here
		cout << "sorry, file cannot be opened or create..";
		cout << endl;
	}else {
		file << data;
		file.close();
		cout << endl;
		cout << "Password saved to file " << filen << "...OK" << endl;
	}
}

