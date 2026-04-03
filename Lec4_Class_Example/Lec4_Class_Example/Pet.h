#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
	string nmae;
	int age;
	string type;
public:
	//持失切
	Pet(string n, int a, string t)
		: name(n), age(a), type(t) { }
	string getName() {
		return name;
	}
	//Get Name
	int getAge() {
		return age;
	}
	//Get Age
	string getType()
	{
		return type;
	}
	//Get type
};

class Puppy : public Pet {
private:
	string breed
public:
	//持失切
	Puppy(string n, int a, string t, string b)
		: Pet(n, a, t), breed(b) {

	}
	//get breed

};