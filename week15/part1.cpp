#include <iostream>

using namespace std;

class invalidCharacterExcpeption {};

class invalidRangeException{};

char character(char start, int offset);

char character(char start, int offset)
{
	
}

int main()
{
	char start = ' ';
	int offset = 0;
	bool done = false;
	while (!done)
	{
		cout << "Enter the start character: ";
		cin >> start;
		cout << "Enter the offset: ";
		cin >> offset;
		try
		{
			cout << character(start, offset) << endl;
		}
		catch(invalidCharacterExcpeption e)
		{

		}
		catch (invalidRangeException e)
		{

		}
	}
}