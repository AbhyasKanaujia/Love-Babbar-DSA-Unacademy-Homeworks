# Generate Parenthesis

{% embed url="https://leetcode.com/problems/generate-parentheses/" %}
Given `n` pairs of parentheses, write a function to _generate all combinations of well-formed parentheses_.
{% endembed %}

```cpp
vector<string> res;

void getParenthesis(const int &n, int leftCount, int rightCount, string output) {
    if(leftCount == n && rightCount == n) {
        res.push_back(output);
        return;
    }
    
    if(leftCount < n) 
        getParenthesis(n, leftCount + 1, rightCount, output + "(");

    if(rightCount < leftCount && rightCount < n)
        getParenthesis(n, leftCount, rightCount + 1, output + ")");
}

vector<string> generateParenthesis(int n) {
    string output = "(";
    int leftCount = 1;
    int rightCount = 0;
    getParenthesis(n, leftCount, rightCount, output);
    return res;
}
```
