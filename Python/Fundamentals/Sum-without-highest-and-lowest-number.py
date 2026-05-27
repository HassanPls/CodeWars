""" Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation. """

def sum_array(arr):
    if not arr:
        return 0
    
    sum = 0
    highest = 0
    lowest = 0
    for x in arr:
        if (x < lowest):
            sum = sum + lowest
            lowest = x
            break

        if (x > highest):
            sum = sum + highest
            highest = x
            break

        sum = sum + x

    return sum
