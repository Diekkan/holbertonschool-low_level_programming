#!/usr/bin/python3
""" Grid island """


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    i = 0
    j = 0
    perimeter = 0
    for row in grid:
        for element in row:
            if element == 1:
                perimeter += 4
                if j < len(row):
                    if i < len(grid):
                        if grid[i + 1][j] == 1:
                            perimeter -= 1
                    if row[j + 1] == 1:
                        perimeter -= 1
                if j >= 1:
                    if i >= 1:
                        if grid[i - 1][j] == 1:
                            perimeter -= 1
                    if row[j - 1] == 1:
                        perimeter -= 1
            j += 1
        j = 0
        i += 1
    return (perimeter)