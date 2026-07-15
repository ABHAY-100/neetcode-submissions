class Solution {
    isPalindrome(s) {
        s = s.trim().replaceAll(' ', '').replace(/[^\w]/g, '').toLowerCase()

        let left = 0
        let right = s.length - 1

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
}
