#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;
    cout<<"The Factorial of the number that we want : ";
	cin>>num;
    cout << "Factorial of " << num << " is " << factorial(num);
    return 0;n
}
