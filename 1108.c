/*typedef int datatype;
typedef struct Node{
	datatype data;
	struct Node* Lchild;
	struct Node* Rchild;
	int Ltag, Rtag;
}ThreadTnode, * ThreadTree;

//�и��������������㷨
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

//���ڱ�����Ӧ��
typedef int datatype;
typedef struct Node {
	datatype data;
	struct Node* Lchild;
	struct Node* Rchild;
}BTnode, * Btree;

//1.����������Ľ��
void paintnode(Btree root) {
	if (root != NULL) {
		printf(root->data);
		paintnode(root->Lchild);
		paintnode(root->Rchild);
	}
}

//2.�����������Ҷ�ӽ��
void paintleaf(Btree root) {
	if (root != NULL) {
		if (root->Lchild == NULL && root->Rchild == NULL)
			printf(root->data);
		paintnode(root->Lchild);
		paintnode(root->Rchild);
	}
}

//3.ͳ��Ҷ�ӽ�����Ŀ 
void leafcount(Btree root) {
	int count = 0;
	if (root != NULL) {
		paintnode(root->Lchild);
		paintnode(root->Rchild);
		if (root->Lchild == NULL && root->Rchild == NULL)
			count++;
	}
}

//4.����������
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