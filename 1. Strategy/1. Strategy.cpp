// 1. Strategy.cpp : This file contains the 'main' function
#include <iostream>
#include <vector>

#include "DuckBase.h"
#include "SimpleDuck.h"
#include "ExoticDuck.h"

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

    for (auto duck : ducks) {
        duck->Quack();
        duck->Swim();
        duck->Display();
    }

}