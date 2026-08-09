// ReSharper disable CppMemberFunctionMayBeStatic
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  bool check_square(vector<string> &board, int qi, int qj) {
    for (int i = 0; i < board.size(); i++) {
      if (board[i][qj] == 'Q') {
        return false;
      }
    }

    for (int i = qi - 1, j = qj - 1; i >= 0 && j >= 0; i--, j--) {
      if (board[i][j] == 'Q') {
        return false;
      }
    }

    for (int i = qi - 1, j = qj + 1; i >= 0 && j < board.size(); i--, j++) {
      if (board[i][j] == 'Q') {
        return false;
      }
    }

    return true;
  }

  void backtrack(vector<vector<string>> &output, vector<string> &board, int i) {
    if (i == board.size()) {
      output.push_back(board);
      return;
    }

    for (int j = 0; j < board.size(); j++) {
      if (check_square(board, i, j)) {
        board[i][j] = 'Q';
        backtrack(output, board, i + 1);
        board[i][j] = '.';
      }
    }
  }

public:
  vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> output;
    vector<string> board(n, string(n, '.'));
    backtrack(output, board, 0);

    return output;
  }
};