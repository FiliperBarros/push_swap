
<h1 align="center"> Push_Swap</h1>

<br>
---
## 📝 Overview

The goal of this project is to **sort a stack of integers (stack A)** using a **limited set of stack operations** and an **empty auxiliary stack (stack B)**.  
The challenge is to accomplish this using **as few operations as possible**.

---

## 🔧 Allowed Operations

- `sa`, `sb`, `ss`: Swap the top two elements of **stack A**, **stack B**, or **both**.
- `pa`, `pb`: Push the top element from one stack to the other.
- `ra`, `rb`, `rr`: Rotate stack(s) upwards (first element moves to bottom).
- `rra`, `rrb`, `rrr`: Reverse rotate stack(s) (last element moves to top).

---

## 🧠 Algorithm

This implementation uses **Radix Sort**, which sorts numbers **bit by bit**, from the least significant to the most significant bit.

- At each step, elements are pushed between stacks based on their current bit value.
- This continues until the stack is fully sorted.

**Why Radix Sort?**
- Efficient and non-comparative
- Performs well on large input sizes
- Well-suited for this project’s constraints

---

## 🚀 Usage

### 🛠 Compile:

Compile with:

```bash
make
```
Run with:
```bash
./push_swap [numbers...]
```

Example:
```bash
./push_swap 4 2 9 1 7
```

The program outputs the series of operations needed to sort the stack.
