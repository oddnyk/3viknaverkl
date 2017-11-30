//
//  main.cpp
//  Superhero.a
//
//  Created by Oddný Karen Arnardóttir on 29/11/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include <iostream>
#include "superhero.hpp"

int main() {
    
    Superhero superhero;
    superhero.set_verbose(true);
    cin >> superhero;
    
    
    ofstream fout;
    fout.open("/Users/OddnyKaren/Desktop/superhero.txt",ios::app);
    
    superhero.set_verbose(false);
    
    fout << superhero;
    fout.close();
    
    
    Superhero superhero2;
    
    ifstream fin;
    fin.open("/Users/OddnyKaren/Desktop/superhero.txt");
    
    superhero2.set_verbose(false);
    
    if(fin.is_open()) {
        fin >> superhero2;
    }
    
    else {
        cout << "Unable to open file" << endl;
    }
    
    superhero2.set_verbose(true);
    
    cout << superhero2;
    
    return 0;
}
