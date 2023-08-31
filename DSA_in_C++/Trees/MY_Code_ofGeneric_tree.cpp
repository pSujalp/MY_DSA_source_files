#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int data;
    vector<TreeNode*>child;

    TreeNode(int d)
    {
        data=d;
    }

};

TreeNode * takeinputlevel()
{
    int Rootdata;
    cout<<"Enter Root data";
    cin>>Rootdata;
    TreeNode* root = new TreeNode(Rootdata);
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode * input = q.front();
        q.pop();
        int n;
        cout<< "enter the no of .children of "<< input->data<<endl;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int childdata;
            cout<<"Enter the value of "<< i << " th child of" <<input->data;
            cin>>childdata;
            TreeNode * newchild =new TreeNode(childdata);
            q.push(newchild);
            input->child.push_back(newchild);
        }
    }
    return root;
}
void printtree(TreeNode *root)
    {
        cout<<root->data<<"------> ";
        for(int i=0;i<root->child.size();i++)
        {
            cout<<root->child[i]->data<<" ";
        }
        cout<<endl;
        for(int i=0;i<root->child.size();i++)
        {
            cout<<endl;
            printtree(root->child[i]);
        }
    } 

TreeNode * printleveltree(TreeNode *root)
{
    int c=0;
    cout<<root->data<<endl;
    queue<TreeNode*> q;
    q.push(root);
   
    while(!q.empty())
    {
        TreeNode *temp=q.front();
        q.pop();
        cout<<temp->data<<"---->";
        if(temp->child.size()==0) c++;
        for(int i=0;i<temp->child.size();i++)
        {
            cout<<temp->child[i]->data<<" ";
            q.push(temp->child[i]);
          
        }
        cout<<endl;

    }
    cout<<c;
    return root;

}
  int height(TreeNode*root)
  {
    int max1=0;
      for(int i=0;i<root->child.size();i++)
      {
        int d=height(root->child[i]);
        max1=max(max1,d);
      }
      return max1+1;
  }

int countNode(TreeNode *root)
{
    int ans=1;
    for(int i=0;i<root->child.size();i++)
    {
        ans+=countNode(root->child[i]);
        
    }
    return ans;
}

 void depthk(TreeNode*root,int k)
 {
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->child.size();i++)
    {
        depthk(root->child[i],k-1);
    }

 }
 void preorder(TreeNode *root)
 {
    if(root==NULL) return;
    cout<<root->data<<" ";
    for(int i=0;i<root->child.size();i++)
    {
        preorder(root->child[i]);

    }
 }
 void postrder(TreeNode *root)
 {
    if(root==NULL) return;
    
    for(int i=0;i<root->child.size();i++)
    {
        preorder(root->child[i]);
    }
    cout<<root->data<<" ";
 }
  int countleafnodes(TreeNode * root)
  {
    int ans=0;
     if(root->child.size()==0) ans++;
     for(int i=0;i<root->child.size();i++)
     {
        int d= countleafnodes(root->child[i]);
     }
     return ans;

    
    
  }


int main()
{
      TreeNode *root =takeinputlevel();
     // printleveltree(root);
      //cout<< "size is :  "<<countNode(root)<<endl;;
      //vector<int>ans;
       //depthk(root,1);
     // cout<<height(root);
     //preorder(root);
     cout<<countleafnodes(root);
   

       


}