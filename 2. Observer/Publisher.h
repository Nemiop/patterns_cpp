#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "IObserver.h"

namespace patternObserver {
	class Publisher {
	private:
		std::vector<IObserver*> observers;

	public:
		void AddObserver(IObserver *newObserver) {
			observers.push_back(newObserver);
		}

		void PublishNews(std::string news) {
			for (auto observer : observers) {
				observer->UpdateNews(news);
			}
		}
	};
}