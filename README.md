# Bitwise-Automata-Kitt

A minimalist cellular automaton implemented in C, focusing on hardware-level logic and efficiency.

## 🧠 The Concept
This project is a tribute to the iconic 80s "Kitt" scanner effect. Instead of using complex arrays or high-level abstractions, it operates directly on bits. It demonstrates how a single variable can hold a state, a direction, and a movement through **bitwise shifting**.

## 🛠️ Technical Signature
* **Language:** C
* **Logic:** Bitwise operations (`<<`, `>>`, `&`, `|`, `^`)
* **Paradigm:** Minimalist Automata
* **Memory Footprint:** Near zero

## 🚀 How it works
The core logic uses a single bit oscillating across a 1D space. Unlike a circular shift, it detects boundaries using bitmasks and reverses its direction. It's a perfect example of a **linear oscillator** built with pure logic gates simulation.

---
*Created as the foundational stone of a broader research into structural logic.*
