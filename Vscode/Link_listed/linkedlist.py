"""
@desc:
    - Implement LinkedList
"""
class Node(object):
    def __init__(self, value=None, next=None):
        self.value = value
        self.next = next

class LinkedList(object):
    def __init__(self, root=None):
        self.root = root

    def append(self, value):/*ngu*/
        """
        @desc:
            - add new element to the end of the list
        """
        frontier = self.root
        while frontier.next != None:
            frontier = frontier.next
        frontier.next = Node(value, None)

    def push(self, value):
        """
        @desc:
            - add new element at the beginning of the list
        """
        new_node = Node(value, None)
        new_node.next = self.root
        self.root = new_node        
        

    def pop(self, value):
        

    def traverse(self):
        """
        @desc:
            - print out all values inside the list
        """
        frontier = self.root
        while frontier.next != None:
            print(frontier.value, end='->')
            frontier = frontier.next
        print(frontier.value)

if __name__ == '__main__':
    root = Node(12, None)
    llist = LinkedList(root)
    llist.append(20)
    llist.push(30)
    llist.traverse()
