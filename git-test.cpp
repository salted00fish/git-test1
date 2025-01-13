#include <iostream>

typedef struct qwq
{
	int a;
	std::string name;
}QWQ_t;


void main(void)
{
	QWQ_t qwq;
	qwq.a = 20;
	qwq.name = "hello";
	std::cout << qwq.name << std::endl;

}