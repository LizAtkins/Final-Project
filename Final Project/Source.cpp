// Elizabeth Atkins
// August 1, 2022
// Create Your Own Melody Program
// This program will allow a user to choose notes to create a melody.


#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

// Sound functions that will be played

void aMajor();
void cMajor();
void dMajor();
void eMajor();
void gMajor();

void aNote();
void cNote();
void dNote();
void eNote();
void bNote();
void pianoNotes();



using namespace std;
int main() {
	
	ofstream outputFile;
	const int NUM_NOTES = 5;
	char notes[NUM_NOTES];
	char choice;

	// Introduce program to user and explain how it works

	cout << "\n \t \t \t \t ~*~ Welome To Create Your Own Melody! ~*~ " << endl << endl << endl;

	cout << "\t     ;  "; 	     cout << "           ;;;;;;;;;;;;;;;;;;;\n";
	cout << "\t     ;;  ";         cout << "          ;;;;;;;;;;;;;;;;;;;\n";
	cout << "\t     ;';.  ";	     cout << "        ;                 ;\n";
	cout << "\t     ;  ;;  ";	     cout << "       ;                 ;\n";
	cout << "\t     ;   ;;  ";     cout << "      ;                 ;";		    cout << "\t This program will allow you to choose major chords.\n";
	cout << "\t     ;    ;;  ";    cout << "     ;                 ;";		cout << "\t The chords are - C, D, E, G, and A. \n";
	cout << "\t     ;    ;;  ";    cout << "     ;                 ;";		cout << "\t You can select up to 5 chords for your melody.\n";
	cout << "\t     ;   ;'  ";     cout << "      ;                 ; ";		cout << "\t Once you have selected your chords, the melody will play!\n";
	cout << "\t     ;  '   ";      cout << "       ;                 ;\n";
	cout << "\t,;;;,;  ";          cout << "      ,;;;;;            ,;;;;;\n";
	cout << "\t;;;;;;  ";          cout << "      ;;;;;;            ;;;;;;\n";
	cout << "\t`;;;; '  ";         cout << "     `;;;;'            `;;;;'\n";


	// Call function to show user piano notes they will choose from

	cout << endl << endl;
	cout << " For example: hit 'enter' on your keyboard to hear an A major chord. ";
	system("pause");

	aMajor();


	cout << "\n First, enter the capitalized letter of a chord you would like in your melody.";
	cout << "\n Then, hit enter. ";
	cout << endl;


	// Loop to gather notes from user


	for (int i = 0; i < NUM_NOTES; i++) {
		cin >> notes[i];

	}

	// Display array of notes to user

	for (int i = 0; i < NUM_NOTES; i++) {
		cout << " " << notes[i];
	}

	// Write data to a file

	outputFile.open("notes.txt");
	outputFile << notes[0];
	outputFile << notes[1];
	outputFile << notes[2];
	outputFile << notes[3];
	outputFile << notes[4];
	outputFile.close();

	// Play melody back to user

	cout << "\n \n Listed above are the chords that you chose. Enjoy your melody!";

	// If statements depending on which notes the user chooses

	if (notes[0] == 'A') {
		aMajor();
	}
	else if (notes[0] == 'G') {
		gMajor();
	}
	else if (notes[0] == 'C') {
		cMajor();
	}
	else if (notes[0] == 'D') {
		dMajor();
	}
	else if (notes[0] == 'E') {
		eMajor();
	}
	if (notes[1] == 'A') {
		aMajor();
	}
	else if (notes[1] == 'G') {
		gMajor();
	}
	else if (notes[1] == 'C') {
		cMajor();
	}
	else if (notes[1] == 'D') {
		dMajor();
	}
	else if (notes[1] == 'E') {
		eMajor();
	}
	if (notes[2] == 'A') {
		aMajor();
	}
	else if (notes[2] == 'G') {
		gMajor();
	}
	else if (notes[2] == 'C') {
		cMajor();
	}
	else if (notes[2] == 'D') {
		dMajor();
	}
	else if (notes[2] == 'E') {
		eMajor();
	}
	if (notes[3] == 'A') {
		aMajor();
	}
	else if (notes[3] == 'G') {
		gMajor();
	}
	else if (notes[3] == 'C') {
		cMajor();
	}
	else if (notes[3] == 'D') {
		dMajor();
	}
	else if (notes[3] == 'E') {
		eMajor();
	}
	if (notes[4] == 'A') {
		aMajor();
	}
	else if (notes[4] == 'G') {
		gMajor();
	}
	else if (notes[4] == 'C') {
		cMajor();
	}
	else if (notes[4] == 'D') {
		dMajor();
	}
	else if (notes[4] == 'E') {
		eMajor();
	}

	// Introduce second musical game to the user

	cout << endl << endl << endl;
	cout << "\n Welcome to another musical game! Type a capital letter and it'll play a key on the piano. \n";
	cout << " Whenever you would like to quit, type the letter Q.\n\n";

	// Do while loop to continuously show the Piano Notes menu and switch to user until they quit

	do {
		pianoNotes();
		cin >> choice;
		switch (choice) {

		case 'A': aNote();
			break;
		case 'B': bNote();
			break;
		case 'C': cNote();
			break;
		case 'D': dNote();
			break;
		case 'E': eNote();
			break;
		case 'Q': cout << "\n Thanks for playing! " << endl; return 0;
			break;
		default: cout << "\n Invalid choice, try again. ";
		}
	} while (choice != 'Q');

	// End program

	cout << endl;
	system("pause");

	return 0;
}

This program allows a user to choose notes and stores them in an array, the sound functions will play the notes back to the user
void pianoNotes() {

	cout << "\n \t \t \t \t ~*~Play the Piano~*~ \n";
	cout << " A. A note \n";
    cout << " B. B note \n";
	cout << " C. C note \n";
	cout << " D. D note \n";
	cout << " E. E note \n"; 
	cout << " Q. Quit menu \n";
}


// Sound file function definitions 


	void aMajor() {
		PlaySound(TEXT("a_major.wav"), NULL, SND_NOSTOP);
	}

	void cMajor() {
		PlaySound(TEXT("c_major.wav"), NULL, SND_NOSTOP);
	}

	void dMajor() {
		PlaySound(TEXT("d_major.wav"), NULL, SND_NOSTOP);
	}

	void eMajor() {
		PlaySound(TEXT("e_major.wav"), NULL, SND_NOSTOP);
	}

	void gMajor() {
		PlaySound(TEXT("g_major.wav"), NULL, SND_NOSTOP);
	}



	void aNote() {
		PlaySound(TEXT("piano_a.wav"), NULL, SND_ASYNC);
	}

	void bNote() {
		PlaySound(TEXT("piano_b.wav"), NULL, SND_ASYNC);
	}

	void cNote() {
		PlaySound(TEXT("piano_c.wav"), NULL, SND_ASYNC);
	}

	void dNote() {
		PlaySound(TEXT("piano_d.wav"), NULL, SND_ASYNC);
	}

	void eNote() {
		PlaySound(TEXT("piano_e.wav"), NULL, SND_ASYNC);
	}

