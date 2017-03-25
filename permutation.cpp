#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
using namespace std;

void swap(char *a,char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(char *a,int left,int right){
	if(left > right){
	int b = atoi(a);	
	if(b % 2 != 0){
		cout <<  0 << endl;
		return;
	}
	}else{
		
		for(int i=left;i<=right;i++){
			swap(a+i,a+left);
			permutation(a,left+1,right);
			swap(a+i,a+left);
		}
	}
	cout << 1 << endl;
	return;
}

main(){
	char a[] = "245";
//string k = to_string(a);
	permutation(a,0,2);
	return 0;
}


