# 📘 What is a Data Type in C?

When we write a program, we give some **data** to the compiler so it can perform a **task or operation**.

To store this data, we use something called a **variable** — a container that holds a value. Different types of data need **different types of containers**, and the **memory size** and **format** of this container depends on the **data type**.

So, a **data type** tells the **compiler**:
- What kind of data is stored (e.g., number, character, decimal, etc.)
- How much memory it needs
- What operations are allowed

---

## 🧱 Types of Data Types in C

In C, data types are classified into the following categories:

### 🔹 Primary / Basic Data Types
- `int`
- `char`
- `float`
- `double`

### 🔸 Derived Data Types
- Arrays (`int arr[5];`)
- Pointers (`int *ptr;`)
- Functions
- Structures

### 🧩 User-Defined Data Types
- `struct`
- `union`
- `enum`
- `typedef`

### ⚫ Void Type
- Used when a function returns nothing: `void func(void);`
- Also used for generic pointers: `void *ptr;`

---

## 🧠 Storage Sizes of Common Data Types (on a 32-bit system)

| Data Type     | Size (Typical 32-bit) | Range / Notes                           |
|---------------|------------------------|------------------------------------------|
| `char`        | 1 byte                 | `-128 to 127` (signed) / `0 to 255` (unsigned) |
| `int`         | 4 bytes                | `-2,147,483,648 to +2,147,483,647`       |
| `short`       | 2 bytes                | `-32,768 to +32,767`                     |
| `long`        | 4 or 8 bytes           | Platform-dependent                       |
| `float`       | 4 bytes                | ~6 to 7 decimal digits                   |
| `double`      | 8 bytes                | ~15 decimal digits                       |
| `long double` | 10 or 16 bytes         | ~19+ decimal digits                      |

> 📌 Use `sizeof()` in C to check the size of any type on your system.

---

## 💡 Summary

A **data type** is a fundamental concept in C that:
- Defines the nature of data
- Allocates appropriate memory
- Enables valid operations on the data

Different types = different containers = different memory and rules ✔

---
