#include <iostream>
using namespace std;

 
struct List
{
	List* prev = NULL;
	List* next = NULL;
	int data;
} *Begin = NULL, *End = NULL;

List* Creation(int);
void AddToBegin(List*&, int);
void AddToEnd(List*&, int);
void ViewBegin(List*);
void ViewEnd(List*);
void DelList(List*&);
void Task(List*&);
int menu();


int main() {

	List* list;
	int value;
	cout << "Enter the first elememt\n";
	cin >> value;
	list = Creation(value);
	while (true)
	{
		switch (menu()) {
		case 1:

			cout << "Enter the first element: \n";
			cin >> value;
			list = Creation(value);
			ViewBegin(Begin);
			break;
		case 2:
			cout << "Enter element: \n";
			cin >> value;
			AddToBegin(Begin, value);
			ViewBegin(Begin);
			break;
		case 3: 
			cout << "Enter element: \n";
			cin >> value;
			AddToEnd(End, value);
			ViewBegin(Begin);
			break;
		case 4:
			DelList(End);
			ViewBegin(Begin);
			break;
		case 5:
			ViewBegin(Begin);
			break;
		case 6:
			Task(Begin);
			ViewBegin(Begin);
			break;
		case 7:
			ViewEnd(Begin);
			break;
		case 8:
			DelList(Begin);
			return 0;
		default:
			break;
		}
	}
	DelList(Begin);

	return 0;
}

List* Creation(int value) {
	List* tmp = new List;
	tmp->data = value;
	tmp->next = tmp->prev = NULL;
	Begin = End = tmp;
	return tmp;
}
void AddToBegin(List*& begin, int value) {
	List* tmp = new List;
	tmp->prev = NULL;
	tmp->data = value;
	tmp->next = begin;
	begin->prev = tmp;
	begin = tmp;
}
void AddToEnd(List*& end, int value) {
	List* tmp = new List;
	tmp->data = value;
	tmp->next = NULL;
	tmp->prev = end;
	end->next = tmp;
	end = tmp;
}

void ViewBegin(List* begin) {
	cout << "\nyour list from the begin: ";
	List* tmp = begin; // устанавливаем указатель на начало списка
	while (tmp != nullptr)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}
void ViewEnd(List* ptr) {
	cout << "\nyour list from the end: ";
	List* p = ptr;
	while (p->next != NULL)
		p = p->next;  // переход к концу списка
	while (p!=NULL)
	{
		cout << p->data << " "; // вывод значения элемента p
		p = p->prev; // переход к предыдущему узлу
	}
		
}
void DelList(List*& ptr) {
	List* temp;
	while (ptr != NULL) {
		temp = ptr;
		ptr = ptr->next;
		delete temp;
	}
	End = Begin = NULL;
}


void Task(List*& begin) {
	List* f = new List;
	f->next = begin;
	begin = f;

	List* tmp = begin;
	List* del;
	while (tmp->next)
		if (tmp->next->data % 2 == 0) {
			del = tmp->next;
			tmp->next = del->next;
			delete del;
		}
		else
		{
			tmp = tmp->next;
		}

	begin = begin->next;
	delete f;
}
int menu() {
	int res;
	cout << "=========================" << '\n' << "\nMenu:\n" << '\n';
	cout << 1 << "-" << "Create list" << '\n';
	cout << 2 << "-" << "Add to begin\n";
	cout << 3 << "-" << "Add to end\n";
;	cout << 4 << "-" << "Delete list" << '\n';
	cout << 5 << "-" << "Print list from begin" << '\n';
	cout << 6 << "-" << "Task" << '\n';
	cout << 7 << "-" << "Print list from end" << '\n';
	cout << 8 << "-" << "To exit\n" << "=========================" << '\n';
	cin >> res;
	return res;
}