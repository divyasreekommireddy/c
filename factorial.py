'''def add_numbers(a, b):
    return a+b
num1=int(input("enter first number:"))
num2=int(input("enter second number:"))

result =add_numbers(num1,num2)
print("Sum=", result)'''

def factorial (n):
     if n==0 or n==1:
         return 1
     else:
          return n * factorial(n-1)
num = int(input("enter a number:"))
result = factorial(num)
print("factorial =",result)
