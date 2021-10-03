#pragma once

namespace DuckStrategy {

class QuackStrategy {
	virtual ~QuackStrategy() {};
	virtual void Quack() = 0;
};
}