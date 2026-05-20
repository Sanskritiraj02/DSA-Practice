# Merge Intervals

🔗 **Problem Link:** https://leetcode.com/problems/merge-intervals/

---

## 🧠 Approach
- Sort intervals based on starting time  
- Traverse and compare with last merged interval  
- Merge if overlapping, otherwise add new interval  

---

## ⚡ Complexity
- **Time:** O(n log n) (sorting)  
- **Space:** O(n)  

---

## 💡 Key Insight
Sorting ensures overlapping intervals come together,
making it easy to merge in one pass.

---

## 💻 Code

```cpp
// See MergeIntervals.cpp
