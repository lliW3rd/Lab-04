// October 8th 2018
// William Kirkpatrick
// Lab 03
// Worked with Brandon Ensley

#include "stdafx.h"
#include "VectorDriver.h"
#include "algorithm"

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;


	cout << endl;


	vector<short> myvector;

	add_numbers(myvector);
	cout << "Testing add_numbers function" << endl;
	cout << endl;

	for (unsigned i = 0; i < myvector.size(); i++)
	{
		cout << myvector[i] << endl;
	}
	cout << endl;
	cout << "----------------------------" << endl;

	cout << "Testing print_even function" << endl;
	cout << endl;
	print_even(myvector); 
	cout << endl;
	cout << "----------------------------" << endl;

	cout << "Testing is_present function" << endl;
	cout << endl;
	cout << is_present(myvector, 24464);
	cout << endl;
	cout << "---------------------------" <<endl;

	cout << "New vector (not sorted)" << endl;
	cout <<  endl;
	vector<int> sortvec = { 2, 1, 5, 10, 8 };
	for (int i = 0; i < sortvec.size(); i++)
	{
		cout << sortvec[i] << endl;
	}

	cout << endl;
	cout << "-----------------------" << endl;
	cout << "New vector now sorted with sort function" << endl;
	cout <<  endl;
	std::sort(sortvec.begin(), sortvec.end());

	print_sort(sortvec);

	return 0;
	system("pause");
}