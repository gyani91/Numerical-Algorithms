#Newton - Raphson Method
#Equation - f(x) = t - (Summation of(di/(si+c)))
#f'(x) = summation of di(si+c)^2
#xj = xi - f(xi)/f'(xi)

#Inputs

xi=0
n=4
t=10
d = [5,2,3,3]
s = [3,2,6,1]

#Equation
def f(d, s, x):
    summation = 0
    for d, s in zip(d,s):
        summation += d/(s+x)
    return summation


#Derivative of the equation
def df(d, s, x):
    summation = 0
    for d, s in zip(d,s):
        summation += (d/((s+x)**2))
    return summation

while True:
   xj = xi - (t - f(d, s, xi)) / df(d, s, xi)
   if xj == xi:
       break
   xi=xj
print (xj)
