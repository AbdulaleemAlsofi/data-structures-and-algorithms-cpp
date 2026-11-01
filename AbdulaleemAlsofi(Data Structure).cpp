// Eng. Abdulaleem Alsofi

#include<iostream>
#include<stack>
#include<queue>
#include<list>
#include <chrono>

using namespace std;

struct node* top;
struct node* temp;
struct node {
	int data;
	node *prev;
	node *next;
};
node *tial,*head;

//*****___________(The programe Class)___________*****

class Bank{
	
	private:
		double balance ; // Account balance
	public:
		// Withdraw function
		void withdraw(double amount){
			if(amount>0 && amount<=balance){
			balance -=amount;
			cout<<" Has been withdraw "<<amount<<" From the account. current balance "<<balance<<endl;}
			else{
			cout<<"The specified amount can not be withdraw"<<endl;
				}
			}
			// deposit function
			void deposit(double amount){
				if(amount>0){
					balance +=amount;
					cout<<" Has been deposited "<<amount<<" in the account. current balance "<<balance<<endl;}
					else{
						cout<<"The specified amount cannot be deposited "<<endl;
					}
				}
				// balance query function 
				double getbalance(){
					return balance;
				}
};
void abdulaleem_Class(){
	
	while(true){
		
	Bank account;
	int choice;
	double amount;
	int password=4444;
	int number;
	
	cout<<" ********** (( Welcome )) ********** \n"<<endl;
	cout<<" Please Enter The Password : ";
		cin>>number;
		
	if(number==password){
		
	while(true){
		cout<<endl;
		cout<<"----*----*----*(( Select the desired operation ))*----*----*----"<<endl<<endl;
	cout<<"\t";	cout<<"( 1 ) Withdraw from the account "<<endl;
	cout<<"\t";	cout<<"( 2 ) Deposit into the account "<<endl;
	cout<<"\t";	cout<<"( 3 ) Balance check "<<endl;
	cout<<"\t";	cout<<"( 4 )Finish "<<endl;
		cin>>choice;
		
		switch (choice){
			case 1:
				cout<<" Please enter the amount to be withdrawn:"<<endl;
				cin>>amount;
				account.withdraw(amount);
				break;
			case 2:
				cout<<" Please enter the amount to be deposited"<<endl;
				cin>>amount;
				account.deposit(amount);
				break;
			case 3:
				cout<<" The current balance is "<<endl;
				cin>>amount;
				account.getbalance();
				break;
			case 4:
	     	cout<<"******(( Exited the program ))******"<<endl;
	     	return ;
				default:
				cout<<"Invalid selection, please try again"<<endl;
				break;
		}
	}
}
else{
	cout<<endl;
	cout<<" Sory, The password is wrong, try again"<<endl;
	cout<<endl;
}
}
}
//*****___________(The programe Array)___________*****
class Array{
	private:
		int size;
		int length;
		int* items;
		
	public:
	Array(int arraysize)
	{
		size=arraysize;
		length=0;
		items=new int [arraysize];
	}
	
void insert(){
	int no_of_items;
	cout<<"How many items you want to fill ? \n";
	cin>>no_of_items;
	 if(no_of_items>size){
	 	cout<<"You can not exceed the array size \n";
	 	return ;
	 }
	 else{
	 	for(int i=0;i<no_of_items;i++){
	 		cout<<"Enter item no "<<i<<endl;
	 		cin>>items[i];
	 		length++;
			 }
	 }
}

void Display(){
	cout<<"Display Array content \n";
	for(int i=0;i<length;i++)
	{
		cout<<items[i]<<"\t";
	}
		cout<<endl;
}
int getSize(){
	return size;
}

int getLength(){
	return length;
}

void Search(){
		if(length==0)
		cout<<"Array is Empty !!\n";
		else{
			int n;
			cout<<"Enter number \n";
			cin>>n;
			for(int i=0; i<size;i++){
				if(items[i]==n){
				cout<<"\n The number is found\n"; break;}
				else{
					cout<<"The number is not Found\n"; break;}
			}
		}
}
	void Delete(int index){
		cout<<"Enter index of The number you want to delete : \n";
		cin>>index;
		if(index >=0 && index <size)
		{
			for(int i=index;i<length;i++)
			items[i]=items[i+1];
			length--;
		}
		else
		cout<<"Index out of Array Range\n";
	}
	
