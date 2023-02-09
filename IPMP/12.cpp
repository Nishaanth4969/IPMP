class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        vector<int>ans = nums;
        sort(ans.begin(),ans.end());
        int m;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i] == ans[i+1]){
                m=i;
                break;
            }
        }
        return ans[m];

    }
};
