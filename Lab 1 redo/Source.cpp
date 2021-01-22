#include <iostream>
#include <string>
#include <inttypes.h>
using namespace std;

int main() {

	int integerType;
	float floatType;
	char charType;
	double doubleType;
	bool boolValue;
	string stringValue;
	short shortValue;
	long longValue;
	long long int longlongValue;

	cout << "Hello Karl, and Professor \nWe are learning data types!\n";

	printf("Size of int is: %1d\n",
		sizeof(integerType));

	printf("Size of float is: %1d\n",
		sizeof(floatType));

	printf("Size of char is: %1d\n",
		sizeof(charType));

	printf("Size of bool is: %1d\n",
		sizeof(boolValue));
	
	printf("Size of double is: %1d\n",
		sizeof(doubleType));

	printf("Size of string is: %1d\n",
		sizeof(stringValue));

	printf("Size of short int is: %1d\n",
		sizeof(shortValue));

	printf("Size of long int is: %1d\n",
		sizeof(longValue));
	
	printf("Size of long long int is: %1d\n\n",
		sizeof(longlongValue));


	cout << "Now we will use some operators...\n\n";

	double first = 10.2,
		second = 20.3,
		third = 30.4,
		fourth = 40.5;

	cout << "Adding is easy! Heres a sum : " << first + second << endl;

	cout << "\nSubtracting is even easier! (30.4 - 20.3) : " << third - second << endl;

	cout << "\n How about Multiplication? (20.3 * 10.2) : " << second * first << endl;

	cout << "\n Here you'll see Division is the opposite of Multiplication! (20.3 / 10.2) : " << second / first << endl;

	cout << "\n What does Modulus mean? Who knows! Its almost like division. Heres an example (10.2 % 30.4) : " << (int)first % (int)third << endl;


	return 0;
}
