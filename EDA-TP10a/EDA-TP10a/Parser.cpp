#include "Parser.h"

Bool PARSER::Parse_data(file* file_to_parse, NEWS_FEED* newsfeed_to_fill) 
{
	bool return_value
	COUT<<"Parsing data..."<<endl;

	look for 404 or 200nosecuanto

		if (404) 
		{
			COUT << "Page data not found." << endl;
			return_value = 0;
		}
		else
		{
			parseo
			COUT << "Page data parsed." << endl;
			return_value = 1;
		}
	return return_value;
}





XML_Parser P;
XML_Status S;
myuserData Ud;
P = XMLParserCreate(NULL);

XML_SetElementHandler(P, StartTag, EndTag);
XML_SetCharacterDataHandler(P, Char Data);
XML_SetUswerData(P, &Ud);

fp = fopen("example.xml", "rb");
if (fp != NULL)
{
	int	filesize = getsize(fp);
	char * buffer = mulloc(filesize * sizeof(char))
		if (buffer != NULL)
		{
			fread(buffer, sifeof(char), filesize, fp)
				XML_Parse(P, buffer, filesize, true)
		}
}
XML_ParseFree(P);
free(buffer);