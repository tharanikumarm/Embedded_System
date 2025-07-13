# 🔧 Control Statements in Embedded C – Deep Understanding

Control statements **control the flow of execution** in a program. In Embedded C, they are essential to make decisions, repeat tasks, and respond to changing input conditions (like sensors, flags, etc.).

---

## 🔹 1. Conditional Statements

### ✅ `if` Statement
Executes a block **only if** the condition is true.

```c
if (condition) {
    // Code runs only if condition is true
}
```

- Condition must evaluate to `true` (non-zero) or `false` (0)
- Uses short-circuit evaluation for `&&` and `||`

---

### ✅ `if-else` Statement
Chooses between two paths.

```c
if (a > b) {
    // Block A
} else {
    // Block B
}
```

---

### ✅ `if-else-if` Ladder
Checks multiple conditions.

```c
if (a == 1) {
    // Block 1
} else if (a == 2) {
    // Block 2
} else {
    // Default block
}
```

- First true condition block is executed
- Remaining conditions are skipped

---

### ✅ `switch` Statement
Used for checking **a single variable against multiple constant values**.

```c
switch (expression) {
    case 1:
        // Statement
        break;
    case 2:
        // Statement
        break;
    default:
        // Fallback
}
```

- `break` prevents fall-through
- `expression` must be `int`, `char`, or `enum`
- `default` is optional but good practice

---

## 🔹 2. Looping (Iteration) Statements

### ✅ `while` Loop
Runs **as long as** the condition is true.

```c
while (condition) {
    // Repeat this block
}
```

- Entry-controlled loop
- May not run at all if condition is false

---

### ✅ `do-while` Loop
Runs the block **at least once**, then checks condition.

```c
do {
    // Execute once, then check
} while (condition);
```

- Exit-controlled loop
- Always executes once, regardless of condition

---

### ✅ `for` Loop
Best when number of iterations is known.

```c
for (int i = 0; i < 10; i++) {
    // Loop runs 10 times
}
```

- Compact form: init + condition + update
- Loop variable scope is limited to the loop

---

## 🔹 3. Jump Statements

### ✅ `break`
Exits a `loop` or `switch` statement immediately.

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
}
```

- Works only inside `for`, `while`, `do-while`, or `switch`

---

### ✅ `continue`
Skips the rest of the loop body for **current iteration**, goes to next.

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) continue;
    // This skips i == 5
}
```

---

### ⚠️ `goto` (Use Rarely)
Unconditionally jumps to a label.

```c
goto skip;
...
skip:
    // Jump here
```

- Not recommended — affects readability and maintainability
- Only used in low-level error handling

---

## 🧠 Summary Table

| Type        | Statement     | Description                        | Control Type     |
|-------------|---------------|------------------------------------|------------------|
| Conditional | `if`, `else`  | Based on logical condition         | Conditional      |
| Selection   | `switch`      | Select based on constant value     | Conditional      |
| Looping     | `for`         | Known iteration count              | Entry-controlled |
| Looping     | `while`       | Repeat until false                 | Entry-controlled |
| Looping     | `do-while`    | Run once, then repeat if true      | Exit-controlled  |
| Jump        | `break`       | Exit current loop or `switch`      | Jump             |
| Jump        | `continue`    | Skip to next iteration             | Jump             |
| Jump        | `goto`        | Jump to label (not recommended)    | Jump             |

---

## ✅ Key Concepts to Master

| Concept                       | Focus Area                              |
|------------------------------|------------------------------------------|
| `if` vs `switch`             | When to use which (speed, clarity)       |
| Loop types                   | Entry vs exit control                    |
| Nesting control statements   | Proper structure and indentation         |
| Infinite loops               | `while(1)` or `for(;;)` usage            |
| `break` vs `continue`        | Understand clearly how each behaves      |
| Fall-through in `switch`     | Consequences of missing `break`          |
| `goto` rules                 | When it's allowed, why it's discouraged  |

---

## 🧪 Practice Tips

- Write nested `if-else` and `switch-case` based menus
- Try loops with `continue`, `break`, and sentinel values
- Use `goto` only to understand control flow — avoid in real code
- Add `printf()` inside each control block to trace logic

---

Happy coding and mastering control flow in Embedded C!
