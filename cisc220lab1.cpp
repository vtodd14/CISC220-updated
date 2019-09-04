//Victoria Todd, Jayson Morgado, Shaun Shahan
//TA: Lauren Olson
// 09/4/19
// CISC220 Lab 1/ Homework 1===========================================================================


#include <iostream>
#include <stdlib.h>
using namespace std;

void star ();
bool isPrime (int num);
void sumOf300 ();
int sumToExceed ();
void multTable (int num);
void multTableLoop ();
int collatz();
void leapYearCalc();
void starPattern(int x);
void collatzRangeTest(int x, int y);


int main() {
	cout << "Hello World!" << endl;//Problem 1.//
	star();
	cout << isPrime (3) <<endl; //true
	cout << isPrime (4) <<endl; //false
	cout << isPrime (7) <<endl; //true
	star();
	sumOf300();
	star();
	cout << sumToExceed() << endl;
	star();
	multTable (2);
	multTable (4);
	multTable (7);
	star();
	multTableLoop ();
	star();
	collatz();
	star();
	leapYearCalc();
	star();
	starPattern(6);
	starPattern(7);
	starPattern(5);
	star();
	collatzRangeTest(7, 11);


	return (0);
}

//Problem 2.

// No input parameters
//prints a row of stars

void star () {
	cout << "***********************************************" << endl;

}

// Problem 3.

// input parameter is x an integer, being checked if it is prime and returning
// true if prime and false otherwise

bool isPrime ( int num) {
	int i = 2;
	while (i < num) {
		if ( num  % i == 0 ){
			return false;
		}
		i++;
	}
	return true;
}

// Problem 4.

// no input parameters
// calculates the sum up to 300
// displays the total after every 20 terms

void sumOf300 () {
	int sum = 0;
	for (int i = 1; i <= 300; i++) {
		sum = i + sum;
		if ( i % 20 == 0) {
			cout << sum << endl;
		}
	}
}

// Problem 5.

// No input paramters
// determines how many terms in the sum it requires for the sum to exceed 100000
// it returns that value

int sumToExceed () {
	int i = 1;
	int sum = 0;
	while (sum < 100000) {
		sum = i + sum;
		i++;
	}
	return i;
}

// Problem 6.

// input parameter is an int, num.
// prints out the multiplication tables between 1 and 12

void multTable (int num){
	int mult = 0;
	for ( int i = 1; i < 13; i++ ) {
		mult = i * num;
		cout << i << " times " << num << " equals " << mult << endl;
	}
}

// Problem 7.

// No input parameters
// uses function in problem 6
// prints out the multiplication tables between 1 and 12

void multTableLoop () {
	for ( int i = 1; i < 13; i++ ) {
		multTable(i);
	}
}

// Problem 8.

// Takes no input parameters
// if number is even, divide by 2
// if number is odd, multiply by 3 and add 1
// continues indefinitely or until the number is equal to 1
// counts how many times the function loops and prints out the value

int collatz () {
	int i = 1;
	int num;

	cout << "Enter a positive natural number: " << endl;
	cin >> num;

	while (num != 1) {
		if (num %2 == 0) {
			num /= 2;
		} else {
			num *= 3;
			num ++;
		}
		i++;
	}
	cout << i << endl;
	return i;
}

// Problem 9.

// Takes no input parameters
// calculates how to determine when a leap year will occur
// returns nothing, prints out the years that will be a leap year

void leapYearCalc () {
	int year = 2017;

	while (year <= 2417) {
		year ++;
		if (((year % 4 == 0)|| (year % 400 == 0)) && (year % 100 != 0)) {
			cout << year << endl;
		}

	}
}

//Problem 10.

//takes in an integer x, modifies it to be an odd number
//function prints a star with the dimensions being 2 times x minus 2
//and number of stars until the center starting from the corner is x

void starPattern(int x){
	if (x%2==0){
			x=x+1;
		}
	int m=2*x-2;
	for (int i=0; i<=m; i++){
	for (int k=0;k<=m;k++){
		if (k==i || k==(m-i)){
			cout<<"*";
			}else
				cout<<" ";
			}
		cout<< endl;
	}
}

//Problem 11.

//takes in two ints x,y assuming x is smaller than y
//prints every number in between x and y starting with x and ending with y

void collatzRangeTest(int x, int y){
	while (x<=y){
		int i=x;
		while (i!=1){
				if( i%2 == 0){
					i= i/2;
				}
				if( i%2 == 1 && i!=1){
					i = i*3 +1;
				}
			}
		cout<< x << "-" <<"Collatz Conjecture is still working"<<endl;
		x++;
	}
}



