# **Array Size Exercise**
## Objective:
This assignment will test your understanding of how the sizeof operator behaves with arrays and pointers, particularly in relation to array decay in function calls.
## Instructions:
```c
void print_sizeof(char s[]) {
    printf("%d\n", sizeof(s));
}

int main() {
    char mystring[] = "1234567890";
    print_sizeof(mystring);
}
```

1.**Answer the following questions:**

    . What will be the output of the above program? Explain why.

    . What would sizeof(mystring) return if printed inside main() before calling print_sizeof?

    . How does array decay impact the sizeof result inside print_sizeof?

    . What would the output be on a 64-bit system instead of a 32-bit system? Explain your reasoning.

2. **Modify the code to print both values:**

    . Add a print statement in main() to display sizeof(mystring).

    . Run the program and compare the outputs.

    . Submit a screenshot of your program’s output along with your explanation.
3. **Further Exploration (Bonus):**

    . Create a version where print_sizeof takes a pointer (char *s) instead of an array.

    . Observe if there is any difference in behavior.
