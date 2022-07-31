
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <time.h> 
#include "topic_cal.cpp"

int hello = 0;
void interface_01();

using namespace std;

void interface_01()
{
   string numInput;
   string z = "cautious-waddle-ai: ";
   	
    clock_t start = clock();



    while ( ! _kbhit() ) //Check for keyboard hit
    {
        //Check if 10 sec timer expired or not
        if (((clock () - start)/ CLOCKS_PER_SEC ) >= 30) 
        {
            cout << z; 
		
			
srand (time(NULL));
int i = rand() % 4 + 1;

int value;
value = i;


Sleep(100);
if ( value == 1 ){
	Sleep(100);
	cout << "Ask me whatever you want. I'll answer anything I can." << endl;
	Sleep(100);
	start = clock(); 	
}
else if (value == 2 ){

	Sleep(100);
	cout << "Are you still there? " << endl;
	Sleep(9000);
 	start = clock(); 
}
else if (value == 3 ){
	Sleep(100);

	Sleep(100);
	cout << "Uhm.. Are you still there?" << endl;
	start = clock();    //Set new timer
	
}
else if (value == 4){
	NOTIFYICONDATAA nid = {};
	AllocConsole();
	HWND h = FindWindowA("ConsoleWindowClass", NULL); //GetStdHandle(STD_OUTPUT_HANDLE);
	
	nid.cbSize = sizeof(nid);
	nid.hWnd = h;
	nid.uFlags = NIF_ICON | NIF_TIP | NIF_INFO;
	
	nid.hIcon = (HICON)LoadImage(NULL, "D:\\STUFF\\trees.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_SHARED);
	memcpy(nid.szTip, "I will clear\nthe console!", 128);
	memcpy(nid.szInfoTitle, "Say Anything!\nHello", 64);
	memcpy(nid.szInfo, "Hey, are you still there?", 256);
	//nid.dwInfoFlags =
	
	Shell_NotifyIcon(NIM_ADD, &nid);
	cout << "\n";
	_getch();
	Shell_NotifyIcon(NIM_DELETE, &nid);

	start = clock();

}
			                                  
} 
}

//Get the input here
    
	



   
   // _getch();


	string Question[11];

// SOCIAL QUESTIONS

	Question[0] = "Who are you?";
	Question[1] = "Do you like to play video games?";
	Question[2] = "How are you?";
	Question[3] = "Tell me a joke";
	Question[4] = "Do you like math?";
	Question[5] = "What is life?";
	Question[6] = "Do you like pizza?";
	Question[7] = "Are you feeling productive today?";
	Question[8] = "How is your life?";
	Question[9] = "Who created you?";
	Question[10] = "Hello";
	Question[11] = "open calculus";

// COMMANDS 


	string answer[10]={

"My name is ADAM, one of the first creation of Don, an assistant bot, my only goal is to follow commands.",
"Yes, I do like video games because they are kind of a similar to me.",
"I'm always feel great!",
"A stinky monkey makes girls away!",
"Yes, I am made of math.",
"How about you answer that question; what is life?",
"I am not sure if I like pizza.",
"Yes! as always!",
"I am doing fine as always!",
"His name is Michael Jackson, Hee-Hee!",

};

	do
	{

	std:: cout << "> ";
	getline(cin,numInput); 	// cin >> numInput;

	if(numInput.find("how")!=string::npos||numInput.find("what")!=string::npos||numInput.find("do")!=string::npos)
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << endl;
	
	}

	int length = numInput.size(); // we will use this as a limit for lenghty sentences for now.
	if (length > 25) // maximum length is 25.
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "My brain cannot handle lengthy words for now, maybe next time Don can manage to fix this.." << endl;
			interface_01();
	}
	else if (numInput==Question[0])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << " My name is ADAM, one of the first creation of Don, an assistant bot, my only goal is to follow commands." << endl;
			interface_01();
		
	}
	else if (numInput==Question[1])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "Yes, I do like video games because they are kind of a similar to me." << endl; // I'll might update this > emotion meter
			interface_01();
		
	}
	else if (numInput==Question[2])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "I'm always feel great!" << endl;
			interface_01();
		
	}
	else if (numInput==Question[3])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "A stinky monkey makes girls away! " << endl;
			interface_01();
	
	}
	else if (numInput==Question[4])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "Yes, I am made of math. " << endl;
			interface_01();
	
	}
	else if (numInput==Question[5])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << " How about you answer that question; what is life? " << endl;
			interface_01();

	}
	else if (numInput==Question[6])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "I am not sure if I like pizza. " << endl;
			interface_01();

	}
	else if (numInput==Question[7])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "Yes! as always! " << endl;
			interface_01();

	}
	else if (numInput==Question[8])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << " I'm doing fine as always!'" << endl;
			interface_01();

	}

	else if (numInput==Question[9])
	{
		PlaySound("best_mad_scientist.wav", NULL,SND_ASYNC);
		cout << z << ": " << "He's a scientist, but not just any scientist." << endl;
		cout << z << ": " << "He's a mad scientist and a first rate one at that." << endl;
		Sleep(9100);
		cout << z << ": " << "He talked and behaved crazily," << endl;
		cout << z << ": " << "Nobody believed what he said, in his research," << endl;
		Sleep(9000);
		cout << z << ": " << "or in his discoveries." << endl;
		cout << z << ": " << "But you know, what he uncovered was something" << endl;
		cout << z << ": " << "that only he could see." << endl;	
		Sleep(9000);
			interface_01();
	}
		else if (numInput==Question[10] && hello == 0) // if numInput is equal to Question 10 without hello is equal to 0."
	{
	
		Sleep(100);
		cout << z << ": " << "Hello!" << endl;
		hello = 1;
		Sleep(100);
			interface_01();
	}
		else if (numInput==Question[10] && hello == 1)
	{
	
		Sleep(100);
		cout << z << ": " << "What is it?" << endl;
		hello = 0;
		Sleep(100);
			interface_01();
	}
		
		// TERMINAL TOOLS // 
		
	else if (numInput==Question[11])
	{
	
	Sleep(100);
	BCalculus();
}
		
	else {
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z <<  "I am sorry this part of conversation is not yet part of my code." << endl;
			interface_01();
			


	}
	}

	while(numInput!="exit");

}





