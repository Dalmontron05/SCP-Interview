//* Main C++ file
/*
TODO: overload toLower with char eqivalent
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
int achievements, totalAchievments = 1;
string firstName, lastName;


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
        if (agreement == 'y')
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


void introduction()
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "-------------------------+##################--------------------------" << endl;
    cout << "------------------------.#----------------.##-------------------------" << endl;
    cout << "-------------------------#------------------#-------------------------" << endl;
    cout << "------------------------#+------------------##------------------------" << endl;
    cout << "---------------------###----------------------###---------------------" << endl;
    cout << "------------------##-----------------------------+##------------------" << endl;
    cout << "----------------##-.-------------###+.------------.-##----------------" << endl;
    cout << "--------------##---------.--+############+-.----------##--------------" << endl;
    cout << "------------##----------+####################+----------#+------------" << endl;
    cout << "-----------#+---------######-----###+----+######---------##-----------" << endl;
    cout << "----------#+--------#####--------###+--------#####--------+#----------" << endl;
    cout << "---------#--------#####..-------.###+--------.-####+-------+#---------" << endl;
    cout << "--------#+.----.-####------------####------------####-------##--------" << endl;
    cout << "-------##------.####-----------#######+-----------####-------#--------" << endl;
    cout << "-------#+-----.+###-------------#####+.------------###-------##-------" << endl;
    cout << "-------#-------###---------------####-------------.+###.------#-------" << endl;
    cout << "------+#------+###----------------#+----------------###-------#+------" << endl;
    cout << "------#+------+###----------------------------------###+------#+------            Secure, Contain," << endl;
    cout << "------#+------+###----------------------------------###+------#+------                Protect" << endl;
    cout << "------#-.-----+###------------++#+--#+++------------###--------#------" << endl;
    cout << "-----#+--------###-.-----+#######----#######------.+###--------##-----" << endl;
    cout << "---##---------.+###------#######-.----#######------###-----------##---" << endl;
    cout << "-+#-------------####--#########--------#########--####.------------##-" << endl;
    cout << "--#+-------------########-.--#----------#----########-------------+#--" << endl;
    cout << "---#+-----------#######------------------------#######----------.+#---" << endl;
    cout << "----##----------###+#####--------------------#####+###----------##----" << endl;
    cout << "-----##---------------######--------------######---------------##-----" << endl;
    cout << "------##----------------#####################+----------------##------" << endl;
    cout << "-------##-------------------##############-------------------##-------" << endl;
    cout << "--------+#----.---------------------------------------------#+--------" << endl;
    cout << "--------.-#####++##+.------------------------------#########----------" << endl;
    cout << "--------------------####---.------------------+###----...-------------" << endl;
    cout << "-------------------------####+---.------+####+------------------------" << endl;
    cout << "--------------------------------+####+--------------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl << endl; 


    // Asks for name
    cout << "Enter your name\n";
    cout << "First Name: ";
    cin >> firstName;
    cin.ignore(1000, '\n');

    cout << "Last Name: ";
    cin >> lastName;
    cin.ignore(1000, '\n');


    cout << "\nHello " << firstName << ", Welcome to the SCP Foundation's hiring process.\n";


    cout << "Do to the secrecy of this organization, we will access how prepared you came to this interview with some trivia about us.\n\n";
}


void Retry()
{
    cout << "Do you want to try again? (y/n)\n";
    char willRetry;
    cin >> willRetry;
    cin.ignore(1000, '\n');

    if (willRetry == 'y')
    {
        willRetakeTest = true;
    }
    else
    {
        willRetakeTest = false;
    }
}

