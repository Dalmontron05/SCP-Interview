//* Main C++ file
/*
TODO: include names in results file

TODO: automatically fail the test once they can no longer pass (maybe have functions return something?)
TODO: "status bar" at the top of the terminal that shows how many questions you've answered, how many you've gotten right, and how many achievments you have.
TODO: add achievments (like the "tell me i'm not the most valuable member of this team" thing from that one scp movie)
TODO: make terminal colored (ANSI escape code)
TODO: make one of the questions with an askii image art
TODO: make obnoxious ding and buzzer sound effects depending on what the user answers on a per question basis
*/



// Imports
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>

#include "main.h"
#include "questions.h"
#include "questions.cpp"

using namespace std;


// Global Variables
bool willRetakeTest = false;


// Functions
int main()
{
    cout << "Hello! This project is a fictional job interview process for the fictional SCP organization. \nIf you're already aware of what it is, you'll be able to express your SCP trivia knowledge. If not, you'll find out everything you need to know about them in the wiki: https://scp-wiki.wikidot.com/about-the-scp-foundation" << endl;

    cout << "Are you ready? (y/n)\n";
    char agreement;
    cin >> agreement;
    cin.ignore(1000, '\n');

    // main 'quiz taking state' of the loop lives here
    do
    {
        if (agreement == 'y' || agreement == 'Y')
        {
            cout << "Then let's begin.\n\n\n";
            introduction();
            question1();
            question2();
            question3();
            question4();
            calculateResults();
        }
        else
        {
         cout << "Exiting...";
        }
    } while ( willRetakeTest == true );
}


void Retry()
{
    cout << "Do you want to try again? (y/n)\n";
    char willRetry;
    cin >> willRetry;
    cin.ignore(1000, '\n');

    if (willRetry == 'y' || willRetry == 'Y')
    {
        willRetakeTest = true;
    }
    else
    {
        willRetakeTest = false;
    }
}

