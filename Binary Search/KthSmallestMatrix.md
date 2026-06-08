# Kth Smallest Element in a Sorted Matrix

🔗 https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

---

## 🧠 Approach

* Binary search on value range
* Use matrix properties (row + column sorted)
* Count elements ≤ mid using efficient traversal

---

## ⚡ Complexity

* Time: O(n * log(range))
* Space: O(1)

---

## 💡 Key Insight

Instead of flattening or sorting the matrix, we binary search the answer and count elements ≤ mid in O(n).

---

## 🔥 Counting Trick

* Start from bottom-left
* If value ≤ mid → move right and add (row + 1)
* Else → move up

---
