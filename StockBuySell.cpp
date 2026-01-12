//buying and selling stock can't be done on same day
//return the maximum profit
//imagine every day as selling day
#include <iostream>
using namespace std;
int main(){
    int prices[6]={7,1,5,3,6,4};
    int bestBuy=prices[0],maxprofit=0;
    for (int i=1;i<6;i++)
    {
        if(prices[i]>bestBuy)
        {
            maxprofit=max(maxprofit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }
    cout<<"Maximum Profit= "<<maxprofit<<endl;
    return 0;
}