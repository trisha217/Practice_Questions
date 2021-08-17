class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int tank=0;
        int total=0;
        for(int i=0;i<gas.size();i++){
            tank = tank + gas.at(i) - cost.at(i);
            if(tank<0)
            {
                start=i+1;
                total= total + tank;
                tank = 0;
            }
        }
        if((total+tank)<0)
        {
            return -1;
        }
        else{
            return start;
        }  
        
    }
};