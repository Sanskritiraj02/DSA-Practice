# Minimum Window Substring

🔗 **Problem Link:** https://leetcode.com/problems/minimum-window-substring/

---

## 🧠 Approach
- Store frequency of characters in t  
- Expand window using right pointer  
- When all characters matched → shrink from left  
- Track smallest valid window  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(1) (since charset is fixed)  

---

## 💡 Key Insight
We expand to satisfy the condition and shrink to optimize it,
keeping track of the minimum valid window.

---

## 💻 Code

```cpp
// See MinimumWindowSubstring.cpp
