#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    unordered_map<string, int> nameCount;

    for (auto &p : participant) {
        nameCount[p]++;
    }

    for (auto &c : completion) {
        nameCount[c]--;
    }

    for (auto &entry : nameCount) {
        if (entry.second > 0) {
            return entry.first; //완주못한 사람의 이름을 반환
        }
    }

    return "";
}