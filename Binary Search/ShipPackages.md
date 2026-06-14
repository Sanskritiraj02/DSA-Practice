# 🔹 Capacity to Ship Packages Within D Days

🔗 https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

---

## 📌 Pattern

👉 Binary Search on Answer

---

## 🧠 Intuition

* We need the **minimum capacity** to ship all packages in `D` days
* If capacity is too small → more days needed
* If capacity is large → fewer days needed

👉 Monotonic behavior → Apply Binary Search

---

## ⚙️ Approach

1. Define search space:

   * low = max(weights)
   * high = sum(weights)

2. Binary search on capacity

3. Feasibility check:

   * Simulate loading packages
   * Count days needed

4. Adjust search:

   * If possible → try smaller capacity
   * Else → increase capacity

---

## ⏱️ Complexity

* Time: O(n * log(sum))
* Space: O(1)

---

## 🚀 Key Learning

* Classic **Minimize Maximum**
* Template for many problems:

  * Book Allocation
  * Painters Partition
  * Split Array Largest Sum

---

## 🏷️ Tags

Binary Search, Greedy, Medium, BS on Answer
