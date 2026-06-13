# Count Inversions (Merge Sort Based)

## 🔗 Problem

LeetCode Similar:https://leetcode.com/problems/reverse-pairs/

---

## 💡 Concept

An inversion is:
i < j AND arr[i] > arr[j]

---

## ❌ Brute Force

* Check all pairs
* Time: O(n²)

---

## ✅ Optimal Approach (Merge Sort)

While merging:

* If left element > right element
  → all remaining elements in left are also greater

So:
inversions += (mid - left + 1)

---

## 🧠 Why Merge Sort?

Because:

* Left and right halves are already sorted
* Helps count efficiently during merge step

---

## ⏱ Complexity

* Time: O(n log n)
* Space: O(n)

---

## 🚀 Example

Input:
arr = [2,4,1,3,5]

Output:
3

Explanation:
(2,1), (4,1), (4,3)

---

## 🏷️ Tags

Divide & Conquer, Merge Sort, Arrays
