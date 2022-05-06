// Include header file
#include <iostream>

using namespace std;
/*
    C++ Program 
    Implement priority queue with pair
*/
class TreeNode
{
	public: 
    int first;
	char second;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int first, char second)
	{
		this->first = first;
		this->second = second;
		this->left = NULL;
		this->right = NULL;
	}
};
class QNode
{
	public: TreeNode *n;
	QNode *next;
	QNode *prev;
	QNode(TreeNode *n)
	{
		this->n = n;
		this->prev = NULL;
		this->next = NULL;
	}
};
class PriorityQueue
{
	public: QNode *front;
	QNode *rear;
	int size;
	PriorityQueue()
	{
		this->front = NULL;
		this->rear = NULL;
		this->size = 0;
	}
	// Add a node into queue Priority queue
	void enQueue(TreeNode *auxiliary)
	{
		//Create a dynamic node
		QNode *node = new QNode(auxiliary);
		node->n = auxiliary;
		if (this->front == NULL)
		{
			// When adding a first node of queue
			this->front = node;
			this->rear = node;
		}
		else if (this->front->n->first >= auxiliary->first)
		{
			// Add node at beginning position
			node->next = this->front;
			this->front->prev = node;
			this->front = node;
		}
		else if (this->rear->n->first <= auxiliary->first)
		{
			// Add node at last position
			node->prev = this->rear;
			this->rear->next = node;
			this->rear = node;
		}
		else
		{
			QNode *temp = this->front;
			// Find the location of inserting priority node
			while (temp->n->first < auxiliary->first)
			{
				temp = temp->next;
			}
			// Add node
			node->next = temp;
			node->prev = temp->prev;
			temp->prev = node;
			if (node->prev != NULL)
			{
				node->prev->next = node;
			}
		}
		this->size = this->size + 1;
	}
	bool isEmpty()
	{
		if (this->size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	// Get a front element of queue
	TreeNode *peek()
	{
		if (this->isEmpty() == true)
		{
			// When Queue is empty
			cout << "\n Empty Queue \n";
			return NULL;
		}
		else
		{
			return this->front->n;
		}
	}
	int isSize()
	{
		return this->size;
	}
	// Remove a front node of a queue
	void deQueue()
	{
		if (this->isEmpty() == false)
		{
			QNode *temp = this->front;
			if (this->front == this->rear)
			{
				// When queue contains only one node
				this->rear = NULL;
				this->front = NULL;
			}
			else
			{
				this->front = this->front->next;
				this->front->prev = NULL;
			}
          	temp->n = NULL;
          	delete temp;
			// Change queue size
			this->size--;
		}
	}
	// Print elements of queue
	void printQdata()
	{
		QNode *node = this->front;
		cout << "\n Queue Element ";
		while (node != NULL)
		{
			cout << "\n " << node->n->first << " " << node->n->second;
			node = node->next;
		}
		cout << "\n";
	}
};
class HuffmanCodes
{
	public:
		// Display Huffman code
		void printTree(TreeNode *node, string result)
		{
			if (node == NULL)
			{
				return;
			}
			if (node->left == NULL && node->right == NULL)
			{
				cout << "\n " << node->second << " " << result;
				return;
			}
			this->printTree(node->left, result  + "0");
			this->printTree(node->right, result + "1");
		}
	// Construct Huffman Code Tree
	TreeNode *buildHuffmanCodes(char value[], int frequency[], int n)
	{
		PriorityQueue q = PriorityQueue();
		TreeNode *root = NULL;
		TreeNode *n1 = NULL;
		TreeNode *n2 = NULL;
		// First add all elements into priority queue
		for (int i = 0; i < n; ++i)
		{
			root = new TreeNode(frequency[i], value[i]);
			q.enQueue(root);
		}
		q.printQdata();
		// printQdata(q);
		// Execute loop until the priority queue contains more than 1 node
		while (q.isSize() > 1)
		{
			// Get first smallest node
			n1 = q.peek();
			//Remove a front element
			q.deQueue();
			// Get second smallest node
			n2 = q.peek();
			// Remove a front element
			q.deQueue();
			// Make new node using two smallest node
			root = new TreeNode(n1->first + n2->first, ' ');
			// Add new node into priority queue
			q.enQueue(root);
			// Set left and right child
			root->left = n1;
			root->right = n2;
		}
		q.deQueue();
		return root;
	}
};
int main()
{
	HuffmanCodes task = HuffmanCodes();
	char value[] = {
		'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g'
	};
	int frequency[] = {
		16 , 8 , 19 , 32 , 21 , 10 , 5
	};
	int n = sizeof(frequency) / sizeof(frequency[0]);
	TreeNode *root = task.buildHuffmanCodes(value, frequency, n);
	task.printTree(root, "");
	return 0;
}