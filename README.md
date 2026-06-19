# C Pointers & Functions Practice

##  Overview
This repository contains beginner-friendly C programs covering important concepts such as:

- Pointers
- Dereferencing
- Pointer to Pointer (`**`)
- Call by Value
- Call by Reference
- Swapping Variables Using Pointers

These examples helped me understand how memory addresses and pointers work in C.

---

## 📚 Topics Covered

### 1. Basic Pointers
- Storing variable addresses
- Printing memory addresses using `%p`
- Dereferencing pointers using `*`

### 2. Different Pointer Types
- Integer Pointer (`int *`)
- Character Pointer (`char *`)
- Float Pointer (`float *`)

### 3. Pointer to Pointer
- Using `**`
- Accessing values through multiple levels of indirection

### 4. Call by Value
- Function receives copies of variables
- Changes inside the function do not affect original variables

**Example:**
```c
sum(x, y);
```

### 5. Call by Reference
- Function receives addresses of variables
- Changes inside the function affect original variables

**Example:**
```c
sum(&x, &y);
```

### 6. Swapping Using Pointers
- Swapping two variables without returning values
- Using memory addresses to modify original variables

---

##  Key Concepts

### Call by Value
When a function receives copies of variables, changes made inside the function do not affect the original variables.

### Call by Reference
When a function receives addresses of variables, it can directly modify the original variables.

### Pointer Levels

```text
a      = value
&p     = address

*p     = 1 step back
**p    = 2 steps back
***p   = 3 steps back
```

Example:

```text
***r
 ↓
**q
 ↓
*p
 ↓
a
 ↓
10
```

---

##  Learning Outcome

Through these programs, I learned:

- How pointers store memory addresses
- How dereferencing works
- Difference between Call by Value and Call by Reference
- Pointer to Pointer concepts
- Swapping variables using pointers
- Memory manipulation in C

---

##  Language

- C Programming Language

