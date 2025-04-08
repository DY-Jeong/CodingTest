#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    unordered_set<int> uniquePokemon(nums.begin(), nums.end());
    
    int limit = nums.size() / 2;
    
    return min(static_cast<int>(uniquePokemon.size()), limit);
}