#include <bits/stdc++.h>
#include<ctime>
using namespace std;
int nodeNumber=0;
struct Node
{
   vector<int> child;
   string timestamp;
   int key;
   struct data
   {
       int ownerid;
       float value;
       string ownername;
    };
   int nodeNumber;
   string nodeId;
   struct Node* parent;
   string referenceNodeid;
   string childreferenceNodeId;
   string genesisReferenceNodeid;
};
Node *newNode(int key)
{
   Node *temp = new Node;

   temp->key = key;
   return temp;
}
Node* createGenesis(int key)
{
    Node *temp=newNode(key);
    temp->nodeNumber=++nodeNumber;
    time_t now=time(0);
    struct tm tstruct;
    char buf[80];
    strftime(timestr, sizeof(timestr), "%m%d%H%M%y", dt);
    sprintf(buffer,"%s", timestr);
    std::string stdBuffer(buffer);
    return temp;
}
Node* createNode(Node* parent, int data, int remaining)
{
    if(remaining<abs(data-parent->key))
    {
        return parent;
    }
    else
    {
        Node *temp=new Node();
        (temp->child).push_back(data);
        temo->nodeNumber=++nodeNumber;
        temp->parent=parent;
        return temp;
    }
}
int depthOfTree(struct Node *ptr)
{
    if (!ptr)
        return 0;
    int maxdepth = 0;
    for (vector<Node*>::iterator it = ptr->child.begin();
                              it != ptr->child.end(); it++)
        maxdepth = max(maxdepth, depthOfTree(*it));

    return maxdepth + 1 ;
}
void traverse(Node *root)
{
    if (root)
    {
        printf("%c ", root->key);
        for (int i = 0; i < N; i++)
            traverse(root->child[i]);
    }
}
int main()
{
   while(true)
   {
       int ch;
       cout<<"Your choice here"<<endl;
       cin>>ch;
       int remaining;
       cout<<"1. For creating genesis node\n";
       cout<<"2. For creating a set of child nodes of a particular node"<<endl;
       cout<<"3. Child from a particular node"<<endl;
       cout<<"4. Encrypt and decrypt the data"<<endl;
       cout<<"5. Verification of owner"<<endl;
       cout<<"6. Edit a node"<<endl;
       cout<<"7. Transfer ownership"<<endl;
       cout<<"8. Longest chain of genesis"<<endl;
       cout<<"9. Longest chain of any node"<<endl;
       cout<<"10. Merge two nodes"<<endl;
       switch(ch)
       {
            case 1:
                int data1;
                cout<<"Enter the data<<"endl;
                cin>>data1;
                genesis=createGenesis(data1);
                break;
            case 2:
                int data2;
                cout<<"Enter the value of the child"<<endl;
                cin>>data2;

                child=createChildNode(genesis,data2,remaining);
                remaining=abs(remaining-data);
                break;
            case 3:
                int newnode;
                cout<<"Enter new node no."<<endl;
                cin>>newnode;
                int data3;
                cout<<"Enter the data"<<endl;
                cin>>data3;
               // createChildOfParticular(nodeNumber,data3);
                break;
             case 4;
                //genesis=Encrypt(genesis);
                //dcrypt(genesis);
                traverse(genesis);
                break;
             case 8;
                    longest_chain(genesis);
                    break;
             default:
                cout<<"Function not created"<<endl;
       }

   }
}
