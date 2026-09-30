def sum(n):
    if n == 0:
        return 0
    return n+sum(n-1)


print(f"Sum of N Natural Numbers: {sum(10)}")
