import pandas as pd
#elements in one coloumn should be of same datatype
# s1=pd.DataFrame({"Name":['Soham','Harry','Souporno','Mizel'],"Marks":[98,99,89,94]})
# print(s1)
#built in functions of data frames
iris=pd.read_csv('iris.csv')
# print(iris.head())# first 5 records
# print(iris.head(100))#first 100 records

# print(iris.tail())#last 5 recors

# print(iris.describe())#print mean std 25,50 75 percentile max min
# print(iris.iloc[0:3,0:2])#print subset of 3 rows and first 2 coloumns using index values

# print(iris.loc[33:44,("sepal.width",'petal.width')])#print subset using labels

print(iris[(iris['sepal.length']>5) & (iris['variety']=='virginica')])#prints the records where the condition is satisfied
