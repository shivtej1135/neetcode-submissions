
class Solution:
    def calPoints(self, operations: List[str]) -> int:
        ans = []
        for i in range(0, len(operations)):
            if operations[i] == '+':
                curr = ans[-2] + ans[-1]
                ans.append(curr)
            elif operations[i] == 'C':
                ans.pop()
            elif operations[i] == 'D':
                curr = ans[-1] * 2
                ans.append(curr)
            else:
                ans.append(int(operations[i]))

        return sum(ans)


        