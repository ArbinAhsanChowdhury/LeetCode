class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //vector<int> prices = {2,4,1};
        int max_profit = 0;
        int min_value = INT_MAX;
        int min_index;
        //int loop=0;
        for(int i=0; i<prices.size(); ++i){
            if(prices[i] < min_value){
                min_value = prices[i];
                min_index = i;
            }
        }
        //cout << min_value << " " << min_index+1 << " " << prices.size() <<endl;
        
        if(min_index+1 == prices.size()){
            max_profit = 0;
            min_value = INT_MAX;
            for(int i=0; i<prices.size()-2; ++i){
                if(prices[i] < min_value){ 
                    min_value = prices[i];
                    min_index = i;
                    //loop++;
                }
            }
        }
        //cout << min_value << " " << min_index << " " << prices.size() << " " <<loop <<endl;
        for(int i=min_index; i<prices.size(); ++i){
            if(max_profit < prices[i] - min_value){
                max_profit = prices[i] - min_value;
            }
        }
        if(max_profit > 0 ){
            //cout <<  max_profit;
            return max_profit;
        }else{
            //cout <<  0;
            return 0;
        }
    }
};
