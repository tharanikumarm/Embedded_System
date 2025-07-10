# 📚 History of C Language & Its Standard Versions

---

## 🧠 Origin of C Language

- **Created by**: Dennis Ritchie  
- **Where**: Bell Laboratories  
- **Year**: 1972  
- **Main Purpose**: To develop the UNIX operating system  
- **Note**: Initially, no standard existed — each compiler had its own rules.

---

## 📘 1978 – K&R C (Kernighan & Ritchie C)

- Based on the book **“The C Programming Language”**
- **Authors**: Brian Kernighan & Dennis Ritchie  
- **Status**: Not an official standard, but used as a reference by everyone  
- Widely adopted in early development

---

## ✅ 1989 – ANSI C / C89

- **First official standard** for the C language  
- Defined by **ANSI** (American National Standards Institute)  
- Also called **ANSI C** or **C89**

### 🔧 Key Features:
- Function prototypes: `int add(int a, int b);`
- Keywords: `const`, `volatile`, `void`
- Standard libraries: `stdio.h`, `stdlib.h`, `string.h`
- Improved macro handling and `#include` usage

---

## 🌐 1990 – ISO C / C90

- **International standard** equivalent of C89  
- Approved by **ISO** (International Organization for Standardization)  
- **C89 == C90** (only different in name, not in feature)

---

## 🔄 1999 – C99 (Major Update)

- A significant update to modernize C language

### ✨ New Features:
- `inline` keyword for inline functions  
- Declare variables anywhere in a block  
- `long long int` type  
- `//` style single-line comments  
- Flexible array members  
- `restrict` keyword (optimization hint)  
- New types: `_Bool`, `_Complex`, `_Imaginary`  
- Improved floating-point support

> ⚠️ Older compilers (especially embedded) were slow to adopt full C99 support.

---

## 🧵 2011 – C11 (Modern Safety)

- Focus on **multithreading**, **Unicode**, and **program safety**

### ✨ New Features:
- `<threads.h>` for multithreading  
- `_Static_assert` for compile-time assertions  
- Anonymous structures/unions  
- Better Unicode handling  
- `_Noreturn` keyword  
- Improved `NULL` usage

---

## 🔧 2018 – C17 (aka C18)

- Mostly a **bug fix version** over C11  
- No major new features  
- Improved **portability** and standard compliance

---

## 🔜 Future – C2x (Expected ~202x)

- Work in progress (not finalized yet)  
- Will improve:
  - Safety
  - Embedded programming support
  - Modern syntax and usability

---

## 🔁 Backward Compatibility

> ✅ Newer C standards support **older code**  
> ❌ Older standards **cannot use new features**

---

## 📌 Widely Used Today

- **C99** – Common in embedded systems and legacy code  
- **C11** – Preferred for modern, multithreaded, and safe applications  
- **C17** – Stable and portable for clean production code

---