	void count(){
		if(length==0)
		cout<<"Cout= 0\n";
		else{
			cout<<"Count of array = "<<length;}
	}
	
	void change()
	{
int flag=0;
int n;
	cout<<"Enter The number you want to change: ";
	cin>>n;	
	for(int i=0;i<length;i++){
	if(items[i]==n){
int y;
cout<<"Locatione of value ["<<i<<"]"<<endl;	
cout<<"please Enter The new number : "  ;
cin>>y;
items[i]=y;     	
flag=1;
break;}}
    if(flag==0)
	cout<<"not found\n";}
};
void abdulaleem_Array()
{
int ch;	

cout<<" ********** (( Welcome )) ********** "<<endl;
	int arraysize;
	cout<<"Enter the Array Size \n";
	cin>>arraysize;
	Array myarray(arraysize);
	int key;
	int index;
	int newsize;
	int Array_other;
	
	do{
		cout<<"\n Enter \n 1-Insert() \n 2-display() \n 3-delete() \n 4-count()\n 5-search()\n 6-change()\n7-Clear screen\n 0-EXIT"<<endl;
		cin>>ch;
	switch(ch){
	
	
		case 1:myarray.insert();break;
			case 2:myarray.Display();break;
				case 3:myarray.Delete(index);break;
					case 4:myarray.count();break;
					    case 5:myarray.Search ();break;
					        case 6:myarray.change();break;
							    case 7:system("cls");
		                                   	break;
							           case 0:
							           	cout<<"******(( Exited the program ))******"<<endl;
							           	break;
							  }}
					        
	while(ch !=0);
}

//*****___________(The programe Linked List)___________*****
class Node{
	public:
		int data;
		Node* next;
};

class Linkedlist{
	public:
	 Node* head ,*tail;
	 Linkedlist()
	 {
	 	head=NULL;
	 }
	 
bool isempty()
{
	return(head == NULL);
}
void insert()
{
	Node *temp = new Node;			 
	cout << "Enter Element:"<<endl; 
	cin >> temp->data;				 
	temp->next = NULL;				 

	if (head == NULL)		
		head = tail = temp; 

	else 
	{
		tail->next = temp; 
		tail = tail->next;
	}
}

void display(){
	if (head == NULL)
		cout << "list is Empty" << endl;
	else
	{
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" | ";
		temp = temp->next;
	}
}
}

void Delete(int item){
	cout << "Enter the value to delete: ";
    cin>>item;
	if(isempty())
	cout<<" List is empty, no items to delete \n";
	Node* delptr = head;
	if(head->data == item)
	{
		head =head->next;
		delete delptr;
	}
	else
	{
		Node* prev=NULL;
		delptr =head;
		while(delptr->data != item)
		{
			prev =delptr;
			delptr=delptr->next;
		}
		prev->next = delptr->next;
		delete delptr;
	}
}

void count()
{
	int counter;
	Node* temp = head;
	while(temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	//return counter;
	cout<<counter;
}

void Search()
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    int value;
    cout << "Enter the value to Search for: ";
    cin >> value;

    Node *current = head;
    bool found = false;
    int index = 0;

    while (current != NULL)
    {
        if (current->data == value)
        {
            found = true;
            break;
        }

        current = current->next;
        index++;
    }

    if (found)
    {
        cout << "Element found at node: " << index << endl;
    }
    else
    {
        cout << "Element not found in the list" << endl;
    }
}

};
void abdulaleem_LinkedList()
{
	cout<<" ********** (( Welcome )) ********** "<<endl;
	int choice; 
    int newvalue , item ,key;
    Linkedlist led;
    
	do
	{
		cout << "\n Enter choice: " << endl;		
		cout << "\n1-insert()\n2-display()\n3-Delete()\n4-count()\n5-Search()\n 6-Clear screen\n 0-EXIT"<<endl;
		cin >> choice;												  

		switch (choice) 
		{

		case 1: 
			led.insert();
			break; 
		case 2:	   
			led.display();
			break; 
		case 3:
		    led.Delete(item);
			break;
		case 4:
        cout << "Number of elements in the list: "; led.count() ;
        cout<<endl;
			break;
		case 5:
           led.Search();
			break;
		case 6:
			system("cls");
			break;
		case 0:
	    cout<<"******(( Exited the program ))******"<<endl;
            break;
	   }
	} while (choice != 0); 
}

