#include<iostream>
using namespace std;

int main() {
	int n, result = 0;
    cin >> n;
    
    while (n > 0)
    {
        int lastNumber = n % 10;
        result = result * 10 + lastNumber;
        n /= 10;
    }
    cout << result;
}
