from stack import Stack

stack = Stack()

def automata(data, index):
    if index is len(data):
        if stack.arr[-1] == 'z':
            stack.delete()
            return True
        return False

    elif data[index] == '0':
        stack.addStack('0')
        return automata(data, index+1)

    elif stack.arr[-1] == '0' and data[index] == '1':
        stack.delete()
        return automata(data, index+1)
    return False


if __name__ == '__main__':
    stack.addStack('z')
    data = input("Your Data : ")
    flag = automata(data, 0)

    if flag is True:
        print("Positive !")
    else:
        print("Negative !")