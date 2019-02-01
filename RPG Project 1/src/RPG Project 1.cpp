//============================================================================
// Name        : RPG.cpp
// Author      : Clara Carleton
// Version     : 1
// Copyright   : Your copyright notice
// Description : RPG Project in C++, Ansi-style
//============================================================================

#include <windows.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int moving(int rooms[]){
	int roomNum;
	bool check = false;
	while (!check){
		cout << "Which room do you want to enter?: ";
		cin >> roomNum;

		if(roomNum>=1 && roomNum<=9){ //make sure the room number entered is valid
			//keep check of rooms that have already been entered

			for (int i=0; i<9; i++){
				if(rooms[i] == roomNum){
					cout << "\nYou've already entered that room! Please pick again\n";
					i = 10;
					check = false;
				}
				else{check = true;}
			}
		}
		else{
			cout << "That room number is not available, please pick again\n";
			check = false;
		}
	}
	return roomNum;
}

void authorsNote(){
	cout << "You walk in the room and notice a note on the ground...\n\n";
	cout << "Hello player, \nIf you are reading this I have died from coding too hard.\n"
			"Please help me complete my final project. I would really like a good grade.\n"
			"\nBest wishes,\n		Sir Clarence\n\n";
}

void bigBoss(int rE[], int* map){
	int location;
	bool safe = false;
	for(int i=1; i<8; i++){
		if(map[i]==5){
			location = i+1; //location of item
		}
	}
	for(int j=0; j<9; j++){
		if(rE[j]==location){
			safe = true; //if user went in item room they are safe
		}
	}
	cout << "	  /\\/\\/\\/\\/\\ \n"
			"	  |_________|\n"
			"	 /           \\ \n"
			"	/             \\ \n"
			"	|  \\     /    |\n"
			"	|  O      O   |\n"
			"	|     U       |\n"
			"	|             |\n"
			"	|	      |\n"
			"	\\_/\\__/\\__/\\__/	\n";
	cout << "MWAHAHAHAHAHAHAHA! WHO DARES ENTER MY LAIR??\n";
	int choice;
	bool valid = false;
	cout << "What do you do?\n1.Fight\n2.Fight\n3.Fight\n";
	while(valid == false){
		cin >> choice;
		if(choice == 1 || choice == 2 || choice == 3){
			valid = true;
		}
		else{
			cout << "That is an invalid choice!\nPlease enter another choice\n";
		}
	}
	if(safe == true){
		cout << "You use summon all your courage...\nand with all your might...\nyou throw the rubber duck straight at the ghost\n";
		cout << "	  /\\/\\/\\/\\/\\ \n"
				"	  |_________|\n"
				"	 /           \\ \n"
				"	/             \\ \n"
				"	|  /     \\    |\n"
				"	|  O      O   |\n"
				"	|     O       |\n"
				"	|             |\n"
				"	|	      |\n"
				"	\\_/\\__/\\__/\\__/	\n";
		cout << "AH! How could you be so evil?\nThe ghost flees from the quacking\n";
		cout << "YOU WIN!\nYou are now free to leave this weird, haunted house\n";
	}
	else{
		cout << "You realize you are not ready for this battle\n";
		cout << "YOU LOSE!\n";
	}
}

void kindGhost(){
	int choice;
	cout << "  _______\n"
			" /       \\\n"
			"/         \\\n"
			"| =	=  |\n"
			"| O     O  |\n"
			"|    o     |\n"
			"|          |\n"
			"|	   |\n"
			"\\__/\\__/\\__/\n";
	bool valid = false;
	cout << "You have encountered ghost!\nWhat do you do?\n1.Run\n2.Talk\n3.Fight\n";
	while(valid == false){
		cin >> choice;
		if(choice == 1 || choice == 2 || choice == 3){
			valid = true;
		}
		else{
			cout << "That is an invalid choice!\nPlease enter another choice\n";
		}
	}
	switch (choice){
		case 1: cout << "You got away safely...but the ghost looks surprised\n";
			break;
		case 2: cout << "You introduce yourself to the ghost\n"<< "Ghost: Nice to meet you! Watch out for the mean ghosts here!\n";
			break;
		case 3: cout << "Ghost: Please don't hurt me!!!!\n"<< "The ghost runs away...\n";
			break;
	}
}

void meanGhost(){
	int choice;
	cout << "  _______\n"
			" /       \\\n"
			"/         \\\n"
			"| \\	/  |\n"
			"| O     O  |\n"
			"|    o     |\n"
			"|          |\n"
			"|	   |\n"
			"\\__/\\__/\\__/\n";
	bool valid = false;
	cout << "You have encountered ghost!\nWhat do you do?\n1.Run\n2.Talk\n3.Fight\n";
	while(valid == false){
		cin >> choice;
		if(choice == 1 || choice == 2 || choice == 3){
			valid = true;
		}
		else{
			cout << "That is an invalid choice!\nPlease enter another choice\n";
		}
	}
	switch (choice){
		case 1: cout << "You can't escape!\n";
			break;
		case 2: cout << "You introduce yourself to the ghost\n"<<"Ghost: I don't really care\n";
			break;
		case 3: cout << "Ghost: Bring it on!!!!\n"<< "You can't win this fight, it is the end for you\n";
			break;
	}
	cout << "YOU LOSE!\n";
}

