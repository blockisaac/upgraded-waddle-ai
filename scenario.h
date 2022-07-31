/// PHASE THREE: Checking of Saved Data ///

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdio>
#include <windows.h>
#include "log.cpp"
#include <MMSystem.h> // for sounds
#include <graphics.h>

void file_dexist();
void checking();



using namespace std;

void main_log()
{

cout << "checking save file.";
Sleep(100);
system("CLS");

cout << "checking save file..";
Sleep(100);
system("CLS");

cout << "checking save file...";
Sleep(5000);
system("CLS");

checking();


}

void checking()
{
string z = "cautious-waddle-ai: ";
ifstream myfile;
myfile.open("save_file.txt");
if(myfile) {
cout <<"Existing data file found." << endl;
Sleep(2000);
cout  << "Directing to cautious-waddle-ai." << endl;
Sleep(100);
system("CLS");
cout  << "Directing to cautious-waddle-ai.." << endl;
Sleep(100);
system("CLS");
cout  << "Directing to cautious-waddle-ai..." << endl;
Sleep(5000);
system("CLS");
cout << z << "I'm Makise Kurisu, pleased to meet you." << endl;
// initwindow(600,500,"Code4xU");
// readimagefile("dabin.jpg",0,0,200,200);
PlaySound("pleased_to_meet_you_01.wav", NULL,SND_SYNC);

interface_01();

   } else {
cout<<"Save data doesn't exist";
Sleep(5000);
file_dexist();
   }
	
}

void file_dexist()
{

string z = "cautious-waddle-ai: ";
int emotion =1, startup =0;

ofstream file1("save_file.txt");

file1 << "Emotion = " << emotion << endl; 
file1 << "Startup = " << startup << endl; 

file1.close();
cout  << "New data saved to save_file.txt!" << endl;
cout  << "Directing to cautious-waddle-ai" << endl;
Sleep(2000);
cout << z << "I'm Makise Kurisu, pleased to meet you." << endl;
PlaySound("pleased_to_meet_you_01.wav", NULL,SND_SYNC);
std:: cout << "> ";
	
	
interface_01();
	
}


