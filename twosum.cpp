
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return{ i ,j };
                }
            }

          
        }
        return {};

        
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    if(result.empty()){
        cout<<"No two sum solution found."<<endl;
    }else{
        cout<<"Two sum solution found at indices: "<<result[0]<<" and "<<result[1]<<endl;
    }
    return 0;
}