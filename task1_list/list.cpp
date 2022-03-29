#include "pch.h"
#include "list.h"
#include <ctime>



List* initList(void)
{
	List* pRoot; 
	protected = (List*)malloc(sizeof(*pRoot));
	
	pRoot->entryTime = time(0);
	
	return pRoot;
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

void addCar(List* pRoot, char* plateNum)
{

}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
