#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "cpp string exercise";
	cout << "Sample Input: " << text<<endl;
		for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}
	cout <<"Sample Output:"<< text;
}
