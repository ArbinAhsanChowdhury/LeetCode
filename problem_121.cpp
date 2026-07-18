#include <bits/stdc++.h>
using namespace std;    //code ta akono fully solved hoy nai akono onk chinta kora baki ase
int main() {
    vector<int> prices = {2,4,1};
    vector<int> smallToBig;
    int max_profit = 0;
    int min_value = INT_MAX;
    int min_index;
    for(int i=0; i<prices.size(); ++i){
        if(prices[i] < min_value){
            min_value = prices[i];
            min_index = i;
        }
    }
    if(min_index + 1 == prices.size()){
        smallToBig = prices;
        sort(smallToBig.begin(), smallToBig.end());
        
        for(int i=smallToBig[1]; i<prices.size(); ++i){
            if(max_profit < prices[i] - min_value){
                max_profit = prices[i] - min_value;
            }
        }
    }else{
        for(int i=min_index; i<prices.size(); ++i){
            if(max_profit < prices[i] - min_value){
                max_profit = prices[i] - min_value;
            }
        }
    }
    cout << "size properti " << prices.size() << endl;
    cout << "min_value " << min_value << endl;
    cout << "min_index " << min_index << endl;
    if(max_profit > 0 ){
        cout << "max_profit " << max_profit << endl;
    }else{
        cout << "no max profit " << 0 << endl;
    }
    
    return 0;
}
