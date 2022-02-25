#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class game {
	private:
	string name;
	double play_time;
	int ID;
	
	public:
	game(){
		//Default Constructor Incomplete
	}

	game(int ID){
		
	}	
	private:
void write (){
	ofstream file;
	file.open("text.txt");
	file << "This is a text file \n";
	file.close();
}

void read(){
	string temp = "";
	ifstream file;
	file.open("test.txt");
	while(getline(file,temp)){
		cout << s << endl;
	}

}
	public:
void menu(){
	//Incomplete
}

void save(int ID){
	ofstream save_file;
	string file_name = "save" + to_string(ID);
	file.open(
}

void get_name(){
	//Incomplete
}

void set_name(string name){
	//Incomplete
}

void display(){
	//Incomplete
}

}

#endif //GAME_HPP
