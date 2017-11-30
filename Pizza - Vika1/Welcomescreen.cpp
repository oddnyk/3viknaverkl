#include "Welcomescreen.h"

Welcomescreen::Welcomescreen()
{
    //ctor
}

Welcomescreen::~Welcomescreen()
{
    //dtor
}
void Welcomescreen::welcomeUI(){
    char selection = '\0';

    while (selection != 'q'){
        cout << "-----------------" << endl;
        cout << "  Pizza World " << endl;
        cout << "-----------------" << endl;
        cout << "Please select occupation: " << endl;

        cout << "a: Admin" << endl;
        cout << "s: Salesperson" << endl;
        cout << "b: Baker" << endl;
        cout << "d: delivery" << endl;
        cout << "q: quit" << endl;

        cin >> selection;
        if (selection == 'a'){
            MainUI mainui;
            mainui.startUI();

        cout << endl;
        }
        if (selection == 's'){
        cout << endl;
        }
        if (selection == 'd'){
        cout << endl;
        }
        else if (selection == 'q'){
        cout << endl;
        }
    }

}
