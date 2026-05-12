# Two Sum

🔗 **Problem Link:** https://leetcode.com/problems/two-sum/

---

## 🧠 Approach
- Traverse the array once  
- Compute `complement = target - nums[i]`  
- Check if it exists in hashmap  
- If yes → return indices  
- Else → store current element  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(n)  

---

## 💡 Key Insight
Using a hashmap avoids nested loops and reduces time complexity from **O(n²)** to **O(n)**.

---

## 💻 Code

```cpp
// See TwoSum.cpp
