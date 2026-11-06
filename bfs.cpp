#include <iostream>
#include <queue>
#include <utility>
#include "bfs.h"

using namespace std;

void bfs(int maze[5][5], int startRow, int startCol,
         int endRow, int endCol) {

    int visited[5][5] = {0};
    int parentRow[5][5];
    int parentCol[5][5];
    int path[5][5] = {0};

    queue<pair<int, int>> q;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    q.push({startRow, startCol});
    visited[startRow][startCol] = 1;

    bool found = false;

    while (!q.empty()) {

        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        if (r == endRow && c == endCol) {
            found = true;
            break;
        }

        for (int i = 0; i < 4; i++) {

            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < 5 &&
                nc >= 0 && nc < 5 &&
                maze[nr][nc] == 0 &&
                !visited[nr][nc]) {

                visited[nr][nc] = 1;
                parentRow[nr][nc] = r;
                parentCol[nr][nc] = c;

                q.push({nr, nc});
            }
        }
    }

    if (found) {

        int r = endRow;
        int c = endCol;

        while (r != startRow || c != startCol) {

            path[r][c] = 1;

            int pr = parentRow[r][c];
            int pc = parentCol[r][c];

            r = pr;
            c = pc;
        }

        path[startRow][startCol] = 1;

        int steps = 0;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (path[i][j] == 1) {
                    steps++;
                }
            }
        }

        steps--;

        cout << "\nShortest Path Found!" << endl;
        cout << "Path Length: " << steps << " steps\n" << endl;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {

                if (i == startRow && j == startCol)
                    cout << "S ";
                else if (i == endRow && j == endCol)
                    cout << "E ";
                else if (path[i][j])
                    cout << "* ";
                else
                    cout << maze[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "\nNo path found!" << endl;
    }
}