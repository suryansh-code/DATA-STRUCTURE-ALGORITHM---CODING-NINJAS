#include <vector>
#include <queue>
vector<int> kLargest(int input[], int n, int k){
   
    priority_queue <int, vector <int>, greater<int>> pq; 
    
    for(int i=0 ; i<k ;i++)
        pq.push(input[i]);
  
    for(int i=k ;i<n ; i++)
    {
        if(pq.top()< input[i])
        {
            pq.pop();
            pq.push(input[i]);
        }
    }
    
    vector<int> ans;
    
    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    
    return ans;
}