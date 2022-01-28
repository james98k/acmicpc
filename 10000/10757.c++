#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    std::cin >> a >> b;

    int carry = 0;
    int sum = 0;
    int temp_sum = 0;
    string result = "";

    // (int)a[a_length-1];

    // std::cout << "a length : " << a_length << "\nb length : " << b_length;
    // std::cout << a[a_length - 1] - '0' << " " << b[b_length - 1] - '0' << "\n";
    // long int long_result = stol(result);

    int length = 0;
    if (a.length() > b.length())
        length = a.length();
    else
        length = b.length();

    for (int i = length; i > 0; i--)
    {
        std::cout << "target : " << a[a.length() - i] << " target b : " << b[b.length() - i] << "\n";
        temp_sum += (int)(a[a.length() - i]) + (int)(b[b.length() - i]) + carry;

        carry = temp_sum / 10;
        sum = temp_sum % 10;
        std::cout << "temp_sum : " << temp_sum << "\nsum : " << sum << "\ncarry : " << carry << "\n";
        result = to_string(sum) + result;
    }
    std::cout << result << endl;
}