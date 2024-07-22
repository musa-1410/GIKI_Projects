#include <iostream>
#include <conio.h> // library for getch feature to take user input without use of enter key
#include <stdlib.h> // library for system("CLS") feature to clear screen
#include <windows.h> // library for beep function
using namespace std;

struct car // structure of car
{
	int position; // members position and points
	int points;
};

struct track // structure of track
{
	int length = 30; // track length of 30 spaces
	car firstcar;
	car secondcar;
};

void display (track input) // function to display track
{
	cout << "+--------RACING TRACK----------+" << endl;
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;
	cout << "|";
	for(int i = 0 ; i < input.length ; i++) // using for loop for the track
	{
		if(i == input.firstcar.position)
		{
			cout << "1"; // first car position on the track
		}
		else
		{
			cout << "-"; // the rest of the track
		}
	}
	cout << "|" << endl;
	cout << "|                              |" << endl;
	cout << "|";
	for(int i = 0 ; i < input.length ; i++)   
	{
		if(i == input.secondcar.position)
		{
			cout << "2"; // second car position on the track
		}
		else
		{
			cout << "-"; // the rest of the track
		}
	}
	cout << "|" << endl;
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "First car points: " << input.firstcar.points << endl;
	cout << "Second car points: " << input.secondcar.points << endl;
	
	
}

void menu() // function to display input menu
{
	cout <<"-----------|TURBO RACE|-----------" << endl << endl;
    cout << "Menu: " << endl << endl;
    cout << "Player 1:  press [a] for left, press [d] for right" << endl;
    cout << "Player 2: press [j] for left, press [l] for right" << endl << endl;
    cout << "Press [q] to quit the game" << endl << endl;
}

void beepsound ()
{
	Beep(2000,300); // Beep with frequency of 2000 Hz and a duration of 300 ms
}

int main ()
{	bool gamestate=true;
	track instance; // structure instance 
	instance.firstcar.points = 0; // initialising position and points value to 0 initially
	instance.secondcar.points = 0;
	instance.firstcar.position = 0;
	instance.secondcar.position = 0;
	
	menu(); // calling menu function
	char input;
	display(instance);
	while (input != 'q' && gamestate==true) // program runs until q is pressed
	{
		input = getch(); // utilising getch funtion to get input without pressing enter for each input
		beepsound();
		if(input == 'd') // if input is d key 
		{
			if(instance.firstcar.position >= 30) // if car reaches 30 length reset to 0
			{
				instance.firstcar.position = 0;
				++instance.firstcar.points; 
			}
			else
			{
				++instance.firstcar.position; // keep incrementing position 
			}
		}
		else if(input == 'a') // if input is a key 
		{
			if(instance.firstcar.position <= 0) // if car goes out of bounds meaning below 30 horizontal spaces , rest to 30
			{
				instance.firstcar.position = 30;
				--instance.firstcar.points; 
			}
			else
			{
				--instance.firstcar.position; // keep decrementing position
			}
		}
		else if(input == 'l') // if input is l key 
		{
			if(instance.secondcar.position >=30) // if car goes out of bounds meaning above 30 horizontal spaces , rest to 0
			{
				instance.secondcar.position = 0;
				++instance.secondcar.points;
			}
			else
			{
				++instance.secondcar.position; // keep incrementing position 
			}
		}
		else if(input == 'j') // if input is l key
		{
			if(instance.secondcar.position <= 0) // if car goes out of bounds meaning below 30 horizontal spaces , rest to 30
			{
				instance.secondcar.position = 30;
				--instance.secondcar.points; 
			}
			else
			{
				--instance.secondcar.position; // keep decrementing position
			}
		}
		else
		{
			cout << "Please Enter again." << endl << endl;
		}
		system("CLS"); // clear screen 
		menu(); // calling menu function
		display(instance); // displaying track 
		
		if (instance.firstcar.points>instance.secondcar.points && instance.firstcar.points==5)
		{
			cout<<"\nCar 1 is the winner!";
			gamestate = false;
		}
		if (instance.secondcar.points>instance.firstcar.points && instance.secondcar.points==5) 
		{
			cout<<"\nCar 2 is the winner!";
			gamestate = false;
		}
	}
	
	
	return 0;
}
