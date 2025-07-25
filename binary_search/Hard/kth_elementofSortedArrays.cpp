class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
      int m = a.size();
      int n = b.size();

      if(m > n) return kthElement(b , a , k);

      int low = max(k-m , 0);
      int high = min(k , m);
      int left = k;
      int total = m + n;

      while(low <= high){
        int mid1 = low + (high - low) / 2;
        int mid2 = left - mid1;

        int l1 = INT_MIN , l2 = INT_MIN;
        int r1 = INT_MAX , r2 = INT_MAX;

        if(mid1 < m) r1 = a[mid1];
        if(mid2 < n) r2 = b[mid2];

        if(mid1 - 1 >= 0) l1 = a[mid1 - 1];
        if(mid2 - 1 >= 0) l2 = b[mid2 - 1];

        if(l1 <= r2 && l2 <= r1){
          return max(l1 , l2);
        }

        else if(l1 > r2){
          high = mid1 - 1;
        }

        else if(l2 > r1){
          low = mid1 + 1;
        }
      }
      return -1;
  }
};