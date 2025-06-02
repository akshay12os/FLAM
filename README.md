# FLAM Project

This repository contains three independent modules implemented in C++, Python, and C++ with OpenGL. Each demonstrates problem-solving in algorithmic design, graphics programming, and system modeling.

## 📁 Project Structure

1) graph.cpp — Cycle Detection in Dependency Graphs
Description:
Detects circular dependencies in a directed graph of modules.

Problem Statement:
You are building a module loader where each module may depend on one or more other modules. Cyclic dependencies are invalid and should be detected before loading.

Function Signature:

bool hasCircularDependency(int n, vector<vector<int>>& edges);
Input:

n: Number of modules labeled 0 to n-1

edges: Each edge {a, b} means module a depends on module b

Output:
Returns true if a cycle is present, else false.

Example:

n = 4
edges = {{0, 1}, {1, 2}, {2, 0}} // Output: true (cycle exists)

2) nqueens.py — N-Queens Problem Solver
Description:
Solves the N-Queens problem using backtracking and prints all valid board configurations.

Key Features:

Solves for any N >= 1

Displays results in a human-readable grid

Efficient pruning via column and diagonal tracking

output:
A list of solutions where Q represents a queen and . an empty square.

3) fireworks_particles — OpenGL Fireworks Particle Simulation
Description:
A C++ project using OpenGL to simulate fireworks-like particle effects.

Features:

Dynamic particle system

Real-time rendering with explosion effects


Folder Structure:

fireworks_particles/
├── src/
│   └── main.cpp         # Main simulation code
├── CMakeLists.txt       # Build configuration
├── build/               # Compiled binaries and build artifacts
Build Instructions:

cd fireworks_particles
mkdir build && cd build
cmake ..
make
./fireworks
Note:
OpenGL and GLFW dependencies must be installed. Best run on Unix-like systems or WSL on Windows.

🔧 Requirements
Python 3.x for nqueens.py

C++17+ and CMake for graph.cpp and fireworks_particles

OpenGL + GLFW for rendering (for simulation)

📜 License
This repository is provided for academic and demonstration purposes. Feel free to use, extend, and adapt.


