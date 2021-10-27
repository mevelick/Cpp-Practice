#include <iostream>
using namespace std;

int main(){
	int i, num;
	bool isPrime = true;
	
	cout << "Enter a positive integer." << endl;
	cin >> num;
	
	if (num < 0){
		cout << "You entered a negative number. Please try again." << endl;
		cin >> num;
	}
	
	else if (num == 0 || num == 1){
		isPrime = false;
	}
	else{
		for (i=2; i<=num/2; i++){
			if(num % i == 0){
				isPrime = false;
				break;
			}
		}
	}
	if (isPrime)
		cout << num << " is a prime number." << endl;
	else
		cout << num << " is not a prime number.";
	return 0;
}
