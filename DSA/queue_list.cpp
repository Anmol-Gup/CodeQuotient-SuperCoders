class Queue { 
    struct QNode { 
        int data; 
        QNode* next; 
        QNode(int d){ 
            data = d; 
            next = NULL; 
        } 
    }; 
    QNode *front, *rear; 
    public:
  		// Constructor
        Queue(){
        }
  		// Add an element to the queue
        void enQueue(int x){
			QNode *newNode=(struct QNode*)malloc(sizeof(struct QNode));
          	newNode->data=x;
          	newNode->next=NULL;	
          	if(front==NULL){
              front=rear=newNode;
              return;
            }
          	rear->next=newNode;
          	rear=newNode;
        }
  		// Delete front element from the queue
        int deQueue() { 
			if(front==NULL)
              return -1;
          	int data=front->data;
          	front=front->next;
          	return data;
        }
};
