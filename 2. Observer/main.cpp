// 2. Observer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Publisher.h"
#include "ObserverFacebook.h"
#include "ObserverTelegram.h"
#include "ObserverTwitter.h"

int main()
{
    using namespace patternObserver;
    
    Publisher* publisher = new Publisher();
    publisher->AddObserver(new ObserverFacebook());
    publisher->AddObserver(new ObserverTelegram());
    publisher->AddObserver(new ObserverTwitter());

    publisher->PublishNews("Hello World of Observers!");  
}
