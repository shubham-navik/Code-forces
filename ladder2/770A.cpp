#include <iostream>
int main()
{
    int n, k, i;
    for (std::cin >> n >> k; n--; putchar('a' + n % k))
        ;
}