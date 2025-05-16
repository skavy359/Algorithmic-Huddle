from itertools import product
nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))
for pair in product(nums1, nums2):
    print(pair, end=' ')