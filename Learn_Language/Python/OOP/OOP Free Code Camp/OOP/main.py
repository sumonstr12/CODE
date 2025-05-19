
from file1 import sumon

if __name__ == "__main__":
    n = int(input())
    
    if n<6:
        s = sumon(n)
        fac = s.factorial()
        print(f"Factorial - {fac}")
    else:
        print("Impossible to find out factorial..")
    