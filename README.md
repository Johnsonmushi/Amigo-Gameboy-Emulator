# Amigo-Gameboy-Emulator

A Game Boy emulator written in C, developed as a practical exploration of computer architecture, memory management, CPU instructions, and low-level programming.

> Project status:🚧 In Development

## 📖 About

This project aims to recreate the core behavior of the original Nintendo Game Boy in software.

The emulator will simulate important components of the Game Boy hardware, including:

* CPU and registers
* Memory and memory mapping
* CPU instructions/opcodes
* ROM loading
* Timers
* Interrupts
* Graphics/PPU
* Game Boy input

The project is being developed incrementally, starting from the CPU and memory systems and gradually expanding toward a functional emulator.

## 🎯 Project Goal

The main goal of this project is not simply to run Game Boy games.

It is to gain a deeper understanding of:

* How memory works
* How CPUs execute instructions
* How registers and flags are used
* How programs interact with memory
* How hardware components communicate
* How computer architecture can be modeled in software
* How low-level C programming works

## 🏗️ Architecture

The planned emulator architecture is:

                    ┌─────────────────┐
                    │    Game ROM     │
                    └────────┬────────┘
                             │
                             ▼
                    ┌─────────────────┐
                    │     Memory      │
                    │   / Memory Bus  │
                    └────────┬────────┘
                             │
                             ▼
                    ┌─────────────────┐
                    │       CPU       │
                    │                 │
                    │   Registers     │
                    │   PC / SP       │
                    │   Opcodes       │
                    └───────┬─────────┘
                            │
              ┌─────────────┼─────────────┐
              ▼             ▼             ▼
          ┌────────┐    ┌────────┐    ┌────────┐
          │  PPU   │    │ Timers │    │ Input  │
          └───┬────┘    └────────┘    └────────┘
              │
              ▼
        ┌──────────────┐
        │ Game Boy     │
        │   Display    │
        │  160 × 144   │
        └──────────────┘


## 📂 Project Structure

The project is being organized into separate components:


gameboy-emulator/
│
├── main.c          # Program entry point
├── cpu.c           # CPU implementation
├── cpu.h           # CPU definitions
├── memory.c        # Memory implementation
├── memory.h        # Memory definitions
├── rom.c           # ROM loading
├── rom.h           # ROM definitions
├── ppu.c           # Graphics / PPU
├── ppu.h           # PPU definitions
├── input.c         # Controller input
├── input.h         # Input definitions
├── timer.c         # Timer implementation
├── timer.h         # Timer definitions
├── Makefile        # Build configuration
└── README.md       # Project documentation


Files will be added as development progresses.

## 🧠 Current Progress

### Milestone 1 — CPU & Memory Foundation

* [x] Create project structure
* [x] Implement basic memory storage
* [x] Implement memory read/write operations
* [x] Create CPU structure
* [x] Add CPU registers
* [x] Implement program counter
* [x] Implement stack pointer
* [x] Implement basic instruction fetching
* [x] Implement initial CPU instructions
* [x] Test CPU execution

### Upcoming

* [ ] Implement more CPU instructions
* [ ] Implement CPU flags
* [ ] Implement register pairs
* [ ] Implement proper Game Boy memory mapping
* [ ] Implement ROM loading
* [ ] Implement timers
* [ ] Implement interrupts
* [ ] Implement PPU/graphics
* [ ] Implement keyboard/controller input
* [ ] Add debugging tools
* [ ] Run test ROMs
* [ ] Improve compatibility
* [ ] Build a complete playable emulator

## ⚙️ Technologies

* Language: C
* Compiler: GCC
* Version Control: Git
* Development Environment: VS Code
* Target Architecture: Nintendo Game Boy
* Host Platform:** Linux/Kali during development

The emulator itself is being designed around the Game Boy hardware rather than being tied to a specific operating system.

## 🔧 Building

Clone the repository:

bash
git clone <repository-url>
cd gameboy-emulator

Compile the current implementation:

bash
gcc -Wall -Wextra main.c cpu.c memory.c -o gameboy

Run:

bash
./gameboy

As the project grows, a Makefile will be added to simplify the build process.

## 🧪 Testing

Testing is performed incrementally.

Before adding more complex components, individual systems are tested to verify that they behave as expected.

For example, the CPU is currently tested using a small program placed directly into emulator memory:

text
LD B, 42
HALT


The emulator then verifies that the CPU correctly executes the instructions and places `42` into register `B`.

More comprehensive CPU and hardware test ROMs will be added as development progresses.

## 📚 Reference

This project is guided by the following resource:

Cinoop — A minimalist Game Boy emulator written in C**

https://cturt.github.io/cinoop.html

The reference is being used to understand emulator architecture and implementation techniques. The implementation in this repository is being developed incrementally as a learning project.

## ⚠️ Project Status

This emulator is currently **experimental and incomplete**.

It is being developed primarily as a learning project to understand:

> Memory → CPU → Instructions → Hardware → Software**

A fully compatible Game Boy emulator requires significantly more components and testing than the current implementation provides.

## 👨‍💻 Author: Johnson Mushi

Computer Science Student
University of Dar es Salaam

This project is part of my practical exploration of:

* Computer architecture
* Systems programming
* C programming
* Memory management
* Emulation
* Low-level software development



⭐ This repository documents the development of the emulator from the ground up.
