/*typedef int datatype;
typedef struct Node{
	datatype data;
	struct Node* Lchild;
	struct Node* Rchild;
	int Ltag, Rtag;
}ThreadTnode, * ThreadTree;

//中根遍历线索化的算法
void Inthread(ThreadTree root){
	if(root != NULL){
		Inthread(root->Lchild);
		if(root->Lchild == NULL){
			root->Ltag = 1;
			root->Lchild = pre;
		}
		if(pre != NULL && pre->Rchild == NULL){
			pre->Rchild = root;
			pre->Rtag = 1;
		}
		pre = root;
		Inthread(root->Rchild);
	}
}*/

//基于遍历的应用
typedef int datatype;
typedef struct Node {
	datatype data;
	struct Node* Lchild;
	struct Node* Rchild;
}BTnode, * Btree;

//1.输出二叉树的结点
void paintnode(Btree root) {
	if (root != NULL) {
		printf(root->data);
		paintnode(root->Lchild);
		paintnode(root->Rchild);
	}
}

//2.输出二叉树的叶子结点
void paintleaf(Btree root) {
	if (root != NULL) {
		if (root->Lchild == NULL && root->Rchild == NULL)
			printf(root->data);
		paintnode(root->Lchild);
		paintnode(root->Rchild);
	}
}

//3.统计叶子结点的数目 
void leafcount(Btree root) {
	int count = 0;
	if (root != NULL) {
		paintnode(root->Lchild);
		paintnode(root->Rchild);
		if (root->Lchild == NULL && root->Rchild == NULL)
			count++;
	}
}

//4.建立二叉树
void GreatBtree(Btree bt) {
	datatype ch;
	scanf_s("%d", &ch);
	if (ch == '.') {
		bt = NULL;
	}
	else {
		bt = *malloc(sizeof(BTnode));
		bt->data = ch;
		GreatBtree(t->Rchild);
	}
}