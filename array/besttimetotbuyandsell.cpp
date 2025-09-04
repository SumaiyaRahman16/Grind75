#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i]; 
    }

    int minPrice = prices[0];
    int maxProfit = 0;
for(auto price : prices){
    minPrice = min(minPrice, price);
    maxProfit = max(maxProfit, price - minPrice);
}

    cout<<maxProfit;
    return 0;
}