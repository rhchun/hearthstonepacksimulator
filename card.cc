#include "card.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

static Card::Card default(string type) {
	srand(time(NULL));
	this->type = type;
	this->name = "Deathwing";
	int x = rand()%100000;
	if (x < 69970) {
		this->rarity = "common";
	}
	else if (x >= 69970 && x < 71440) {
		this->rarity = "golden_common";
	}
	else if (x >= 71440 && x < 92840) {
		this->rarity = "rare";
	}
	else if (x >= 92840 && x < 94220) {
		this->rarity = "golden_rare";
	}
	else if (x >= 94220 && x < 98510) {
		this->rarity = "epic";
	}
	else if (x >= 98510 && x < 98820) {
		this->rarity = "golden_epic";
	}
	else if (x >= 98820 && x < 99900) {
		this->rarity = "legendary";
	}
	else {
		this->rarity = "golden_legendary";
	}
}

static Card::Card justincase(string type) {
	srand(time(NULL));
	this->type = type;
	this->name = "Deathwing";
	int x = rand()%28560 + 71440;
	if (x < 92840) {
		this->rarity = "rare";
	}
	else if (x >= 92840 && x < 94220) {
		this->rarity = "golden_rare";
	}
	else if (x >= 94220 && x < 98510) {
		this->rarity = "epic";
	}
	else if (x >= 98510 && x < 98820) {
		this->rarity = "golden_epic";
	}
	else if (x >= 98820 && x < 99900) {
		this->rarity = "legendary";
	}
	else {
		this->rarity = "golden_legendary";
	}
}

void Card::print() {
	cout << this->rarity << ": " << this->name << endl;
}