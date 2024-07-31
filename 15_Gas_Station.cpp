class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0;
        int totalcost=0;

        for(int i=0;i<gas.size();i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
        }
        if(totalgas<totalcost){
            return -1;
        }
        int total=0;
        int res=0;
        for(int i=0;i<gas.size();i++){
            total+=(gas[i]-cost[i]);
            if(total<0){
                total=0;
                res=i+1;
            }
        }
        return res;
    }
};