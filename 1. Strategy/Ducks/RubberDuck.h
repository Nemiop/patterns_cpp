#pragma once
#include <iostream>

#include "DuckBase.h"

namespace DuckStrategy {

class RubberDuck : public DuckBase {
// TODO: Cannot fly
	public:
		void Display(){
			std::cout << "I am Rubber Duck!" << std::endl;
		}
};

}