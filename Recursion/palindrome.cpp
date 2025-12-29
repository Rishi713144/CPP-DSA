bool isPalindrome(string s, int i) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return isPalindrome(s, i + 1);
}
