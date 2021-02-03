import numpy as np
# n1=np.array([10,43,432])
# print(n1)
# print(type(n1))
# n2=np.array([[12,45,67],[14,78,99],[9,4,0]])
# print(n2)
# print(type(n2))

#initializing all elements as zeros

# n1=np.zeros((4,5))
# print(n1)

#initializing all elements as same number

# n1=np.full((4,5),90)
# print(n1)

#initialzing of array with numbers in particular range

# n1=np.arange(10,20)#last number excluded , no skip value means 1
# print(n1)
# n1=np.arange(10,20,2)
# print(n1)

#initialzing with random numbers

# n1=np.random.randint(100,200,6)# 6 random numbers in the range from 100 to 200
# print(n1)

# n1=np.array([[12,45,67,1],[14,78,9,9]])
# print(n1)
# print(n1.shape)# number of rows and coloumns in the array

# n1.shape=(4,2)#changing shape of array
# print(n1)

# Mathematical operations on numpy

# n1=np.array([10,20])
# n2=np.array([30,40])
# print(np.sum([n1,n2]))#summing all elements
# print(np.sum([n1,n2],axis=0))#adding vertically
# print(np.sum([n1,n2],axis=1))#adding horizonatlly

# joining numpy arrays

n1=np.array([10,20,30])
n2=np.array([30,40,50])

print(np.vstack((n1,n2)))# stacked horizontally as n1 on top of n2
print(np.hstack((n1,n2)))# stacked horizontally side by side as n1 then n2
print(np.column_stack((n1,n2)))# stacked vertically as n1 as first column and n2 as second column