//*****___________(The programe Stack using Array)___________*****
class Stack
{
private:
	int size_stack;
	int top;
	int *stack;

public:
	Stack(int s)
	{
		size_stack = s;
		top = -1;
		stack = new int[size_stack];
	}
	bool isFull()
	{
		if (top == size_stack - 1)
			return 1;
		else
			return 0;
	}
	bool isEmpty()
	{
		if (top == -1)
			return 1;
		else
			return 0;
	}
	void push(int newitem);
	void display();
	void pop();
	int size();
	int Top();
};

void Stack::push(int newItem)
{
	if (!isFull())
	{
		top++;
		stack[top] = newItem;
	}
	else
		cout << "Stack is Full\n";
}

void Stack::display()
{
	if (!isEmpty())
	{
		for (int i = top; i >= 0; i--)
			cout << stack[i] << " | ";
	}
	else
		cout << "Stack is Empty\n";
}

void Stack::pop()
{
	if (!isEmpty())
	{
		top--;
	}
	else
		cout << "Stack is Empty\n";
}

int Stack::size()
{
	return top + 1;
}
int Stack::Top()
{
	return stack[top];
}

void abdulaleem_StackusingArray()
{

    cout<<" ********** (( Welcome )) ********** "<<endl;
	int choice, stack_size;
	cout << "Enter the Stack size\n";
	cin >> stack_size;
	Stack s1(stack_size);
	do
	{
		cout << "\nEnter choice: " << endl;			   
		cout << "\n 1-push\n 2-dispaly\n 3-pop\n 4-size\n 5-top\n 6-Clear screen\n 0-EXIT "<< endl;	   
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			int item;
			cout <<"\nEnter a new item\n";
			cin >>item;
			s1.push(item);
			break;
		}
		case 2:
		{
			s1.display();
			break;
		}
		case 3:
			s1.pop();
			break;
		case 4:
		{
			cout << "\nsize of Stack is: " << s1.size();
			break;
		}
		case 5:
		{
			cout << "\ntop of Stack is: " << s1.Top();
			break;
		}
		case 6:
			system("cls");
			break;
		case 0:
	    cout<<"******(( Exited the program ))******"<<endl;
            break;
		default:
			cout << "invalid choice!!\n";
			break;
		}
	} while (choice != 0);
}
//*****___________(The programe Stack using LinkedList)___________*****
class Nodes
{
public:
	int data;
	Nodes *next;
	Nodes *prev;
};
Nodes *Head, *Top = NULL;
int counter = 0;
void push()
{

	Nodes *Temp = new Nodes;
	cout << "Enter Element: \n";
	cin >> Temp->data;
	Temp->next = Temp->prev = NULL;

	if (Head == NULL)
		Head = Top  = Temp;

	else
	{
		Top ->next = Temp;
		Temp->prev = Top ;
     	Top = Top ->next;
	}
	counter++;
}
void display()
{
	Nodes *Temp;
	Temp = Top ;

	while (Temp != NULL)
	{
		cout << Temp->data << " | ";
		Temp = Temp->prev;
	}
}
int size()
{
	return counter;
}
int pop()
{
	if (Head == NULL)
	{
		
	cout << "List is Empty\n";
		
	}
	else
	{
		int vul;
		Nodes *delptr =Top ;
		vul = Top->data;
		Top  = Top ->prev;
		Top ->next = NULL;
		delete (delptr);
		counter--;
		return vul;
	}
		
}

int Peek()
{
	return Top->data;
}

