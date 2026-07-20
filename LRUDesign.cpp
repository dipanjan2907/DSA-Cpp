#include <iostream>
using namespace std;
#include <unordered_map>
using namespace std;

class LRUCache
{
public:
    class Node
    {
    public:
        int key, val;
        Node *prev, *next;

        Node(int k, int v)
        {
            key = k;
            val = v;
            prev = next = NULL;
        }
    };

    Node *head, *tail;
    unordered_map<int, Node *> m;
    int limit;

    void addNode(Node *newNode)
    {
        Node *oldNext = head->next;
        head->next = newNode;
        newNode->prev = head;
        newNode->next = oldNext;
        oldNext->prev = newNode;
    }

    void delNode(Node *oldNode)
    {
        Node *oldPrev = oldNode->prev;
        Node *oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity)
    {
        limit = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key)
    {
        if (m.find(key) == m.end())
            return -1;

        Node *node = m[key];
        int ans = node->val;

        delNode(node);
        addNode(node);

        return ans;
    }

    void put(int key, int value)
    {
        if (m.find(key) != m.end())
        {
            Node *oldNode = m[key];
            delNode(oldNode);
            m.erase(key);
            delete oldNode;
        }

        if (m.size() == limit)
        {
            Node *lru = tail->prev;
            m.erase(lru->key);
            delNode(lru);
            delete lru;
        }

        Node *newNode = new Node(key, value);
        addNode(newNode);
        m[key] = newNode;
    }
};
int main()
{
    // [ "LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get" ];
    // [ [2], [ 1, 1 ], [ 2, 2 ], [1], [ 3, 3 ], [2], [ 4, 4 ], [1], [3], [4] ];
    return 0;
}
