# Longest Substring Without Repeating Characters

🔗 **Problem Link:** https://leetcode.com/problems/longest-substring-without-repeating-characters/

---

## 🧠 Approach
- Use sliding window with two pointers  
- Expand window using right pointer  
- If duplicate found → shrink from left  
- Track maximum window size  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(n)  

---

## 💡 Key Insight
We dynamically maintain a valid window with unique characters
by removing duplicates from the left side.

---

## 💻 Code

```cpp
// See LongestSubstringWithoutRepeating.cpp
