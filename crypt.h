#ifndef CRYPT_H_
#define CRYPT_H_
#include <string>
#include <iostream>
#include <map>

using namespace std;


class Crypt {
protected:
    map<char, string> rotationMap;
    string codeWord;
public:
	Crypt();
	Crypt(string passPhrase);
	~Crypt();
	string encrypt(string untranslated);
	string decrypt(string translated);
	void updateCodeword(string newPhrase);
};

#endif