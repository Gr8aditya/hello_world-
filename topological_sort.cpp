// topological_sort.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include<WinSDKVer.h>
#include<iostream>
#include<list>
#include<stack>

using namespace std;
class graph {
private:int v;
	 list<int> *adj;
public:
	graph(int v);
	void topological(int v, int visited[], stack<int>&stack);
	void addedge(int v, int w);
	void topological_sort();
};
graph::graph(int v) {
	this->v = v;
	adj = new list<int>[v];
}
void graph::addedge(int v, int w) {
	adj[v].push_back(w);

}
void graph::topological(int v, int visited[], stack<int>& stack) {

	visited[v] = 1;
	list<int>:: iterator i;

	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		if (!visited[*i])
		{
			topological(*i, visited, stack);
		}

	}
	stack.push(v);
}
void graph::topological_sort() {
	stack<int> stack;
	int* visited = new int[v];
	for (int it = 0; it < v; it++) {
		visited[it] = 0;
	}
	for (int it = 0; it < v; it++) {
		if (visited[it] == 0)
		{
			topological(it, visited, stack);
		}
	}
		while (stack.empty() == NULL) {
			cout << stack.top() << " ";
			stack.pop();
		}
	
}
int main()
{
	graph g(7);
	g.addedge(5, 0);
	g.addedge(5, 4);
	g.addedge(4, 3);
	g.addedge(3, 2);
	g.addedge(2, 1);
	g.addedge(6, 0);
	g.addedge(1, 6);
	cout << "The topological sorting of given graph is:\n";
	g.topological_sort();
    return 0;
}

