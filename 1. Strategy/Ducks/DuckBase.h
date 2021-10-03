#pragma once
#include <iostream>

namespace DuckStrategy {

class DuckBase {
	public:
		void Quack() {
			std::cout << "Quack! Quack!" << std::endl;
		}

		void Swim() {
			std::cout << "I'm swimming!" << std::endl;
		}

		void Fly() {
			std::cout << "I'm flying!" << std::endl;
		}

		virtual void Display()=0;
};

}