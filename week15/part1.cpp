// Cooper Ramey
// CIS 1202
// 12/4/2022
#include <iostream>

using namespace std;

class invalidCharacterExcpeption {
	private:
		string reason;
	public:
		invalidCharacterExcpeption(string r)
		{
			reason = r;
		}
		string getValue()
		{
			return reason;
		}
};

class invalidRangeException{
	private:
		string reason;
	public:
		invalidRangeException(string r)
		{
			reason = r;
		}
		string getValue()
		{
			return reason;
		}
};

char character(char start, int offset);

char character(char start, int offset)
{
	if (isalpha(start) == 0) // isalpha returns 0 if false, 1024 if true (i don't know why)
	{
		throw invalidCharacterExcpeption("Invalid character, try again!");
	}
	start = char(start + offset);
	if (isalpha(start) == 0)
	{
		throw invalidRangeException("Invalid offset, try again!");
	}
	return start;
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
			done = true;
		}
		catch(invalidCharacterExcpeption e)
		{
			cout << e.getValue() << endl;
		}
		catch (invalidRangeException e)
		{
			cout << e.getValue() << endl;
		}
	}
}