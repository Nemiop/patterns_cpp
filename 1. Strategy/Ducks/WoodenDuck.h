#pragma once
#include <iostream>

#include "DuckBase.h"

namespace DuckStrategy {

class WoodenDuck : public DuckBase {
	// TODO: Cannot Fly
	public:
		void Display() {
			std::cout << "I am Wooden Duck!" << std::endl;
		}
};

}