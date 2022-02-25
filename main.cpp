#include game.hpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	//Variables for game maintenance & operation
	char input;
	bool exit = false;

	//Introduction
	cout <<"Welcome to Frog Idol v 1.0\n";

	//Load New Game or Old Game
	cout <<"Would you like to start a new game (Y/N)\n";
	input = getch();
	if(input == 'Y'){
		srand(time(NULL));
		int ID = new rand() % 1000 + 1;
		game new_game = new game(ID);
		
	}
	else if(input == 'N'){
		//cout <<"Would you like to load an old game(Y/N)?\n";
		//input = getch();
		//Incomplete
	}

	//Clear Screen
	system("cls");

	//Output Opening Picture & Text
		//........{Frog}..... Challenge Of The Frog Idol ........ {Road}
		//Incomplete
	
	//Game Loop
	while(!exit){
		input = getch();
		display_game();
		switch(input){
		case m:
			display_menu();
			break;
		case s:
			save();
			cout << "Game Saved\n";
			break;
		case x:
			exit = true;
			break;
		default:
			break;
		}
	}

	//Game Exit
	system("cls");
	cout << "Goodbye " << game.get_name() << "\n";
	return 0;
}
