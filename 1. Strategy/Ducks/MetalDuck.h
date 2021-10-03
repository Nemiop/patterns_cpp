#pragma once
#include <iostream>

#include "DuckBase.h"
#include "../Strategies/NoFly.h"

namespace DuckStrategy {
// TODO: cannot swim nor fly
class MetalDuck : public DuckBase {
	public:
		MetalDuck(){
			delete this->flyStrategy;
			flyStrategy = new NoFly();
		}

		void Display(){
			std::cout << "I am heavy Metal Duck!" << std::endl;
		}
};

}