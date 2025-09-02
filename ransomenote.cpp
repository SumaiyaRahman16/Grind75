#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool canconstruct(string s1,string s2){
    unordered_map<char,int> hasmap;
    for(char c:s2){
        hasmap[c]++;
    }
    for(char c:s1){
        if(hasmap[c] <= 0){
            return false;
        }
        hasmap[c]--;
    }
   
    return true;
}
int main(){
    string s1;
    string s2;

    getline(cin,s1);

    getline(cin,s2);
    
    if(canconstruct(s1,s2)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}