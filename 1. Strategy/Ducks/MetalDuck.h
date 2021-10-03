#pragma once
#include <iostream>

#include "DuckBase.h"

namespace DuckStrategy {
// TODO: cannot swim nor fly
class MetalDuck : public DuckBase {
	public:
		void Display(){
			std::cout << "I am heavy Metal Duck!" << std::endl;
		}
};

}