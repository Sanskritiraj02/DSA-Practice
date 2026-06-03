# Maximum Sum Subarray of Size K

🔗 Problem Link  
https://leetcode.com/problems/maximum-average-subarray-i/

---

## 💡 Problem Statement
Given an array of integers `nums` and an integer `k`, find the maximum sum of any contiguous subarray of size `k`.

---

## 🧠 Approach
- Compute sum of first window of size k
- Slide the window by one element at a time
- Add new element and remove old element
- Track maximum sum

---

## ⚡ Key Idea
Instead of recomputing sum every time:
👉 reuse previous window sum (Sliding Window technique)

---

## ⏱ Complexity
- Time: O(n)
- Space: O(1)
