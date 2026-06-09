# 🔹 Fruit Into Baskets

🔗 https://leetcode.com/problems/fruit-into-baskets/

---

## 📌 Pattern

👉 Sliding Window (At most K distinct elements)

---

## 🧠 Intuition

* You have 2 baskets → at most 2 distinct fruits allowed
* Find longest subarray with ≤ 2 unique elements

---

## ⚙️ Approach

1. Use sliding window `[left, right]`
2. Use hashmap to track frequency
3. If distinct fruits > 2 → shrink window
4. Update max length

---

## ⏱️ Complexity

* Time: O(n)
* Space: O(1) (max 2 types)

---

## 🚀 Key Learning

* Template for **“at most K distinct”**
* Very important for interviews

---

## 🏷️ Tags

Sliding Window, HashMap, Medium, Two Pointer
