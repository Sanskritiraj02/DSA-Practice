# 🔹 Find the Smallest Divisor Given a Threshold

🔗 https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

---

## 📌 Pattern

👉 Binary Search on Answer

---

## 🧠 Intuition

* We need to find the **smallest divisor** such that:

  sum = ceil(nums[i] / divisor) ≤ threshold

* Observations:

  * Smaller divisor → larger sum
  * Larger divisor → smaller sum

👉 This forms a **monotonic relationship**, making it ideal for Binary Search

---

## ⚙️ Approach

1. Define search space:

   * `low = 1`
   * `high = max(nums)`

2. Apply Binary Search:

   * Pick `mid` as candidate divisor

3. Compute:

   ```
   sum += ceil(nums[i] / mid)
   ```

4. Decision:

   * If `sum <= threshold`:

     * Try smaller divisor → `high = mid - 1`
   * Else:

     * Increase divisor → `low = mid + 1`

5. Return `low`

---

## ⏱️ Complexity

* Time: O(n * log(max(nums)))
* Space: O(1)

---

## 🚀 Key Learning

* Classic **minimize value under constraint**
* Template:

  * Smaller value → worse condition
  * Larger value → better condition

👉 Apply **Binary Search on Answer**

---

## 🏷️ Tags

Binary Search, Greedy, Medium, BS on Answer
