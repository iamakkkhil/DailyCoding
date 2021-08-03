def singleNumber(nums):
    nums = sorted(nums)
    # print(nums)
    i = 0
    while (i+1 < len(nums)):
        if (nums[i] == nums[i+1]):
            nums.pop(i)
            nums.pop(i)
        else:
            i+=1
    return nums


if __name__ == '__main__':
    # nums = [1, 2, 3, 2, 4, 1]
    nums = [18, 24, 24, 21, 10, 29, 8, 10, 29, 18]
    print(singleNumber(nums))
