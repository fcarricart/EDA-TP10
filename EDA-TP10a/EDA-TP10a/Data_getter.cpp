#include "Data_getter.h"

void DATA_GETTER::get_data(file* file_to_fill, string direction) 
{
	COUT << "Connecting..." << endl;
	connect(direction);
	COUT << "Connected." << endl;
	
	download stuff;

	COUT << "Data gotten, disconnecting..." << endl;
	disconnect();
	COUT << "Disconnected." << endl;
}

void DATA_GETTER::connect(string direction) 
{

}

void DATA_GETTER::disconnect() 
{

}