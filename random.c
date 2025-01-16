// This function randomly selects a character from the English alphabet and returns it

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to randomly generate a char (from A - Z)
int randchar() {

	// Char array containing all letters from a to z
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	// Size of the array (used to establish the bounds for indexes)
	int alphaSize = sizeof(alphabet) / sizeof(alphabet[0]);
	// Randomly generates the index for the random char
	int charIndex = rand() % alphaSize;
	// Gets the char found at the randomly generated index
	int randChar = alphabet[charIndex];

	// Returns the randomly generated char
	return randChar;

}