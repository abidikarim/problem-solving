class Solution:
    def simplifyPath(self, path: str) -> str:
        s=""
        for i in range(len(path)):
            if path[i] == '/' and i > 0 and path[i-1] =='/':
                continue
            s+=path[i]
        ops=s.split('/')
        stack=[]
        for op in ops:
            if op=="..":
                if len(stack):
                    stack.pop()
            elif op not in ['.','']:
                stack.append(f"{op}")
        return '/' + '/'.join(stack)
        