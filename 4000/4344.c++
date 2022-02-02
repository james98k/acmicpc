#include <iostream>
using namespace std;

int main(void)
{

    int C, N;
    std::cin >> C;

    int scores[C][1000];
    float avg[C];
    int count = 0;
    int sum = 0;
    while (count < C)
    {
        // 0번 : N 값
        // N+2 : avg 값
        std::cin >> scores[count][0];
        // std::cout << scores[count][0];

        for (int i = 1; i <= scores[count][0]; i++)
        {
            std::cin >> scores[count][i];
            sum += scores[count][i];
            // std::cout << "sum : " << sum << "\n";
        }
        avg[count] = sum / scores[count][0];
        // std::cout << "avg : " << avg[count] << "\n";
        count++;
    }
    count = 0;
    // std::cout << "scorees : " << scores[count][0] << "\n";

    while (count < C)
    {
        double tempValue = 0.0;
        int scoreCount = 0;

        for (int i = 1; i <= scores[count][0]; i++)
        {

            if (avg[count] < scores[count][i])
                scoreCount++;
        }
        // std::cout << "scoreCount: " << scoreCount << " scores : " << scores[count][0] << "\n";

        tempValue = scoreCount / (float)scores[count][0] * 100;
        // std::cout << "tempValue : " << tempValue;
        printf("%.3f%%", tempValue);

        count++;
    }
}