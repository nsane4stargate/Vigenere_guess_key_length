#ifndef LENGTH_GUESS
#define LENGTH_GUESS

#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>

using namespace std;

class Guess {

private:
	const char* cipherText;

public:
	Guess(const char*);
	~Guess();
	struct Pairs {
		char ct;
		char displaced_ct;
	};
	int getKeyLength(const char*);
	const char* getCipherText();
}; 
#endif // !LENGTH_GUESS

