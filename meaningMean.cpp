#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap to keep the array sorted

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x); // Add all elements to the min-heap
    }

    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int avg = (a + b) / 2; // Floored average
        pq.push(avg);          // Insert the result back into the heap
    }

    // The final element left in the heap is the answer
    cout << pq.top() << endl;

    return 0;
}
