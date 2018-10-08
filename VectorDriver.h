// October 8th 2018
// William Kirkpatrick
// Lab 03
// Worked with Brandon Ensley
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// TODO: implement add_numbers
// adds 10 random numbers to a given vector
void add_numbers(vector<short> &data) {
	
	for (unsigned i = 0; i < 10; i++) {
		data.push_back(rand());
	}
}
// TODO: implement print_even
// prints out only the even elements in a given vector (i.e 0, 2, 4)
void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (unsigned i = 1; i < data.size() - 1; i++) {
			i++;
			cout << "," << data.at(i);
		}
		cout << ">";
	}
		
	}
	
// TODO: implement is_present
// checks to see if the given vector contains a given value (if not return false, else return true)
bool is_present(const vector<short> &data, short value) {
	std::vector<short>::const_iterator iter = data.begin();

	while (iter != data.end()) {

		if (value == *iter) {
			return true;
		}
			

		iter++;
	}
	return false;
}




// TODO: implement std::sort function
// prints out the sorted vector
void print_sort(const vector<int> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
		
	}






#pragma once
