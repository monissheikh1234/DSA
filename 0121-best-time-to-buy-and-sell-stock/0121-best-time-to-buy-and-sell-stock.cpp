class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
          int minPrice = INT_MAX, maxProfit = 0;
    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);

    }
     
    return maxProfit;}

};