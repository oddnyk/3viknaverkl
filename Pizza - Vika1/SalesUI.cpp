#include "SalesUI.h"

SalesUI::SalesUI()
{
    //ctor
}

SalesUI::~SalesUI()
{
    //dtor
}

void SalesUI::startUI() {
    char selection = '\0';

    while (selection != 'q'){
        cout << "\t" << "Welcome to Pizza World" << endl << endl;
        cout << "\t" << "Please select occupation: " << endl;

        cout << "o: Make order" << endl;
        cout << "p: Get price" << endl;
        cout << "b: Baker" << endl;
        cout << "d: Delivery" << endl;
        cout << "n: Notes" << endl;
        cout << "q: quit" << endl;

        cin >> selection;
        if (selection == 'o'){
        cout << endl;
        }
        if (selection == 'p'){
        cout << endl;
        }
        if (selection == 'b'){
        cout << endl;
        }
        if (selection == 'd'){
        cout << endl;
        }
        if (selection == 'n'){
        cout << endl;
        }
        else if (selection == 'q'){
        cout << endl;
        }
    }

}

