#include <string>
using namespace std;

class Card {
public:	
	string type;
	string name;
	string rarity;
	static Card default(string type);
	static Card justincase(string type);
	void print();
};