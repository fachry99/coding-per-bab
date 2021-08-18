#include <iostream>
using namespace std;

//deklarasi doube linked list
struct DataUser{
	string nama, username, email, password;
	DataUser *prev;   //sebelum 
	DataUser *next;   //sesudah
};

//variabel pointer
DataUser *head, *tail, *cur, *newNode, *del;

// create Double linked list
void createDoubleLinkedList(string data[4]){
	head = new DataUser();
	head->nama = data[0];
	head->username = data[1];
	head->email = data[2];
	head->password = data[3];
	head->prev = NULL;
	head->next = NULL;
	tail = head;
}

//add first
void addFirst(string data[4]){
	if(head == NULL){
		cout<<"Double linked List belum dibuat!!";
	}else{
		newNode = new DataUser();
		newNode->nama = data[0];
		newNode->username = data[1];
		newNode->email = data[2];
		newNode->password = data[3];
		newNode->prev = NULL;
		newNode->next = head;
		head->prev = newNode;
		head = newNode; 
  }
}

//add last
void addLast(string data[4]){
	if(head == NULL){
		cout<<"Double linked List belum dibuat!!";
	}else{
		newNode = new DataUser();
		newNode->nama = data[0];
		newNode->username = data[1];
		newNode->email = data[2];
		newNode->password = data[3];
		newNode->prev = tail;
		newNode->next = NULL;
		tail->next = newNode;
		tail = newNode; 
  }
}

// remove first
void removeFirst()
{
	if(head == NULL){
	cout<<"Double linked List belum dibuat!!";  // berfungsi sebagai validasi
	}else{
	 del = head;
	 head = head->next;
	 head->prev = NULL;
	 delete del;
 }
}

// remove last
void removeLast()
{
	if(head == NULL){
	cout<<"Double linked List belum dibuat!!";  // berfungsi sebagai validasi
	}else{
	 del = tail;
	 tail = tail->prev;
	 tail->next = NULL;
	 delete del;
 }
}

// print double linked list
void printDoubleLinkedList(){
	if(head == NULL){
		cout<<"Double linked List belum dibuat!!";
	}else{
	cout<< "Isi Data "<<endl;
	cur = head;
	//perulangan
	while(cur != NULL){
		//print
		cout<<"Nama User     : "<<cur->nama <<endl;
		cout<<"Username User : "<<cur->username <<endl;
		cout<<"Email User    : "<<cur->email <<endl;
		cout<<"Password User : "<<cur->password <<"\n"<< endl;
		//step
		cur = cur->next;
	}
 }
}


int main(){
	
	string newData[4] = {"Ahmad Sukri", "sukri", "sukri@gmail.com", "gampangaja"};
	createDoubleLinkedList(newData);
	
	printDoubleLinkedList();
	
	string data2[4] = {"Bambang", "bmb", "bambang@gmail.com", "dongBambang"};
	
	addFirst(data2);
	
	printDoubleLinkedList();

    string data3[4] = {"siti aja", "siti", "sitiiii@gmail.com", "sitiaja"};
	
	addLast(data3);
	
	printDoubleLinkedList();
	
	removeFirst();
	
	printDoubleLinkedList();
	
	removeLast();
	
	printDoubleLinkedList();
	
	
}
