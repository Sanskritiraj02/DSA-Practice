# 🔹 3Sum

🔗 https://leetcode.com/problems/3sum/

---

## 📌 Pattern

👉 Two Pointers + Sorting

---

## 🧠 Intuition

* Fix one element
* Solve remaining 2Sum using two pointers
* Avoid duplicates

---

## ⚙️ Approach

1. Sort the array
2. Loop `i` from 0 → n
3. Use two pointers:

   * left = i + 1
   * right = n - 1
4. Find pairs such that sum = 0
5. Skip duplicates

---

## ⏱️ Complexity

* Time: O(n²)
* Space: O(1) (excluding output)

---

## 🚀 Key Learning

* Convert 3Sum → 2Sum problem
* Sorting helps avoid duplicates
* Two pointer optimization

---

## ⚠️ Important Edge Case

* Always skip duplicates for:

  * i
  * left
  * right

---

## 🏷️ Tags

Arrays, Two Pointer, Medium, Sorting
