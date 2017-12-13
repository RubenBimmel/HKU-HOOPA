// ParentChildPtr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include "Parent.h"
#include <memory>
#include <utility>

using namespace std;

Parent renameParent(Parent p, string name) {
	p.Rename(name);
	return p;
}

int main() {

	Parent* p1 = new Parent("Parent1");
	cout << "P1:" << *p1 << endl;

	Parent* p2 = new Parent(*p1); // roept de copy constructor aan
	cout << "P2:" << *p2 << endl;

	Parent* p3 = new Parent("Parent3");
	cout << "P3:" << *p3 << endl;

	*p3 = *p1; // roept de assignment operator aan
	cout << "P3:" << *p3 << endl;

	*p1 = renameParent(*p1, "Parent_Renamed");
	cout << "P1:" << *p1 << endl;

	delete p1;
	delete p2;
	delete p3;

	cout << endl;

	shared_ptr<Parent> sp1 = make_shared<Parent>("SharedParent1");
	cout << *sp1 << " usecount: " << sp1.use_count() << endl;
	{
		shared_ptr<Parent> sp2 = make_shared<Parent>("SharedParent2");
		cout << *sp2 << " usecount: " << sp2.use_count() << endl;
		shared_ptr<Parent> sp3 = sp1;
		cout << *sp3 << " usecount: " << sp3.use_count() << endl;
	}
	cout << " usecount: " << sp1.use_count() << endl;

	return 0;
}