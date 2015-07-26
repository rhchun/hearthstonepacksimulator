#include <iostream>
#include <stdlib.h>
#include "pack.h"
#include <string>
using namespace std;

int main () {
	cout << "To buy packs, please select the type and the number of packs you're buying." << endl;
	cout << "To buy original packs, type og, followed by a space and the number of packs you're buying. (max 60)" << endl;
	cout << "To buy Goblins vs Gnomes packs, type gvg, followed by a space and the number of packs you're buying. (max 60)" << endl;
	cout << "To calculate the amount of arcane dusts, press d." << endl;
	cout << "To exit the program, press x." << endl;
	Pack* p;
	while (true) {
		string command;
		cin >> command;
		if (command == "og") {
			int numpacks;
			cin >> numpacks;
			p->open(command, numpacks);
		}
		else if (command == "gvg") {
			string numpacks;
			cin >> numpacks;
			p->open(command, numpacks);
		}
		else if (command == "d") {
			p->dust();
		}
		else if (command == "x") {
			break;
		}
		else {
			cout << "Invalid command." << endl;
		}
	}
}