void empty(){
	cout << "This room is empty...\nYou decide to leave\n";
}

void item(){
	cout << "       ..-.. \n"
			"     .'      \\  \n"
			"   __'   =    |  \n"
			" `._          ;  \n"
			"    :         `..---.. .-') \n"
			"    /                 ' _.' \n"
			"   |                   | \n"
			"    \\                 / \n"
			"      ` ---.._..---~'\n";
	cout << "You have received a special item!\nIt's a rubber duck...\nYou don't really need it...\nBut why not take it?\n";
}

void hint(int* map){
	int location;
	for(int i=1; i<8; i++){
		if(map[i]==5){
			location = i+1;
		}
	}

	cout << "  /\\_/\\  \n"
			"=( -w- )=  _ \n"
			" /     \\  / \\_ \n"
			"(_______)/ \n";
	cout << "Greetings meow\nI am the great and wise Peter\nWhat you are seeking is in room " << location;
	cout << "\nGood luck meow\n";
}


int* setMap(int map []){ //randomize the layout
	//use an array, each space represents a room
	/*
	 Room types:
	 	 1. Writer's note x1
	 	 2. Empty Room
	 	 3. Mean Ghost
	 	 4. Nice Ghost
	 	 5. Item Room
	 	 6.	Hint Room
	 	 7. Boss x1
	 */
	map [0] = 1;
	map [8] = 7;
	bool itemSet = false;
	srand(time(NULL));
	int random;
	while(itemSet == false){
		for(int i=1; i<8; i++){
			random = (rand()%5)+2;
			if(random == 5){
				if(itemSet == false){ //in order to make sure there is only one item room
					map[i] = random;
					itemSet = true;
				}
				else{
					i--;
				}
			}
			else{
				map[i] = random;
			}
		}
	}
	return map;
}

bool rooms(int rN, int* map, int rE[]){
	int type = map[rN];
	switch(type){
		case 1:
			authorsNote();
			return false;
			break;
		case 2:
			empty();
			return false;
			break;
		case 3:
			meanGhost();
			return true;
			break;
		case 4:
			kindGhost();
			return false;
			break;
		case 5:
			item();
			return false;
			break;
		case 6:
			hint(map);
			return false;
			break;
		case 7:
			bigBoss(rE, map);
			return true;
			break;
	}
}

int main() {
	string userName;
	string contin = "n";
	int roomNum;
	bool dead = false;

	//array of rooms the player has already entered
	int roomsEntered [9] = {};

	//array of room assignments
	int housemap [9];
	int *mappy = setMap(housemap);

	string map = "      ______\n"
				"     |   9  |\n"
				"     |      |\n"
				" ____|__  __|____\n"
				"| 7  |      |  8 |\n"
				"|                |\n"
				"|____|      |____|\n"
				"| 5  |      |  6 |\n"
				"|                |\n"
				"|____|      |____|\n"
				"| 3  |      |  4 |\n"
				"|                |\n"
				"|____|      |____|\n"
				"| 1  |      |  2 |\n"
				"|                |\n"
				"|____|__  __|____|\n";

	//beginning
	string nameConfirm = "n";
	while(nameConfirm != "y"){
		cout << "Please enter your name: ";
		cin >> userName;
		cout << "\nThe name you entered is\n " << userName;
		cout << "\nDo you wish to continue? (y/n): ";
		cin >> nameConfirm;
		bool valid1 = false;
		while(!valid1){
			if(nameConfirm == "y" || nameConfirm == "n"){
				valid1 = true;
			}
			else{
				cout << "Invalid selection!\n";
				valid1 = false;
			}
		}
	}

	cout << "Welcome, " << userName << "\n";
	cin.ignore();
	cout << "You are now entering a house haunted by the creator of this program\n";


	//loops player turn until player dies or wins
	int size = 0;
	string cont = "y";
	while(!dead && cont == "y"){
		cout << "--------------------------------------------------------------------------------------------------------\n";
		cout << "Map of the house\n" << map;

		roomNum = moving(roomsEntered);
		roomsEntered[size] = roomNum;
		dead = rooms(roomNum-1, mappy, roomsEntered);
		size++;
		bool valid = false;
		if(!dead){
			while(!valid){
				cout << "Continue? (y/n): ";
				cin >> cont;
				if(cont == "y" || cont == "n"){
					valid = true;
				}
				else{
					cout << "Invalid selection!\n";
					valid = false;
				}
			}
		}
	}

	cout << "Thanks for playing!!!\n";
	return 0;
}
