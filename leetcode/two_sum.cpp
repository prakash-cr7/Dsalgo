#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> a;
     unordered_map<int, int> m {};
        for(int i=0; i<nums.size(); i++){
            int temp = i+1;
            m[nums[i]] = temp;
        } 
        for(int i=0; i<nums.size(); i++){
            int temp = target-nums[i];
            if(m[temp] > 0 && m[temp]-1 != i) {
                a.push_back(i);
                a.push_back(m[temp] - 1);
                break;
            }
        }
        cout<<a[0]<<" "<<a[1]<<endl;
        for (size_t i = 0; i < 7; i++)
        {
            cout<<m[i];
        }
        
        return a;
    } 

int main(){
    vector<int> a = {3,2,4};
    int t = 6;
    twoSum(a,t);
}