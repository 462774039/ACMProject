#include <iostream>
#include <algorithm>
#define MAX 101
using namespace std;
string str;
struct book{
	string name;
	int year;
	int price;
};

bool comp(book a,book b){
	if(str=="Year"){
		if(a.year==b.year){
			if(a.name==b.name) return a.price<b.price;
			else return a.name<b.name;
		}
		else return a.year<b.year;
	}
	if(str=="Price"){
		if(a.price==b.price){
			if(a.name==b.name) return a.year<b.year;
			else return a.name<b.name;
		}
		else return a.price<b.price;
	}
	else{
		if(a.name==b.name){
			if(a.year==b.year) return a.price<b.price;
			else return a.year<b.year;
		}
		else return a.name<b.name;
	}
}

int main(){
	int n;
	int flag=0;
	while(cin>>n&&n!=0){
		if(flag) cout<<endl;
		flag=1;
		book a[MAX];
		for(int i=0;i<n;i++) cin>>a[i].name>>a[i].year>>a[i].price;
		cin>>str;
		sort(a,a+n,comp);
		for(int i=0;i<n;i++) cout<<a[i].name<<' '<<a[i].year<<' '<<a[i].price<<endl;
	}
}