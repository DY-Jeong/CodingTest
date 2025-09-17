#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int S, E;
    cin >> S >> E;

    int distance = abs(S - E); // 현재 위치와 송아지 위치의 거리

    int jumps = distance / 5; // 먼저 5만큼 점프하는 횟수를 구함
    distance %= 5; // 5로 나눈 나머지를 구해서 남은 거리를 계산

    // 남은 거리에 따라 점프 횟수를 더해줌
    if (distance > 0) {
        if (distance >= 3) {
            jumps += 2; // 3 이상이면 1을 두 번 점프
        } else {
            jumps += 1; // 1 또는 2면 1을 한 번 점프
        }
    }

    cout << jumps << endl; // 최소 점프 횟수 출력

    return 0;
}
