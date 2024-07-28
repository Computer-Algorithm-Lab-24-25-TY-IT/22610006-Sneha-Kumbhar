#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 5;
    long long result = factorial(n);
    cout << "Factorial of " << n << " is " << result << endl;
    return 0;
}
