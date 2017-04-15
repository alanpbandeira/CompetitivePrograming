import math


def max_crossing_subarray(vec, low, mid, high):
    """
    Linear time version of max_crossing_subarray
    """

    max_right = None
    max_left = None
    
    left_sum = -9999999
    total = 0

    for i in range(mid, low-1, -1):
        total += vec[i]

        if total > left_sum:
            left_sum = total
            max_left = i

    right_sum = -9999999
    total = 0

    for j in range(mid+1, high+1, 1):
        total += vec[j]

        if total > right_sum:
            right_sum = total
            max_right = j
    
    return max_left, max_right, left_sum + right_sum


def find_maximun_subarray(vector, low, high):
    """
    Calculate the maximum subarray of an array 
    using divide and conquer technique.
    """

    if high == low:
        return (low, high, vector[low])
    else:
        mid = math.floor((low + high) / 2)
        
        l_low, l_high, l_sum = find_maximun_subarray(vector, low, mid)
        
        r_low, r_high, r_sum = find_maximun_subarray(vector, mid + 1, high)
        
        c_low, c_high, c_sum = max_crossing_subarray(vector, low, mid, high)

        if l_sum > r_sum and l_sum > c_sum:
            return (l_low, l_high, l_sum)
        elif r_sum > l_sum and r_sum > c_sum:
            return (r_low, r_high, r_sum)
        else:
            return (c_low, c_high, c_sum)

def brute_max_subarray(vector):
    big_sum = -9999
    init_idx = 0
    end_idx = 0

    for i in range(len(vector)):
        candidate = 0
        for j in range(i, len(vector)):
            candidate += vector[j]
            
            if candidate > big_sum:
                big_sum = candidate
                init_idx = i
                end_idx = j
    
    return init_idx, end_idx, big_sum

if __name__ == "__main__":
    # vector = [13, -3, -25, 20, -2, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7]
    # vector = [-25,-1,-3,-32,-22,-7,-2,-8,-5,-12]
    vector = [1 for a in range(10)]

    # low = 0
    # high = len(vector) - 1

    # print(find_maximun_subarray(vector, low, high))

    print (brute_max_subarray(vector))