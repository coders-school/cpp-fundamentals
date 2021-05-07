#pragma once

#include <stack>
#include <cmath>

// Template function for clear std::stack
template <typename T>
void clearStack(std::stack<T> &st)
{
    while (!st.empty())
        st.pop();
}

// Function object for check if sequence is in 0 - 2 range
class firstN_Checker
{
private:
    int m_Value;

public:
    const int getValue() { return m_Value; };

    bool operator()(int seq) // Overload of () operator
    {
        if (!seq)
        {
            m_Value = seq;
            return true;
        };
        if (seq <= 2)
        {
            m_Value = 1;
            return true;
        };
        return false;
    };

    firstN_Checker() : m_Value(0){};
};

int fibonacci_iterative(int sequence)
{

    int &seq = sequence; // Shortcut for sequence :)
    seq = std::abs(seq);

    firstN_Checker Checker;

    if (Checker(seq))
        return Checker.getValue();
    // Implementation of stack algorithm to find N of fibonacci
    std::stack<int> stack1; // Stack will keep last 2 values
    int score = 0;
    stack1.push(score); // Push first value on the stack

    for (int i = 0; i <= seq - 2; i++)
    {
        if (!stack1.top()) // If first value is 0
        {
            stack1.pop(); // Remove 0 from the stack
            stack1.push(1); // Push 1 as n-2 value
            stack1.push(1); // Push 1 as n-1 value
            score = stack1.top(); // Save score from top of the stack
            continue; // Go to the next iteration :)
        };
        int scoretmp = stack1.top(); // Save value n-1 to temp variable
        stack1.pop(); // Remove value n-1 from the stack
        score = scoretmp + stack1.top(); // Add n-1 to n-2 (which is on the top now)
        stack1.pop(); // Remove value n-2 from the stack
        stack1.push(scoretmp); // Push old value n-1 as n-2 on the stack
        stack1.push(score); // Push new value on the stack
    };
    clearStack(stack1); // Free the stack
    return score;
}

int fibonacci_recursive(int sequence)
{
    return 0;
}
