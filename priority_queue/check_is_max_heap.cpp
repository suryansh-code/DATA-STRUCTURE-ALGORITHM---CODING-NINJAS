bool isMaxHeap(int arr[], int n) {
    // Write your code here
    for (int child = 1; child < n; child++) {
      int parent = (child - 1) / 2;
      if (arr[parent] < arr[child])
        return false;
    }
}