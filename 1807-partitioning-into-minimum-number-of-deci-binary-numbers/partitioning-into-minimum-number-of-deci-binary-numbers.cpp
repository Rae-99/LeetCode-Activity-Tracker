class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        for(char x : n){
            m=max(m, (x-'0'));
        }
        return m;
    }
};