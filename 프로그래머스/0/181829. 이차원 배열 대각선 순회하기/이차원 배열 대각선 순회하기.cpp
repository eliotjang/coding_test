#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int x = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (i + j <= k) x += board[i][j];
        }
    }
    return x;
}