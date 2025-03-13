 #include<iostream>
 #include<vector>
 int maxProfit(vector<int>& prices) {
        int MP=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                MP=MP+prices[i]-prices[i-1];
            }            
        }

        return MP;
    }
    int main(){
        vector<int>prices={1,2,3,4,5};
        vector<int>ans=maxProfit(prices);
        cout<<ans;
        return 0;
    }