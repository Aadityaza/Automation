// Artical search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
using namespace std;

void open_opera(string request) {
    string command = "start opera https://www.google.com/search?q=";
    command= command + request;
    cout << command;

    system(command.c_str());
}
int main()
{
    std::cout << "Hello World!\n";
    open_opera("musa");

    //opening and reading csv file
    fstream newfile;
    newfile.open("metadata.csv", ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()) { //checking whether the file is open
        string tp;
        while (getline(newfile, tp)) { //read data from file object and put it into string.
            cout << tp << "\n"; //print the data of the string
        }
        newfile.close(); //close the file object.
    }


}

