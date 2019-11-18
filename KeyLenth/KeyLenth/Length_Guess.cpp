#include "length_guess.h"


Guess::Guess(const char* text) :cipherText(text){}
Guess::~Guess(){}

int Guess::getKeyLength(const char* cipherText){
	// Get lenth of string
	int length = 0, i = 0, index, shift, shift_index, current_coincidence_count, coincidence_count = 0,key_length = 0;
	while (cipherText[i] != '\0') {
		length += 1;
		i++;
	}

	// Find the length of key
	shift = 1;
	while (shift < 14) {
		current_coincidence_count = 0;
		for (index = 0; index < length; index++) {
			// Place holder for shift value
			shift_index = (index + shift) % length;
			if (cipherText[index] == cipherText[shift_index]) {
				current_coincidence_count += 1;
			}
		}
		if (current_coincidence_count > coincidence_count) {
			coincidence_count = current_coincidence_count;
			key_length = shift;
			printf("Key Length: %i  ", key_length);
			printf("Coincidences: %i \n", coincidence_count);

		}
		shift++;
	}
	return coincidence_count;
}

const char * Guess::getCipherText(){
	return cipherText;
}
