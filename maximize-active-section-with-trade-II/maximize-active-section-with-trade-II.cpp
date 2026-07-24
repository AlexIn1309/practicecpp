/* MAXIMIZE ACTIVE SECTION WITH TRADE II
* Hard
* You are given a binary string 's' of length 'n', where:
* '1' represents an active section
* '0' represents an inactive 
* You can perform at most one trade to maximize the 
* number of active sections in 's' in a trade, you:
* - Convert a contiguous block of '1's that is 
*   surrounded by '0's to all '0's.
* - Afterward, convert a contiguous 
*   block of '0's that is surrounded
*   by '1's to all '1'.
* Addional, you are given a 2D array queries,
* where queries[i] = [l(i pequenya),r(i pequenya)]
* represents a substring s[l(i pequenya)...r(i pequenya)]
* For each query, determine the maximium possible number
* of active sections in 's' after making the optimanl
* trade on the substring s[l(i pequenya)...r(i pequenya)]
* Return an array answer, where answer[i]
* is the result for queries[i].
* */

/* NOTE
* - For each query, treat s[l(i pequenya)...r(i pequenya)]
*   as if it is augmented with a '1' at both ends,
*   forming t = '1' + s[l(i pequenya)...r(i pequenya)] + '1'.
*   The augmented '1's do not contribuite to the final count.
* - The queries are independient of each other*/

/* EXAMPLE 1
* Input: s = "01", queries = [[0,1]]
* Output: [1]
* Explanation:
* Because there is no block of '1's surrounded by '0's,
* no valid trade is possible. The maximium number
* of active sections is 1.*/

/* EXAMPLE 2
* Input: s = "0100", queries = [[0,3],[0,2],[1,3],[2,3]]
* Output: [4,3,1,1]
* Explanation:
* - Query [0,3] -> Substring "0100" -> Augmented to "101001"
*   Choose "0100", convert "0100" -> "0000" -> "1111".
*   The final string without augmentation is "1111".
*   The maximium number of active section is 3.*/

class Solution {
public:
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {

    }
};
