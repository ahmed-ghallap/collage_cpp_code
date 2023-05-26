#include <iostream>

using namespace std;

int mult(int n1, int n2);
int power(int n1, int n2);
int factorial(int n);
int sum_to(int n);
int reverse(int n);
int puzzle(int base, int limit);

int main()
{
    int n = puzzle(4, 7);  
    // 4 * 5 * 6 = 120
    cout << "n: " << n << endl; 
}

int puzzle(int base, int limit)
{
    // valid 
    if (base > limit)   
        return -1;
    else if (base == limit)
        return 1;
    return base * puzzle(base+1, limit);
}

int reverse(int n)
{
    if (n < 10)
    {
        cout << n % 10;
        return n % 10;
    }
    cout << n % 10;
    return reverse(n / 10);
}


int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
}

int sum_to(int n)
{
    if (n <= 1)
        return 1;
    return n + sum_to(n-1);
}

int power(int n, int m)
{
    if (m == 1)
        return n;
    return n * power(n, m-1);
}

int mult(int n1, int n2)
{
    if (n2 == 0 || n1 == 0)
        return 0;
    if (n2 <= 1)
        return n1;
    return n1 + mult(n1, n2-1);
}