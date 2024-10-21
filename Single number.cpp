1.Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
#include <iostream>
using namespace std;
#include<vector>
#include<map>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpp;
        int c;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                c=it.first;
            }
        }
        return c;
        
    }
};
int main()
{
    vector<int>nums={2,2,1,3,3,3};
    Solution obj;
    int n;
    
    int result=obj.singleNumber(nums);
    cout<<"The number that appears only once:"<<result;
    return 0;
}
