#!/usr/bin/python3
"""island_perimeter - grid - returns the perimeter of the island described
 in grid"""


def island_perimeter(grid):
        """return island perimeter"""
        vert = 0
        leng = 0
        for i in grid:
                if sum(i) > 0:
                        vert += 1
                        tmp = sum(i)
                        if tmp > leng:
                                leng = tmp
                        hori = leng + 1
        return (hori * vert)