void abdulaleem_StackusingLinkedList()
{
	cout<<" ********** (( Welcome )) ********** "<<endl;
	int choice;
	do{
		cout << "\nEnter choice " <<endl;			   
		cout << "\n 1-Push\n 2-Dispaly\n 3-Pop\n 4-Size\n 5-Top\n 6-Clear screen\n 0-EXIT "<<endl;	   
		cin >> choice;
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			display();
			break;
		case 3:
			pop();
			break;
		case 4:
			cout<<"Counter= "
				 << size();
			break;
		case 5:
			cout << " Top= "
				 << Peek();
			break;
		case 6:
			system("cls");
			break;
		case 0:
			cout<<"******(( Exited the program ))******"<<endl;
			break;
		}

	} while (choice != 0);
}

//*****___________(The programe Stack using Library)___________*****

void displayStack(const stack<int> &st)
{
    stack<int> tempStack = st;
    cout << "Stack elements: ";
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}

void abdulaleem_StackusingLibrary()
{
	cout<<" ********** (( Welcome )) ********** "<<endl;
    stack<int> myStack;
    int value;
    int choice;
    do
    {
       cout << "\nEnter choice: " << endl;			   
		cout << "\n 1-push\n 2-dispaly\n 3-pop\n 4-size\n 5-top\n 6-Clear screen\n 0-EXIT "<< endl;	   
		cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a value to push: ";
            cin >> value;
            myStack.push(value);
            break;
        case 2:
            displayStack(myStack);
            break;
        case 3:
            if (!myStack.empty())
            {
                value = myStack.top();
                myStack.pop();
                cout << "pop is sucssfully" << endl;
            }
            else
            {
                cout << "Stack is empty. Cannot pop from an empty stack.\n";
            }
            break;
        case 4:
            cout << "Size of the stack: " << myStack.size() << "\n";
            break;
        case 5:
            if (!myStack.empty())
            {
                value = myStack.top();
                cout << "Top value: " << value << "\n";
            }
            else
            {
                cout << "Stack is empty. No top value.\n";
            }
            break;

        case 6:
            system("cls");
            break;
        case 0:
			cout<<"******(( Exited the program ))******"<<endl;
			break;
        }

    } while (choice != 0);
}

//*****___________(The programe Queue Using Array)___________*****
class Queue{
	int size;
	int first,last;
	int *queue;
	int count ;
	public:
	Queue(int queuesize){
		size = queuesize;
		first=last=-1;
		queue = new int[size];
		count = 0;
	}
	bool isFull(){
		if(last==size-1)
		return 1;
		else return 0;
	}
	bool isEmpty(){
		if(last==-1 ||first==-1)
		return 1;
		else return 0;
	}
	void inqueue(int item){
		if(!isFull()){
			if(first==-1)
			{
				first=last=0;
				queue[first]=item;
			}
			else{
				last++;
				queue[last]=item;
			}
			count ++;
		}else cout<<"Queue is full\n";
		
	}
	void display(){
		if(!isEmpty()){
			cout<<"Queue is \t |";
			for(int i=first; i<=last; i++)
			cout<<queue[i]<<" | ";
		}
		else cout<<"Queue is empty\n";
	}
	void dequeue(){
		if(!isEmpty()){
			if(first==last)
			{cout<<queue[first]<<" is deleted\n";
			first=last=-1;}
			else{
				cout<<queue[first]<<" is deleted\n";
				first++;
			}
			count --;
			}
			else cout<<"Queue is empty\n";
		
	}
	int Size(){
		return count;
	}
	int First(){
		if(!isEmpty())
		return queue[first];
		else cout<<"Queue is empty!\n";
	}
	int Last(){
		if(!isEmpty())
		return queue[last];
		else cout<<"Queue is empty!\n";
	}
};
	void abdulaleem_QueueusingArray(){
		
		cout<<" ********** (( Welcome )) **********\n"<<endl;
		int queueSize;
		cout<<"Enter The Size of The Queue: ";
		cin>>queueSize;
		Queue myQueue(queueSize);
int choice; 
  
   do{
    cout<<"\n1-inqueue\n2-display\n3-dequeue\n4-size\n5-first\n6-last\n7-Clear screen\n0-Exit\n";
    cin>>choice;
    
     switch(choice){
	case 1:{
		int t;cout<<"Enter item: ";cin>>t;
		myQueue.inqueue(t);
		break;
	} 
    case 2: myQueue.display();break;
    case 3:{
    	myQueue.dequeue();
		break;
	}
	case 4: {cout<<"\nSize of Queue = "<<myQueue.Size();
		break;
	}
	case 5: {cout<<"\nFirs of Queue = "<<myQueue.First();
		break;
	}
	case 6: {cout<<"\nLast of Queue = "<<myQueue.Last();
		break;
	}
    case 0:{cout<<"******(( Exited the program ))******"<<endl;
			break;}
	case 7:{system("cls");
            break;}
            
  }}while(choice!=0);
  	
	}
