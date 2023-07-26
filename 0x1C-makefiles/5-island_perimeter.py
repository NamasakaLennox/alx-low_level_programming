#!/usr/bin/python3
"""
A module that gets the perimeter of an island
"""


def island_perimeter(grid):
    """
    Gets the perimeter of an island
    Args:
        grid: a list of lists representing the island
    Return:
        returns the perimeter of the island
    """
    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0
    top = 0
    bottom = 0
    flag = 0

    # iterate through the rows and columns
    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 0:
                continue

            flag = 1
            # fill perimeter for bottom and top rows
            if i == 0:
                top += 1
            elif i == rows - 1:
                bottom += 1
            else:  # any other colums i.e neither top nor bottom
                # check if cell bottom
                if grid[i + 1][j] == 0:
                    perimeter += 1
                # check if cell top
                if grid[i - 1][j] == 0:
                    perimeter += 1
        if flag == 1:  # check if the row had any land
            perimeter += 2  # add for sides
        flag = 0

    perimeter += top + bottom

    return (perimeter)
