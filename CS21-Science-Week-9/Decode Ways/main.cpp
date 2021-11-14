class Solution {
public:
  int dp[102];
  int numDecodings(string s) {
    dp[0] = 1;
    if(s[0] == '0') return 0;
    for(int i = 1; i < s.size(); i++){
      int digit = s[i] - '0';
      if(digit > 0) 
        dp[i] = dp[i - 1] * 1;
      int lastDigit = s[i - 1] - '0';
      if(lastDigit > 0){
        int num = lastDigit * 10 + digit;
        if(num > 0 && num <= 26){
          if(i - 2 >= 0)
            dp[i] += dp[i - 2];
          else 
            dp[i]++;
        }
      }
    }
    return dp[s.size() -1];
  }
};
