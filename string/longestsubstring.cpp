#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;

//Approaches:
//1. Sliding Window with HashMap
//2. using pointers Optimized Sliding Window

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //take a hasmap with -1 initally 
        unordered_map<char,int> hasmap;
        for (char c : s) {
            hasmap[c] = -1;
        }
        int maxLength=0;
        int left=0;
        int right=0;
        int len=s.length();
        while(right<len){
            if(hasmap[s[right]]!=-1){
                if(hasmap[s[right]]>=left){
                    left=hasmap[s[right]]+1;
                }
            }
            hasmap[s[right]]=right;
            maxLength=max(maxLength,right-left+1);
            right++;
        }
        return maxLength;
    }
};

int main() {
    Solution solution;
    string test1 = "abcabcbb";
    string test2 = "bbbbb";
    string test3 = "pwwkew";
    
    cout << "Length of longest substring without repeating characters:" << endl;
    cout << "\"" << test1 << "\" -> " << solution.lengthOfLongestSubstring(test1) << endl;
    cout << "\"" << test2 << "\" -> " << solution.lengthOfLongestSubstring(test2) << endl;
    cout << "\"" << test3 << "\" -> " << solution.lengthOfLongestSubstring(test3) << endl;
    
    return 0;
}