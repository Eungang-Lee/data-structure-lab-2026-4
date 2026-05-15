#include "AdjMatGraph.h"
#include "SrchAMGraph.h"
#include <stdio.h>

void main()
{
	//AdjMatGraph g;
	SrchAMGraph g;

	for (int i = 0; i < 7; i++)
		g.insertVertex('A' + i);
	g.insertEdge(0, 1);
	g.insertEdge(0, 2);
	g.insertEdge(1, 3);
	g.insertEdge(2, 3);
	g.insertEdge(2, 4);
	g.insertEdge(3, 5);
	g.insertEdge(4, 6);
	g.insertEdge(4, 7);
	g.insertEdge(6, 7);
	printf("인접 행렬로표현한 그래프\n");
	g.display();
	FILE* fp;
	fopen_s(&fp, "../text_out.txt", "w");
	g.display(fp);
	fclose(fp);

	printf("DFS ==> ");
	g.resetVisited();
	g.DFS(0);
	printf("\n");
}
