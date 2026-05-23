# Longest Consecutive Sequence

🔗 **Problem Link:** https://leetcode.com/problems/longest-consecutive-sequence/

---

## 🧠 Approach
- Store elements in a hash set  
- Only start counting if (num - 1) is not present  
- Expand forward to count sequence length  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(n)  

---

## 💡 Key Insight
By only starting from the beginning of sequences,
we avoid redundant work and achieve linear time.

---

## 💻 Code

```cpp
// See LongestConsecutiveSequence.cpp
