#pragma once
#include "FlyingStrategy.h"

namespace DuckStrategy {
	class NoFly : public FlyingStrategy {
		public: 
			void Fly() {}
	};
}