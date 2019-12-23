#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2019 sylveryte <sylveryte@archred>
#
# Distributed under terms of the MIT license.

"""
Basic data structure

"""


def printHeader(header):
    print("\n")
    print(header.center(60, '-'))


if __name__ == "__main__":

    # -Comprehension
    printHeader("Comprehension")
    # You're given xyz representing dims of cuboid along int n you have to print a list of all possible coordinates given by ijk on 3d grid where the sum i+j+k!=n.
    x, y, z, n = (1, 1, 1, 2)
    print([(i, j, k) for i in range(x+1) for j in range(y+1)
           for k in range(z+1) if ((i+j+k) != n)])

    # -Sorting
    printHeader("Sorting")
    print(sorted(set([3, 2, 5, 1, 4, 6, 4]))[-2])

    # -Lambda
    printHeader("Lambda")
    students = [['Harry', 37.21], ['Berry', 37.21], [
        'Tina', 37.2], ['Akriti', 41], ['Harsh', 39]]
    sorted_list = sorted(students, key=lambda x: (x[1], x[0]))
    # second lowest score
    sls = sorted(list(set([x for y, x in sorted_list])))[1]
    print([x for x, y in sorted_list if y == sls])

    # -*variable = assignment
    printHeader("*variable = assignment")
    d = {}  # dictionary
    first, *rest = ["Emma", 21, 54, 17]
    d[first] = rest
    # float printing
    print(d, "avg is %.2f" % (sum(d[first])/3))


    # -getattr - string as function call
    printHeader("getattr - string as function call")
    l = [12]
    commands = "insert 0 5, insert 1 10, append 6, pop"
    for x in  commands.split(','):
        cm, *args = x.split()
        print(cm, args)
        getattr(l,cm)(*(map(int,args)))
    print(l)

