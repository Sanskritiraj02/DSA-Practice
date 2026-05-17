# Majority Element

🔗 **Problem Link:** https://leetcode.com/problems/majority-element/

---

## 🧠 Approach
- Use Boyer-Moore Voting Algorithm  
- Maintain a candidate and count  
- Cancel out different elements  
- Remaining candidate is the majority  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(1)  

---

## 💡 Key Insight
Since the majority element appears more than n/2 times,
it will remain after canceling out all other elements.

---

## 💻 Code

```cpp
// See MajorityElement.cpp