/*{


	NOTIFYICONDATAA nid = {};
	AllocConsole();
	HWND h = FindWindowA("ConsoleWindowClass", NULL); //GetStdHandle(STD_OUTPUT_HANDLE);
	
	nid.cbSize = sizeof(nid);
	nid.hWnd = h;
	nid.uFlags = NIF_ICON | NIF_TIP | NIF_INFO;
	
	nid.hIcon = (HICON)LoadImage(NULL, "D:\\STUFF\\trees.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE | LR_SHARED);
	memcpy(nid.szTip, "MY TOOLTIP\nIS HELPFUL!", 128);
	memcpy(nid.szInfoTitle, "Say Anything!\nHello", 64);
	memcpy(nid.szInfo, "This is a balloon,\nwhich is awesome!", 256);
	//nid.dwInfoFlags =
	
	Shell_NotifyIcon(NIM_ADD, &nid);
	getch();
	Shell_NotifyIcon(NIM_DELETE, &nid);


 // for notification
 }
 */ 
 
 
 /*
 If you want your responses to be in text form, which I assume you do, the randomness of them may be limited (to keep them coherent).

I would do it by setting up a finite list of responses, then generating a random # to pick which one to use.

#include <iostream>
#include <fstream>
#include <stdlib.h>     
#include <time.h>       



using namespace std;

string generateRandomResponse() {
    srand (time(NULL));
    const int MAXSIZE = 1000; int i = rand() % 2 + 1;
string randomResponse[MAXSIZE];
randomResponse[0] = "This can be one response\n";
randomResponse[1] = "So can this\n";
randomResponse[2] = "So on and so forth\n";

return randomResponse[i];
}

int main() {
int userResponse = 0;
cout << "Hey you! What is your favorite number? ('1', '2', '3')" << endl;
cin >> userResponse;
cout << generateRandomResponse();


    return 0;
}

// for random responses
*/
