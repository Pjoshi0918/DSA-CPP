#include <bits/stdc++.h>
using namespace std;


class MyCircularDeque {
public:
    vector <int> queue;
    int front ;
    int rear;
    int size;

    MyCircularDeque(int k) {
        
        queue.resize(k);
        size = k;
        rear = -1;
        front = -1;

    }
    
    bool insertFront(int value) {
        
        if(isFull()) return false;

        if(isEmpty()) {


            front = rear = 0;

        }  

        else {

            front = (front -1 + size ) % size;

        }      

        queue[front] = value;

        return true;




    }
    
    bool insertLast(int value) {
        
        if(isFull()) return false ;

        if(isEmpty()){

            front = rear = 0;

        }

        else {

            rear = (rear +1) % size;

        }

        queue[rear] = value;

        return true;


    }
    
    bool deleteFront() {
        
        if(isEmpty()) return false;

        if(rear == front){

            rear = front = -1;

        }

        else {

            front = (front + 1) % size; 

        }

        return true;


    }
    
    bool deleteLast() {
        
        if(isEmpty()) return false;

        if(rear == front) {

            rear = front = -1;

        }

        else {

            rear = (rear -1 + size) % size;

        }

        return true;

    }
    
    int getFront() {
        
        if(isEmpty()) return -1;

        return queue[front];

    }
    
    int getRear() {
        
        if(isEmpty()) return -1;

        return queue[rear]; 

    }
    
    bool isEmpty() {
        
        return (front == -1);

    }
    
    bool isFull() {
        
        return (front == (rear + 1) % size );

    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */