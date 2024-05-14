from collections import Counter


def kMostFreqNum(nums: list[int], k: int) -> list[int]:
    nums_occurrence = {}
    for i in nums:
        if i in nums_occurrence:
            nums_occurrence[i] += 1
        else:
            nums_occurrence[i] = 1
    max_occurrence_nums = []
    while k > 0:
        max_val = 0
        max_key = 0
        for num in nums_occurrence:
            if nums_occurrence[num] > max_val:
                max_val = nums_occurrence[num]
                max_key = num
        max_occurrence_nums.append(max_key)
        nums_occurrence.pop(max_key)

        k -= 1

    return max_occurrence_nums


def mostFreqNums(nums: list[int], k: int) -> list[int]:
    counter = Counter(nums1)
    ans1 = counter.most_common(k)
    an2 = [i for (i, t) in ans1]
    return an2


nums1 = [4, 4, 5, 1, 1, 1, 1, 2, 2, 3, 7, 7, 7, 7]
tk = 2
ans = kMostFreqNum(nums1, tk)
print(ans)

print(mostFreqNums(nums1, tk))
