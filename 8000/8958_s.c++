#include <iostream>
#include <string>

using namespace std;

// referenced by st-lab
// https://st-lab.tistory.com/278

// reference part : string to for loop

int ox(string &s)
{
    int sumCount = 0;
    int counter = 0;

    for (char &v : s)
    {

        if (v == 'O')
        {
            counter++;
            sumCount += counter;
        }
        else
        {
            counter = 0;
        }
    }

    return sumCount;
}

int main(int argc, const char *argv[])
{
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        string s;
        std::cin >> s;
        std::cout << ox(s) << "\n";
    }

    return 0;
}