a=int(input("Enter 1st number :"))
b=int(input("Enter 2 nd number :"))
c=int(input("Enter 3rd number :"))
if a>=b and b>=c:
    print(a," is greatest")
elif b>=a and b>=c:
    print(b," is greatest ")
else:
    print(c," is greatset")
