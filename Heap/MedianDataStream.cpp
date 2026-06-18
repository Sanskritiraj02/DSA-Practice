class MedianFinder {
public:
    priority_queue<int> maxHeap; // left half (smaller elements)
    priority_queue<int, vector<int>, greater<int>> minHeap; // right half (larger elements)

    MedianFinder() {}

    void addNum(int num) {
        // Step 1: push into maxHeap
        maxHeap.push(num);

        // Step 2: balance order property
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        // Step 3: balance size property
        if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        }
        return (maxHeap.top() + minHeap.top()) / 2.0;
    }
};
