#include <stdio.h>
#include <string.h>
#include "News.h"
#include "Display.h"
#include "Parser.h"
#include "Data_getter.h"

int main()
{
	string direction;
	FILE * FP = NULL;
	fopen( FP , "r");
	NEWS_FEED our_newsfeed;
	DATA_GETTER this_data_getter;
	DISPLAY this_display;
	PARSER our_parser;
	this_data_getter.get_data(FP, direction);
	if (our_parser.Parse_data(FP, &our_newsfeed))
	{
		this_display.show_newsfeed(our_newsfeed);
	}	
	fclose(fp);


}