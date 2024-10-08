#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
        // int min=prices[0];
        // int index=0;
        // for(int i=0;i<prices.size();i++){
        //     if(prices[i]<min){
        //         min = prices[i];
        //         index=i;
        //     }
        // }

        // int max=min;
        
        // //cout<<max<<min;
        // for(int i=index;i<prices.size();i++){
        //     if(prices[i]>max){
        //         max = prices[i];
        //     }
        // }
        // //cout<<max<<min;


        // int profit = max - min;

        // return profit;
        
        if (prices.empty()) return 0;
        
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }
        
        return maxProfit;
    
    }


int main(){
    //vector<int> prices = {7,1,5,3,6,4};
    vector<int> prices = {7,6,4,3,1};
    cout<<"The max profit is: ";
    cout<<maxProfit(prices)<<endl;
    return 0;
}