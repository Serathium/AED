# Problem
Given a string `s`, return `true` *if* `s` *is a* ***good*** *string,* *or* `false` *otherwise.*
A string `s` is **good** if **all** the characters that appear in `s` have the **same** number of occurrences (i.e., the same frequency).

### Constraints
- `1 <= s.length <= 1000`
- `s` consists of lowercase English letters.

## Intuition
My first thought was to store the occurrences of each letter then divide by the amount of distinct letters. If the result  was equal to any of the letter occurrences stored, it would be a good string.

## Approach
Declared an array representing the alphabet, where each element represented the ocurrences of a letter of the alphabet.
Iterated through the string to store the letters occurrances, then looped 26 times to check occurrances of each letter.
After, performed the calculation proposed in the Intuition section.

## Complexity

- Time complexity:
	T(n) = O(n), linear.
- Space complexity:
	S(m) = O(1), constant.
