    class Solution {
    public:
        string mapWordWeights(vector<string>& words, vector<int>& weights) {
            int n = words.size();
            string ans = "";

            for(int i = 0; i<n; i++){
                
                int wsum=0;
                int m = words[i].size();
        
                for(int j = 0; j<m; j++){
                    wsum+=(weights[(words[i][j]) - 'a']);    
                }

                wsum = wsum%26;
                char t = 'z'-wsum;
                ans += t; 
        
            }
            return ans;
        }
    };