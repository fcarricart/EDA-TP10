#pragma once

#include "News.h"

class DISPLAY 
{
public:
	void show_newsfeed(NEWS_FEED);
private:
	event get_event();
	void dispatch_event(event ev);
};