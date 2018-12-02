#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include <iostream>

using namespace std;

struct node{

	cnumber val;
	node *ptr;

};

class linklist{

    private:

		node *head;

	public:

		linklist(){

			head = NULL;

		}

		void insert_at_start(){

			node *ptr = new node;

			ptr->val.setter();

			ptr->ptr = head;
			head = ptr;

		}

		void insert_at_start(cnumber c1){

			node *ptr = new node;

			ptr->val = c1;

			ptr->ptr = head;
			head = ptr;

		}

		void delete_at_start(){

			node *temp;
			temp = head->ptr;
			delete head;
			head = temp;

		}

		void insert_at_end(){

			node *ptr = new node;

			ptr->val.setter();

			ptr->ptr = NULL;
			node *temp;
			temp = head;

			while(!temp->ptr == NULL){
				temp = temp->ptr;
			}

			temp->ptr = ptr;

		}

		void insert_at_end(cnumber c1){

			node *ptr = new node;

			ptr->val = c1;

			ptr->ptr = NULL;
			node *temp;
			temp = head;

			while(!temp->ptr == NULL){
				temp = temp->ptr;
			}

			temp->ptr = ptr;

		}

		void delete_at_end(){

			node *current;
			node *previous;
			current = head;

			while(current->ptr != NULL){
				previous = current;
				current = current->ptr;
			}

			delete current;
			current = NULL;
			previous->ptr = NULL;

		}

		void insert_at_pos(int n){

			node *ptr = new node;

			ptr->val.setter();

			node *current;
			node *previous;
			current = head;

			for(int i = 0; i < n; i++){
				previous = current;
				current = current->ptr;
			}

			ptr->ptr = current;
			previous->ptr = ptr;

		}

		void insert_at_pos(int n, cnumber c1){

			node *ptr = new node;

			ptr->val = c1;

			node *current;
			node *previous;
			current = head;

			for(int i = 0; i < n; i++){
				previous = current;
				current = current->ptr;
			}

			ptr->ptr = current;
			previous->ptr = ptr;

		}

		void delete_at_pos(int n){

			node *current;
			node *previous;
			current = head;

			for(int i = 0; i < n-1; i++){
				previous = current;
				current = current->ptr;
			}

			previous->ptr = current->ptr;
			delete current;
			current = NULL;

		}

		void val_at_pos(int n){

            node *temp;
            temp = head;

            for(int i = 0; i < n-1; i++){
				temp = temp->ptr;
			}

			temp->val.getter();

		}

		void print(){

			cout << endl << "The link list is displayed below: " << endl;

			node *temp;
			temp = head;

			int i = 1;
			while(temp != NULL){
				cout << i << "- ";
				temp->val.getter();
				temp = temp->ptr;
				i++;
            }
			cout << endl;

		}

		void operator [] (int n){

		    node *temp;
            temp = head;

            for(int i = 0; i < n-1; i++){
				temp = temp->ptr;
			}

			cout << "The number " << n << " element is displayed below: " << endl;

			temp->val.getter();

		}

};

#endif // LINKLIST_H_INCLUDED
