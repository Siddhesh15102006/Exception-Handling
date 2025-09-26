---
# 🧪 Experiment 16 :- Exception Handling in C++

---

## 📖 Theory :-
In programming, exceptions are abnormal conditions or errors that occur during the execution of a program. Exception Handling in C++ allows you to gracefully handle such runtime errors without crashing the program.

🧱 Key Components of Exception Handling:
Keyword	Purpose
try	Defines a block of code to test for errors
catch	Defines a block of code to handle errors
throw	Used to signal (throw) an exception
## ✅ General Syntax:
```cpp
try {
    // Code that may cause an exception
    if (error_condition)
        throw exception_type;
}
catch (exception_type e) {
    // Handle exception
}
```

---

## 📝 Experiment Questions and Code
# 🔹 Q1. Exception Handling – Division by Zero
✅ Syntax:
try {
    if (denominator == 0)
        throw "Division by zero!";
}
catch (const char* msg) {
    cout << msg;
}

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        if (b == 0)
            throw "Error: Division by zero!";
        cout << "Result: " << (float)a / b << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
```

---

# 🔹 Q2. Checking Eligibility for Voting Using Exception Handling
✅ Syntax:
try {
    if (age < 18)
        throw exception_type;
}
catch (exception_type e) {
    // Handle underage exception
}

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18)
            throw age;
        cout << "You are eligible to vote!" << endl;
    }
    catch (int e) {
        cout << "You are not eligible to vote. Age: " << e << endl;
    }

    return 0;
}
```

---

✅ Conclusion:

We successfully implemented exception handling in C++ using the try, catch, and throw keywords.

We handled common runtime errors such as :-
Division by zero
Invalid age input for voting eligibility

Exception handling improves program stability, robustness, and user experience by managing errors gracefully instead of terminating the program abruptly.
---
