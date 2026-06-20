line = input().strip()

if not line:
    print(0)
else:
    heights = list(map(int, line.split()))
    n = len(heights)

    stack = []
    max_area = 0

    for i in range(n + 1):
        curr_height = 0 if i == n else heights[i]

        while stack and heights[stack[-1]] > curr_height:
            height = heights[stack.pop()]

            width = i if not stack else i - stack[-1] - 1

            max_area = max(max_area, height * width)

        stack.append(i)

    print(max_area)
