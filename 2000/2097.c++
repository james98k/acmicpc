// 당신은 N개의 조약돌을 가지고 있다. 이 조약돌을 좌표평면의 격자점 위에 아무렇게나 떨어뜨렸다.
// 격자점이란, x좌표와 y좌표 모두가 정수인 지점을 말한다. 이를테면 (1, 1)이나 (0, -9)는 격자점이며, (-2, 3.5)이나 (π, 7.14)는 격자점이 아니다.
// 모든 조약돌을 포함하는 가장 작은 직사각형을 생각할 수 있다.

//예를 들어 세 개의 조약돌을 (2,4), (4, 8), (5,5)에 떨어뜨렸다면, 이 세 조약돌을 모두 포함하는 가장 작은 직사각형은 가로 3, 세로 4인 직사각형이다.
//이 경우 직사각형의 둘레는 14가 된다. 직사각형의 가로와 세로 길이는 반드시 1 이상이어야 한다.

// 조약돌의 개수 N이 주어졌을 때, 조약돌을 좌표평면의 격자점에 적절히 떨어뜨려서 모든 조약돌을 포함하는 직사각형의 둘레를 최소로 하는 프로그램을 작성하시오.

// 입력 : 조약돌 갯수
// 출력 : 조약돌의 최소 둘래

//풀이 계획
//가장 큰 x 값 - 가장 작은 x 값, 가장 큰 y 값 - 가장 작은 y 값의 곱?
// 5 입력 -> 출력 : 6

// [1,1] ~ [1,5] 1 x [5 + 1]  = 6
// [5,1] ~ [5,5]

// 14 -> 12
// 둘레 최소화 -> (x+y) * 2

// 14 * 1  = 14
//

int getArea(int x, int y)
{
    return x * 2 + y * 2;
}

#include <iostream>
using namespace std;
int main(void)
{

    int count_rock = 0;
    int area_round = 0;
    int temp_area = 0;
    std::cin >> count_rock;

    int a, b;

    for (int i = 2; i <= count_rock; i++)
    {
    }

    std::cout << "a : " << a << " b : " << b << "round : " << area_round << "\n";
    std::cout << area_round;
}