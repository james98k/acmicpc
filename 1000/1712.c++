#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;
    // a : 고정비용 , b 가변비용, c 책정금액

    if (b >= c)
    {
        std::cout << "-1";
        return 0;
    }

    int sellPrice = c - b;
    int sum = a / sellPrice;
    sum += 1;

    std::cout << sum;
}