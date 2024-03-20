#!/usr/bin/python3
"""Interview test function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island in grid.

    """
    m, n = len(grid), len(grid[0])
    x, y = 0, 0
    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                x += 1
                if i < m - 1 and grid[i+1][j] == 1:
                    y += 1
                if j < n - 1 and grid[i][j + 1] == 1:
                    y += 1
    return x * 4 - 2 * y
