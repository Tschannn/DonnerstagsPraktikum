def dreh(lst):
    if not lst:
        return []
    else:
        return dreh(lst[1:]) + [lst[0]]
    
m = [1,2,3,4,5,6,7,8,9]
print(dreh(m))