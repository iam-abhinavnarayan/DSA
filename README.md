# Data Structures & Algorithms in C++

A curated and well-structured collection of **Data Structures and Algorithms (DSA)** problems solved in **C++**, aimed at strengthening problem-solving skills and preparing for technical interviews.

---

## 🛠 Tech Stack
- **Language:** C++
- **Core Skills:** Data Structures, Algorithms, Problem Solving
- **Practice Platforms:** GeeksforGeeks, LeetCode

---

## 📚 Topics Covered
- Arrays
- Strings
- Linked List
- Stack & Queue
- Trees
- Graphs
- Dynamic Programming (in progress)

---

## 🗂 Repository Structure

    DSA/
    ├── Arrays/
    ├── Strings/
    ├── LinkedList/
    ├── Stack/
    ├── Queue/
    ├── Trees/
    ├── Graphs/
    └── README.md


---

## 🧠 Coding Standards
- Clean, readable, and well-commented C++ code
- Optimal time and space complexity wherever possible
- Each file includes:
  - Problem description
  - Approach
  - Time & space complexity
- `main()` function is added **only for demonstration/testing purposes**

---

## 📑 Problem Index

### 🟦 Arrays
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | Second Largest Element in an Array | Single traversal | O(n) | O(1) | [View](Arrays/second_largest.cpp) |
| 2 | Two Sum | Single traversal | O(n) | O(1) | [View](Arrays/two_sum.cpp) |
| 3 | Move All Zeroes To End | Single traversal | O(n) | O(1) | [View](Arrays/move_all_zeroes_to_end.cpp) |
| 4 | Reverse an Array | Two-pointer | O(n) | O(1) | [View](Arrays/reverse_an_array.cpp) |
| 5 | Rotate Array | Reversal | O(n) | O(1) | [View](Arrays/rotate_array.cpp) |
| 6 | Array Duplicates | Floyd’s Cycle Detection | O(n) | O(1) | [View](Arrays/findDuplicate.cpp) |






---
### 🟧 Two Pointer Technique
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | Count Pairs Whose Sum is less than Target | Two pointers | O(n log n) | O(1) | [View](TwoPointerTechnique/Count_Pairs_whose_sum_is_less_than_target.cpp) |
| 2 | Sum Pair closest to target | Two pointers | O(n log n) | O(1) | [View](TwoPointerTechnique/Sum_Pair_closest_to_target.cpp) |
| 3 | Indexes of Subarray Sum | Two pointers | O(n) | O(1) | [View](TwoPointerTechnique/Indexes_of_Subarray_Sum.cpp) |
| 4 |  Count distinct elements in every window | Two pointers/SlidingWindow | O(n) | O(k) | [View](TwoPointerTechnique/distinct_elements_window.cpp) |

---

### 🟫Prefix Sum
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | Equilibrium Point | Prefix Sum | O(n) | O(1) | [View](PrefixSum/Equilibrium_Point.cpp) |
| 2 | Longest Subarray with Sum K | Prefix Sum | O(n) | O(n) | [View](PrefixSum/longest_subarray.cpp) |
| 3 | Largest subarray of 0's and 1's | Prefix Sum + Hashing | O(n) | O(n) | [View](PrefixSum/longest_subarray_01.cpp) |
| 4 | Product of Array Except Self | Prefix–Suffix | O(n) | O(n) | [View](PrefixSum/Product_array_puzzle.cpp) |


---


### 🟩 Strings
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | NonRepeating | Frequency-index array | O(n) | O(1) | [View](String/NonRepeating.cpp) |
| 1 | Group Anagrams   | Hashmap (sorting as key) | O(n·k log k) | O(n·k) | [View](String/groupAnagram.cpp) |

---

### 🟨 Linked List
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | Reverse a linked list | Iterative | O(n) | O(1) | [View](LinkedList/Reverse_a_linked_list.cpp) |
| 2 | Remove Linked List Elements | Traversal | O(n) | O(1) | [View](LinkedList/RemoveElement.cpp) |
| 3 | Detect Loop | Two Pointers (Floyd's Cycle Detection) | O(n) | O(1) | [View](LinkedList/Detect_Loop.cpp) |
| 4 | Clone ist | Interleaving Nodes (In-place Deep Copy) | O(n) | O(1) | [View](LinkedList/cloneList.cpp) |
| 5 | Add Num | Reverse + Simulation | O(N + M) | O(max(N, M)) | [View](LinkedList/addNum.cpp) |
| 6 | Loop Entry Point | Floyd's Cycle Detection | O(n) | O(1) | [View](LinkedList/loop_entry_point.cpp) |


---

### 🟪 Heap
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | Top K Frequent Elements | Heap | O(nlogn) | O(n) | [View](Heap/TopKFrequent.cpp) |


---

### 🟥 Stack & Queue
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | Valid Parentheses | Stack-based validation | O(n) | O(n) | [View](Stack/valid_parentheses.cpp) |

---
### 🟪 Recursion And Backtracking
| # | Problem | Approach | Time | Space | Solution |
|---|---------|----------|------|-------|----------|
| 1 | Pow(x, n) | Recursion (Divide & Conquer) | O(log n) | O(log n) | [View](RecursionAndBacktracking/pow.cpp) |
| 2 | Subsets | Backtracking | O(n × 2ⁿ) | O(n) | [View](RecursionAndBacktracking/subset.cpp) |

---
### 🟪 Trees
| # | Problem | Approach | Time | Space | Solution |
|---|--------|----------|------|-------|----------|
| 1 | Same Tree | BFS | O(n) | O(n) | [View](Tree/SameTree.cpp) |
| 2 | Invert Binary Tree | Recursion | O(n) | O(h) | [View](Tree/InvertBinaryTree.cpp) |

---

## 🚀 How to Run

```bash
g++ filename.cpp -o filename
./filename

📈 Progress & Consistency

*Repository is updated regularly

*Problems are added topic-wise

*Focus on quality, clarity, and consistency over quantity

 ⚠️ Disclaimer
*All solutions are written for learning and practice purposes

*Problem statements and core logic are inspired by standard platforms such as GeeksforGeeks and LeetCode

👤 Author
Abhinav Narayan
DSA | C++ | Problem Solving