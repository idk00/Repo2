#include "HW2.h"
#include <iostream>
using namespace std;
HW2::HW2()
{
}


HW2::~HW2()
{
}

int main() {
	char letters[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int counter[26];
	for (int x = 0;x < 26;x++) {  // The counter array get put through the for loop and sets all the counters to 0. 
								  // The counter needs to be set to 0 because the end result will not be correct if it is not set to 0
		counter[x] = 0;
	}
	cout << "Please Input A Letter:\n";
	char letter;
	cin >> letter;
	while (isalpha(letter)) {

		letter = tolower(letter); // tolower reads an uppercase letter as a lowercase letter. 
								 //Lets the user input any size letter and the program will be able to read it 

		for (int x = 0; x < 26; x++) {
			if (letter == letters[x]) { // searches through the letters  array for common characters that the user typed in


				counter[x]++;// adds one to the correct counter
			}
			
		}
		cin >> letter; // This allows the user to input multiple letters, this happens because it reads a letter every loop. 

	}
	for (int x = 0; x < 26; x++) { 
		if (counter[x] != 0) {// If the counter array does not equal 0, the program will output the counter array. 
							 //If the user does not input a certain letter, it will need to be ignored.

			cout << letters[x] << "=" << counter[x] << endl;
		}

	}
	








	return 0;

}