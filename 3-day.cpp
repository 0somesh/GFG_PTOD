class Solution {
  public:
    
    int func(int n){
        int ans=n*(n+1);
        return ans/2;
    }
    
    int countSubstring(string &s) {
        unordered_map<char,int> map;
        
        for(char ch:s){
            map[ch]++;
        }
        
        int sum=0;

        for(auto ch:map){
            sum+=func(ch.second);
        }
        
        return sum;
        
    }
};
