#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	//Variables for game maintenance & operation
	char input;
	bool exit = false;

	//Clear Screen
	system("cls");
	
	//Game 
	
	cout << "Welcome to the city of Coruvon, Champion" << endl << endl;
	cout << "I can see what you seek in your heart..." << endl;
	cout << "Just up ahead is an inn where you might find some information" << endl;

	while(!exit){
		cout << "...press 'a' to continue..." << endl;
		cin >> input;
		if(input == 'a'){exit = true;}
		else{exit = false;}
	}

	cin.clear();
	input = 0;
	system("cls");
	exit = false;
	
	  srand (time(NULL));

	int rumor = new rand() % 11 + 1;
	bool rumor_true = false;
	if(rumor <= 10){rumor_true = true;}

	cout << "The innkeeper tells you that..." << rumomrs[rumor] << endl;
	cout << "He also tells you that, built on the ironflow, Coruvon started as a small military outpost\n
		built on a hilltop just east of the massive expansive of swamp known as the Black Mire.\n
		Today Coruvon is best known a the classic frontier town - rough and mostly lawless, built up\n
		around a gladitorial arena that has been the primary distraction for the city's garrisons for\n
		the last decade.\n\n";
	cout << "With the end of trade along the Ironflow, the city is slowly shrinking as merchants leave\n
		for better markets. Most people coming to the city are either the garrison troops, fishers\n
		bringing their harvests, and adventurers and would-be adventurers using Coruvon as a final\n
		launching point for their explorations of the Black Mire or the dwarven ruins.";

	system("cls");
	

        while(!exit){
                cout << "...press 'a' to continue..." << endl;
                cin >> input;
                if(input == 'a'){exit = true;}
                else{exit = false;}
        }
	
        cin.clear();
        input = 0;
        system("cls");
	exit = fase;

	cout << "You leave the inn and approach a road, which forks right or left\n";
        while(!exit){
                cout << "...make your choice...[r/l]..." << endl;
                cin >> input;
                if(( input == 'r')||(input=='l') ){exit = true;}
                else{exit = false;}
        }

	char choice1 = input;

        cin.clear();
        input = 0;
        system("cls");
        exit = fase;

	vector<Character*> fight1;
	fight1.push_back(foe_1_npc);
	if(choice1 == 'r'){ 
		cout <<"Crocodiles Appear From the Mire! Ready yourself!" << endl;
		Scene* testCombat3  = new Combat(fight1, user, playerSpells);
		testCombat3->SetUpScene();
	}
	vector<Character*> fight2;
	fight2.push_back(foe_2_npc);
	else{ cout << "A Giant Catfish leaps from the water! AHH!" <<endl
		Scene* testCombat2 = new Combat(fight2, user, playerSpells);
		testCombat2->SetUpScene();
 	 }
	
	cout << "That was close... let's move on down the road" << endl;
	vector<Character*> fight3;
	fight3.push_back(foe_3_npc);

	if(!rumor_true){
		cout <<"Up ahead you see a group of troglodytes, get ready to fight!"<<endl;
		Scene* testCombat4 = new Combat(fight3, user, playerSpells);
		testCombat4->SetUpScene();
	}

	cin.clear();
        input = 0;
        system("cls");
        exit = fase;

	cout << "You come across a strange statue...it seems to speak to you, but not in words,\n
		It seems to slip phrase directly into your mind\n
		[The statue says] Ages ago, on another world, I fought a great battle against a\n
		giant people. These Giatns are the same kind you will likely encounter on your journey...\n
		And I can help you...\n
		But first you must help me!\n
		I was once married to a beautiful woman.\n
		When we were engaged she was given an iron rose, and me a basket of amber\n
		Bring me these things, and I will give you something to defeat the giants\n
		[end of dialogue]\n";

	cin.clear();
        input = 0;
        system("cls");
        exit = fase;

	cout << "Well that was strange...Let's get out of here and see if that old frog has any truth in him
	\n;
	
	cout << "[Another fork in th eraod presents itself, this time in three ways]"\n;
	        
        while(!exit){
                cout << "...make your choice...[r/m/l]..." << endl;
                cin >> input;
                if(( input == 'r')||(input=='l')||(input=='m') ){exit = true;}
                else{exit = false;}
        }

	char choice2 = input;
        cin.clear();
        input = 0;
        system("cls");
        exit = fase;

	int trial1 = 0;
	
	vector<Character*> fight4;
	fight4.push_back(foe4);
	if(choice2 == 1){
		cout << "The smell of this place is so strong your eyes are failing you" << endl;
		cout << "Where am I?\n
			A shriek lets out from the distance\n;
		Scene* testCombat4 = new Combat(fight4,user,playerSpells);
		testCombat4->SetUpScene();
		//get trial1
	}
        vector<Character*> fight5;
        fight4.push_back(foe5);

	else if(choice2 == 2){
		cout << "The water becomes deeper\n
			You are now swimming through mangroves, lillies, and something else lurks\n
			You reach a boat made out of a giatn wicker basket\n
			This must be it!\n;
                Scene* testCombat5 = new Combat(fight5,user,playerSpells);
                testCombat5->SetUpScene();
		//get trial2
		}
        vector<Character*> fight6;
        fight4.push_back(foe6);

	else{
		cout << "The rain pours down relentlessly\n
			And what's more, something bites your foot\n
			This ground is not safe, but we must carry on\n
			The thorns, which have already gotten to your foot, now surround you\n
			Hacking through the thicket, you come across the creatures that gaurd this place\n;
                Scene* testCombat4 = new Combat(fight4,user,playerSpells);
                testCombat4->SetUpScene();
		//get trial3
		}

	cout << "You carry on, weary and damaged, but determined in your voyage" << endl;
	cout << ".............................................................." << endl;
	cout << "[you say] I have returned! Frog! Grant me your tools and i will release these wedding presents!\n;
	cout << "[frog says]...So bet it, traveler, take this from me\n;

	//get itemEnd

	system("cls");
	cout << "Goodbye " << new_game.get_name() << "\n";
	return 0;
}
