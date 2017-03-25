#include <iostream>

#include <vector>
#include <bits/stdc++.h>
using namespace std;
map<char,char>parent;
map<char,int>rank;

char Root_find(char a){
	if(parent[a] == a){
	return a;
	}else{
	return (Root_find(parent[a]));	
	}	
}
int Union(char a, char b){
	if(rank[a] > rank[b]){
		parent[b] = a;
	}else if(rank[a] < rank[b]){
		parent[a] = b;
	}else{
		parent[a] = b;
		rank[b]++; 
	}
	return 0;
}
main(){
return 0;
}


