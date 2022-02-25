#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <iostream>
#include <fstream>

using namespace std;
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

void display_menu(){
	cout << "



}

void save(int ID){
	ofstream save_file;
	string file_name = "save" + to_string(ID);
	file.open(


}

#endif //GAME_HPP
