cost = list(map(int, input().split()))

prev2 = cost[0]
prev1 = cost[1]

for i in range(2, len(cost)):
    curr = cost[i] + min(prev1, prev2)
    prev2 = prev1
    prev1 = curr

print(min(prev1, prev2))
