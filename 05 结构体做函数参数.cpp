//#include<iostream>
//#include<string>
//using namespace std;
//
////定义学生结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////打印学生信息的函数
////1.值传递
//void printStudent1(struct student s)
//{
//	cout << "在子函数中打印 姓名: " << s.name << "年龄: " << s.age << "分数: " << s.score << endl;
//}
//
////2.地址传递
//void printStudent2(struct student * p)
//{
//	cout << "在子函数2中打印 姓名: " << p->name << "年龄: " << p->age << "分数: " << p->score << endl;
//}
//int main5() {
//
//	//结构体做函数参数
//	//将学生传入到一个参数中，打印学生身上的所有信息
//
//	//创建结构体变量
//	struct student s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 85;
//
//
//	printStudent1(s);
//	printStudent2(&s);
//	cout << "在main函数中打印 姓名: " << s.name << "年龄: " << s.age << "分数: " << s.score << endl;
//
//	system("pause");
//	return 0;
//}