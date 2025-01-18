#include<iostream>
using namespace std;
int add(int x , int y)
{
    return x + y;
}

int main()
{
    cout << "hello world." << endl;
    int a = 10,b = 20;
    cout << a << " + " << b << " = " << a+b << endl;
    register int x = 100,y = 100;
    cout << &x << "," << &y;
    cout << add(x,y) << endl;

    return 0;
}