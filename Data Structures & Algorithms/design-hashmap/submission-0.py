class MyHashMap:

    def __init__(self):
        self.mp = {}

    def put(self, key: int, value: int) -> None:
        if key in self.mp:
            self.mp[key] = value
        if key not in self.mp:
            self.mp[key] = self.mp.get(key,0) + value

    def get(self, key: int) -> int:
        if key not in self.mp:
            return -1
        if key in self.mp:
            return self.mp[key]    

    def remove(self, key: int) -> None:
        if key in self.mp:
            del self.mp[key]
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)