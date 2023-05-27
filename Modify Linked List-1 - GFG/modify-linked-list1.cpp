//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
          vector<int> v;
      Node* temp = head;
      while(temp){
          v.push_back(temp->data);
          temp = temp->next;
      }
      int i=0;
      int j = v.size()-1;
      while(i<=j){
          int a = v[i];
          v[i]=v[j]-v[i];
          v[j]=a;
          i++;
          j--;
      }
      Node* newNode = new Node(v[0]);
      Node* tempo = newNode;
      for(int i=1;i<v.size();i++){
          tempo->next = new Node(v[i]);
          tempo = tempo->next;
          
      }
      return newNode;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends