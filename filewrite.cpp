#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream f("write.txt");
	if (!f) {
		cout << "Fehler beim Oeffnen der Datei!" << endl;
	} else {
		f << "First line" << endl << "Second line" << endl;
	}
}
