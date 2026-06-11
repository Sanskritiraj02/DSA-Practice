# 🔹 4Sum

🔗 https://leetcode.com/problems/4sum/

---

## 📌 Pattern

👉 Two Pointer + Sorting + K-Sum Reduction

---

## 🧠 Intuition

* Similar to 3Sum but one more loop
* Fix two elements → solve remaining 2Sum
* Avoid duplicates carefully

---

## ⚙️ Approach

1. Sort the array
2. Fix first element `i`
3. Fix second element `j`
4. Apply two pointer on remaining array
5. Find quadruplets with sum = target
6. Skip duplicates at all levels

---

## ⏱️ Complexity

* Time: O(n³)
* Space: O(1) (excluding output)

---

## 🚀 Key Learning

* Extension of 3Sum
* General pattern for **K-Sum problems**
* Handling duplicates is crucial

---

## ⚠️ Important Edge Cases

* Large numbers → use `long long`
* Duplicate skipping for i, j, left, right

---

## 🏷️ Tags

Arrays, Two Pointer, Sorting, Medium-Hard, K-Sum
