nums = list(map(int, input().split()))

left = 0
right = len(nums) - 1

while left < right:
    mid = left + (right - left) // 2

    if nums[mid] < nums[mid + 1]:
        left = mid + 1
    else:
        right = mid

print(left)
