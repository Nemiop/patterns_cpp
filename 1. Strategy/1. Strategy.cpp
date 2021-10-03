// 1. Strategy.cpp : This file contains the 'main' function
#include <iostream>
#include <vector>

#include "Ducks/DuckBase.h"
#include "Ducks/SimpleDuck.h"
#include "Ducks/ExoticDuck.h"
#include "Ducks/WoodenDuck.h"
#include "Ducks/RubberDuck.h"
#include "Ducks/MetalDuck.h"

int main()
{
    using namespace std;
    using namespace DuckStrategy;

    /*
    SimpleDuck simple = SimpleDuck();
    ExoticDuck exotic = ExoticDuck();

    DuckBase* duck1 = &simple;
    DuckBase* duck2 = &exotic;

    duck1->Display();
    */

    vector<DuckBase*> ducks;
    ducks.push_back(new SimpleDuck());
    ducks.push_back(new ExoticDuck());
    ducks.push_back(new WoodenDuck());
    ducks.push_back(new RubberDuck());
    ducks.push_back(new MetalDuck());

    for (auto duck : ducks) {
        duck->Display();
        duck->Quack();
        duck->Swim();
        duck->Fly();
        cout << "\n";
    }

}