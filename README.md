# URI Online Judge / beecrowd Solutions

A collection of **competitive programming and beginner problem-solving solutions** from **URI Online Judge**, now known as **beecrowd**.

This repository contains solutions written mainly in **C** and **Java** and focuses on fundamental programming concepts such as input/output, arithmetic, conditions, loops, formulas, number processing, and basic problem-solving techniques.

> The repository is primarily a learning/practice archive. Some older files preserve the original coding style used while learning and may require small cleanup before compiling with a modern toolchain.

---

## 📌 Repository Overview

The repository contains solutions for a range of beginner beecrowd problems, including problem IDs such as:

```text
1000
1001
1002
1003
1004
1005
1006
1007
1008
1009
1010
1011
1012
1013
1014
1015
1016
1017
1018
1019
1020
1021
1035
1036
1037
1038
1040
1041
1042
1043
1044
1045
1046
1047
1048
1049
1050
1051
1052
1059
1060
1061
1064
1065
1066
1067
1070
1071
1072
1073
1074
1075
1078
1079
1080
1095
1096
1097
1098
1114
1115
1116
1133
```

Some problems have more than one solution or experimental version.

Examples:

```text
1018.c
1018 0r.c

1021.c
1021 or.c

1036.c
1036. or.c

1037.c
1037 or.c

1047.c
1047 or.c

1073.c
1073_0.c

1096.c
1096_0.c

1097.c
1097_0.c

1116.c
1116_0.c

1133.c
1133_0.c
```

These alternate files are useful for comparing different approaches to the same problem.

---

## 🎯 Purpose

The main goals of this repository are to:

- Practice competitive programming
- Learn programming syntax through small problems
- Improve problem-solving skills
- Practice standard input and output
- Understand arithmetic expressions
- Learn conditional statements
- Practice loops and iteration
- Work with integers and floating-point values
- Learn simple formulas and calculations
- Compare C and Java implementations
- Keep solved problems organized for future revision

---

## 🛠️ Languages Used

### C

Most solutions in the repository are written in C.

Typical structure:

```c
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", a + b);

    return 0;
}
```

C solutions use concepts such as:

```text
scanf
printf
if / else
for
while
arithmetic operators
modulus
floating-point calculations
```

---

### Java

A number of the early beecrowd problems also have Java versions.

Typical modern judge-style structure would be:

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int a = input.nextInt();
        int b = input.nextInt();

        System.out.println(a + b);
    }
}
```

> Some Java files in this historical repository use old or non-standard class naming. If a file does not compile directly, rename/adapt the public class to match the filename or use the class name required by the online judge before submitting.

---

# 📚 Concepts Covered

## 1. Basic Input and Output

The first exercises introduce:

- Printing text
- Reading integer values
- Reading decimal values
- Formatting output

Example problem files include:

```text
uri 1000.c
uri 1000.java
Uri 1001.c
uri 1001.java
Uri 1002.c
uri 1002.java
```

---

## 2. Basic Arithmetic

Several early solutions practice:

```text
Addition
Subtraction
Multiplication
Division
Weighted averages
Differences
Salary calculations
Area calculations
Distance calculations
Fuel calculations
```

Relevant problem ranges include many solutions from:

```text
1001 – 1017
```

---

## 3. Integer Division & Remainders

Some solutions use integer division and the modulo operator to break a value into multiple parts.

Examples include:

```text
uri 1018.c
uri 1021.c
```

Typical concepts:

```c
value / divisor
value % divisor
```

These exercises are useful for understanding quotient/remainder logic.

---

## 4. Conditional Statements

The repository includes many exercises using:

```c
if
else
else if
```

Examples include:

```text
uri 1035.c
uri 1036.c
uri 1037.c
uri 1038.c
uri 1040.c
uri 1041.c
uri 1042.c
uri 1043.c
uri 1044.c
uri 1045.c
uri 1046.c
uri 1047.c
uri 1048.c
uri 1049.c
uri 1050.c
uri 1051.c
uri 1052.c
```

These problems practice:

- Comparing values
- Multiple logical conditions
- Range checking
- Decision making
- Classification
- Sorting small sets of values
- Formula validation

---

## 5. Loops and Repetition

Later exercises make frequent use of loops.

Typical instructions/concepts:

```c
for
while
break
```

Examples include:

```text
uri 1059.c
uri 1060.c
uri 1064.c
uri 1065.c
uri 1066.c
uri 1067.c
uri 1070.c
uri 1071.c
uri 1072.c
uri 1073.c
uri 1074.c
uri 1075.c
uri 1078.c
uri 1079.c
uri 1080.c
```

These exercises cover:

- Repeated input
- Counting
- Positive/negative numbers
- Even/odd values
- Sequences
- Multiplication tables
- Maximum values
- Average calculations

---

## 6. Number Sequences

The repository contains several sequence-generation exercises.

Examples:

```text
uri 1095.c
uri 1096.c
uri 1097.c
uri 1098.c
```

These are useful for practicing:

- Nested/repeated output
- Increment patterns
- Loop control
- Integer and decimal formatting

---

## 7. Repeated Input and Validation

Examples include:

```text
uri 1114.c
uri 1115.c
uri 1116.c
uri 1133.c
```

These exercises introduce ideas such as:

- Repeating until a valid value is entered
- Breaking out of loops
- Checking conditions repeatedly
- Processing multiple test cases

---

# 📁 Repository Structure

The current repository uses a simple flat-file structure.

Example:

```text
Uri-Online-Judge-beecrowd/
│
├── README.md
│
├── uri 1000.c
├── uri 1000.java
├── Uri 1001.c
├── uri 1001.java
├── Uri 1002.c
├── uri 1002.java
│
├── uri 1003.c
├── uri 1003.java
├── ...
│
├── uri 1018.c
├── uri 1018.java
├── uri 1021.c
│
├── uri 1035.c
├── uri 1035.java
├── ...
│
├── uri 1070.c
├── ...
│
├── uri 1098.c
├── uri 1114.c
├── uri 1115.c
├── uri 1116.c
└── uri 1133.c
```

There are also a few general C practice files, such as:

```text
Using fgets function.c
Using gets function.c
While.c
```

---

# 🚀 How to Use This Repository

## Clone the Repository

```bash
git clone https://github.com/Dewannoor28/Uri-Online-Judge-beecrowd.git
```

Enter the repository:

```bash
cd Uri-Online-Judge-beecrowd
```

---

# ▶️ Running a C Solution

You need a C compiler such as GCC.

For example, to compile:

```text
uri 1000.c
```

use:

```bash
gcc "uri 1000.c" -o uri1000
```

Run on Linux/macOS:

```bash
./uri1000
```

Run on Windows PowerShell:

```powershell
.\uri1000.exe
```

Because many filenames contain spaces, keep the filename inside quotation marks when compiling.

---

# ☕ Running a Java Solution

You need a JDK installed.

Some historical Java files may require class-name cleanup before local compilation.

A safe approach is:

1. Open the Java solution.
2. Copy the logic into a file named:

```text
Main.java
```

3. Use:

```java
public class Main
```

4. Compile:

```bash
javac Main.java
```

5. Run:

```bash
java Main
```

When submitting to an online judge, always follow that judge's required Java class/file format.

---

# 🧪 Example: Basic Output

A very simple C solution in this repository follows the pattern:

```c
#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    return 0;
}
```

This demonstrates the basic structure of a C program and standard output.

---

# 🧮 Example: Integer Division

Problems involving banknotes or value decomposition use integer division and remainder operations.

General idea:

```c
notes = value / denomination;
value = value % denomination;
```

The process can be repeated for each denomination.

This is a useful beginner exercise for understanding:

```text
/
%
```

operators.

---

# ✅ Example: Conditional Logic

A typical conditional exercise follows this pattern:

```c
if (condition) {
    printf("Condition satisfied\n");
} else {
    printf("Condition not satisfied\n");
}
```

More advanced exercises combine multiple conditions using:

```c
&&
||
==
>=
<=
%
```

---

# 🔁 Example: Loop Logic

Typical loop-based solution:

```c
for (int i = 0; i < 6; i++) {

    printf("%d\n", value);

    value += 2;
}
```

These problems are useful for developing confidence with iteration.

---

# 📖 Suggested Learning Order

If you are new to competitive programming, a useful progression through the repository is:

```text
1000
  ↓
