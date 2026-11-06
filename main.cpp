
#include <iostream>
#include "bfs.h"
#include "dfs.h"

using namespace std;

int main() {

    int maze1[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 0, 1, 0, 1},
        {0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 0}
    };

    // Maze with multiple possible paths
 int maze2[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0}
};

    int mazeChoice, algorithmChoice;

    cout << "========== MAZE SOLVER ==========" << endl;

    cout << "\nSelect Maze:" << endl;
    cout << "1. Original Maze" << endl;
    cout << "2. Multiple Path Maze" << endl;

    cout << "\nEnter maze choice: ";
    cin >> mazeChoice;

    int (*maze)[5];

    if (mazeChoice == 1) {
        maze = maze1;
    }
    else if (mazeChoice == 2) {
        maze = maze2;
    }
    else {
        cout << "Invalid maze choice!" << endl;
        return 0;
    }

    cout << "\nSelected Maze:" << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (i == 0 && j == 0)
                cout << "S ";
            else if (i == 4 && j == 4)
                cout << "E ";
            else
                cout << maze[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMAZE LEGEND:" << endl;
    cout << "S = Starting Point" << endl;
    cout << "E = Ending Point" << endl;
    cout << "0 = Open Path" << endl;
    cout << "1 = Wall" << endl;
    cout << "* = Final Path" << endl;

    cout << "\nChoose Algorithm:" << endl;
    cout << "1. BFS (Breadth First Search)" << endl;
    cout << "2. DFS (Depth First Search)" << endl;

    cout << "\nEnter your choice: ";
    cin >> algorithmChoice;

    if (algorithmChoice == 1) {
        cout << "\nStarting BFS..." << endl;
        bfs(maze, 0, 0, 4, 4);
    }
    else if (algorithmChoice == 2) {
        cout << "\nStarting DFS..." << endl;
        dfs(maze, 0, 0, 4, 4);
    }
    else {
        cout << "Invalid algorithm choice!" << endl;
    }

    cout << "\n========== END OF PROGRAM ==========" << endl;

    return 0;
}
