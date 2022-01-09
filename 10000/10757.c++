#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    std::cin >> a >> b;

    int a_length = a.length();
    int b_length = b.length();

    int carry = 0;
    int sum = 0;
    int temp_sum = 0;
    string result = "";
    for (int i = 1;; i++)
    {

        std::cout << "target : " << a[a_length - i] << " target b : " << b[b_length - i] << "\n";
        temp_sum = (a[a_length - i] - '0') + (b[a_length - i] - '0') + carry;
        
        sum = temp_sum % 10;
        carry = temp_sum / 10;

        std::cout << "temp_sum : " << temp_sum << "\nsum : " << sum << "\ncarry : " << carry << "\n";
        // 자릿수에 맞게 배치

        result = to_string(sum) + result;

        if (i > a_length - 1 || i > b_length - 1)
        {
            if (carry != 0)
            {
                result = to_string(carry) + result;
            }
            break;
        }
    }
    // (int)a[a_length-1];

    // std::cout << "a length : " << a_length << "\nb length : " << b_length;
    // std::cout << a[a_length - 1] - '0' << " " << b[b_length - 1] - '0' << "\n";
    // long int long_result = stol(result);

    std::cout << result << endl;
}