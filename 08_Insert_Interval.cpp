class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        for(auto currentinterval:intervals){
            if(currentinterval[1]<newInterval[0]){
                ans.push_back(currentinterval);
            }
            else if(newInterval[1]<currentinterval[0]){
                ans.push_back(newInterval);

                newInterval=currentinterval;
            }
            else{
                newInterval[0]=min(currentinterval[0],newInterval[0]);
                newInterval[1]=max(currentinterval[1],newInterval[1]);
            }
        }
         ans.push_back(newInterval);
        return ans;
    }
};