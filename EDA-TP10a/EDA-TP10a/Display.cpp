#include "Display.h"

void DISPLAY::show_newsfeed(NEWS_FEED) 
{
	COUT << "Showing newsfeed..." << endl;
	bool run = 1;
	event ev = no_event;
	while (run) 
	{
		ev = get_event();
		if (ev == quit_event) 
		{
			run = 0;
		}
		dispatch_event(ev);
	}

}


event DISPLAY::get_event() 
{

}

void DISPLAY::dispatch_event(event ev)
{

}