1001 – 1007
  ↓
1008 – 1017
  ↓
1018 – 1021
  ↓
1035 – 1052
  ↓
1059 – 1080
  ↓
1095 – 1098
  ↓
1114 – 1133
```

Conceptually:

```text
Output
  ↓
Input
  ↓
Arithmetic
  ↓
Formulas
  ↓
Integer Division
  ↓
Conditions
  ↓
Loops
  ↓
Sequences
  ↓
Repeated Input
```

---

# ⚠️ Important Notes

This repository represents learning and competitive-programming practice accumulated over time.

Therefore:

- File naming is not fully consistent.
- Some filenames use `Uri`, while others use `uri`.
- Some problems have multiple solution files.
- Some alternate solutions use names such as `or` or `_0`.
- Some Java source files preserve older/non-standard class naming.
- Some files may contain syntax or formatting issues and may require small fixes with modern compilers.
- Some solutions are written as beginner exercises rather than optimized competitive-programming solutions.
- General C practice files are mixed with beecrowd problem solutions.

These characteristics are intentionally documented so visitors understand the repository's learning-oriented nature.

---

# 🌱 Possible Future Improvements

Possible improvements include:

- Organize solutions by language
- Organize solutions by problem number range
- Rename all files consistently
- Add the official problem title beside each problem number
- Add direct problem links
- Add accepted-status information
- Normalize Java classes to `Main`
- Add Python solutions if available in the future
- Add input/output examples
- Add complexity notes
- Add comments explaining solution logic
- Remove duplicate or incomplete versions after comparison
- Add an automated index generator

---

# 🗂️ Suggested Future Structure

A cleaner future structure could look like:

```text
Uri-Online-Judge-beecrowd/
│
├── C/
│   ├── 1000.c
│   ├── 1001.c
│   ├── 1002.c
│   └── ...
│
├── Java/
│   ├── 1000.java
│   ├── 1001.java
│   ├── 1002.java
│   └── ...
│
└── README.md
```

Another option is one folder per problem:

```text
problems/
├── 1000/
│   ├── solution.c
│   └── Main.java
├── 1001/
│   ├── solution.c
│   └── Main.java
└── ...
```

The current repository remains close to its original learning/practice structure.

---

# 🔗 Repository

```text
https://github.com/Dewannoor28/Uri-Online-Judge-beecrowd
```

---

# 👨‍💻 Author

**Dewan Nafiul islam Noor**

GitHub:

```text
https://github.com/Dewannoor28
```

---

## ⭐ About This Repository

This repository is intended as a personal programming-practice archive and a reference for beginners learning problem solving with C and Java.

If the solutions are useful for your learning, feel free to explore the files and compare different approaches.
