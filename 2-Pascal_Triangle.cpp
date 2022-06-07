#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};

int main(){
    int flag=0;
    cout<< " Enter the Row Number :";
    cin >> flag ;

    int temp = generate(flag);

    for(int i=0; i< flag; i++){
        for(int i=0; i<flag; i++){
            cout << temp[i][j];
        }
    } 
}