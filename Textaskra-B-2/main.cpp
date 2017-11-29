#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int MAX = 10;


void inputstr(string str) {
    ofstream fout;
    fout.open("textOutput.txt", ios::app);

    cin >> str;
    fout << str << endl;
    fout.close();
}

void printInput(string str) {
    ifstream fin;
    fin.open("textOutput.txt");
    if (fin.is_open()) {
        while(!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
    }
    else {
        cout << "File not open" << endl;
    }
    fin.close();
}

char ifcont (){
    cout << "Do you wish to continue (y/n)?";
    char in;
    cin >> in;
    return in;
}

int main()
{
    string str;
    char input = 'y';
        do {
            inputstr(str);
        }while (input != '\\');

    return 0;
}
