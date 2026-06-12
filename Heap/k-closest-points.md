# K Closest Points to Origin

## 🔗 Problem

LeetCode Link: https://leetcode.com/problems/k-closest-points-to-origin/

---

## 💡 Approach (Max Heap)

* Distance formula:
  d = x² + y² (ignore sqrt)

* Use **max heap of size k**

  * Push (distance, point)
  * If heap size > k → remove farthest point

---

## 🧠 Why Max Heap?

We keep the k closest points by removing the farthest when needed.

---

## ⏱ Complexity

* Time: O(n log k)
* Space: O(k)

---

## 🚀 Example

Input:
points = [[1,3],[-2,2]], k = 1

Output:
[[-2,2]]
