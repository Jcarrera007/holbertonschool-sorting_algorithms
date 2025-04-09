# Sorting Algorithms and Time Complexity

## 📚 Overview

This document covers the fundamentals of sorting algorithms, Big O notation, how to evaluate time complexity, and how to choose the best sorting algorithm for a specific case. It also explains what stable sorting means and why it matters.

---

## 🌀 At Least Four Different Sorting Algorithms

### 1. **Bubble Sort**
- **How it works**: Repeatedly swaps adjacent elements if they are in the wrong order.
- **Time Complexity**:  
  - Worst: O(n²)  
  - Average: O(n²)  
  - Best: O(n) *(when array is already sorted)*
- **Stable**: ✅ Yes

---

### 2. **Selection Sort**
- **How it works**: Repeatedly finds the minimum element from the unsorted part and places it at the beginning.
- **Time Complexity**:  
  - Worst: O(n²)  
  - Average: O(n²)  
  - Best: O(n²)
- **Stable**: ❌ No *(unless implemented carefully)*

---

### 3. **Merge Sort**
- **How it works**: Divides the array into halves, recursively sorts them, and then merges them.
- **Time Complexity**:  
  - Worst: O(n log n)  
  - Average: O(n log n)  
  - Best: O(n log n)
- **Stable**: ✅ Yes

---

### 4. **Quick Sort**
- **How it works**: Picks a "pivot", partitions the array around the pivot, then sorts the partitions.
- **Time Complexity**:  
  - Worst: O(n²)  
  - Average: O(n log n)  
  - Best: O(n log n)
- **Stable**: ❌ No

---

## 📈 What is Big O Notation?

**Big O notation** describes the upper bound of an algorithm's running time in the worst case. It's used to:
- Evaluate **efficiency** of an algorithm.
- Compare algorithms independently of hardware.

### Common Big O Classes:
| Notation | Description            | Example                     |
|----------|------------------------|-----------------------------|
| O(1)     | Constant time          | Accessing array element     |
| O(log n) | Logarithmic time       | Binary search               |
| O(n)     | Linear time            | Iterating through array     |
| O(n log n) | Linearithmic time    | Merge sort, quick sort avg  |
| O(n²)    | Quadratic time         | Bubble sort, selection sort |
| O(2^n)   | Exponential time       | Recursive Fibonacci         |

---

## 🧠 How to Evaluate Time Complexity

1. **Count loops**: Nested loops usually mean higher complexity (e.g., O(n²)).
2. **Check recursion**: Recursion trees help identify exponential or logarithmic growth.
3. **Ignore constants**: We focus on how the algorithm scales as input grows.
4. **Worst-case focus**: Big O describes the **worst-case** scenario.

---

## ⚙️ How to Select the Best Sorting Algorithm

| Scenario                              | Recommended Algorithm     |
|---------------------------------------|---------------------------|
| Small datasets                        | Insertion Sort or Bubble Sort |
| Need stable sort                      | Merge Sort                |
| Limited memory                        | Quick Sort (in-place)     |
| Nearly sorted data                    | Insertion Sort            |
| General purpose with speed & stability | Merge Sort or TimSort     |

**Note**: Quick Sort is often fastest on average, but its worst-case time is O(n²). Merge Sort is more predictable.

---

## 🧷 What is a Stable Sorting Algorithm?

A **stable sort** maintains the relative order of records with equal keys.  
This is especially important when sorting multi-field records.

### ✅ Stable Sorts:
- Bubble Sort
- Merge Sort
- Insertion Sort
- TimSort (used in Python and Java)

### ❌ Unstable Sorts:
- Quick Sort
- Selection Sort
- Heap Sort

---

## 📌 Conclusion

Understanding time complexity and sorting algorithm properties helps you choose the right tool for the job. Always consider data size, structure, and whether stability is required.

---
## author:

<a href="https://github.com/Jcarrera007">Jimmy Carrera</a>

