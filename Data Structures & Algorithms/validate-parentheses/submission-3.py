class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for i in range(0,len(s)):
            if(s[i]=='(' or s[i]=='{' or s[i]=='['):
                st.append(s[i])
            else:
                if len(st)==0:
                    return False
            if(s[i]==')' and len(st)>0):
                if st[-1]=='(':
                    st.pop()
                    continue
                else:
                    return False
            if(s[i]==']' and len(st)>0):
                if st[-1]=='[':
                    st.pop()
                    continue
                else:
                    return False
            if(s[i]=='}' and len(st)>0):
                if st[-1]=='{':
                    st.pop()
                    continue
                else:
                    return False
        if(len(st)>0):
            return False
        return True
        