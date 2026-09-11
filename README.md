# C++ Problem Solving & Programming Fundamentals

A collection of **C++ problem-solving exercises** focused on building a strong foundation in programming fundamentals, problem-solving, data manipulation, and file-based applications.

This repository contains progressively structured problems covering **Matrices, Strings, Recursion, Vectors, Structures, File Handling, and CRUD operations**, with each problem implemented using reusable functions and fundamental C++ techniques.

---

## 📌 About This Repository

This repository is part of my journey to strengthen my **programming fundamentals and problem-solving skills** before moving deeper into software development.

The goal is not simply to solve problems, but to understand:

- How to break a problem into smaller parts.
- How to design reusable functions.
- How to work with arrays, matrices, strings, and vectors.
- How to search, manipulate, and transform data.
- How to use structures to represent real-world entities.
- How to work with files and persistent data.
- How to build simple CRUD functionality from scratch.
- How to write clear and maintainable C++ code.

> **Strong fundamentals first. Then frameworks.**

---

## 🧠 Topics Covered

### 🔢 Matrix Operations

Problems focused on working with two-dimensional arrays and common matrix operations.

- [Random Matrix Generation](./Problem-01/3X3-Random-Matrix.cpp)
- [Sum Each Row in Matrix](./Problem-02/Sum-Each-Row-In-Matrix.cpp)
- [Store Row Sums in Another Array](./Problem-03/Sum-Each-Row-In-Matrix-In-Another-Array.cpp)
- [Sum Each Column in Matrix](./Problem-04/Sum-Each-Column-In-Matrix.cpp)
- [Store Column Sums in Another Array](./Problem-05/Sum-Each-Column-In-Matrix-In-Another-Array.cpp)
- [Ordered Matrix Generation](./Problem-06/3X3-Ordered-Matrix.cpp)
- [Matrix Transpose](./Problem-07/Transpose-Matrix.cpp)
- [Multiply Two Matrices](./Problem-08/Multiply-Two-Matrices.cpp)
- [Print Middle Row and Column](./Problem-09/Print-Middle-Row-And-Column-Of-Matrix.cpp)
- [Matrix Sum](./Problem-10/Sum-Of-Matrix.cpp)
- [Check Matrices Equality](./Problem-11/Check-Matrices-Equality.cpp)
- [Check Typical Matrices](./Problem-12/Check-Typical-Matrices.cpp)
- [Check Identity Matrix](./Problem-13/Check-Identity-Matrix.cpp)
- [Check Scalar Matrix](./Problem-14/Check-Scaler-Matrix.cpp)
- [Count Number in Matrix](./Problem-15/Count-Number-In-Matrix.cpp)
- [Check Sparse Matrix](./Problem-16/Check-Sparse-Matrix.cpp)
- [Search for Number in Matrix](./Problem-17/Number-Exists-In-Matrix.cpp)
- [Find Intersected Numbers in Matrices](./Problem-18/Intersected-Number-In-Matrix.cpp)
- [Find Minimum and Maximum Number](./Problem-19/Get-Min-And-Max-Number-In-Matrix.cpp)
- [Check Palindrome Matrix](./Problem-20/Check-Palindrome-Matrix.cpp)

---

### 🔤 String Manipulation

Problems designed to strengthen string processing, character manipulation, and string transformation skills.

- [Print First Letter of Each Word](./Problem-23/Print-First-Letter-Of-Each-Word.cpp)
- [Uppercase First Letter of Each Word](./Problem-24/Upper-First-Letter-Of-Each-Word.cpp)
- [Lowercase First Letter of Each Word](./Problem-25/Lower-First-Letter-Of-Each-Word.cpp)
- [Uppercase and Lowercase All Letters](./Problem-26/Upper-Lower-All-Letters-Of-a-String.cpp)
- [Invert Character Case](./Problem-27/Invert-Character-Case.cpp)
- [Invert All Letters Case](./Problem-28/Invert-All-Letters-Case.cpp)
- [Count Lowercase and Uppercase Letters](./Problem-29/Count-small-Capital-Letters.cpp)
- [Count Letters in String](./Problem-30/Count-Letters.cpp)
- [Check if Character is Vowel](./Problem-31/Is-Vowel.cpp)
- [Count Vowels](./Problem-32/Count-Vowel.cpp)
- [Print All Vowels in String](./Problem-33/Print-All-Vowels-In-String.cpp)
- [Print Each Word in String](./Problem-34/Print-Each-Word-In-String.cpp)
- [Count Each Word in String](./Problem-35/Count-Each-Word-In-String.cpp)
- [Split String](./Problem-36/Split-String.cpp)
- [Trim String](./Problem-37/TrimLeft-TrimRight-Trim.cpp)
- [Join String](./Problem-38/Join-String.cpp)
- [Reverse Words](./Problem-39/Reverse-Words.cpp)
- [Replace Words](./Problem-40/Replace-Words.cpp)
- [Remove Punctuations](./Problem-41/Remove-Punctuations.cpp)

---

### 🔁 Recursion & Mathematical Sequences

Problems focused on understanding iterative and recursive approaches to mathematical sequences.

