class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
     int b=0;
     int s=0;
     int max=0;
     int p=max;
     for(int i=0; i<n; i++) {
        if(i==0) {
            b=prices[i];
            s=prices[i];
        }
        if(prices[i]<b) {
            b=prices[i];
        }
        s=prices[i];
        max=s-b;
        if(max>p) p=max;
     }   
     if(p<=0) return 0;
     else return p; 
    }
};