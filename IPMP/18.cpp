class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result =0;
        for(auto i:columnTitle){
            int d = i-'A'+1;
            result = result*26+d;
        }
        return result;
    }
};
