#include <iostream>
#include <string>
#include <windows.h>
#include <ctime> // for time
#include <fstream> // library for reading files  ' // ' used for leaving a comment
#include <sstream>
#include <stdlib.h> // for clearing output
#include <stdio.h>
#include <vector>
#include <iomanip> //this library is needed for setw
#include <MMSystem.h> // for sounds
#include "scenario.h" // file that checks if its your first time
#include <graphics.h>


void startup();
void main_menu();
void main_log();


std:: string z = "cautious-waddle-ai: ";

using namespace std;

/// PHASE ONE: Startup of Progam /// 

int main()
{
	
	startup();
}
void startup()
{

  	// cout << setw(25) << endl; //Modify the number to align it to the center
	cout << "\n\n\n\n\n\n\n\n\n" << setw(53) <<  "Processing |--------- 10%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) <<"Processing ||-------- 20%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing |||------- 30%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing ||||------ 40%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing |||||----- 50%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) << "Processing ||||||---- 60%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) << "Processing |||||||--- 70%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) << "Processing ||||||||-- 80%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing |||||||||- 90%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) <<"Processing |||||||||| 100%" << endl;
	Sleep(500);
	system ("CLS");
	
	PlaySound("notification-01.wav", NULL,SND_ASYNC); // make sure to use a .wav file, not .mp3 or anything else! This function can play only .wav files
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(30) << " COMPLETE " << endl;
	
	Sleep(1000);
	main_menu();
	
	

}

/// PHASE TWO: Main Menu ///

void main_menu()
{
	cout << "1.) Connect" << endl;
	cout << "2.) Settings\n" << endl;
	
	std::cout << "> ";
	string input;
	getline(cin,input);
	
	
	if (input == "Connect") 
	{
	PlaySound("notification-02.wav", NULL,SND_SYNC);
	system("CLS");
		cout << z << "Connecting" << endl;
		Sleep(5000);
		system("CLS");
		main_log();
		}
	else if (input == "connect") 
	{
	PlaySound("notification-02.wav", NULL,SND_SYNC);
	system("CLS");
		cout << z << "Connecting" << endl;
		Sleep(5000);
		system("CLS");
		main_log();
	
		}
	else if (input == "Open Google")
	{
	PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << "Connecting to Google!" << endl;
		system("start www.google.com");
		}
	
	else
	{
	PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << "Invalid Input!" << endl;
		Sleep(1000);
		system("CLS");
		main_menu();
	}

}



