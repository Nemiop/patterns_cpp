#pragma once
#include <iostream>

#include "DuckBase.h"


namespace DuckStrategy {

class SimpleDuck : public DuckBase {
	public:
		void Display() {
			std::cout << "I am a Simple duck!" << std::endl;
		}
};

}
