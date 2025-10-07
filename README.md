# Student Grade Management System

A simple **console-based C program** to manage student records — including roll number, name, marks, and grades.  
This project demonstrates the use of **structures, functions, arrays, and conditionals** in C programming.

---

## 🎯 Features
- Add new student records  
- Display all student records  
- Search for a student by roll number  
- Update student marks (grade updates automatically)  
- Input validation for roll numbers and marks  

---

## 🧮 Grading Scale
| Grade | Marks Range |
|-------|--------------|
| A+    | 90 – 100    |
| A     | 80 – 89     |
| B+    | 70 – 79     |
| B     | 60 – 69     |
| C+    | 50 – 59     |
| C     | 40 – 49     |
| D+    | 35 – 39     |
| NG    | Below 35    |

---

## 🧰 Files Included
| File | Description |
|------|--------------|
| `main.c` | Contains main menu and user interaction |
| `student.c` | Contains all student-related functions |
| `student.h` | Structure definition and function prototypes |

---

## ⚙️ How to Compile
### Using GCC:
```bash
gcc main.c student.c -o student_manager
./student_manager
