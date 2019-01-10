#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream f("hello.txt");
	if (!f)
	{
		cout << "Fehler beim Oeffnen der Datei" << endl;
	}
	else
	{
		int32_t i;
		if (f >> i)
		{
			cout << i << endl;
		} else {
			cout << "Fehler beim Arbeiten mit hello.txt" << endl;
		}
	}
	return 0;
}