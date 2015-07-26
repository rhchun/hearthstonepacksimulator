#include "pack.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

Pack::Pack(string type) {
	this->type = type;
	this->first = new Card default(type);
	this->second = new Card default(type);
	this->third = new Card default(type);
	this->fourth = new Card default(type);
	this->fifth = new Card default(type);
	this->common = 0;
	this->golden_common = 0;
	this->rare = 0;
	this->golden_rare = 0;
	this->epic = 0;
	this->golden_epic = 0;
	this->legendary = 0;
	this->golden_legendary = 0;
	this->arcane_dust = 0;
}

void Pack::open(string type, int numpacks) {
	srand(time(NULL));
	for (int i = numpacks; i > 0; i--) {
		this->first.print();
		if (this->first.rarity == "common") {
			this->common++;
		}
		else if (this->first.rarity == "golden_common") {
			this->golden_common++;
		}
		else if (this->first.rarity == "rare") {
			this->rare++;
		}
		else if (this->first.rarity == "golden_rare") {
			this->golden_rare++;
		}
		else if (this->first.rarity == "epic") {
			this->epic++;
		}
		else if (this->first.rarity == "golden_epic") {
			this->golden_epic++;
		}
		else if (this->first.rarity == "legendary") {
			this->legendary++;
		}
		else {
			this->golden_legendary++;
		}
		this->second.print();
		if (this->second.rarity == "common") {
			this->common++;
		}
		else if (this->second.rarity == "golden_common") {
			this->golden_common++;
		}
		else if (this->second.rarity == "rare") {
			this->rare++;
		}
		else if (this->second.rarity == "golden_rare") {
			this->golden_rare++;
		}
		else if (this->second.rarity == "epic") {
			this->epic++;
		}
		else if (this->second.rarity == "golden_epic") {
			this->golden_epic++;
		}
		else if (this->second.rarity == "legendary") {
			this->legendary++;
		}
		else {
			this->golden_legendary++;
		}
		this->third.print();
		if (this->third.rarity == "common") {
			this->common++;
		}
		else if (this->third.rarity == "golden_common") {
			this->golden_common++;
		}
		else if (this->third.rarity == "rare") {
			this->rare++;
		}
		else if (this->third.rarity == "golden_rare") {
			this->golden_rare++;
		}
		else if (this->third.rarity == "epic") {
			this->epic++;
		}
		else if (this->third.rarity == "golden_epic") {
			this->golden_epic++;
		}
		else if (this->third.rarity == "legendary") {
			this->legendary++;
		}
		else {
			this->golden_legendary++;
		}
		this->fourth.print();
		if (this->fourth.rarity == "common") {
			this->common++;
		}
		else if (this->fourth.rarity == "golden_common") {
			this->golden_common++;
		}
		else if (this->fourth.rarity == "rare") {
			this->rare++;
		}
		else if (this->fourth.rarity == "golden_rare") {
			this->golden_rare++;
		}
		else if (this->fourth.rarity == "epic") {
			this->epic++;
		}
		else if (this->fourth.rarity == "golden_epic") {
			this->golden_epic++;
		}
		else if (this->fourth.rarity == "legendary") {
			this->legendary++;
		}
		else {
			this->golden_legendary++;
		}
		if ((this->first.rarity == "common"||this->first.rarity == "golden_common")&&(this->second.rarity == "common"||this->first.rarity == "golden_common")&&(this->third.rarity == "common"||this->first.rarity == "golden_common")&&(this->fourth.rarity == "common"||this->fourth.rarity == "golden_common")) {
			if (this->fifth.rarity != "common" && this->fifth.rarity != "golden_common") {
				this->fifth.print();
				if (this->fifth.rarity == "rare") {
				this->rare++;
				}
				else if (this->fifth.rarity == "golden_rare") {
					this->golden_rare++;
				}
				else if (this->fifth.rarity == "epic") {
					this->epic++;
				}
				else if (this->fifth.rarity == "golden_epic") {
					this->golden_epic++;
				}
				else if (this->fifth.rarity == "legendary") {
					this->legendary++;
				}
				else {
					this->golden_legendary++;
				}
			}
			else {
				this->fifth = new Card justincase(type);
			}
			this->fifth.print();
			if (this->fifth.rarity == "common") {
				this->common++;
			}
			else if (this->fifth.rarity == "golden_common") {
				this->golden_common++;
			}
			else if (this->fifth.rarity == "rare") {
				this->rare++;
			}
			else if (this->fifth.rarity == "golden_rare") {
				this->golden_rare++;
			}
			else if (this->fifth.rarity == "epic") {
				this->epic++;
			}
			else if (this->fifth.rarity == "golden_epic") {
				this->golden_epic++;
			}
			else if (this->fifth.rarity == "legendary") {
				this->legendary++;
			}
			else {
				this->golden_legendary++;
			}
		}
		numpacks--;
		cout << "You have " << numpacks << "number of packs remaining." << endl;
	}
	cout << "You don't have any packs remaining, please buy more packs." << endl;
}

void dust() {
	this->arcane_dust = this->common*5 + this->golden_common*50 + this->rare*20 + this->golden_rare*100 + this->epic*100 + this->golden_epic*400 + this->legendary*400 + this->golden_legendary*1600;
	cout << "You have opened cards worth " << this->arcane_dust << "arcane dusts." << endl;
}