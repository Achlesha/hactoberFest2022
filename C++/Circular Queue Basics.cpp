#include<iostream>
using namespace std;

struct queue{                       //structure of queue
    int front{0},rear{0};
    int arr[100];
};

typedef struct queue queue;
queue *q = new queue[100];

bool isFull(){                      // Check if queue is full
    return q->front == ((q->rear)+1)%100;
}

bool isEmpty(){                     // Check if queue is empty
    return q->front == q->rear;
}

void enqueue(int x){                // Enqueue - for adding elements to the queue
    if(isFull()){
        cout << "Overflow - Queue is full" << endl;
    }
    else{
        q->arr[q->rear] = x;
        q->rear = (q->rear+1)%100;
    }
}

void dequeue(){                     // Dequeue - for deleting elements from the queue
    if(isEmpty()){
        cout << "Underflow - Queue is empty" << endl;
    }
    else{
        q->front = (q->front+1)%100;
    }
}

void display(){                     // Displaying the elements of queue
    cout << "Queue: [ ";
    for(int i{q->front}; i<q->rear; ++i){
        cout << q->arr[i] << " ";
    }
    cout << "]" << endl;
}

int main()
{
    char choice{};
    do{
        cout << "***Menu***" << endl;
        cout << "A - Add element to the queue" << endl;
        cout << "R - Remove element from the queue" << endl;
        cout << "D - Display queue" << endl;
        cout << "Q - Quit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        if(choice == 'A' || choice == 'a'){
            int num{};
            cout << "Enter element to add: ";
            cin >> num;
            enqueue(num);
            cout << num << " added to the queue" << endl;
        }
        else if(choice == 'R' || choice == 'r'){
            dequeue();
            cout << "Removed an element from queue" << endl;
        }
        else if(choice == 'D' || choice == 'd'){
            display();
        }
        else if(choice == 'Q' || choice == 'q'){
            cout << "Goodbye..." << endl;
        }
        else{
            cout << "Invalid choice...Try Again..." << endl;
        }
    }while(choice != 'Q' && choice != 'q');
    return 0;
}
