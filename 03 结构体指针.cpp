#include<iostream>
using namespace std;
#include<string>

//�ṹ��ָ��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};


int main3() {


	//1.����ѧ���ṹ�����
	struct Student s = { "����",18,100 };

	//2.ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;

	//3.ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����� ����Ҫ���� ->
	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score << endl;

	system("pause");
	return 0;
}