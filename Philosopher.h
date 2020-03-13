#pragma once
class Philosopher
{
private: 
	int _id; 
	int _hunger;
	bool _eating;

public: 
	int getID();
	int getHunger();
	bool getEating();

	void setID(int id);
	void incHunger();
	void setEating(bool eating);
};

