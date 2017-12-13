#include <iostream>
#include "Parent.h"

Parent::Parent(string name) {
	this->name = name;
	string childName = "ChildOf" + name;
	this->child = make_unique<Child>(childName);
}

Parent::Parent(const Parent& other) {
	cout << "Parent cctor" << endl;
	this->name = other.name;
	string childName = other.child->getName().append(" (copy)");
	this->child = make_unique<Child>(childName);
}

Parent::Parent(Parent && other) NOEXCEPT
{
	cout << "Move cctor" << endl;
	name = move(other.name);
	child = move(other.child);

	other.name = "no_name";
	other.child = nullptr;
}

Parent::~Parent() {
}

Parent& Parent::operator=(const Parent& other) {
	cout << "Parent assignment" << endl;

	if (this == &other) {
		return *this;
	}

	this->name = other.name;
	string childName = other.child->getName().append(" (copy)");
	this->child = make_unique<Child>(childName);

	return *this;
}

ostream& operator<<(ostream& os, const Parent& parent) {
	os << "name: " << parent.name << " child: ";
	if (parent.child != nullptr)
		os << *parent.child;
	else
		os << "NULLPTR";
	return os;
}

void Parent::Rename(string _name) {
	name = _name;
}