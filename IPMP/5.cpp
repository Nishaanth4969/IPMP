int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size();
    int ans = 1;
    sort(A.begin(),A.end());
   for(int i=0;i<n;i++){
       if(A[i] == ans){
           ans++;
       }
   }
   return ans;
    
}

