#pragma once
#include <iostream>

#include "../Strategies/FlyingStrategy.h"
#include "../Strategies/FlyingWithWings.h"

namespace DuckStrategy {

class DuckBase {
	protected: 
		FlyingStrategy *flyStrategy;

	public:
		DuckBase() {
			flyStrategy = new FlyingWithWings();
		}


		void Quack() {
			std::cout << "Quack! Quack!" << std::endl;
		}

		void Swim() {
			std::cout << "I'm swimming!" << std::endl;
		}

		void Fly() {
			flyStrategy->Fly();
		}

		virtual void Display()=0;
};

}