#!/usr/bin/python3

def island_perimeter(grid):
    rows = len(grid)
    cols = len(grid[0])
    total = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                total += 4

                # top
                if (row - 1 >= 0 and grid[row - 1][col] == 1):
                    total -= 1
                # bottom
                if (row + 1 < len(grid) and grid[row + 1][col] == 1):
                    total -= 1
                # left
                if (col - 1 >= 0 and grid[row][col - 1] == 1):
                    total -= 1
                # right
                if (col + 1 < len(grid[0]) and grid[row][col + 1] == 1):
                    total -= 1

    return total
