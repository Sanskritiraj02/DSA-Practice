# Maximum Sum Subarray of Size K
---

## 💡 Problem
Find the maximum sum of any contiguous subarray of size `k`.

---

## 🧠 Approach
- Compute sum of first window of size k
- Slide window one element at a time
- Add new element, remove old element
- Track maximum sum

---

## ⚡ Key Idea
Instead of recalculating sum every time:
👉 reuse previous window sum (Sliding Window Optimization)

---

## ⏱ Complexity
- Time: O(n)
- Space: O(1)
