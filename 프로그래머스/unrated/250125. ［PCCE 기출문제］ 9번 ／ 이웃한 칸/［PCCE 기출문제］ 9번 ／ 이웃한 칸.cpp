#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;

    // 주어진 좌표의 상하좌우를 확인하며 같은 색깔인지 확인
    string color = board[h][w]; // 주어진 좌표의 색깔

    // 이동할 상하좌우 방향을 정의
    vector<int> dx = {-1, 1, 0, 0}; // 좌, 우, 상, 하
    vector<int> dy = {0, 0, -1, 1};

    // 상하좌우를 확인하며 같은 색깔인지 검사
    for (int i = 0; i < 4; i++) {
        int nx = h + dx[i];
        int ny = w + dy[i];

        // 범위를 벗어나지 않는지 확인
        if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size()) {
            if (board[nx][ny] == color) {
                answer++;
            }
        }
    }

    return answer;
}