#pragma once
#include <iostream>

#include "DuckBase.h"
#include "../Strategies/NoFly.h"

namespace DuckStrategy {

class RubberDuck : public DuckBase {
// TODO: Cannot fly
	public:
		RubberDuck() {
			delete this->flyStrategy;
			flyStrategy = new NoFly;
		}

		void Display(){
			std::cout << "I am Rubber Duck!" << std::endl;
		}
};

}