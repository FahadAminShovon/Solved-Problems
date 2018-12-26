#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define fread freopen("input.txt","r",stdin);
using namespace std;
bool flag = false;

struct trieNode
{
  map <char,trieNode*> children;
  bool endOfword ;

  trieNode(){
      children.clear();
      endOfword = false;
  }
};

trieNode *root=NULL;


void insertString(trieNode *root,string str){
    int sz = str.size();
    trieNode *current = root;

    for(int i=0;i<sz;i++){
        char ch=str[i];
        trieNode *node = current->children[ch];
        if(node==NULL){
            node = new trieNode();
            current->children[ch]=node;
        }
        if(node->endOfword)flag=true;
        current=node;
    }
    current->endOfword=true;
    if(current->children.empty()==false)flag=true;
}

bool searchfullWord(trieNode *root,string str){
    int sz = str.size();
    for(int i=0;i<sz;i++){
        char temp = str[i];
        trieNode *node = root->children[temp];
        if(node==NULL)return false;
        root=node;
    }
    return root->endOfword;
}

bool searchPrefix(trieNode *root,string str){
    int sz = str.size();
    for(int i=0;i<sz;i++){
        char temp = str[i];
        if(root->children.count(temp)){
            root=root->children[temp];
        }
        else return false;
    }
    return true;
}


bool deleteString(trieNode *current,string str,int idx){
    if(idx==str.size()){
        if(current->endOfword==false){
            return false;
        }
        current->endOfword=false;
        return current->children.size()==0;
    }

    char ch = str[idx];

    trieNode *node = current->children[ch];

    if(node==NULL){
        return false;
    }

    bool shouldDeleteCurrentNode = deleteString(node,str,idx+1);

    if(shouldDeleteCurrentNode){
        current->children[ch]=NULL;
        current->children.erase(ch);
        return current->children.size() == 0;
    }

    return false;

}

void deleteString(string str,trieNode *root){
    deleteString(root,str,0);

}


void solve(){
	int n;
	sc("%d",&n);
	getchar();
	string arr[n];
	root = new trieNode();
	flag = false;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		insertString(root,arr[i]);
	}

	if(flag)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;


}

int main() {
    fread;

	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		solve();
	}

	return 0;
}
