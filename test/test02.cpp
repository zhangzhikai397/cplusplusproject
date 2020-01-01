#include<iostream>

using namespace std;

int main()
{
    // 9*9 乘法表
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=" << i * j;
            if (i * j >= 10)
            {
                /* code */
                cout << " ";
            }else
            {
                cout << "  ";
            }
            
            
        }
        cout << endl;
    }
    
}