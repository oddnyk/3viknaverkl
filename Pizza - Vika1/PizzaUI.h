#ifndef PIZZAUI_H
#define PIZZAUI_H
#include "PizzaRepository.h"

class PizzaUI
{
    public:
        PizzaUI();
        virtual ~PizzaUI();
        void startUI();


    protected:

    private:
        PizzaRepository pizzaRepo;
};

#endif // PIZZAUI_H
