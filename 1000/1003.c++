#include <iostream>
#include <vector>
using namespace std;

// reference : kimnamu

int main(void)
{
    int T;

    std::cin >> T;
    vector<int> zero(41, 0);
    vector<int> one(41, 0);

    int n;
    while (T--)
    {
        zero[0] = 1;
        one[1] = 1;
        std::cin >> n;

        for (int i = 2; i <= n; i++)
        {
            zero[i] = zero[i - 1] + zero[i - 2];
            one[i] = one[i - 1] + one[i - 2];
        }

        std::cout << zero[n] << " " << one[n];
    }
}