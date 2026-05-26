# Sliding Window Maximum

🔗 **Problem Link:** https://leetcode.com/problems/sliding-window-maximum/

---

## 🧠 Approach
- Use deque to store indices  
- Maintain decreasing order  
- Remove out-of-window elements  
- Front of deque gives max  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(k)  

---

## 💡 Key Insight
By maintaining a monotonic decreasing deque,
we can get maximum in constant time for each window.

---

## 💻 Code

```cpp
// See SlidingWindowMaximum.cpp
