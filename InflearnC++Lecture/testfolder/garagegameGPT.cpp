#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

const int dx[] = { -1, 0, 1, 0 };
const int dy[] = { 0, 1, 0, -1 };

int N;
vector<vector<int>> garage;

bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

int dfs(int x, int y, int color) {
    if (!isValid(x, y) || garage[x][y] != color)
        return 0;

    garage[x][y] = 0;
    int count = 1;

    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        count += dfs(nx, ny, color);
    }

    return count;
}

void drop() {
    for (int y = 0; y < N; y++) {
        vector<int> newCol;
        for (int x = N - 1; x >= 0; x--) {
            if (garage[x][y] != 0) {
                newCol.push_back(garage[x][y]);
            }
        }
        for (int i = 0; i < N - newCol.size(); i++) {
            garage[i][y] = 0;
        }
        for (int i = N - newCol.size(); i < N; i++) {
            garage[i][y] = newCol[i - (N - newCol.size())];
        }
    }
}

int main() {
    cin >> N;
    garage.resize(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> garage[i][j];
        }
    }

    int maxScore = 0;
    vector<vector<int>> tempGarage;
    tempGarage = garage; // 원래 garage를 저장해 놓는다.

    for (int t = 0; t < 3; t++) { // 3회 반복
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (garage[i][j] != 0) {
                    int score = dfs(i, j, garage[i][j]);
                    maxScore = max(maxScore, score);
                }
            }
        }
        drop();
    }

    int totalScore = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (tempGarage[i][j] != 0) {
                int score = dfs(i, j, tempGarage[i][j]);
                totalScore += score * score;
            }
        }
    }

    cout << totalScore << endl;

    return 0;
}