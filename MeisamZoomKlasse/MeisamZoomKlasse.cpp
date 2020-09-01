#include <iostream>
#include <string>

//global
//using namespace std;
int age = 26;
bool sw = false; // Writing Switch with big S, as it is case sensetive
char Initial = 'm';
std::string name = "Erik";
double pi = 3.14;

int main()
{
	//Local
	/*//using namespace std; 
	int age = 0;
	bool sw = false; // Writing Switch with big S, as it is case sensetive
	char Initial = 'm';
	std::string name = "Erik";
	double pi = 3.14;
	*/
	std::cout << sw;
	std::cout << "Enter your age: ";
	std::cin >> age;
	std::cout << "Your age is: " << age << std::endl; //"\n"; == std::endl;  \t == Tab for mer klart kode
	std::cout << "You are young";
	/*std::cout << "s";
	*/
}

