#about create function

def main():
    a = 10
    b = 10
    c = func(a, b)
    print(f"{a} x {b} = {c}")

def func(a, b):
    c = a * b
    return c

if __name__ == "__main__":
    main()