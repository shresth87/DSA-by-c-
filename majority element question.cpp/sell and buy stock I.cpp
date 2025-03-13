#include<iostream>
#include<algorithm>
#include<vector>

int maxProfit(vector<int>& prices){
        int MP=0,BestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>BestBuy){
                MP=max(MP,prices[i]-BestBuy);
            }
            BestBuy=min(BestBuy,prices[i]);
        }
        return MP;
        
    }
    int main(){
        vector<int>prices={1,2,3,4,5};
       cout<< maxProfit(vector<int>prices);
        return 0;
    }
    
    