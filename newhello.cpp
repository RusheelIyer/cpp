#include <iostream>

#include <string>
using namespace std;

int main()
{
	string s = "hello";
	s.push_back('!');
	s = s + "World";

	cout << s << endl;
	return 0;
}