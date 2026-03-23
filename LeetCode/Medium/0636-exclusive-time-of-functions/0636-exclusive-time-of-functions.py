class Solution:
    def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        result = [0] * n
        stack = []

        prev = 0

        for i in range(len(logs)):
            id, status, timestamp = logs[i].split(':')
            id = int(id)
            timestamp = int(timestamp)

            if status == "start":
                if stack:
                    top = stack[-1]
                    result[top] += timestamp - prev

                stack.append(id)
                prev = timestamp
            else:
                top = stack.pop()
                result[top] += timestamp - prev + 1
                prev = timestamp + 1
                
        return result
