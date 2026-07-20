# 02 - History and Evolution of C

## Introduction

The C programming language is one of the most influential programming languages in computer science. It was developed to create efficient, portable, and system-level software. Many modern programming languages, including C++, Java, C#, Objective-C, and others, have borrowed syntax and concepts from C.

Understanding the history of C helps explain why the language was created, how it evolved, and why it remains important today.

---

# Before C

Before C existed, programmers mainly used assembly language or earlier high-level languages.

### Assembly Language

Assembly language provides direct control over computer hardware, but it has several disadvantages:

- Programs are difficult to write.
- Code is hard to understand and maintain.
- Programs written for one processor usually cannot run on another.

As computers became more advanced, developers needed a language that was easier to write while still producing fast and efficient programs.

---

# BCPL (Basic Combined Programming Language)

In **1967**, **Martin Richards** developed **BCPL**.

BCPL was created as a simple language for writing system software, such as operating systems and compilers.

Although BCPL was powerful for its time, it lacked many features required for more complex software development.

---

# B Programming Language

Around **1969–1970**, **Ken Thompson** created the **B programming language** at Bell Labs.

B was mainly developed to assist in creating the early versions of the UNIX operating system.

Compared to BCPL, B was simpler, but it also had limitations:

- It had no data types.
- Performance was not ideal.
- It became insufficient as computer hardware evolved.

These limitations led to the development of a new language.

---

# Birth of C

In **1972**, **Dennis Ritchie** developed the **C programming language** at **Bell Laboratories (Bell Labs)**.

The primary goal was to improve upon the B language by adding features that made programming more efficient, structured, and suitable for system programming.

Major improvements included:

- Data types
- Better memory handling
- Improved performance
- Better support for writing operating systems

C successfully combined the efficiency of assembly language with the readability of a high-level programming language.

---

# UNIX and the Success of C

One of the biggest milestones in C's history was the rewriting of the **UNIX operating system** in C.

Previously, operating systems were commonly written in assembly language.

Rewriting UNIX in C demonstrated that an operating system could be written in a high-level language without sacrificing performance.

This achievement greatly increased the popularity of C around the world.

---

# Standardization of C

As C became widely used, different compilers began implementing slightly different versions of the language.

To ensure consistency, official standards were introduced.

## ANSI C (C89)

Published in **1989** by the **American National Standards Institute (ANSI)**.

This became the first official standard for the C language.

It defined a common specification that compiler developers could follow.

---

## C90

In **1990**, the **International Organization for Standardization (ISO)** adopted ANSI C as an international standard.

C89 and C90 are nearly identical and are often referred to interchangeably.

---

## C99

Released in **1999**, introducing many new features, including:

- `//` single-line comments
- `long long` integer type
- Variable declarations anywhere inside a block
- Variable Length Arrays (VLAs)
- Improved standard library functions

---

## C11

Released in **2011**.

New features included:

- Multithreading support
- Better Unicode support
- Anonymous structures and unions
- Static assertions
- Improved safety features

---

## C17

Released in **2018**.

This version mainly fixed bugs and clarified the C11 standard.

No major language features were introduced.

---

## C23

Released in **2023**.

C23 modernized the language with numerous improvements to the standard library, language consistency, and usability while maintaining backward compatibility.

---

# Evolution Timeline

```text
1967
│
├── BCPL
│      (Martin Richards)
│
1969
│
├── B Language
│      (Ken Thompson)
│
1972
│
├── C Language
│      (Dennis Ritchie)
│
1973
│
├── UNIX rewritten in C
│
1989
│
├── ANSI C (C89)
│
1990
│
├── ISO C (C90)
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
├── C17
│
2023
│
└── C23
```

---

# Why C Became So Popular

C gained worldwide popularity because it offered several advantages:

- High performance
- Efficient memory usage
- Portability across different computer systems
- Ability to write both system software and application software
- Relatively simple syntax compared to assembly language

These qualities made C the preferred language for operating systems, embedded systems, compilers, and many performance-critical applications.

---

# Key Takeaways

- **BCPL (1967)** laid the foundation for later languages.
- **B (1969)** simplified system programming but lacked important features.
- **Dennis Ritchie** created **C in 1972** at **Bell Labs**.
- C was designed to improve the B language while maintaining high performance.
- Rewriting the UNIX operating system in C proved the language's power and portability.
- Standard versions of C include **C89/C90**, **C99**, **C11**, **C17**, and **C23**, each improving the language while preserving compatibility.
