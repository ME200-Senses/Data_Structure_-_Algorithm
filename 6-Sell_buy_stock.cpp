#include <bits/stdc++.h> 
int maxProfit(vector<int> &prices){
    int maxpro = INT_MIN;
    int minpri = INT_MAX;
    for(int i=0; i<prices.size(); i++){
        minpri = min(minpri, prices[i]);
        maxpro = max(maxpro, prices[i]-minpri);
    }
    return maxpro;
}
int main() {
  vector<int> arr= {7,1,5,3,6,4};
  int maxPro = maxProfit(arr);
  cout << "Max profit is: " << maxPro << endl;
}