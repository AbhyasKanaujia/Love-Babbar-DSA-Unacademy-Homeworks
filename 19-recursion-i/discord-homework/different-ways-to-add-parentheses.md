# Different Ways to Add Parentheses

{% embed url="https://leetcode.com/problems/different-ways-to-add-parentheses/" %}
LeetCode: Different Ways to Add Parentheses
{% endembed %}

```cpp
vector<int> diffWaysToCompute(string expression) {
    vector<int> result;
    int size = expression.size();

    for(int i = 0; i < size; i++) {
        char ch = expression[i];
        if(ch == '+' || ch == '-' || ch == '*') {
            vector<int> result1 = diffWaysToCompute(expression.substr(0, i));
            vector<int> result2 = diffWaysToCompute(expression.substr(i + 1));

            for(int n1: result1) 
                for(int n2: result2) 
                    switch(ch) {
                        case '+':
                            result.push_back(n1 + n2);
                            break;
                        case '-':
                            result.push_back(n1 - n2);
                            break;
                        case '*':
                            result.push_back(n1 * n2);
                    }
        }
    }

    if(result.empty())
        result.push_back(stoi(expression));
    return result;
}
```
