class Stack():

    def __init__(self):
        self.arr = list()

    def isEmpty(self):
        if not self.arr:
            return True
        return False

    def addStack(self, value):
        self.arr.append(value)

    def delete(self):
        if self.isEmpty():
            print("Stack is empty")
        else:
            self.arr.pop()