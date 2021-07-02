#!/usr/bin/python3
"""module for calculating the perimeter of an island"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    patches = 0
    borders = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                patches += 1
                if i != len(grid) - 1:
                    if grid[i + 1][j] == 1:
                        borders += 1
                if j != len(grid[i]) - 1:
                    if grid[i][j + 1] == 1:
                        borders += 1
    perimeter = (patches * 4) - (borders * 2)
    return perimeter
