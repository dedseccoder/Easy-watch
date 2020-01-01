#include <iostream>
#include "Easy watch.h"
using namespace std;


//Example of using;

int main()
{
	Timer timer;
	std::string string_input = "RUS";
	char choose = 'n';
	cout << "Please enter, what format of date do you want to see? (RUS/USA) ";
	cin >> string_input;
	cout << endl;
	cout << "Do you want to update the date every frame? (y/n) ";
	cin >> choose;
	bool update_input = choose == 'y' || choose == 'Y';
	cout << endl;
	cout << endl;
	timer.getDate(string_input, update_input);
	system("pause");
	return 0;
}