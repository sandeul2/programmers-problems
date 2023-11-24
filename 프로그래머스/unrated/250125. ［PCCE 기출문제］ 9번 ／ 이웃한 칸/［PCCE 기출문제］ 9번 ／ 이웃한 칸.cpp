#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string color = board[h][w]; 
    
    vector<int> dx = {-1, 1, 0, 0}; 
    vector<int> dy = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nx = h + dx[i];
        int ny = w + dy[i];

        // 범위를 벗어나지 않는지 확인
        if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size()) {
            if (board[nx][ny] == color) {
                answer++;
            }
        }
        nx = h - dx[i];
        ny = w - dy[i];
    }

    return answer;
}