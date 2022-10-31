class Solution {
public:
    
//     int lcsmemo(string text1, string text2,int ind1,int ind2,vector<vector<int>>&dp){
//                 if(ind1 == text1.length() || ind2 == text2.length()){
//             return 0;
//         }
        
//         if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        
//         if(text1[ind1] == text2[ind2]){
//             return dp[ind1][ind2]=1+lcsmemo(text1,text2,ind1+1,ind2+1,dp);
//         }
            
//         return dp[ind1][ind2]= max(lcsmemo(text1,text2,ind1+1,ind2,dp),lcsmemo(text1,text2,ind1,ind2+1,dp));
   
//     }
    
    
    int longestCommonSubsequence(string text1, string text2) {
//         if(ind1 == text1.length() || ind2 == text2.length()){
//             return 0;
//         }
//         if(text1[ind1] == text2[ind2]){
//             return 1+longestCommonSubsequence(text1,text2,ind1+1,ind2+1);
//         }
            
//         return max(longestCommonSubsequence(text1,text2,ind1+1,ind2),longestCommonSubsequence(text1,text2,ind1,ind2+1));
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1] == text2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
        }
        else
        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
        // return lcsmemo(text1,text2,ind1,ind2,dp);
        
        return dp[n][m];
    }
};
