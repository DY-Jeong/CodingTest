#include <string>
#include <vector>
#define MAX_char 20
#define MAX_Table 100000

typedef long long ll;

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    typedef struct Hash
    {
        char key[MAX_char+1];
        char* data;
        
    }
    Hash;
    Hash table[MAX_Table];

    long hashGen(char key[]) 
    {
        long h = 5381;
        while (*key != '\0')
            h = (((h << 5) + h) + *key++) % MAX_TABLE;
        return h;
    }
    
    
    string answer = "";
    return answer;
}