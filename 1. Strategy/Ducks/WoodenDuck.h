#pragma once
#include <iostream>

#include "DuckBase.h"
#include "../Strategies/NoFly.h"

namespace DuckStrategy {

class WoodenDuck : public DuckBase {
	// TODO: Cannot Fly
	public:
		WoodenDuck() {
			delete this->flyStrategy;
			flyStrategy = new NoFly();
		}

		void Display() {
			std::cout << "I am Wooden Duck!" << std::endl;
		}
};

}