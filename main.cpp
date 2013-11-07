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

