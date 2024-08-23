firstval = input("Enter val: ")
firstval1 = input("Enter val2: ")

firstval_array = [int(x) for x in str(firstval)]
firstval1_array = [int(x) for x in str(firstval1)]

firstval_array_side_num = int(firstval_array[0]) + int(firstval_array[-1])
firstval1_array_side_num = int(firstval1_array[0]) + int(firstval1_array[-1])

print(firstval_array_side_num + firstval1_array_side_num)
# print(firstval1_array_side_num)

# print(int(firstval) + int(firstval1))
