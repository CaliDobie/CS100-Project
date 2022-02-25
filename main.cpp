#include game.hpp

using namespace std;

int main(){
	char input;
	bool exit = false;
	cout <<"Welcome to Frog Idol v 1.0\n";
	display_menu(); 
	while(!exit){
		input = getch();
		switch(input){
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
	cout << "Game Has been Exited, Goodbye~!\n";
	return 0;
}
