# Next Permutation

🔗 **Problem Link:** https://leetcode.com/problems/next-permutation/

---

## 🧠 Approach
- Find the first decreasing element from the right  
- Swap it with the next greater element  
- Reverse the remaining suffix  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(1)  

---

## 💡 Key Insight
To get the next permutation, we slightly increase the number
while keeping it as small as possible.

---

## 💻 Code

```cpp
// See NextPermutation.cpp
