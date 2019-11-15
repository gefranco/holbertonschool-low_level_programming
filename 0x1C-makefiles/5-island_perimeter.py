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
    for column in grid:
        island_v = 0
        for x in column:
            if x == 1:
                island_v += 1
        if (island_v == 1):
            island_h += 1
        elif (island_v > 1):
            island_va += island_v
    return island_va * island_h * 2
