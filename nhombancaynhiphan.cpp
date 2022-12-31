#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long

/**/

using namespace std;
struct node{
	int elem;
	struct node *pleft;
	struct node *pright;
};
typedef struct node NODE;
typedef NODE* tree;

void khoitao(tree &t){
	t = NULL;
}
void ThemNodeVaoCay(tree &t, int x){
	if(t==NULL){
		NODE *p = new NODE; //khoi tao cay
		p->data = x;
		p->pleft = NULL;
		p->pright = NULL;
		t = p; //node goc
	}
	else {
		if(t->data > x) ThemNodeVaoCay(t->pleft,x);
		else if(t->data < x) ThemNodeVaoCay(t->pright,x);
	}
}
void duyet(tree t){
	if(t!=NULL){
		cout<<t->elem<<" ";;
		Duyet(t->pleft); //duyet left
		Duyet(t->pright); //duyet right;
	}
void tach(tree &t, int n){
	if(n%2||n<4) return;
	tach(t,n/2+2);
}
int main(){
//	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	tree t;
	khoitao(t);
	int n; cin>>n;
	ThemNodeVaoCay(t,x);
	while(n)
	duyet(t);
	return 0;
}

