# 2023 Hosung.Kim <hyongak516@mail.hongik.ac.kr>

import matplotlib.pyplot as plt

data = open("test.csv")

numberList = []
divisorList = []

for line in data :
    number, divisor = line.split(',')
    numberList.append(number)
    divisorList.append(int(divisor))

data.close()

plt.plot(numberList, divisorList, color='blue', marker='o', linestyle='solid')
plt.title("Divisor Function")
plt.xlabel("Number")
plt.ylabel("Divisor")

plt.axhline(2.0, color="lightgray", linestyle="dashed")
plt.tight_layout()
plt.grid(True)

plt.show()
plt.savefig('divisorGraph.png', dpi=200, facecolor="#eeeeee", bbox_inches="tight")