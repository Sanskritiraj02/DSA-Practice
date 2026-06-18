# 🔹 Find Median from Data Stream

🔗 https://leetcode.com/problems/find-median-from-data-stream/

---

## 📌 Pattern

👉 Two Heaps (Max Heap + Min Heap)

---

## 🧠 Intuition

We need to dynamically maintain the **median** as numbers keep coming.

👉 Key idea:

* Split numbers into two halves:

  * Left half → **Max Heap** (stores smaller elements)
  * Right half → **Min Heap** (stores larger elements)

---

## ⚙️ Approach

### Maintain two properties:

### 1. Order Property

* All elements in maxHeap ≤ all elements in minHeap

### 2. Size Property

* Size difference ≤ 1
* maxHeap can have at most 1 extra element

---

### Steps for addNum():

1. Push into maxHeap
2. Move top of maxHeap → minHeap
3. Balance sizes if needed

---

### Steps for findMedian():

* If sizes unequal → median = top of maxHeap
* If equal → median = average of both tops

---

## ⏱️ Complexity

* addNum(): O(log n)
* findMedian(): O(1)

---

## 🚀 Key Learning

* This is the **standard Two Heap pattern**
* Used in:

  * Running median
  * Sliding window median
  * Streaming data problems

---

## 🏷️ Tags

Heap, Two Heaps, Hard, Streaming
