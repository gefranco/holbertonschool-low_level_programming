#!/usr/bin/python3
"""
================
module that provides island_perimeter function
===============
"""


def island_perimeter(grid):
    """
    Return island perimeter
    """

    island_v = 0
    island_va = 0
    island_h = 0
    borders = 0
    perimetro = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            borders = 0
            if grid[y][x] == 1:
                try:
                    if grid[y][x-1] == 1:
                        borders += 1
                except:
                    pass
                try:
                    if grid[y][x + 1] == 1:
                        borders += 1
                except:
                    pass
                try:
                    if grid[y - 1][x] == 1:
                        borders += 1
                except:
                    pass
                try:
                    if grid[y + 1][x] == 1:
                        borders += 1
                except:
                    pass

                if borders == 0:
                    perimetro += 4
                elif borders == 1:
                    perimetro += 3
                elif borders == 2:
                    perimetro += 2
                elif borders == 3:
                    perimetro += 1
                else:
                    perimetro += 0

    return perimetro
