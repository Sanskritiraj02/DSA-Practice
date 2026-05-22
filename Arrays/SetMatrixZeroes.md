# Set Matrix Zeroes

🔗 **Problem Link:** https://leetcode.com/problems/set-matrix-zeroes/

---

## 🧠 Approach
- Use first row and column as markers  
- Track first column separately  
- Apply zeroes based on markers  

---

## ⚡ Complexity
- **Time:** O(n × m)  
- **Space:** O(1)  

---

## 💡 Key Insight
Instead of extra space, reuse the matrix itself
to store which rows and columns should be zero.

---

## 💻 Code

```cpp
// See SetMatrixZeroes.cpp
