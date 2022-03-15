#include "story.hpp"

ing namespace std;
   story:: story() {rumor = 0;trial1 = false; trial2 = false; trial3 = false; }
    void story:set_rumor(int loc_rumor){ rumor = loc_rumor;}
    int story::get_rumor(){
	return rumor;	}
    bool story::get_trial1(){ return trial1;}
    bool story::get_trial(){return trial2; }
    void story::set_trial(bool pass, int input){
if(pass == true){
 if( input ==1){trial1 = true;}
					else if(input == 2){trial2 = true;}
					else {trial3 = true;}
	}

	else if(pass == false){
		if(input == 1){ trial1 = false; }
		else if(input == 2) { trial2  = false;}
		else if(input == 3) { trial3 = false;}
		else{ rumor = 0; }
	}
	else{rumor = 0;}
}
    void story::set_rumor(int input){rumor =  input;}
