# LCM (EKOK) Calculator

This project implements a function to find the **Least Common Multiple** of two numbers.

## ⚙️ Logic

The algorithm uses an efficient iterative approach:
1.  Identify the **larger** of the two numbers (`max`).
2.  Start checking from `max`.
3.  Check if the current value is divisible by *both* numbers.
4.  If not, increment by `max` (check `max * 2`, `max * 3`, etc.) and repeat.

## 🚀 Example Output

**Input:** `7` and `4`

* Check 7: Not divisible by 4.
* Check 14: Not divisible by 4.
* Check 21: Not divisible by 4.
* **Check 28:** Divisible by both 7 and 4! $\to$ **Result: 28**

```text
--- EKOK Hesaplama ---
Sayilar: 7 ve 4
Sonuc  : 28
