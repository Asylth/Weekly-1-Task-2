#include <iostream>
#include <string>

std::string Name;
int Age;
std::string Likescoffie;
bool Coffee;


int main()
{
	//Get Name.
	std::cout << "What is your name? \n";
	std::cin >> Name;

	//Get Age.
	std::cout << "What is your age? \n";
	std::cin >> Age;

	//Like Coffee?
	std::cout << "Do you like coffee, Yes or No? \n";
	std::cin >> Likescoffie;



	std::cout << "Your name is: " << Name << "\n";
	std::cout << "Your age is: " << Age << "\n";

	if (Likescoffie == "Yes") {
		std::cout << "Seems you like coffee \n";
	}
	if (Likescoffie == "No") {
		std::cout << "Oh ? you do not like coffee \n";
	}
	else {
		std::cout << "Please tell if you like coffee using \"Yes\" or \"No\" \n";
	}
   
	

}