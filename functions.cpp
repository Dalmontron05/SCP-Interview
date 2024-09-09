//* General functions

// Imports
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>

#include "functions.h"

using namespace std;

// Functions
// turns strings to lowercase
string toLower(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

