/******************************************************************************************
 * Problem 7 : Defines the entry point for the console application.         *
 *																						  *
 * Author: Lea Middleton                                                                  *
 *																						  *
 * Date: 1.16.2019																		  *
 ******************************************************************************************/

#include "length_guess.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	const char* text = "QHDLXNQLYNGAIGWBCERJFEARNIBKXUSVGZXKYNPXXTKGAATZRQCRFYIDCCLYXHUQXEIXFAFGEAMMALYRGAYXQMTGACDJSYRTLEXUVRVIYFFEGXFKOYSPHGBBYTRESOXUNTXXAKLUAWYDINAAWCZWIFVMCROIUCEIFJYDJAYZJBEOTMUSGAGAYYQNIPTFPYMCBOYDYYSVGWDOJTBZLMFBYJXLQCUDRRIGMIUYWMQUUFRPCZQHTVJOUJSMNRVQQZEJYLACNHRFCPTFENZYEJCLYMBQUCGUMYQDBUAWLQTMOAXCZJBEABHQJYEAMQQDNIRLNTUINRMCYUJAQTZQMGOEXUDEONQPIDBXWNKNIEUNQMBQDUFGXLFXYBVKNTEZCBFJGJUTVHHMBWOZIFQNCTLMBQELYVGNTUHIAXNQUHSROYZJCEFUIACVOBFVAEGBBHGNEIMOHIYRIOZQ";
	Guess guess(text);
	int length = guess.getKeyLength(guess.getCipherText());
	char a;
	cin >> a;
}
