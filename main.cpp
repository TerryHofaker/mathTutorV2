/*********************************************************************************************
Program..........:MathTutorV2
Programmers......:Terry Hofaker, Tiquan Palmer, Carmela Egbuonu
Date.............:2026.09.13
Course Section...:Section 1- 9:00am
Version..........:2
GitHub Report.:https://github.com/TerryHofaker/mathTutorV2
Description...:A simple math tutor for young children. In version 2, the program displays the
               introduction and silly math facts, get the user's name, welcomes the user,
               generates two random numbers and randomly select a math operation (addition,
               subtraction, multiplication and divison). It then asks the user a math question,
               gets the user's answer, checks whether the answer is correct, displays the result
               and closes the program.
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
    cout << "   |  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __     " << endl;
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
    cout << "What is your name? " << " ";
    cin >> userName;
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

        //Subtraction avoids negative numbers
        case 2:
            if (leftNum < rightNum) {
                temp = leftNum;
                leftNum = rightNum;
                rightNum = temp;
            }

            correctAnswer = leftNum - rightNum;
            mathSymbol = '-';
            break;

        //Multiplication
        case 3:
          correctAnswer = leftNum * rightNum;
            mathSymbol = '*';
            break;

        //Division avoids fractions
        case 4:
             correctAnswer = leftNum;
            leftNum *= rightNum;
            mathSymbol = '/';
            break;

        //Something went wrong
        default:
            cout << "Invalid question type: " << mathType << endl;
            cout << "Program ended with an error -1" << endl;
            cout << "Please report this error to Debbie Johnson" << endl;
            return -1;
    }

    // Ask the user a question
    cout << userName << ", what is" << " " << leftNum << " " << mathSymbol << " " << rightNum << " = ?" << endl;
    cout << endl;
    // gets users input
    cin >> userAnswer;
    cout << endl;

    //Check answer
    if (userAnswer == correctAnswer) {
        // Code to use if the answer is correct
        cout << userName << ",that is correct!" << endl;
        cout << "Good job!" << endl;
    } else {
        // Code to use if the answer is wrong
        cout << "Wrong answer! The correct answer was" << " " << correctAnswer << endl;
    }
    cout << endl;
    // closes the program
    cout << "Thanks for playing!" << endl;
    cout << "This is all the program does for now " << endl;
    cout << "Check back for more updates." << endl;

    return 0;
}
