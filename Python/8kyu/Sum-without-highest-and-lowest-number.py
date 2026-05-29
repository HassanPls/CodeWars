""" Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation. """


# First try
""" def sum_array(arr):
    if not arr:
        return 0
    
    sum = 0
    highest = lowest = arr[0]

    for i, x in enumerate(arr[1:]):
        if (x < lowest):
            if(i > 0): sum = sum + lowest
            lowest = x
            continue

        if (x >= highest):
            if(i > 0): sum = sum + highest
            highest = x
            continue

        sum = sum + x

    return sum """

#Second try
def sum_array(arr):
    if not arr or len(arr) <= 2:
        return 0
    
    return sum(arr) - max(arr) - min(arr)