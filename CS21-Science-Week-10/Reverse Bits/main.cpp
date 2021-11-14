class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      string s = "";
      while(n > 0){
        int temp = n % 2;
        s = char(temp + 48) + s;
        n /= 2;
      }
      int k = 32 - s.size();
      for(int i = 0; i < k; i++)
        s = '0' + s;
      uint32_t res = 0;
      int temp = 0;
      for(int i = 0; i < s.length(); i++){
        res += (s[i] - 48) * pow(2, temp);
        temp++;
      }
      return res;
    }
};
