# Doubly Linked List in C++

This project implements a **Doubly Linked List (DLL)** in C++ with the following operations:

- Insert at front
- Insert at back
- Traverse forward
- Traverse backward

Each node contains:
- An integer `data` field
- A `prev` pointer to the previous node
- A `next` pointer to the next node

---

## 📂 File Structure

dsa-practice/
└── linkedlist/
└── doubly.cpp


---

## 🛠️ Features Implemented

### ✅ `insertFront(int val)`
Inserts a new node with value `val` at the front of the list.

### ✅ `insertBack(int val)`
Inserts a new node with value `val` at the end of the list.

### ✅ `displayForward()`
Prints the list from head to tail.

### ✅ `displayBackward()`
Prints the list from tail to head using `prev` pointers.

---

## 💻 Sample Output

Forward: 20 10 30 40
Backward: 40 30 10 20


---

## 🔄 Example Illustration

NULL <- [20] <-> [10] <-> [30] <-> [40] -> NULL


---

## 🚀 How to Run

1. **Compile** the program using g++ or any C++ compiler:

```bash
g++ doubly.cpp -o doubly

Run the compiled file:

./doubly

📘 Learning Objectives
This project helps you understand:

Pointers (prev and next)

Dynamic memory allocation (new)

Traversing a list in both directions

Object-oriented design with a DLL class

🧠 What’s Next?
You can extend this project by adding:

deleteFront(), deleteBack(), deleteValue()

reverse(), insertAfter()

Circular DLL, tail pointer optimization

🤝 Contributing
If you'd like to contribute additional features or improvements, feel free to fork the repo and submit a pull request.

📜 License
This project is open source and available under the MIT License.

