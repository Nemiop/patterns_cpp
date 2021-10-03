#pragma once

namespace DuckStrategy {

class FlyingStrategy {
	public:
		virtual ~FlyingStrategy() {};
		virtual void Fly() = 0;
};
}
