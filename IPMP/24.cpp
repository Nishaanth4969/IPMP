int Solution::threeSumClosest(vector<int> &A, int B) {
        sort(A.begin(),A.end());
        int n = A.size();
        long long int ans = INT_MAX; 
        for(int i=0;i<n;i++){
            int l =i+1;
            int r =n-1;
            while(l<r){
                long long int sum = A[i]+A[l]+A[r];
                if(abs(sum-B)<abs(ans-B)){
                    ans = sum;
                }
                else if(sum > B){
                    r--;
                }
                else{
                    l++;
                }
            }
            
        }
        return ans;
}

