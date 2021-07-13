def can_be_fitted(gap, barns, cows):
    prev_cow_pos = 0
    cows_placed = 1

    for i in range(len(barns)):
        if cows_placed < cows:
            if barns[i] - barns[prev_cow_pos] >= gap:
                cows_placed += 1
                prev_cow_pos = i
        
        if cows_placed >= cows:
            return True
    return False


def max_distance_between_barns(b, c):
    b.sort()
    left, right = 1, b[-1]

    max_dist = 1

    while(left<=right):
        mid = int(left + (right-left)/2)

        if can_be_fitted(mid, b, c):
            left = mid + 1

            if max_dist < mid:
                max_dist = mid
        else:
            right = mid - 1
    
    return max_dist


if __name__ == '__main__':
    barns = [1,2,9,4,8,16,12]
    cows = 4
    print(f"Max distance between two barns is: {max_distance_between_barns(barns, cows)}")
