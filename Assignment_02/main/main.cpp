// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <numeric>

#include <vector>
#include <string>

using namespace std;

template <typename T> void printVector(vector<T> vec, string name) {
	cout << "Vector: " << name << endl;
	for (auto it = vec.begin(); it < vec.end(); it++) {
		cout << "  " << *it << endl;
	}
	cout << endl;
}

bool isNegative(double x) { return x <= 0.0;}
bool isEven(double x) { return (fmod(x, 2) == 0); }

int main() {
	vector<string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	
	// 1) de vector in 2 nieuwe vectoren te splitsen, 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
	vector<string> colours_1 = colours;
	
	sort(colours_1.begin(), colours_1.end());                // sort colors

	vector<string>::iterator it;                             // find position of purple
	it = find(colours_1.begin(), colours_1.end(), "purple");

	vector<string> colours_1_a(colours_1.begin(), it);       // left side of purple
	vector<string> colours_1_b(++it, colours_1.end());       // right sid of purple
	
	printVector(colours_1_a, "colours 1a");
	printVector(colours_1_b, "colours 1b");

	// 2) alle elementen UPPERCASE te maken.
	vector<string> colours_2 = colours;
	for (auto it2 = colours_2.begin(); it2 < colours_2.end(); it2++) {
		transform((*it2).begin(), (*it2).end(), (*it2).begin(), toupper);
	}
	printVector(colours_2, "colours 2");

	// 3) alle dubbele te verwijderen
	vector<string> colours_3 = colours;
	sort(colours_3.begin(), colours_3.end());              // sort
	auto it3 = unique(colours_3.begin(), colours_3.end()); // find duplicates
	colours_3.erase(it3, colours_3.end());                 // remove duplicates

	printVector(colours_3, "colours 3");

	vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)

	// 1) alle negatieve elementen te verwijderen
	vector<double> numbers_1 = numbers;

	sort(numbers_1.begin(), numbers_1.end());                             // sort
	auto it4 = remove_if(numbers_1.begin(), numbers_1.end(), isNegative); // find nagative
	numbers_1.erase(it4, numbers_1.end());                                // remove negative

	printVector(numbers_1, "numbers 1");

	// 2) voor alle elementen te bepalen of ze even of oneven zijn
	vector<double> numbers_2 = numbers;

	sort(numbers_2.begin(), numbers_2.end());                         // sort
	auto it5 = remove_if(numbers_2.begin(), numbers_2.end(), isEven); // find even
	numbers_2.erase(it5, numbers_2.end());                            // remove even

	printVector(numbers_2, "numbers 2");
	
	// 3) de som, het gemiddelde, en het product van alle getallen te berekenen
	double sum = accumulate(numbers.begin(), numbers.end(), 0.0);
	double average = sum / numbers.size();                            // Ik kon niet overal algorithmes voor vinden..
	double product = 1.0;
	for (auto it6 = numbers.begin(); it6 < numbers.end(); ++it6) {
		product *= *it6;
	}

	cout << setprecision(10) << "sum: " << sum << endl;
	cout << "average: " << average << endl;
	cout << "product: " << product << endl;

	return 0;
}

