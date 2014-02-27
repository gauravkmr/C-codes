#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <string.h>
//Finding the vertex with minimum distance value
//@dist: distance vector for a given source vertex
//@sptSet: shortest path set matrix
//@vertex_count: self-explanatory
long long minDistance(long long *dist, int *sptSet, int vertex_count)
{
	long long min = LLONG_MAX, min_index;
	int v;
	for (v = 0; v < vertex_count; v++)
		if (sptSet[v] == 0 && dist[v] <= min)
			min = dist[v], min_index = v;
	return min_index;
}
//Function that implements Dijkstra's single source shortest path algorithm
//@vertex_count: self-explanatory
//@weight: weight matrix for the graph
//@src: source vertex
//@dist: distance vector for a given source vertex
void dijkstra(int vertex_count, long long **weight, int src, long long *dist, int *flagCheck, int flag_count)
{
	int sptSet[vertex_count]; //boolean vector representing whether shortest path is set for a given index(vertex)
	int i;
	int check = 0;
	for (i = 0; i < vertex_count; i++)
		dist[i] = LLONG_MAX, sptSet[i] = 0;
	dist[src] = 0;
	int count;
    for (count = 0; count < vertex_count-1; count++)
    {
		//Pick the minimum distance vertex from the set of vertices not yet processed.
		long long u = minDistance(dist, sptSet, vertex_count);
		
		if(flagCheck[u] == 1)
			check++;
		
		if(check == flag_count)
			return;
		//Set the picked vertex
		sptSet[u] = 1;
		//Update distance applying relaxation
		int v;
		for (v = 0; v < vertex_count; v++){
			if (!sptSet[v] && weight[u][v] && dist[u] != LLONG_MAX && dist[u]+weight[u][v] < dist[v])
				dist[v] = dist[u] + weight[u][v];
		}
	}
}
int main()
{
	clock_t begin, end;
	double time_spent;
	begin = clock();
	//gathering input from the file	
	int vertex_count;
	int edge_count;
	int flag_count;
	int startVertex;
	int target_count;
	scanf("%d", &vertex_count);
	scanf("%d", &edge_count);
	scanf("%d", &flag_count);
	scanf("%d", &startVertex);
	int *adjMatrixS[vertex_count],*adjMatrixT[vertex_count];
	long long *weightMatrixS[vertex_count],*weightMatrixT[vertex_count];
	int i;
	for(i=0;i<vertex_count;i++){
		adjMatrixS[i]=malloc(sizeof(int)*vertex_count);
		adjMatrixT[i]=malloc(sizeof(int)*vertex_count);
		weightMatrixS[i]=malloc(sizeof(long long)*vertex_count);
		weightMatrixT[i]=malloc(sizeof(long long)*vertex_count);	
	}
	
/*	for(i=0;i<vertex_count;i++){
		weightMatrixS[i]=malloc(sizeof(long long)*vertex_count);
		weightMatrixT[i]=malloc(sizeof(long long)*vertex_count);	
	}
*/		
	int flags[flag_count];
	int targets[target_count];
	int flagCheck[vertex_count];
	int j;
	for(i = 0; i < vertex_count; i++)
	{
		flagCheck[i] = 0;
		for(j = 0; j < vertex_count; j++)
			weightMatrixS[i][j] = 0, adjMatrixS[i][j] = 0,weightMatrixT[i][j] = 0, adjMatrixT[i][j] = 0;
	}
	//creating the adjacency and weight matrices
	int x, y;
	long long value;
	for(i = 0; i < edge_count; i++)
	{
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%lld", &value);
		if(adjMatrixS[x][y] == 1)
		{
			if(value < weightMatrixS[x][y])
				weightMatrixS[x][y] = value;
		}
		else
		{
			adjMatrixS[x][y] = 1;
			weightMatrixS[x][y] = value;
		}
		if(adjMatrixT[y][x] == 1)
		{
			if(value < weightMatrixT[y][x])
				weightMatrixT[y][x] = value;
		}
		else
		{
			adjMatrixT[y][x] = 1;
			weightMatrixT[y][x] = value;
		}
	}
	for(i = 0; i < flag_count; i++)
	{
		scanf("%d", &flags[i]);
		flagCheck[flags[i]] = 1;	
	}
		
	scanf("%d", &target_count);
	for(i = 0; i < target_count; i++)
		scanf("%d", &targets[i]);
		
	
	
	//Dijsktra to find shortest distance from starting vertex and flag points
	long long *distances[target_count+1];
	for(i=0;i<=target_count;i++)
	{
		distances[i]=malloc(sizeof(long long)*vertex_count);
//		memset(distances[i], 0, sizeof(long long)*vertex_count);	
	}
		
	dijkstra(vertex_count, weightMatrixS, startVertex, distances[0], flagCheck, flag_count);
	for(i = 1; i < (target_count+1); i++)
	{
		dijkstra(vertex_count, weightMatrixT, targets[i-1], distances[i], flagCheck, flag_count);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%lf\n",time_spent);
	//Calculating the required distance and displaying the result
	for(i = 0; i < target_count; i++)
	{
		long long result = LLONG_MAX;
		for(j = 0; j < flag_count; j++)
		{
			long long tmp = distances[0][flags[j]] + distances[i+1][flags[j]];
			if(tmp < result)
				result = tmp;
		}
		printf("%lld\n", result);
	}
	return 0;
}
