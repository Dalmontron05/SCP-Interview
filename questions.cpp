//* Contains interview questions and calculateResults functions

// Imports
#include "questions.h"
#include "functions.h"
#include "functions.cpp"

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;


// Classes
class Results
{
    public:
        bool question1 = false, question2 = false, question3 = false, question4 = false;
        int numberCorrect = 0;
};
Results answers;


// Functions
void question1()
{
    string s, c, p;

    cout << "What does the acronym SCP stand for?\n\n";

    // Asks user for answer, then makes sure that answer is lowercase
    cout << "The S stands for: ";
    cin >> s;
    cin.ignore(1000, '\n');
    s = toLower(s);

    cout << "The C stands for: ";
    cin >> c;
    cin.ignore(1000, '\n');
    c = toLower(c);

    cout << "The P stands for: ";
    cin >> p;
    cin.ignore(1000, '\n');
    p = toLower(p);


    // checks if all 3 strings are correct. an incorrect answer will print an explanation to the answer
    if (s == "secure" && c == "contain" && p == "protect")
    {
        cout << "\nCorrect.";
        answers.numberCorrect++;
        answers.question1 = true;
    }
    else
    {
        cout << "\nIncorrect. SCP stands for Secure, Contain, and Protect";
    }
}


void question2()
{
    char answer;

    cout << "\n\n\nThe 'Safe' object class means the SCP in question does not pose a threat\n";
    cout << "True or False? (enter 't' for true or 'f' for false): ";
    cin >> answer;
    cin.ignore(1000, '\n');
    // answer = toLower(answer);

    if (answer == 'f')
    {
        cout << "\nCorrect.";
        answers.numberCorrect++;
        answers.question2 = true;
    }
    else
    {
        cout << "\nIncorrect. The 'Safe' SCP object class designation only means that the SCP is relatively easy to contain. It has nothing to do with how much of a threat the SCP poses";
    }
}


void question3()
{
    char answer;

    // Question 3
    cout << "\n\n\nWhich of the following object class designations best describes an SCP that is used to contain another SCP?\n\n";

    cout << "A) Thaumiel\n";
    cout << "B) Apollyon\n";
    cout << "C) Archon\n";
    cout << "D) Ticonderoga\n\n";

    cout << "Enter the corresponding multi-choice letter: ";
    cin >> answer;
    cin.ignore(1000, '\n');
    // answer = toLower(answer);

    if (answer == 'a')
    {
        cout << "\nCorrect.";
        answers.numberCorrect++;
        answers.question3 = true;
    }
    else
    {
        cout << "\nIncorrect. The correct answer was Thaumiel.";
    }
}


void question4()
{
    int answer;

    cout << "\n\n\nWhat's the secret password? ";
    cin >> answer;
    cin.ignore(1000, '\n');

    if (answer == 1234)
    {
        cout << "\nCorrect. Achievement unlocked! 'Tell me I'm not the most valuable member of this team.'";
        answers.numberCorrect++;
        answers.question4 = true;
    }
    else
    {
        cout << "\nIncorrect. Don't worry, that question was extra credit. I won't count it against you";
    }
}

// calculates and saves results to file
void calculateResults()
{
    // Results
    if (answers.numberCorrect >= 2)
    {
        cout << "\n\n\nCongratulations! You successfully passed the test.";
    }
    else
    {
        cout << "\n\n\nSorry, you failed the test. You answered " << answers.numberCorrect << " questions correctly out of 4.";
    }

    // Save results to file
    ofstream outputFile;
    outputFile.open("results.txt");
    outputFile << "Results:\n";
    outputFile << "Question 1: " << (answers.question1? "Correct" : "Incorrect") << "\n";
    outputFile << "Question 2: " << (answers.question2? "Correct" : "Incorrect") << "\n";
    outputFile << "Question 3: " << (answers.question3? "Correct" : "Incorrect") << "\n";
    outputFile << "Question 4: " << (answers.question4? "Correct" : "Incorrect") << "\n";
    outputFile << "Number Correct: " << answers.numberCorrect << "/4\n";
    outputFile.close();
}

