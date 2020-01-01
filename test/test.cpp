#include<iostream>

using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int left = 10;
    int right = 20;
    cout << right << endl;
    cout << left << endl;
    int sumd = sum(left, right);
    cout << "left + " << "right = " << sumd << endl;
}
