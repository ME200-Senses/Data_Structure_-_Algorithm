#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum =0;
    long long maxi = 0;
    for(int i=0; i<n; ++i){
        sum = sum + arr[i];
        maxi = max(sum, maxi);
        if(sum<0) sum = 0;
    }
    return maxi;
}
int main() {
  vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
  vector < int > subarray;
  int lon = maxSubArray(arr, subarray);
  cout << "The longest subarray with maximum sum is " << lon << endl;
  cout << "The subarray is " << endl;
  for (int i = subarray[0]; i <= subarray[1]; i++) {
    cout << arr[i] << " ";
  }

}