#pragma once

#include <string>
#include <ostream>
#include <iostream>

using namespace std;

class Child {
public:
	Child(string name);
	Child(const Child& other);
	~Child();
	string getName();

private:
	string name;

public:
	friend ostream& operator<<(ostream& os, const Child& child);
};
