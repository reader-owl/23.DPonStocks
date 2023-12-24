#include <iostream>

/*
                        Q.  Best time to buy & sell stocks

                    explanation- given arr[] = {7, 1, 5, 3, 6, 4}
                                    where elements are prices of the stock and index are days
                                    we have to get maximum profit from the stocks
                                    we can sell only after buying stocks and it can only be once

                            note - If you are selling on 'i'th day, you buy on the minimum price 
                                    from 1st -> (i - 1) day

        pseudo code
mini = a[0], profit = 0;                // take 1st element and assume it as zero
for(i=0; i<n; i++)
{
    cost = a[i] - mini;
    profit = max(profit, cost);

    mini = min(mini, a[i]);             // <- tracking the minimal
}
print(profit)


        Actual code
int maximumProfit(vector<int> &prices)
{
    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();

    for(int i = 0; i < n; i++)
    {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

                TC - O(N)
                SC - O(1)
*/

int main()
{
    std::cout << "Hello World!\n";
}