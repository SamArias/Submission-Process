//Janete Amacosta & Samantha Arias
//CPSC 121 Lab 3
//02-10-18
//Printing Shapes
#include<iostream>
#include<string>
#include <fstream>
using namespace std;
int main() {
	char choice, input, point_direction;
	int name, word, height, response;
	int width;
	int i, j, k;
	string str;

	cout << "Choose a rectangle or a triangle (r = rectangle and t = triangle): ";
	cin >> choice;

	if (choice == 'r') {       //Rectangle
		cout << "You entered a rectangle" << endl;
		cout << "Would you want to supply a word or a width (A = word and B = width): ";
		cin >> input;

		if (input == 'A') {
			cout << "Please enter a word: ";  //User enters word for rectangle
			cin >> word;
		}

		else if (input == 'B') {
			cout << "Please enter a width: "; //User enters width
			cin >> width;
		}

		cout << "Please enter a height: "; //User enters heigtht
		cin >> height;

		cout << "Do you want to print to a file or to cout? ";
		cin >> response;

		//column is width and row is height
		int size = height;
		int shape = width;
		for (int row = 1; row <= size; ++row) {     // loop to print all the rows

			for (int col = 1; col <= shape; ++col) {  // loop to print all the columns of each row
				cout << "# ";
			}
			cout << endl;
		}
	}	//END OF RECTANGLE

	else if (choice == 't') {         //Triangle
		cout << "You entered a triangle" << endl;
		cout << "Would you want to supply a word or a width (A = word and B = width): ";
		cin >> input;

		if (input == 'A') {
			cout << "Please enter a word: ";  //User enters word for triangle
			cin >> word;

			int length = str.length();

			cout << endl;

			for (int i = length; i >= 0; i--) {	//loop for word
				for (int j = 0; j < i; j++) {
					cout << str[j];
				}
				cout << endl;
			}
		}

		else if (input == 'B') {
			cout << "Please enter a width: "; //User enters width
			cin >> width;

		}

		cout << "Do you want the triangle to point up or down (1 = up & 2 = down): ";
		cin >> point_direction;
		if (point_direction == '1') {	//triangle points up

			for (i = 1; i <= width; i++) {
				for (j = 1; j < i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}
		else if (point_direction == '2') {	//triangle points down
			for (i = width; i >= 1; i--)
			{
				for (j = width; j>i; j--)
				{
					cout << " ";
				}
				for (k = 1; k <= i; k++)
				{
					cout << "*";
				}
				cout << endl;

			}
		}

		//cout << "Do you want to print to a file or to cout ( f = file and c = cout)? ";
		//cin >> response;

	}
	else if (choice != 'r' || choice != 't') {
		cout << "Your choice is invalid. The program will close. " << endl;  //Invalid input from user
	}

	system("pause");
	return 0;
}