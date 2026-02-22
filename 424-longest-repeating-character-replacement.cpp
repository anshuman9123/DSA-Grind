/*
LeetCode 424 - Longest Repeating Character Replacement

Approach: Sliding Window

Key Idea:
We maintain a window where we can replace at most k characters
to make all characters same.

Condition:
(window_size - max_frequency_char) <= k

If more replacements are needed → shrink window

Time Complexity: O(n)
Space Complexity: O(1)
*/