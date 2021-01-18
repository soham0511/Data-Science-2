import pandas as pd
#from list
# s1=pd.Series([10,20,45,67])
# print(s1)
# s1=pd.Series([10,20,45,67],index=['a','b','c','d'])
# print(s1)
#from dictionary
#the keys will become the index and values will become the series object by default
d1={'key':'value','fruit':'rectify',"vegies":'tomato'}
s1=pd.Series(d1)
print(s1)