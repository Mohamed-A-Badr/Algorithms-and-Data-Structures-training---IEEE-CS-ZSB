class Solution {
public:
  bool valid(vector<vector<char>> &a, int i, int j){
    if(i < 0 || j < 0 || i >= a.size() || j >= a[0].size()) return false;
    return true;
  }
  bool dfs(vector<vector<char>> &arr, int i, int j, int cnt, string s){
    if(cnt == s.size()) return true;
    if(!valid(arr, i, j) || arr[i][j] != s[cnt]) return false;
    char temp = arr[i][j];
    arr[i][j] = ' ';
    bool f = dfs(arr, i + 1, j, cnt + 1, s) || dfs(arr, i - 1, j, cnt + 1, s)
      || dfs(arr, i, j + 1, cnt + 1, s) || dfs(arr, i, j - 1, cnt + 1, s);
    arr[i][j] = temp;
    return f;
  }
    bool exist(vector<vector<char>>& board, string word) {
       for(int i = 0; i < board.size(); i++){
         for(int j = 0; j < board[0].size(); j++){
           if(board[i][j] == word[0] && dfs(board, i, j, 0, word))
             return true;
         }
       }
      return false;
    }
};
