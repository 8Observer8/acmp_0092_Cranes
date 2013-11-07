/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on November 7, 2013, 4:18 PM
 */

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

struct Children {
    int Petya;
    int Katya;
    int Serezha;
};

/**
 * Return the number of cranes for each child
 * 
 * @param number The number of cranes
 * @return The number of cranes for each child
 */

/*
 x + y + z = a (1)
x + z = y/2 (2)
x = z

(1): z + y + z = a
2*z + y = a
2*z = a - y
(2): z + z = y/2
2*z = y/2
z = y/4

a - y = y/2
y + y/2 = a
y*3/2 = a
y = a*2/3

x = z = y/4 = a/6
 */
Children cranes(int number) {
    Children c;
    
    c.Katya = number * 2.0 / 3.0;
    c.Petya = number / 6.0;
    c.Serezha = c.Petya;
    
    return c;
}

int main(int argc, char** argv) {
    ifstream in;
    string inFileName = "input.txt";
    in.open(inFileName.c_str());
    if (!in.is_open()) {
        cerr << "Error: could not open file: " << inFileName.c_str() << endl;
        return 1;
    }

    ofstream out;
    string outFileName = "output.txt";
    out.open(outFileName.c_str());
    if (!out.is_open()) {
        cerr << "Error: could not open file: " << outFileName.c_str() << endl;
        return 1;
    }
    
    int number;
    if (in >> number) {
        Children c;
        c = cranes(number);
        out << c.Petya << " " << c.Katya << " " << c.Serezha << endl;
    } else {
        cerr << "Error: incorrect data in the file: " << inFileName.c_str() << endl;
        return 1;
    }
    return 0;
}

