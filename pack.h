#include "card.h"
#include <string>
using namespace std;

class Pack {
public:
	string type;
	Card first;
	Card second;
	Card third;
	Card fourth;
	Card fifth;
	int common;
	int golden_common;
	int rare;
	int golden_rare;
	int epic;
	int golden_epic;
	int legendary;
	int golden_legendary;
	int arcane_dust;
	Pack(string type);
	void open(string type, int numpacks);
	void dust();
};