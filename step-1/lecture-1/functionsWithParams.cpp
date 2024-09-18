#include <bits/stdc++.h>
using namespace std;

int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int maxNum(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int num = 10;
    doSomething(num);
    return 0;
}