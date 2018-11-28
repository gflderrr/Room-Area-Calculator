// Genna Felder, 10/2/18, COP2000, HW2//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	const float PI_VALUE = 3.14
	int user_menu_input = -1;
	float room_length = -1;
	float room_width = -1;
	float room_radius = -1;

	cout << "Welcome to Haverly's Room Calculator!" << endl;
	cout << "Please select a menu choice (1-4)" << endl;

	cout << "===== MENU =====" << endl;

	cout << "1: Square Room" << endl;
	cout << "2: Rectangular Room" << endl;
	cout << "3: Round Room" << endl;
	cout << "4: Quit" << endl;

	cin >> user_menu_input;
	
	while (user_menu_input > 4 || user_menu_input < 1)
	{
		cout << "You entered an invalid number, please choose a valid menu option:" << endl;
		cin >> user_menu_input;
	}

	cout << setprecision(2) << fixed;

	switch (user_menu_input)
	{
	case 1:
		//cout << "DEBUG: you are in case 1 (square room)" << endl;//

		cout << "What is the length of the room in feet?" << endl;
		cin >> room_length;

		while (room_length <= 0)
		{
			cout << "You entered and invalid number, please enter a positive number: " << endl;
			cin >> room_length;
		}

		cout << "You will need " << (room_length * room_length) << " square feet of carpet." << endl;
		break;

	case 2:
		//cout << "DEBUG: you are in case 2 (rectangle room)" << endl;//

		cout << "What is the length of the room in feet?" << endl;
		cin >> room_length;

		while (room_length <= 0)
		{
			cout << "You entered and invalid number, please enter a positive number: " << endl;
			cin >> room_length;
		}

		cout << "What is the width of the room in feet?" << endl;
		cin >> room_width;

		while (room_width <= 0)
		{
			cout << "You entered and invalid number, please enter a positive number: " << endl;
			cin >> room_width;
		}

		cout << "You will need " << (room_length * room_width) << " square feet of carpet." << endl;
		break;

	case 3:
		//cout << "DEBUG: you are in case 3 (round room)" << endl;//

		cout << "What is the length of the radius of the room in feet?" << endl;
		cin >> room_radius;

		while (room_radius <= 0)
		{
			cout << "You entered and invalid number, please enter a positive number: " << endl;
			cin >> room_radius;
		}

		cout << "You will need " << (PI_VALUE * room_radius * room_radius) << " square feet of carpet." << endl;
		break;

	case 4:
		//cout << "DEBUG: you are in case 4 (quit)" << endl;//
        cout << endl;
	}

	return 0;
}