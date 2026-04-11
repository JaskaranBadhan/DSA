import java.util.Arrays;
class Solution {
    public String longestCommonPrefix(String[] strs) {
        // Edge case
        if (strs == null || strs.length == 0)
            return "";
        Arrays.sort(strs);
        String first = strs[0];
        String last = strs[strs.length - 1];
        StringBuilder result = new StringBuilder();
        int length = Math.min(first.length(), last.length());
        for (int i = 0; i < length; i++) {
            if (first.charAt(i) != last.charAt(i)) {
                break;
            }
            result.append(first.charAt(i));
        }
        return result.toString();
    }
}