//*****___________(The programe Queue Using LinkedList)___________*****
class Nodess{
public:
int data;
Nodess *next;	
};
class List{
	Nodess *first, *last;
	int count ;
	public:
	List(){
		first = last=NULL;
		count =0;
	}
bool isEmpty(){
	if(first==NULL || last==NULL)
	return 1;
	else return 0;
}
void inqueue(int item){
	Nodess *temp = new Nodess;
	temp->data= item;
	temp->next= NULL;
	
	if(first==NULL)
	first=last=temp;
	
	else{
		last->next= temp;
		last = last->next;		
	}
	count++;	
}

void display(){
	if(isEmpty())
	cout<<"Queue is Empety\n";
	else{
		Nodess *i;
		i = first;
		cout<<"Queue Element is =  |";
		while(i!=NULL)
		{cout<<i->data<<" | ";
		i= i->next;}
	}
}
void dequeue(){
	if(!isEmpty()){
		Nodess *x;
		x= first;
		first = first->next;
		delete x;
		count--;
	}
	else cout<<"Queue is Empty\n";
}
int Size(){
	return count;
}
int First(){
	if(!isEmpty())
		return first->data;
		else cout<<"Queue is Empty!\n";
}
int Last(){
	if(!isEmpty())
		return last->data;
		else cout<<"Queue is Empty!\n";
}
};
void abdulaleem_Queueusinglinkedlist(){
	cout<<" ********** (( Welcome )) ********** "<<endl;	
	List m;
int choice; 
  
   do
   {
    cout<<"\n1-inqueue\n 2-display\n 3-dequeue\n 4-size\n 5-first\n 6-last\n 7-Clear screen\n 0-Exit..\n";
    cin>>choice;
    
     switch(choice){
	case 1:{
		int t;cout<<"Enter item: ";cin>>t;
		m.inqueue(t);
		break;
	} 
    case 2: m.display();break;
    case 3:{
    	m.dequeue();
		break;
	}
	case 4: {cout<<"\nSize of Queue = "<<m.Size();
		break;
	}
	case 5: {cout<<"\nFirs of Queue = "<<m.First();
		break;
	}
	case 6: {cout<<"\nLast of Queue = "<<m.Last();
		break;
	}
	case 7:{system("cls");
		break;
	}
	case 0:{cout<<"******(( Exited the program ))******"<<endl;
			break;
		}
  }}while(choice!=0);
  
       	
}

//*****___________(The programe Queue Using Library)___________*****
struct Queue_stl{
	queue<int>q1,q2;

	int choice; 
    
void abdulaleem_Queue_stl(){
   do{
   	cout<<" ********** (( Welcome )) ********** "<<endl;
    cout<<"\n 1-inqueue\n 2-display\n 3-dequeue\n 4-size\n 5-first\n 6-last\n 0-Exit..\n";
    cin>>choice;
    
     switch(choice){
	case 1:{
		int t;cout<<"Enter item : ";cin>>t;
		q1.push(t);
		break;
	} 
    case 2:{q2=q1;
    while(!q2.empty()){
    	cout<<q2.front()<<" | ";
    	q2.pop();
	}
    	
		break;
	}
    case 3:{
    	q1.pop();
		break;
	}
	case 4: {cout<<"\nSize of Queue "<<q1.size();
		break;
	}
	case 5: {cout<<"\nFirs of Queue "<<q1.front();
		break;
	}
	case 6: {cout<<"\nLast of Queue "<<q1.back();
		break;
	}
	case 0:{cout<<"******(( Exited the program ))******"<<endl;
			break;
		}

  }
  }
    while(choice!=0);
		
}
      }Queue_stl;

