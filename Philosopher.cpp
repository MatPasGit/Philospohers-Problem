#include "Philosopher.h"

int Philosopher::getID() {
	return _id;
}
int Philosopher::getHunger() {
	return _hunger;
}
bool Philosopher::getEating() {
	return _eating;
}

void Philosopher::setID(int id) {
	_id = id;
}
void Philosopher::incHunger() {
	_hunger += 1;
}

void Philosopher::setEating(bool eating) {
	_eating = eating;
}