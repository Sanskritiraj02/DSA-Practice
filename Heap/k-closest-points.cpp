#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Max Heap: store {distance, point}
        priority_queue<pair<int, vector<int>>> maxHeap;

        for (auto &p : points) {
            int x = p[0];
            int y = p[1];
            int dist = x*x + y*y; // no need sqrt

            maxHeap.push({dist, p});

            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }

        vector<vector<int>> result;
        while (!maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};
