#include "AdminUI.h"

AdminUI::AdminUI()
{
    //ctor
}

AdminUI::~AdminUI()
{
    //dtor
}
void AdminUI::startUI(){
    char selection = '\0';

    while (selection != 'q'){

        cout << "p: pizzas" << endl;
        cout << "w: write" << endl;
        cout << "r: read" << endl;
        cout << "q: quit" << endl;

        cin >> selection;
        if (selection == 'p'){
            PizzaUI pizzaui;
            pizzaui.startUI();
        cout << endl;
        }
        if (selection == 'w'){
        cout << endl;
        }
        else if (selection == 'r'){
        cout << endl;
        }
    }
}
