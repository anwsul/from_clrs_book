def insertionSort(nums):
    for i in range (1, len(nums)):
        key = nums[i]
        j = i - 1

        while(j >= 0 and nums[j] > key):
            nums[j + 1] = nums[j]
            j -= 1 
        nums[j + 1] = key

# test
nums = [3, 2, 1, 5, 4, 1, 0]
print('unsorted nums => ', nums)
insertionSort(nums)
print('sorted nums => ', nums)
