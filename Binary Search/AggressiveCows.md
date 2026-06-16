# 🔹 Aggressive Cows

🔗 SPOJ: https://www.spoj.com/problems/AGGRCOW/
🔗 LeetCode Equivalent: https://leetcode.com/problems/magnetic-force-between-two-balls/

---

## 📌 Pattern

👉 Binary Search on Answer

---

## 🧠 Intuition

* Place `k` cows in stalls such that **minimum distance is maximized**

* Observations:

  * If distance `d` works → all smaller distances also work
  * If distance `d` fails → all larger distances also fail

👉 Monotonic → Apply Binary Search

---

## ⚙️ Approach

1. Sort stall positions

2. Define search space:

   * `low = 1`
   * `high = max(stalls) - min(stalls)`

3. Binary search on distance

4. Greedy feasibility:

   * Place first cow at first stall
   * Place next cow when:

     ```
     stalls[i] - lastPlaced >= mid
     ```

5. Decision:

   * If possible → try bigger distance
   * Else → reduce distance

6. Return maximum valid distance

---

## ⏱️ Complexity

* Time: O(n log n + n log(maxDistance))
* Space: O(1)

---

## 🚀 Key Learning

* Classic **maximize minimum distance**
* Template:

  * Feasible → go right (increase answer)
  * Not feasible → go left

---

## 🏷️ Tags

Binary Search, Greedy, Medium, BS on Answer
