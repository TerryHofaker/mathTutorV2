/*********************************************************************************************
Program.......:MathTutorV1
Programmers...:Terry Hofaker, Danielle Nicole, Charlie Lamski
Date..........:2026.09.13
GitHub Report.:https://github.com/TerryHofaker/MathtoutorV1.2
Description...:A simple math tutor for young children. In version 1 it displays the programs
               intro and silly math facts, gets the user's name, welcomes the user, asks a
               question and gets users input, closes the program.
**********************************************************************************************/


#include <iostream>

using namespace std;

int main() {

    //define the variables
    string userName = "unknown";
    int leftNum = 2;
    int rightNum = 3;
    int userAnswer = 0;

    //Main title with a welcome
    cout << "**********************************************************" << endl;
    cout << "    __  __       _   _       _____      _                  " << endl;
    cout << "   |  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __     "<< endl;
    cout << "   | |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__| " << endl;
    cout << "   | |  | | (_| | |_| | | |   | || |_| | || (_) | |    " << endl;
    cout << "   |_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|    " << endl;
    cout << "**********************************************************" << endl;
    cout << "#         Welcome to the Super Simple Math Tutor         #" << endl;
    cout << "**********************************************************" << endl;

    // States silly math jokes like facts
    cout << endl;
    cout << "   Fun Silly Math Facts:" << endl;
    cout << endl;
    cout << "       + A math Teachers favorite dessert is pie" << endl;
    cout << "       + A math teacher is like a pirate they are looking for x" << endl;
    cout << "       + A math book is always crying because it has so many problems" << endl;
    cout << "       + The first three digits of pi spell pie when looked at backwords " << endl;

    //Get the user's name
    cout << "What is your name? ";
    cin >> userName ;
    cout << endl;

    //Welcome the user
    cout << "Welcome " << userName << "!" << endl;
    cout << endl;

    //Ask math question
    cout << "What is " << leftNum << " + " << rightNum << "? " ;
    cin >> userAnswer ;
    cout << endl;

    //State that the program doesn't do anything more yet ends program
    cout << "Sorry, this is all the program does for the moment." << endl;
    cout << "Version 2 is coming soon..." << endl;
    cout << "End of program. " << endl;







    return 0;
}
