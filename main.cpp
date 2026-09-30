/*********************************************************************************************
Program.......:MathTutorV2
Programmers...:Terry Hofaker, Danielle Nicole, Charlie Lamski
Date..........:2026.09.13
GitHub Report.:https://github.com/TerryHofaker/mathTutorV2
Description...:A simple math tutor for young children. In version 1 it displays the programs
               intro and silly math facts, gets the user's name, welcomes the user, asks a
               question and gets users input, closes the program.
**********************************************************************************************/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    //define and initialize the variables
    string userName = "unknown";
    int leftNum = 0;
    int rightNum = 0;
    int userAnswer = 0;
    int mathType = 0;
    int correctAnswer = 0;
    int temp = 0;
    char mathSymbol = '?';

    //seed the random number generator
    srand(time(0));

    //Main title with a welcome
    cout << "**************************************************************************" << endl;
    cout << "    __  __       _   _       _____      _                  " << endl;
    cout << "   |  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __     "<< endl;
    cout << "   | |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__| " << endl;
    cout << "   | |  | | (_| | |_| | | |   | || |_| | || (_) | |    " << endl;
    cout << "   |_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|    " << endl;
    cout << "**************************************************************************" << endl;
    cout << "#         Welcome to the Super Simple Math Tutor                         #" << endl;
    cout << "**************************************************************************" << endl;

    // States silly math jokes like facts
    cout << endl;
    cout << "   Fun Silly Math Facts:" << endl;
    cout << endl;
    cout << "       + A math Teachers favorite dessert is pie" << endl;
    cout << "       + A math teacher is like a pirate they are looking for x" << endl;
    cout << "       + A math book is always crying because it has so many problems" << endl;
    cout << "       + The first three digits of pi spell pie when looked at backwords " << endl;
    cout << endl;
    cout << "**************************************************************************" << endl;
    cout << endl;

    //Get the user's name
    cout << "What is your name? ";
    cin >> userName ;
    cout << endl;

    //Welcome the user
    cout << "Welcome " << userName << "!" << endl;
    cout << endl;

    //Generate random numbers
    leftNum = rand() % 10 + 1;
    rightNum = rand() % 10 + 1;
    mathType = rand() % 4 + 1;

    switch (mathType) {

        //Addition
        case 1:
            correctAnswer = leftNum + rightNum;
            mathSymbol = '+';
            break;

        //Subtraction
        case 2:
            if (leftNum < rightNum) {
                temp = leftNum;
                leftNum = rightNum;
                rightNum = temp;

            }

            correctAnswer = leftNum - rightNum;
            mathSymbol = '-';
            break;

        //Division
        case 3:
            correctAnswer = leftNum;
            leftNum *= rightNum;
            mathSymbol = '/';
            break;







    }

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

