#pragma once
#include <iostream>

#include "DuckBase.h"


namespace DuckStrategy {

class ExoticDuck : public DuckBase {
	public:
		void Display() {
			std::cout << "I am Exotic Duck!" << std::endl;
		}
};

}