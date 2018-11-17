#!/usr/bin/python3
"""island_perimeter - grid - returns the perimeter of the island described
 in grid"""


def island_perimeter(grid):
    """return island perimeter"""
    h = len(grid)
    w = len(grid[0])
    ans = 0
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                if (i == 0) or (grid[i - 1][j] == 0):
                    ans += 2
                if (j == 0) or (grid[i][j - 1] == 0):
                    ans += 2
    return (ans)
