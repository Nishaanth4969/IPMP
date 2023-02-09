int Solution::repeatedNumber(const vector<int> &A) {
vector<int>v(A.begin(), A.end());
sort(v.begin(), v.end());
int n =-1;
int d = A.size()/3;
  for(int i = 0; i < A.size(); i++)
  {
    if(i+d < A.size())  if(v[i] == v[i+d]){n = v[i]; break;}
  }
   return n;
}
