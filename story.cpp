#include "story.hpp"

ing namespace std;
   story:: story() {rumor = 0;trial1 = false; trial2 = false; trial3 = false; }

    int get_rumor(){
	return rumor;	}
    bool get_trial1(){ return trial1;}
    bool get_trial(){return trial2; }
    void set_trial(bool pass, int input){ if(input ==1){trial1 = true;}
					else if(input == 2){trial2 = true;}
					else {trial3 = true;}
	}
    void set_rumor(int input){rumor =  input;}
