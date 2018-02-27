//Janete Amacosta & Samantha Arias
//CPSC 121 Lab 3
//02-10-18
//Printing Shapes

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void drawRectangle(int width, int height, bool toFile)
{
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < width; j++)
		{
			if(toFile){
				ofstream myFile;
				myFile.open("myshape.txt", ios_base::app);
				myFile << "*";
				myFile.close();
			}else{
				cout << "*";
			}
		}
		if(toFile){
			ofstream myFile;
			myFile.open("myshape.txt", ios_base::app);
			myFile << "\n";
			myFile.close();
		}else{
			cout << "\n";
		}
	}
}

void drawRectangle(string word, int height, bool toFile)
{
    for(int i = 0; i < height; i++)
    {
        if(toFile){
            ofstream myFile;
            myFile.open("myshape.txt", ios_base::app);
            myFile << word;
            myFile<< "\n";
            myFile.close();
        }else{
            cout << word << endl;
        }
    }
}

void drawTriangle(int size, bool pointingUp, bool toFile)
{
    int counter = size;

    if(pointingUp)
    {
        counter = 0;
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < counter + 1; j++)
            {
                if(toFile){
                    ofstream myFile;
                    myFile.open("myshape.txt", ios_base::app);
                    myFile<< "*";
                    myFile.close();
                }else{
                    cout << "*";
                }
            }
                if(toFile){
                    ofstream myFile;
                    myFile.open("myshape.txt", ios_base::app);
                    myFile<< "\n";
                    counter++;
                    myFile.close();
                }else{
                    cout << "\n";
                    counter++;
                }

        }
    }else
    {
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < counter; j++)
            {
                if(toFile){
                    ofstream myFile;
                    myFile.open("myshape.txt", ios_base::app);
                    myFile<< "*";
                    myFile.close();
                }else{
                    cout << "*";
                }
            }
            if(toFile){
                ofstream myFile;
                myFile.open("myshape.txt", ios_base::app);
                myFile<< "\n";
                counter--;
                myFile.close();
            }else{
                cout << "\n";
                counter--;
            }
        }
    }
}

void drawTriangle(string word, bool pointingUp, bool toFile)
{
    if(pointingUp)
    {
        int counter = 1;
        for(int i = 0; (unsigned int)i < word.length(); i++)
        {
            int index = word.length() - 1 - i;
            for(int j = 0; j < counter; j++)
            {
                if(toFile){
                    ofstream myFile;
                    myFile.open("myshape.txt", ios_base::app);
                    myFile << word[index];
                    index++;
                    myFile.close();
                }else{
                    cout << word[index];
                    index++;
                }
            }
            if(toFile){
                ofstream myFile;
                myFile.open("myshape.txt", ios_base::app);
                myFile << "\n";
                counter++;
                myFile.close();
            }else{
                cout << "\n";
                counter++;
            }
        }
    }else{

        int counter = word.length() - 1;
        for(int i = 0; (unsigned int)i < word.length(); i++)
        {
            int index = i;
            for(int j = counter; j >= 0; j--)
            {
                if(toFile){
                    ofstream myFile;
                    myFile.open("myshape.txt", ios_base::app);
                    myFile << word[index];
                    index++;
                    myFile.close();
                }else{
                    cout << word[index];
                    index++;
                }
            }
            if(toFile){
                ofstream myFile;
                myFile.open("myshape.txt", ios_base::app);
                myFile << "\n";
                counter--;
                myFile.close();
            }else{
                cout << "\n";
                counter--;
            }
        }
    }
}


int main()
{
	int sentinel = 1;

	while(sentinel == 1){
	char userCharInput = 'z';
	int userWidthParameter = 0;
	int userHeightParameter = 0;
	string userStringParameter = "string";

	bool toFile = true;

	cout << "Welcome to the Magnificent Shape Printer Program!" << endl;
	cout << "Press 'r' to print a Rectangle or 't' to print out a Triangle!" <<  endl;
	cin >> userCharInput;

	if(userCharInput == 'r')
	{
		cout << "You chose to print a rectangle. Press to 'a' to provide a width or 'w' to provide a word." << endl;
		cin >> userCharInput;

		if(userCharInput == 'a')
		{
			cout << "You chose to specify a width. Please type in a number for how wide you want the rectangle to be." << endl;
			cin >> userWidthParameter;
			cout << "Now type in a number for the height of your rectangle." << endl;
			cin >> userHeightParameter;
			cout << "Excellent! Would you like to print to screen or to a file? Type 1 for file, or 0 for screen." << endl;
			cin >> toFile;
			drawRectangle(userWidthParameter, userHeightParameter, toFile);
		}
		else if(userCharInput == 'w')
		{
			cout << "You chose to specify a word. Please type the word you would like to use as the width." << endl;
			cin >> userStringParameter;
			cout << "Now type in a number for the height of your rectangle." << endl;
			cin >> userHeightParameter;
			cout << "Excellent! Would you like to print to screen or to a file? Type 1 for file, or 0 for screen." << endl;
			cin >> toFile;
			drawRectangle(userStringParameter, userHeightParameter, toFile);
		}
		else
		{
			cout << "You didn't put in an acceptabe letter. Try again!" << endl;

		}

	}
	else if(userCharInput == 't')
	{
		bool userInputBoolean = true;
		cout << "You chose to print a triangle. Press to 'a' to provide a width or 'w' to provide a word." << endl;
		cin >> userCharInput;

		if(userCharInput == 'a')
		{
			cout << "You chose to specify a width. Please type in a number for how wide you want the triangle to be." << endl;
			cin >> userWidthParameter;
		}
		else if(userCharInput == 'w')
		{
			cout << "You chose to specify a word. Please type the word you would like to use as the width." << endl;
			cin >> userStringParameter;
		}
		else
		{
			cout << "You didn't put in an acceptabe letter. Try again!" << endl;

		}
		cout << "Do you want the triangle to point up or down? Press 'u' for up, or press 'd' for down." << endl;
		char pointUp = 'z';
		cin >> pointUp;
			if(pointUp == 'u' )
			{
				//do nothing
			}
			else if(pointUp == 'd')
			{
				userInputBoolean = false;
			}
			else
			{
				cout << "You didn't put in an acceptabe letter. Try again!" << endl;

			}
		if(userCharInput == 'a')
		{
			cout << "Excellent! Would you like to print to screen or to a file? Type 1 for file, or 0 for screen." << endl;
			cin >> toFile;
			drawTriangle(userWidthParameter, userInputBoolean, toFile);
		}else
		{
			cout << "Excellent! Would you like to print to screen or to a file? Type 1 for file, or 0 for screen." << endl;
			cin >> toFile;
			drawTriangle(userStringParameter, userInputBoolean, toFile);
		}
	}
	else
	{
	cout << "You didn't put in an acceptabe letter. Try again!" << endl;
	}

	cout << "Press 1 to continue, or press 0 to quit." << endl;

	cin >> sentinel;

		if(sentinel == 0){
			cout << "Thanks for using the Magnificent Shape Printer Program!" << endl;
			break;
		}
	}
}
