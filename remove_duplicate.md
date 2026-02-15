Problem: LeetCode 26 - Remove Duplicates from Sorted Array

Pattern:
Two Pointer (Slow & Fast Pointer)

Idea:
Keep one pointer (i) at last unique element
Traverse array using j
When new element found → place at i+1

Steps:
1. First element always unique
2. If nums[j] != nums[i]
      move i++
      copy element
3. Answer = i + 1

Time Complexity: O(n)
Space Complexity: O(1)