- [Fibonacci Series Using Loop](./Problem-21/Implement-Fibonacci-Series-Using-Loop.cpp)
- [Fibonacci Series Using Recursion](./Problem-22/Implement-Fibonacci-Series-Using-Recursion.cpp)

---

### 💾 Serialization

Problems focused on converting structured records to strings and reconstructing records from strings.

- [Convert Record to Line](./Problem-42-Serialization/Convert-Record-To-Line.cpp)
- [Convert Line to Record](./Problem-43-Serialization/Convert-Line-To-Record.cpp)

---

### 📁 File Handling

Problems focused on reading, writing, and managing client records using text files.

- [Add Clients to File](./Problem-44-File-Handling/Add-Clients-To-File.cpp)
- [Show All Clients](./Problem-45-File-Handling/Show-All-Clients.cpp)
- [Find Client by Account Number](./Problem-46-File-Handling-Searching/Find-Client-By-Account-Number.cpp)
- [Delete Client](./Problem-47-File-Handling/Delete-Client.cpp)
- [Update Client by Account Number](./Problem-48-File-Handling/Update-Client-By-Account-Number.cpp)

---

### 📦 Data Structures

Practical usage of fundamental C++ data structures including:

- Arrays
- Two-Dimensional Arrays
- `vector`
- `string`
- `struct`

---

### 📁 File Handling

Practical exercises for working with text files and persistent data.

- Creating and opening files
- Reading data from files
- Writing data to files
- Appending records
- Converting records to text lines
- Converting text lines back into records
- Saving updated data
- Rebuilding file data after deletion

---

### 🏦 Client Management & CRUD

The later problems apply the previous fundamentals to a small **file-based client management system**.

The application demonstrates basic CRUD operations:

| Operation | Description                             |
| --------- | --------------------------------------- |
| Create    | Add new clients to the file             |
| Read      | Load and display all clients            |
| Search    | Find a client by account number         |
| Update    | Modify client information               |
| Delete    | Remove a client from persistent storage |

Each client contains:

```text
Account Number
PIN Code
Name
Phone
Account Balance
```

The project uses a text file as a simple persistence layer.

---

## 🛠️ Technologies & Tools

- **C++**
- Standard Template Library (STL)
- `iostream`
- `string`
- `vector`
- `fstream`
- `iomanip`
- `cctype`
- `cstdlib`
- `ctime`
- Functions
- Arrays
- Matrices
- Structures
- File Streams

---

## 💡 Programming Concepts Practiced

Throughout these problems, I practice and reinforce:

```text
Variables & Data Types
        ↓
Conditions & Loops
        ↓
Functions
        ↓
Arrays & Matrices
        ↓
Strings & Character Processing
        ↓
Vectors & STL
        ↓
Structures
        ↓
File Handling
        ↓
Data Serialization
        ↓
CRUD Operations
```

The emphasis is on understanding the logic behind each solution rather than relying heavily on ready-made abstractions.

---

## 🧩 Problem-Solving Approach

For each problem, the general approach is:

```text
Understand the Problem
        ↓
Identify Inputs & Outputs
        ↓
Break the Problem Into Smaller Tasks
        ↓
Design Helper Functions
        ↓
Implement the Solution
        ↓
Test Different Cases
        ↓
Refactor & Improve
```

This approach helps build the habit of solving problems systematically instead of jumping directly into code.

---

## 🎯 Goals

The main goals of this repository are:

- Build strong C++ fundamentals.
- Improve logical thinking.
- Improve problem decomposition.
- Practice writing reusable functions.
- Become comfortable manipulating data manually.
- Understand basic data persistence.
- Prepare for larger real-world projects.
- Build a solid foundation for Data Structures & Algorithms.
- Develop programming habits that transfer to other languages and technologies.

---

## 📈 Progress

The repository is continuously growing as new problems are solved.

| Category                       | Status       |
| ------------------------------ | ------------ |
| Matrix Problems                | ✅ Completed |
| Recursion Problems             | ✅ Completed |
| String Manipulation            | ✅ Completed |
| File Handling                  | ✅ Completed |
| Client CRUD Operations         | ✅ Completed |
| More Problem-Solving Exercises | 🔜 Coming    |

---

## 🧪 Example: File-Based Client Management

One of the more advanced sections of the repository combines multiple concepts into a single workflow:

```text
User Input
    ↓
Client Structure
    ↓
Convert Record → Text Line
    ↓
Save To Clients.txt
    ↓
Load File
    ↓
Convert Text Line → Record
    ↓
Store In vector<stClient>
    ↓
Search / Update / Delete
    ↓
Save Updated Data
```

This demonstrates how simple programming fundamentals can be combined to create a small but functional application.

---

## 📚 Learning Philosophy

> **Don't just memorize the solution. Understand why it works.**

The purpose of these exercises is to develop the ability to take an unfamiliar problem, analyze it, design a solution, and implement it independently.

The same fundamental skills will later be applied to larger applications, databases, APIs, and software architecture.

## 👨‍💻 Author

**Aboalazayem**

Software Engineer | C++ & .NET Learner | Problem-Solving Enthusiast

Focused on building strong programming fundamentals and progressing toward professional **.NET / ASP.NET Core development**.

---

## ⭐ Repository Philosophy

```text
Learn → Understand → Practice → Build → Improve
```

**Strong fundamentals create strong software engineers.**
