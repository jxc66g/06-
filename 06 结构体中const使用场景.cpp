#include<iostream>
#include<string>
using namespace std;

//const��ʹ�ó���
struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ�,���Ҳ��Ḵ���µĸ�������
void printStudents(const student *s)
{
	//s->age=150; //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "������" << s->name << "���䣺" << s->age << "������" << s->score << endl;
}

int main6() {


	struct student s = { "����",15,70 };

	//ͨ��������ӡ�ṹ�������Ϣ
	printStudents(&s);

	system("pause");
	return 0;
}