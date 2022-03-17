#!/usr/bin/python3
""" Grid island """


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    if not grid:
        return (0)
    i = 0
    j = 0
    perimeter = 0
    for row in grid:
        for element in row:
            if element == 1:
                perimeter += 4
                try:
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if row[j + 1] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if row[j - 1] == 1:
                        perimeter -= 1
                except Exception:
                    pass
            j += 1
        j = 0
        i += 1
    return (perimeter)
