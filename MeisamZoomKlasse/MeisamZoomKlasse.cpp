#include <iostream>
#include <string>
#include <conio.h>
//global
//using namespace std;
int age = 26;
bool sw = false; // Writing Switch with big S, as it is case sensetive
char Initial = 'm';
std::string Fullname = "";
double pi = 3.14;
int a = 10;
int b = 5;
int c = 20;
int z = 10;

int main()
{

	system("cls");
	system("pause");

	if (a > b) {
		std::cout << "A is Greater than B\n";
	}
	else { // else stands alone, do not add (a < b)
		std::cout << "A is less than B\n";
	}


	if (a == z) {
		std::cout << "A and Z are equal\n";
	}
	
	if (a <= z) { // if (a > z || a == z) "||" means "or"
		std::cout << "Nothing happens here\n";

	}
	if (a != b) { //if (a != b) "!=" means "not equal"

		std::cout << "a and b are not equal \n";
	}
	//Local
	/*//using namespace std; 
	int age = 0;
	bool sw = false; // Writing Switch with big S, as it is case sensetive
	char Initial = 'm';
	std::string name = "Erik";
	double pi = 3.14;
	*/
	
	
	/*
	std::cout << "Enter your full name: ";
	std::getline(std::cin, Fullname);
	std::cout << "Your full name is" << Fullname << "\n";
	*/
	
	/*
	std::cout << sw << "\n";
	std::cout << "Enter your age: "; 
	std::cin >> age;
	std::cout << "Your age is: " << age << std::endl; //"\n"; == std::endl;  \t == Tab for mer klart kode
	std::cout << "You are young";
	std::cout << "s";
	*/
	_getch();
}

