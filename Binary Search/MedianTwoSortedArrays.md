# Median of Two Sorted Arrays

🔗 https://leetcode.com/problems/median-of-two-sorted-arrays/

---

## 🧠 Approach
- Binary search on smaller array
- Partition both arrays
- Validate using conditions

---

## ⚡ Complexity
- Time: O(log(min(n, m)))
- Space: O(1)

---

## 💡 Key Insight
Correct partition ensures left half contains smaller elements.

---

## 💻 Code

```cpp
// See MedianTwoSortedArrays.cpp
