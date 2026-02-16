Topic: Hashing & STL Basics (C++)

Learned:

Hashing:
- Key → value mapping
- Used for frequency counting
- Helps reduce time complexity to O(n)

unordered_map:
- store pairs
- insert: mp[key] = value
- access: mp[key]
- check exist: mp.find(key) != mp.end()

unordered_set:
- stores unique elements
- insert, erase, find
- useful in sliding window problems

Common Use Cases:
- frequency count
- duplicate detection
- lookup optimization

STL Concepts:
- vector
- set
- unordered_set
- map
- unordered_map
- pair

Problems where used:
- Two Sum
- Longest substring without repeating characters
- Anagram detection

Notes:
Hashing trades space for speed.
Average complexity → O(1)
Worst case → O(n)
