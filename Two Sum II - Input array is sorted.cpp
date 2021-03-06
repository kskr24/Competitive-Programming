class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        
        int n=(int)numbers.size();
        int l=0,r=n-1;
        
        //traverse through the array
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if(numbers[l]+numbers[r]<target){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};