//*****___________(The programe Tree )___________*****
#include <chrono>
using namespace std::chrono;

class Node1
{
public:
    int data;
    Node1 *left;
    Node1 *right;

    Node1(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void Preorder_traversal(Node1 *temp) //root->left->right
{
    if (temp != nullptr)
    {
        cout << temp->data << "\t";
        Preorder_traversal(temp->left);
        Preorder_traversal(temp->right);
    }
}

void Inorder_traversal(Node1 *temp) //left->root->right
{
    if (temp != nullptr)
    {
        Inorder_traversal(temp->left);
        cout << temp->data << "\t";
        Inorder_traversal(temp->right);
    }
}

void Postorder_traversal(Node1 *temp) //left->right->root
{
    if (temp != nullptr)
    {
        Postorder_traversal(temp->left);
        Postorder_traversal(temp->right);
        cout << temp->data << "\t";
    }
}

void abdulaleem_Tree()
{
	cout<<"\n ********** (( Welcome )) **********\n "<<endl;
    Node1 *root = new Node1(2);
    root->left = new Node1(0);
    root->right = new Node1(3);
    root->left->left = new Node1(7);
    root->left->left->left = new Node1(6);
    root->left->left->right = new Node1(5);
    root->right->left = new Node1(1);
    root->right->left->left = new Node1(8);
    root->right->right = new Node1(9);
    root->right->right->right = new Node1(4);

    auto start = high_resolution_clock::now();
    cout << "Preorder traversal = ";
    Preorder_traversal(root);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by Preorder_traversal: " << duration.count() << " microseconds" << endl;

    start = high_resolution_clock::now();
    cout << "\nInorder traversal ";
    Inorder_traversal(root);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by Inorder_traversal: " << duration.count() << " microseconds" << endl;

    start = high_resolution_clock::now();
    cout << "\nPostorder traversal = ";
    Postorder_traversal(root);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by Postorder_traversal: " << duration.count() << " microseconds" << endl;

    cout<<"\n******(( Exited the program ))******\n"<<endl;
}

//*****___________(The programe Tree_BST )___________*****

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

struct Node2
{
	float data;
	Node2 *left1;
	struct Node2 *right1;
};
// Function to find minimum in a tree.
Node2 *FindMin(Node2 *root)
{
	while (root->left1 != NULL)
		root = root->left1;
	return root;
}
// Function to search a delete a value from tree.
struct Node2 *Delete(struct Node2 *root, float data)
{
	if (root == NULL)
		return root;
	else if (data < root->data)
		root->left1 = Delete(root->left1, data);
	else if (data > root->data)
		root->right1 = Delete(root->right1, data);
	// Wohoo... I found you, Get ready to be deleted
	else
	{
		// Case 1:  No child
		if (root->left1 == NULL && root->right1 == NULL)
		{
			delete root;
			root = NULL;
		}
		// Case 2: One child
		else if (root->left1 == NULL)
		{
			struct Node2 *temp = root;
			root = root->right1;
			delete temp;
		}
		else if (root->right1 == NULL)
		{
			struct Node2 *temp = root;
			root = root->left1;
			delete temp;
		}
		// case 3: 2 children
		else
		{
			struct Node2 *temp = FindMin(root->right1);
			root->data = temp->data;
			root->right1 = Delete(root->right1, temp->data);
		}
	}
	return root;
}

int FindHeight(Node2 *root)
{
	if (root == NULL)
		return -1;
	else
		return max(FindHeight(root->left1), FindHeight(root->right1)) + 1;
}

// Function to Insert Node in a Binary Search Tree
Node2 *Insert(Node2 *root, float data)
{
	if (root == NULL)
	{
		root = new Node2();
		root->data = data;
		root->left1 = root->right1 = NULL;
	}
	else if (data <= root->data)
		root->left1 = Insert(root->left1, data);
	else
		root->right1 = Insert(root->right1, data);
	return root;
}

void Inorder_traversal(Node2 *temp)
{
	if (temp != NULL)
	{
		Inorder_traversal(temp->left1);
		cout << temp->data << "\t";
		Inorder_traversal(temp->right1);
	}
}

void abdulaleem_TreeBST()
{
	cout<<"\n ********** (( Welcome )) **********\n "<<endl;
	Node2 *root = NULL;
	int ch;
	do
	{
		cout << "\n1-insert into BTS: \n2-Inorder_traversal\n3-Height of BST\n4-Delet\n0-Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			float itm;
			cout << "Enter item: ";
			cin >> itm;
			auto start = high_resolution_clock::now();
			root = Insert(root, itm);
			auto stop = high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "\nTime taken by Preorder_traversal: " << duration.count() << " microseconds" << endl;

			break;
		}
		case 2:
		{
			cout << "\nInorder travesal = ";
			auto start = high_resolution_clock::now();
			Inorder_traversal(root);
			auto stop = high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "\nTime taken by Preorder_traversal: " << duration.count() << " microseconds" << endl;

			break;
		}
		case 3:
		{
			auto start = high_resolution_clock::now();
			cout << "\nHeight of BST = " << FindHeight(root);
			cout << "\nLevel of BST = " << FindHeight(root) + 1;
			auto stop = high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "\nTime taken by Preorder_traversal: " << duration.count() << " microseconds" << endl;

			break;
		}
		case 4:
		{
			float de;
			cout << "Enter item to delete: ";
			cin >> de;
			auto start = high_resolution_clock::now();
			root = Delete(root, de);
			auto stop = high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "\nTime taken by Preorder_traversal: " << duration.count() << " microseconds" << endl;

			break;
		}
		case 0:{cout<<"******(( Exited the program ))******"<<endl;
			break;
		}
		}
	} while (ch != 0);
}
//*****___________(The programe Graph )___________*****
class Graph{
	int v;
	list<int> *l;
	
