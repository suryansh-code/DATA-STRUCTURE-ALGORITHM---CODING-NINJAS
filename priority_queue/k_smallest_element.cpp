#include <queue>
#include <vector>

vector<int> kSmallest(int *input, int n, int k) {
  // Write your code here
  priority_queue<int> pq;

  // push first k eements in the priority queue
  for (int i = 0; i < k; i++)
    pq.push(input[i]);

  // for reaining elements compare the element with max of pq ie top
  // if smaller push in heap
  for (int i = k; i < n; i++) {
    if (input[i] < pq.top()) {
      pq.pop();
      pq.push(input[i]);
    }
  }

  // cnvert heap into vector and return vector
  vector<int> ans;

  while (!pq.empty()) {
    ans.push_back(pq.top());
    pq.pop();
  }

  return ans;
}