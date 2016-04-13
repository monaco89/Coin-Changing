

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

// all coins
int coins[] = {1, 2, 5, 10, 25};
int n = sizeof(coins)/sizeof(coins[0]);

// find mininum function
void findMin(int V)
{
    
    vector<int> ans;
    
    // Traverse through all coins
    for (int i=n-1; i>=0; i--)
    {
        
        while (V >= coins[i])
        {
            V -= coins[i];
            ans.push_back(coins[i]);
        }
    }
    
    // Print result
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "  ";
}

int main()
{
    int n = 93;
    cout << "Following is minimal number of change for " << n << " is ";
    findMin(n);
    cout << "\n";
    return 0;
}
