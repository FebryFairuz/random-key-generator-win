/**
*  RKG DLL Header File
*  Equan Pr.
*  (c) 2013
*/
#include <string>
#include <iostream>

#ifdef NFDLL_LIBRARY
#define NFDLL_EXPORT __declspec(dllexport)
#else
#define NFDLL_EXPORT __declspec(dllimport)
#endif

class NFDLL_EXPORT NFDLL{
public:
	explicit NFDLL();
	void info();
	std::string generatePassword();
	void saveToClipboard(std::string data);
	void saveToFile(std::string data, std::string filename);
};