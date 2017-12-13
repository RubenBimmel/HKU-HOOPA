#pragma once

#include <string>
#include <ostream>
#include "Child.h"
#include <memory>

#ifndef _MSC_VER
#define NOEXCEPT noexcept
#else
#define NOEXCEPT
#endif

using namespace std;

class Parent {
public:
	Parent(string name);

	Parent(const Parent& other);

	Parent(Parent&& other);

	virtual ~Parent();

	Parent& operator=(const Parent& other);

	friend ostream& operator<<(ostream& os, const Parent& parent);

	void Rename(string _name);

private:
	string name;
	unique_ptr<Child> child;
};