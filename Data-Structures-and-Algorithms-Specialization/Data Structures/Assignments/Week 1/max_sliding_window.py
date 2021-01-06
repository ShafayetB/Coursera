def max_sliding_window_naive(sequence, m):
    queue = Queue()
    maximums = []
    for i in range(m):
        queue.Enqueue(sequence[i])

    maximums.append(queue.Max())

    for i in range(m, len(sequence)):
        queue.Dequeue()
        queue.Enqueue(sequence[i])
        maximums.append(queue.Max())

    return maximums

class Queue():
    def __init__(self):
        self.inbox = Stack()
        self.outbox = Stack()

    def Enqueue(self, item):
        self.inbox.Push(item)

    def Dequeue(self):
        if self.outbox.is_empty():
            while self.inbox.is_empty() is False:
                item = self.inbox.Pop()
                self.outbox.Push(item)
        self.outbox.Pop()

    def Max(self):
        inmax = self.inbox.Max(); outmax = self.outbox.Max()
        if inmax is not None and outmax is not None:
            return max(inmax, outmax)
        elif inmax is not None:
            return inmax
        elif outmax is not None:
            return outmax


class Stack():
    def __init__(self):
        self.__stack = []
        self.max_stack = []

    def Push(self, a):
        if len(self.max_stack) > 0:
            if a > self.max_stack[-1]:
                self.max_stack.append(a)
            else:
                self.max_stack.append(self.max_stack[-1])
        else:
            self.max_stack.append(a)
        self.__stack.append(a)

    def Pop(self):
        self.max_stack.pop()
        return self.__stack.pop()

    def Max(self):
        return None if self.is_empty() else self.max_stack[-1]

    def is_empty(self):
        return True if len(self.__stack) == 0 else False

if __name__ == '__main__':
    n = int(input())
    input_sequence = [int(i) for i in input().split()]
    assert len(input_sequence) == n
    window_size = int(input())

    print(" ".join(map(str, max_sliding_window_naive(input_sequence, window_size))))