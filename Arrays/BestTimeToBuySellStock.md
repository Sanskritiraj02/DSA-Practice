# Best Time to Buy and Sell Stock

🔗 **Problem Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

---

## 🧠 Approach
- Track the minimum price seen so far  
- For each day, calculate profit = current price - min price  
- Update maximum profit accordingly  

---

## ⚡ Complexity
- **Time:** O(n)  
- **Space:** O(1)  

---

## 💡 Key Insight
Instead of checking all pairs, we track the lowest buying price
and compute the best profit in one pass.

---

## 💻 Code

```cpp
// See BestTimeToBuySellStock.cpp
