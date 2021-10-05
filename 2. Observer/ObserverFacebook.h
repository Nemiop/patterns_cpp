#pragma once
#include <iostream>
#include <string>
#include "IObserver.h"

namespace patternObserver {
	class ObserverFacebook : public IObserver{
	private:
		std::string news;

	public:
		void UpdateNews(const std::string& news) override {
			this->news = news;
			Display();
		}

		void Display() override {
			std::cout << "News in Facebook: " << news << std::endl;
		}
	};
}
