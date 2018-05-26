#pragma once
class DATA_GETTER 
{
public:
	void get_data(file* file_to_fill, string direction);
private:
	void connect(string direction);
	void disconnect();
};