	public:
		Graph(int v){
			this->v = v;
			l = new list<int>[v];
		}
		void addEdge(int strat, int end){
		l[strat].push_back(end);
		l[end].push_back(strat);	
		}
		void printAdjstList(){
			for(int i=0; i<this->v ; i++){
				cout<<"Vertex "<<i<<"->";
				for(int x : l[i]){
					cout<<x<<",";
				}
				cout<<endl;
			}
		}
};

void abdulaleem_Graph(){
	
	cout<<" ********** (( Welcome )) **********\n "<<endl;
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,0);
	g.addEdge(0,2);
	g.addEdge(1,2);
	
	g.printAdjstList();
	
	cout<<"******(( Exited the program ))******\n"<<endl;
}


//*****___________( Eng\ Abdulaleem Alsofi )___________*****

int main()
{
	cout<<"*****___________( Eng\\ Abdulaleem Alsofi )___________*****"<<endl;
	Bank k();
	 int n;
	 do {
	 	cout<<"\n1-programe Class\n2-programe Array\n3-programe LinkedList\n4-programe Stack using Array\n5-programe Stack using LinkedList\n6-programe Stack using Library\n7-programe Queue Using Array\n8-programe Queue Using LinkedList\n9-programe Queue Using Library\n10-programe Tree\n11-programe Tree_BST\n12-programe Graph "<<endl;
	 cin>>n;
	 	switch(n)
	 	{
	 		case 1: abdulaleem_Class() ; break;
	 		case 2: abdulaleem_Array() ; break;
	 		case 3: abdulaleem_LinkedList() ; break;
	 		case 4: abdulaleem_StackusingArray();break;
	 		case 5: abdulaleem_StackusingLinkedList();break;
	 		case 6: abdulaleem_StackusingLibrary();break;
	 		case 7: abdulaleem_QueueusingArray();break;
	 		case 8: abdulaleem_Queueusinglinkedlist();break;
	 		case 9: Queue_stl.abdulaleem_Queue_stl();break;
	 		case 10: abdulaleem_Tree();break;
	 		case 11:;abdulaleem_TreeBST();break;
	 		case 12: abdulaleem_Graph();break;
	 		
			} 
	 }
	 while (n!=0);
	 
	return 0;
}
