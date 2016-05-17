#include <stdio.h>

typedef struct node
{
	int Number;
	struct node *Next;
}Node;

typedef struct Sort
{
	struct node *Node;
	struct Sort *Next;
}Sort;

int main()
{
	Node *Pointer, *Head_Pointer;

	int T, Greatest;	
	scanf("%d", &T);
	
	Pointer = Head_Pointer = new Node;
	Pointer -> Next = NULL;
	scanf("%d", &Pointer -> Number);
	Greatest = Pointer -> Number;
	for(int i = 0; i < T - 1; i++)
	{
		Pointer -> Next = new Node;
		Pointer = Pointer -> Next;
		scanf("%d", &Pointer -> Number);
		if(Greatest < Pointer -> Number)Greatest = Pointer -> Number;
	}
	Pointer -> Next = NULL;

	Sort *Sort_Pointer, *Dummy, *Pointer_2;

	Sort_Pointer = new Sort[Greatest + 1];
	
	for(int i = 0; i < k; i++)
	{
		(Sort_Pointer + i) -> Node = NULL;
		(Sort_Pointer + i) -> Next = NULL;
	}
	
	for(Pointer = Head_Pointer; Pointer; Pointer = Pointer -> Next)
	{

		if((Sort_Pointer + Pointer -> Number) -> Node)
		{
			Dummy = new Sort;
			Dummy -> Next = (Sort_Pointer + Pointer -> Number) -> Next;
			Dummy -> Node = Pointer;
			(Sort_Pointer + Pointer -> Number) -> Next = Dummy;	
		}else{
				(Sort_Pointer + Pointer -> Number) -> Node = Pointer;			
			}
	} 

	for(int i = 0; i < k; i++)
	{
		if((Sort_Pointer + i) -> Node)
		for(Pointer_2 = (Sort_Pointer + i); Pointer_2; Pointer_2 = Pointer_2 -> Next)printf("%d ", Pointer_2 -> Node -> Number);
	}
	printf("\n");
	delete Sort_Pointer[Greatest + 1];

	for(Pointer = Head_Pointer; Pointer; Pointer = Head_Pointer)
	{
		Head_Pointer =  Pointer -> Next;
		delete Pointer;
	}

	return 0;
}