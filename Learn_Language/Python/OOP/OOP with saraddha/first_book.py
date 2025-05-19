class Code:
    def reset(sumon,x,y):
        sumon.x = 3
        sumon.y = 5

    # self better practice than any other words,here i used 
    # sumon but always avoid this
    
s = Code()
s.reset(4,10)
print(s.x,s.y)

