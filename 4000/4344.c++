#include <iostream>
using namespace std;

int main(void)
{

    int C, N;
    std::cin >> C;

    int scores[C][1000];
    int N_numbers[C];

    float avg[C];
    int count = 0;
    int sum = 0;

    while (count < C)
    {
        // 0번 : N 값
        // N+2 : avg 값
        std::cin >> N_numbers[count];
        // std::cout << scores[count][0];

        for (int i = 0; i < N_numbers[count]; i++)
        {
            std::cin >> scores[count][i];
            sum += scores[count][i];
            // std::cout << "sum : " << sum << "\n";
        }
        avg[count] = sum / N_numbers[count];
        // std::cout << "avg : " << avg[count] << "\n";
        count++;
        sum = 0;
    }
    count = 0;
    // std::cout << "scorees : " << scores[count][0] << "\n";

    while (count < C)
    {
        double tempValue = 0.0;
        int scoreCount = 0;

        for (int i = 0; i < N_numbers[count]; i++)
        {

            if (avg[count] < scores[count][i])
                scoreCount++;
        }
        // std::cout << "scoreCount: " << scoreCount << " scores : " << N_numbers[count] << "\n";

        tempValue = scoreCount / (float)N_numbers[count] * 100;
        // std::cout << "tempValue : " << tempValue;
        printf("%.3f%%\n", tempValue);

        count++;
    }
}