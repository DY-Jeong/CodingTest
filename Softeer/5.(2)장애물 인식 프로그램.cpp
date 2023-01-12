// 제한시간 : C/C++(1초), Java/Python/JS(2초) | 메모리 제한 : 128MB
// 자율주행팀 SW 엔지니어인 당신에게 장애물과 도로를 인식할 수 있는 프로그램을 만들라는 업무가 주어졌다.


//      [그림 1] 지도 예시

// 우선 [그림 1]과 같이 정사각형 모양의 지도가 있다. 1은 장애물이 있는 곳을, 0은 도로가 있는 곳을 나타낸다.

// 당신은 이 지도를 가지고 연결된 장애물들의 모임인 블록을 정의하고, 불록에 번호를 붙이려 한다. 여기서 연결되었다는 것은 어떤 장애물이 좌우, 혹은 아래위로 붙어 있는 경우를 말한다. 대각선 상에 장애물이 있는 경우는 연결된 것이 아니다.


//      [그림 2] 블록 별 번호 부여

// [그림 2]는 [그림 1]을 블록 별로 번호를 붙인 것이다.
// 지도를 입력하여 장애물 블록수를 출력하고, 각 블록에 속하는 장애물의 수를 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.
// 입력형식
// 입력 값의 첫 번째 줄에는 지도의 크기 N(정사각형임으로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.
// 출력형식
// 첫 번째 줄에는 총 블록 수를 출력 하시오.
// 그리고 각 블록 내 장애물의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.
// 입력예제
// 7
// 1110111
// 0110101
// 0110101
// 0000100
// 0110000
// 0111110
// 0110000
// 출력예제
// 3
// 7
// 8
// 9

#include<bits/stdc++.h>

using namespace std;

int maps[25][25]={};
int visited[25][25]={};
vector<int> cntVec;
 

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};
int N;
int cnt;
 
void dfs(int r, int c)
{
    for(int i = 0; i<4; i++)
	{
        int nr = r + dr[i];
        int nc = c + dc[i];
        if(nr>=N || nr<0 || nc>=N || nc<0) continue;
        if(visited[nr][nc] == 0 && maps[nr][nc]==1)
		{   
            visited[nr][nc] = 1;                    //방문했다고 표시하고
            cnt+=1;                                 //집 개수 세기
            dfs(nr,nc);
        }
    }
}
 
int main()
{
    int res=0, value;
    cin >> N;
    
	for(int i=1; i<n+1; i++)
	{
		for(int j=1; j<n+1; j++)
		{
			scanf("%1d", &val);
			maps[i][j]=val;
		}
	}
    
    for(int i = 0; i<N; i++)
	{
        for(int j = 0; j<N; j++)
		{
            if(maps[i][j]==1 && visited[i][j]==0)
			{
                visited[i][j] = 1;
                cnt = 1;                        
                dfs(i,j);
                cntVec.push_back(cnt);
                res++;                        
            }
        }
    }
    sort(cntVec.begin(), cntVec.end());
    cout << res << "\n";
    
    for(int i = 0; i<cntVec.size(); i++)
	{
        cout << cntVec[i] << "\n";
    }
 
    return 0;
}