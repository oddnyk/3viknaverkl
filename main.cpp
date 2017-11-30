//
//  main.cpp
//  textaskrar2
//
//  Created by Oddný Karen Arnardóttir on 29/11/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    string str;
    string invalid_car = "\\";
    ofstream fout;
    bool run = true;
    
    fout.open("/Users/OddnyKaren/Desktop/skrifaiskra.txt", ios::app);
    
    if (fout.is_open()) {
        
        do {
            getline(cin, str);
            for (unsigned int i = 0; i < str.length(); i++) {
                for (unsigned int j = 0; j < invalid_car.length(); j++) {
                    if (str[i] == invalid_car[j]) {
                      fout.close();
                      run = false;
                    }
                }
            }
            fout << str << endl;
        
        } while (run);
    
    }
    else {
        cout << "Unable to open file" << endl;
    }
    
    fout.close();
    
    return 0;
}
