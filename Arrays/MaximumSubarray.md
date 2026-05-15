# Maximum Subarray (Kadane’s Algorithm)

🔗 **Problem Link:** https://leetcode.com/problems/maximum-subarray/

---

## 🧠 Approach
- Maintain a running sum of elements  
- If sum becomes negative, reset it to 0  
- Track the maximum sum found  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(1)  

---

## 💡 Key Insight
A negative running sum will reduce future subarray sums,
so we reset it to 0 and start fresh.

---

## 💻 Code

```cpp
// See MaximumSubarray.cpp
