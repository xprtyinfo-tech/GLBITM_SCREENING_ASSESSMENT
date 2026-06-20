import sys

matrix = []

for line in sys.stdin:
    line = line.strip()
    if line:
        matrix.append(list(map(int, line.split())))

if not matrix:
    exit()

rows = len(matrix)
cols = len(matrix[0])

top, bottom = 0, rows - 1
left, right = 0, cols - 1

result = []

while top <= bottom and left <= right:

    for j in range(left, right + 1):
        result.append(matrix[top][j])
    top += 1

    for i in range(top, bottom + 1):
        result.append(matrix[i][right])
    right -= 1

    if top <= bottom:
        for j in range(right, left - 1, -1):
            result.append(matrix[bottom][j])
        bottom -= 1

    if left <= right:
        for i in range(bottom, top - 1, -1):
            result.append(matrix[i][left])
        left += 1

print(*result)
