# 06 - C Standards and Versions

## Introduction

As the C programming language became widely used, different compiler developers began adding their own features. This created compatibility issues because a program written for one compiler might not work correctly with another.

To solve this problem, official **C standards** were introduced. These standards define the syntax, behavior, and features of the language, ensuring that C programs behave consistently across different compilers and platforms.

---

# What is a C Standard?

A **C Standard** is an official specification that defines how the C programming language should work.

It describes:

- Language syntax
- Keywords
- Data types
- Operators
- Standard library
- Program behavior

Compiler developers follow these standards to ensure compatibility.

---

# Why Are C Standards Important?

C standards provide several benefits:

- Ensure consistency across different compilers
- Improve portability of programs
- Introduce new language features
- Fix bugs and ambiguities in previous standards
- Maintain backward compatibility whenever possible

Without standards, the same C program could behave differently on different systems.

---

# Major Versions of C

## 1. C89 (ANSI C)

- **Released:** 1989
- **Standardized by:** ANSI (American National Standards Institute)

C89 was the first official standard for the C programming language.

Its main goal was to create a common specification that all compiler developers could follow.

### Key Features

- Standardized C syntax
- Standard C Library
- Function prototypes
- Improved portability

---

## 2. C90 (ISO C)

- **Released:** 1990
- **Standardized by:** ISO (International Organization for Standardization)

ISO adopted the ANSI C standard as an international standard.

C89 and C90 are almost identical, with only minor editorial differences.

---

## 3. C99

- **Released:** 1999

C99 introduced several new features that made programming easier and more flexible.

### Major Features

- Single-line comments (`//`)
- `long long` integer type
- Variable declarations anywhere within a block
- Variable Length Arrays (VLAs)
- `inline` functions
- Improved standard library functions

Example:

```c
// Single-line comment

for (int i = 0; i < 5; i++)
{
    printf("%d\n", i);
}
```

In earlier versions, variables generally had to be declared at the beginning of a block.

---

## 4. C11

- **Released:** 2011

C11 focused on improving performance, safety, and support for modern hardware.

### Major Features

- Multithreading support
- Anonymous structures and unions
- Static assertions
- Improved Unicode support
- Better alignment control

These additions made C more suitable for modern software development.

---

## 5. C17 (C18)

- **Released:** 2018

C17 is a maintenance release.

It mainly:

- Corrected defects
- Clarified language rules
- Improved consistency

No significant new language features were introduced.

> **Note:** C17 is also referred to as **C18** because it was officially published in 2018, even though the standard is commonly known as C17.

---

## 6. C23

- **Released:** 2023

C23 is the latest official version of the C language.

It introduces modern improvements while maintaining compatibility with earlier standards.

### Highlights

- Language refinements
- Improvements to the standard library
- Better consistency
- Enhanced usability
- Modernization of existing features

C23 continues the evolution of C without changing its core philosophy of simplicity and efficiency.

---

# Evolution Timeline

```text
1989
│
├── C89 (ANSI C)
│
1990
│
├── C90 (ISO C)
│
1999
│
├── C99
│
2011
│
├── C11
│
2018
│
├── C17 (C18)
│
2023
│
└── C23
```

---

# Comparison of C Standards

| Standard | Year | Main Purpose                           |
| -------- | ---- | -------------------------------------- |
| C89      | 1989 | First official ANSI standard           |
| C90      | 1990 | International ISO standard             |
| C99      | 1999 | Added modern language features         |
| C11      | 2011 | Improved safety and multithreading     |
| C17      | 2018 | Bug fixes and clarifications           |
| C23      | 2023 | Modernization and library improvements |

---

# Which Version Should Beginners Learn?

For beginners, the syntax taught in introductory C programming courses is generally based on **C99** or later.

Most modern compilers support C11, C17, and C23, while remaining compatible with older C code.

Learning the standard syntax and features introduced in C99 provides a strong foundation for understanding newer versions.

---

# Summary

- A **C Standard** defines the official rules and specifications of the C programming language.
- Standards ensure that C programs are portable and behave consistently across different compilers.
- The major versions of C are **C89**, **C90**, **C99**, **C11**, **C17**, and **C23**.
- Each new standard improves the language by introducing useful features, fixing issues, and maintaining compatibility with earlier versions.
