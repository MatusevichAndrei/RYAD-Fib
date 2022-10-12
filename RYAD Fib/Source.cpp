#include <iostream>

int main()
{
    int fib = 0, fib1 = 0, fib2 = 1, num;
    std::cin >> num;
    while (fib1 <= num)
    {
        std::cout << fib1 << ' ';
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    return 0;
}