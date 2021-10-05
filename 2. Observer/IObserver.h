/// Observer interface

#pragma once
#include <string>

namespace patternObserver {
	class IObserver {
	private:
		std::string news;
	public:
		virtual void  UpdateNews(const std::string& news)=0;
		virtual void Display()=0; // Should be in another interface ! But ommit it to be shorter
	};

}