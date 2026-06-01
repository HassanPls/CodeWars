""" Complete the square sum function so that it squares each number passed into it and then sums the results together. """

# First try
""" def square_sum(numbers):
    sum = 0
    for x in numbers:
        sum += x * x

    return sum """

# Second try
def square_sum(numbers):
    return sum(x * x for x in numbers)