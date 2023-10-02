bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n+1,false);
        dp[0] = true;
        for(int i=0;i<n;i++)
        {
            for(auto it: wordDict)
            {
                if((dp[i]) && (i+it.size()<=n) && (s.substr(i,it.size())==it))
                {
                    dp[i+it.size()] = true;
                }
            }
        }
        return dp[n];
    }
};
