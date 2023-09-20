#include <iostream>
#include <string>

using namespace std;

class Node
{
 public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkList
{
 private:
    int size;

 public:
    Node* head;
    LinkList()
    {
        size = 0;
        head = NULL;

        bool Insert(const int& pos, const int& data)
        {
           Node* newNode = new Node(data);
           if(pos == 1) 
           {
                newNode->next = head;
                head = newNode;
           } 
           else if(pos == size+1)
           {
                Node* prevNode = head;
                while(prevNode != NULL)
                {
                    prevNode = prevNode->next;
                }
                prevNode->next = newNode;
           }
           else if(pos < size + 1)
           {
                Node* prevNode = head;
                for (int i = 0; i<pos; i++)
                {
                    prevNode = prevNode->next;
                }
                Node* nextNode = prevNode->next;
                prevNode->next = newNode;
                newNode->next = nextNode;
           }
           size++;
        }
    }

};