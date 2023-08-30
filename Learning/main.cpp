#include <iostream>
#include <vector>
#include <array> 
#include <string>
#include <time.h>
#include "classes.h"
using namespace std;

//cntrl K cntrl D

void function(void) {
	std::cout << "Function called." << std::endl;
}

int* sorted_array(int arr[], int size) {
	int temp;
	for (int i = 0; i < size;i++) {
		for (int j = i + 1;j < size;j++) {
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return arr;
}


int main() {

	//classes execution
	/*
	Employee employee1;

	cout << "Enter your name " << endl;
	cin >> employee1.Name;

	cout << "Enter your Age " << endl;
	cin >> employee1.Age;

	cout << "the Name you entered is :  " << employee1.Name << " and the the Age is  " << employee1.Age << " years old!" << endl;

	Developper developper;

	cout << "My salary as an employee is  " << employee1.Salary() << endl;
	cout << "My salary as a developper is  " << developper.Salary() << endl;
	*/


	/*
		int a, b, c;
	cout << "Enter the length of the vector" << endl;

	cin >> a;


	vector <int> vector;

	for (int i = 0; i <= a; ++i) {
		vector.push_back(i);
		cout << vector[i];
	}
	*/



	/*
	int *a;

	int b = 5;

	a = &b;

	cout << "b= " << *a;



	int* pvalue = NULL; // Pointer initialized with null
	pvalue = new int;   // Request memory for the variable

	*pvalue = 29;     // Store value at allocated address
	cout << "Value of pvalue : " << *pvalue << endl;

	delete pvalue;         // free up the memory.
	*/
	srand(time(NULL));
	function();

	

	//int arr[6] = { 5,2,6,1,4,3 };

	int arr[6];

	for (int i = 0; i < size(arr);i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << endl;
	}

	

	int *returned_array =  sorted_array(arr, size(arr));
	

	cout << endl;
	for (int i = 0; i < size(arr);i++) {
		cout << returned_array[i] << endl;
	}


	cout << "hello" << endl;
	
        cout << "End of the script"<< endl;
		cout << "this to be deleted" << endl;
		cout << "new last line" << endl;



		cout << "new Branche called feature" << endl;
		cout << "add more functionalities to feature branch" << endl;

	        cout << "REMOTE 2" << endl;

	return 0;
}

