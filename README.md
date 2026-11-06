# Maze Solver – DSA Project

## Project Overview
Maze Solver is a C++ based project that finds a path from a starting point to an ending point in a maze using two graph traversal algorithms: Breadth First Search (BFS) and Depth First Search (DFS).

The maze is represented using a 2D matrix, where:
- `0` represents an open path.
- `1` represents a wall.
- `S` represents the starting point.
- `E` represents the ending point.
- `*` represents the path found.

## Features
- Solves mazes using BFS and DFS.
- Uses a 2D matrix representation.
- Finds the shortest path using BFS.
- Displays the path in the terminal.
- Supports multiple maze configurations.
- Handles cases where no path exists.

## Algorithms Used

### 1. Breadth First Search (BFS)
BFS explores the maze level by level using a Queue. It guarantees the shortest path in an unweighted maze.

### 2. Depth First Search (DFS)
DFS explores one direction as far as possible before backtracking. It uses a Stack to explore paths.

## Technologies Used
- Programming Language: C++
- Data Structures: Queue, Stack, 2D Arrays
- Concepts: Graph Traversal, BFS, DFS

## Project Structure
- `main.cpp` – Main program and menu.
- `bfs.cpp` – BFS algorithm implementation.
- `bfs.h` – BFS function declaration.
- `dfs.cpp` – DFS algorithm implementation.
- `dfs.h` – DFS function declaration.
- `.gitignore` – Ignores generated executable files.

## How to Compile and Run

Compile the project:

```bash
g++ main.cpp bfs.cpp dfs.cpp -o main.exe
```

Run the project on Windows:

```bash
.\main.exe
```

## Applications
- Pathfinding systems
- Robot navigation
- Game development
- Basic route planning

## Future Scope
- Automatic maze generation.
- Graphical user interface for visualization.
- Weighted maze solving using Dijkstra's algorithm.
- Advanced pathfinding using A* algorithm.
- Support for diagonal movements.

## Team Members
- Tanya Agarwal
- Romit Chaudhary
- Anshul Kumar

**Project:** Maze Solver  
**Subject:** Data Structures and Algorithms (DSA)
## Algorithm Analysis

Let:
- V = Number of open cells (vertices).
- E = Number of valid connections (edges).

| Algorithm | Data Structure | Time Complexity | Space Complexity |
|---|---|---|---|
| BFS | Queue | O(V + E) | O(V) |
| DFS | Stack | O(V + E) | O(V) |

### Why BFS?
BFS explores all neighbouring cells level by level. It guarantees the shortest path in an unweighted maze.

### Why DFS?
DFS explores one path deeply before backtracking. It can find a valid path but does not guarantee the shortest path.
## Additional Features

- Three predefined maze configurations.
- Multiple path maze for comparing BFS and DFS.
- No-path detection.
- Repeat option to solve multiple mazes without restarting.
- Input validation for maze and algorithm selection.
- Clear display of the selected maze and final path.
- Compare BFS and DFS on the same maze.
- Display path results for both algorithms.