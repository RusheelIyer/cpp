#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream f("hello.txt");
	if (!f)
	{
		cout << "Fehler beim Oeffnen der Datei" << endl;
	}
	else
	{
		string i;
		if (f >> i)
		{
			cout << i << endl;
		} else {
			cout << "Fehler beim Arbeiten mit hello.txt" << endl;
		}
	}
	return 0;
}