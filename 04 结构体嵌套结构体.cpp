//#include<iostream>
//using namespace std;
//#include<string>
//
////定义学生结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////定义老师结构体
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student stu;
//};
//
//
//
//
//
//int main4() {
//
//	//结构体嵌套结构体
//	//创建老师
//	teacher t;
//	t.id = 10000;
//	t.name = "老王";
//	t.age = 50;
//	t.stu.name = "小王";
//	t.stu.age = 20;
//	t.stu.score = 60;
//
//	cout << "老师姓名: " << t.name << "老师编号: " << t.id << "老师年龄: "<<t.age
//		<< "老师辅导的学生姓名: " << t.stu.name << "学生年龄: " << t.stu.age
//		<< "学生分数: " << t.stu.score << endl;
//
//	system("pause");
//	return 0;
//}