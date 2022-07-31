#include <iostream>
#include <windows.h>
#include <string.h>


using namespace std;


void BCalculus();


void BCalculus()
{
	cout << "Please choose a topic:" << endl;	
	cout << "Basic Calculus:" << endl;
	cout << "1) Limit of a function" << endl;
	cout << "2) Limit Theorem" << endl;
	cout << "3) Limit of Logarithmic, Exponential, and Trigonometric Function" << endl;
	cout << "4) Continuity" << endl;
	cout << "5) Continuity of a Function" << endl;
	cout << "6) The Derivative of the slope tangent line" << endl;
	cout << "7) Derivative" << endl;
	cout << "8) Basic Rules of Derivative" << endl;
	cout << "----------------------------" << endl;
	cout << "9)  Derivative of Trigonometric Function" << endl;
	cout << "10) Derivative of Exponential and Logarithmic Function" << endl;
	cout << "11) Implicit Differentiation " << endl;
	cout << "12) Finding tangent lines Implicitly " << endl;
	cout << "13) Optimization Problem" << endl;
	cout << "14) Related Rates" << endl;
	cout << "15) Antiderivative" << endl;
	cout << "16) Integration by Substitution" << endl;
	
	string input;
	string z = ">";
	std:: cout << z;
	
	getline(cin,input);
	
	if (input == "quit" && "Quit")
	{
		cout << "Terminating the program.." << endl;
	}
	else if  (input == "Limit of a function" && "limit of a function" )
	{
	int input_a;
	int input_b;
	string operator_c;
	int product_d;
		system("CLS");
		cout << "Limit of a function: " << endl;
		cout << "Let a denote a real number and let f(x) denotes a function." << endl;
		cout << "We say that L is the limit of f(x) as x approaches a if f(x) gets closer and closer to L as xapproaches a." << endl;
		cout << "\n" << endl;
		cout << "Please input the first quotient:";
		cin >> input_a;
		cout << "Please input the second quotient:";
		cin >> input_b;
		cout << "choose an operator for the two quotient" << endl;
		cout << " '+' for addition, '-' for subtraction, '/' for division, '*' for multiplication' " << endl;
			getline(cin,operator_c);
			if (operator_c == "+"){
			
			product_d = input_a + input_b;
			cout << "output: " << product_d << endl;
		}
			else if  (operator_c == "-" ){
			product_d = input_a - input_b ;
			cout << "output: " << product_d << endl;
		}
			else if  (operator_c == "/" ){
			product_d = input_a / input_b ;
			cout << "output: " << product_d << endl;
		}
			else if  (operator_c == "*" ){
			product_d = input_a * input_b ;
			cout << "output: " << product_d << endl;
		} 
		
		
	}
	else {
		cout << "Shutting down.." << endl;
	}
	
}

/* One sided limit is compose of two limits which are the negative side and positive side. F
For example, x is approaches to 5, On the left side of the limit will be 4, on the other hand, the right side will be 6.

x -> 4 will be:

 4 approaches to 5.
 6 approaches to 4. */
 
