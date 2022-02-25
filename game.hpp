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

//Cheks if save has been created
int is_saved(int ID){
	string temp = "";
	ifstream save_file;
	save_file.open("save.txt");
	int cur_line = 0;
	while(getline(file,temp)){
		cur_line++;
		if(temp.find(temp, ID) != string::npos) {
			return cur_line;		//Returns line of save if saved
		}
	}
	return 0;					//Returns zero if not saved
};

void new_save(int ID, string name, double play_time ){

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
