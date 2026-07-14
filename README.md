# Simple_Interest
A simple C program that calculates **Simple Interest** based on the principal amount, rate of interest, and time entered by the user. This beginner-friendly project demonstrates user input, variables, arithmetic operations, and formula implementation in C. Ideal for students learning basic financial calculations and C programming concepts.
# Simple Interest Calculator in C

A simple C program that calculates **Simple Interest (SI)** based on the principal amount, rate of interest, and time period entered by the user. This project is perfect for beginners learning arithmetic operations, user input, and basic financial calculations in C.

## 📌 About

This program:

* Accepts the principal amount.
* Accepts the rate of interest.
* Accepts the time period.
* Calculates the Simple Interest.
* Displays the result to the user.

## 📂 Project Structure

```text
Simple_Interest/
├── simple_interest.c
└── README.md
```

## 💻 Sample Code

```c
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", simpleInterest);

    return 0;
}
```

## 🚀 How to Compile and Run

### Using GCC

Compile the program:

```bash
gcc simple_interest.c -o simple_interest
```

Run the program:

**Linux/macOS**

```bash
./simple_interest
```

**Windows**

```bash
simple_interest.exe
```

## 📤 Sample Output

```text
Enter Principal Amount: 10000
Enter Rate of Interest: 5
Enter Time (in years): 2

Simple Interest = 1000.00
```

## 📐 Formula Used

```text
Simple Interest = (Principal × Rate × Time) / 100
```

## 🛠 Requirements

* GCC Compiler or any C Compiler
* Terminal / Command Prompt
* Basic knowledge of C programming

## 📚 Concepts Used

* Variables and Data Types
* User Input (`scanf`)
* Output (`printf`)
* Arithmetic Operations
* Financial Calculations

## 🎯 Learning Objectives

By completing this project, you will learn:

* How to take user input in C
* How to perform mathematical calculations
* Working with floating-point numbers
* Building beginner-friendly financial applications

## 🔮 Future Enhancements

* Calculate Total Amount (Principal + Interest)
* Add Compound Interest Calculator
* Support Monthly and Quarterly Interest Rates
* Add Input Validation

## 📄 License

This project is open-source and available under the MIT License.

---

⭐ If you found this project helpful, consider giving it a star on GitHub!
