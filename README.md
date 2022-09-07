# IncubyteAssignment

## Problem Statement
1. In a test-first manner, create a simple class named StringCalculator and a method
    int add(String numbers)

    1. The method can take numbers as a string separated by comma and will return their sum (for an
    empty string, it will return 0). For example:
    Input: ""
    Output: 0
    Input: "1"
    Output: 1
    Input: "1,2"
    Output: 3

    2. Start with the simplest test case of an empty string and move to one & two numbers.

    3. Remember to solve things as simply as possible so that you force yourself to write tests you did
    not think about

    4. Remember to refactor after each passing test.

2. Allow the add method to handle an unknown amount of numbers

3. Allow alphabets to be included with numbers.
    The numeric value for the alphabet would be equal to its position.
    Such as a = 1, b = 2, c = 3 … y = 25, z = 26.
    For example:
    Input: "1,2,a,c"
    Output: 7 (1 + 2 + 1 + 3)
    Note: Use lowercase alphabets only.
4. Calling add with a negative number will throw an exception “Negatives not allowed” - and the negative
    that was passed.
5. If there are multiple negatives, show all of them in the exception message

6. Numbers bigger than 1000 should be ignored.
    For example:
    Input: "2,1001"
    Output: 2
