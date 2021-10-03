#pragma once
#include <iostream>

#include "FlyingStrategy.h"

namespace DuckStrategy {
	class FlyingWithWings : public FlyingStrategy {
		void Fly() {
			std::cout << "I'm flying!" << std::endl;
		}
	};
}