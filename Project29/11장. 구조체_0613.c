//11��. ����ü

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	s.number = 204407;
	strcpy(s.name, "�����");
	s.grade = 4.5;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);

	return 0;
}

//�й�: 204407
//�̸� : �����
//���� : 4.500000


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p = { 1,2 };
	struct point q = { .y = 2,.x = 1 };
	struct point r = p;

	printf("p=(%d, %d) \n", p.x, p.y);
	printf("q=(%d, %d) \n", q.x, q.y);
	printf("r=(%d, %d) \n", r.x, r.y);
	r = (struct point){ 3,4 };

	printf("r=(%d, %d) \n", r.x, r.y);

	return 0;
}

//p = (1, 2)
//q = (1, 2)
//r = (1, 2)
//r = (3, 4)


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	
	double xdiff, ydiff;
	double dist;

	printf("���� ��ǥ�� �Է��ϼ���(x y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��ϼ���(x y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);

	printf("�� �� ������ �Ÿ��� %f�Դϴ�.\n", dist);

	return 0;
}

//���� ��ǥ�� �Է��ϼ���(x y) : 10 10
//���� ��ǥ�� �Է��ϼ���(x y) : 20 20
//�� �� ������ �Ÿ��� 14.142136�Դϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main()
{
	struct point p1 = { 10,20 };
	struct point p2 = { 30,40 };

	p1 = p2;
	printf("p1.x=%d, p1.y=%d\n", p1.x, p1.y);

	if ((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("p1�� p2�� �����ϴ�.");
	}
	return 0;
}

//p1.x = 30, p1.y = 40
//p1�� p2�� �����ϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct rect
{
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("������ ����� ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);

	return 0;
}

//���� ����� ��ǥ�� �Է��ϼ��� : 1 1
//������ ����� ��ǥ�� �Է��ϼ��� : 6 6
//������ 25�̰� �ѷ��� 20�Դϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[100];

	list[2].number = 27;
	strcpy(list[2].name, "ī����");
	list[2].grade = 178.0;

	printf("list[2].number=%d\n", list[2].number);
	printf("list[2].name=%s\n", list[2].name);
	printf("list[2].grade=%f\n", list[2].grade);
}

//list[2].number = 27
//list[2].name = ī����
//list[2].grade = 178.000000


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	int i;
	
	struct student list[SIZE] = {
		{1,"Park",172.8},
		{2,"Kim",179.2},
		{3,"Lee", 180.3}
	};

	printf("\n=======================================\n");
	for (i = 0; i < SIZE; i++)
		printf("�й�: %d, �̸�: %s, ����: %f\n", list[i].number, list[i].name, list[i].grade);
	printf("\n=======================================\n");

	return 0;
}

//======================================
//�й�: 1, �̸� : Park, ���� : 172.800000
//�й� : 2, �̸� : Kim, ���� : 179.200000
//�й� : 3, �̸� : Lee, ���� : 180.300000
//======================================


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct QUESTION
{
	char question[SIZE];
	char item1[SIZE];
	char item2[SIZE];
	char item3[SIZE];
	char item4[SIZE];
	int solution;
};

struct QUESTION bank[100] = {
	{"�Ӻ���� ��ġ�� ���� ������ ���α׷��� ����?", "1. Python", "2. Java", "3. C", "4. Javascript", 3},
	{"���� �ٸ� �ڷ����� ���� �� �ִ� ������?", "1. �迭", "2. ����", "3. ����ü", "4. ������", 3},
};

int main(void)
{
	int select, i;
	for (i = 0; i < 2; i++)
	{
		printf("%s\n", bank[i].question);
		printf("%s ", bank[i].item1);
		printf("%s ", bank[i].item2);
		printf("%s ", bank[i].item3);
		printf("%s ", bank[i].item4);
		scanf("%d", &select);

		if (select == bank[i].solution)
			printf("�¾ҽ��ϴ�.\n\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n\n");
	}
	return 0;
}

//�Ӻ���� ��ġ�� ���� ������ ���α׷��� ���� ?
//1. Python 2. Java 3. C 4. Javascript 3
//�¾ҽ��ϴ�.
//
//���� �ٸ� �ڷ����� ���� �� �ִ� ������ ?
//1. �迭 2. ���� 3. ����ü 4. ������ 3
//�¾ҽ��ϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct vector
{
	float x;
	float y;
};
struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0,6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("������ ���� (%f, %f)�Դϴ�.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}

//������ ����(7.000000, 9.000000)�Դϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = { 20010426, "������", 4.3 };
	struct student* p;

	p = &s;
	printf("�й�=%d �̸�=%s ����=%f \n", s.number, s.name, s.grade);
	printf("�й�=%d �̸�=%s ����=%f \n", (*p).number, (*p).name, (*p).grade);
	printf("�й�=%d �̸�=%s ����=%f \n", p->number, p->name, p->grade);

	return 0;
}

//�й� = 20010426 �̸� = ������ ���� = 4.300000
//�й� = 20010426 �̸� = ������ ���� = 4.300000
//�й� = 20010426 �̸� = ������ ���� = 4.300000


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
};

void setPerson(struct Person* p)
{
	strcpy(p->name, "������");
	p->age = 40;
	strcpy(p->address, "��õ������ ������");
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "������");
	p1.age = 30;
	strcpy(p1.address, "���ֱ����� ����");

	setPerson(&p1);

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.address);

	return 0;
}

//�̸�: ������
//���� : 40
//�ּ� : ��õ������ ������


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union example
{
	int i;
	char c;
};

int main(void)
{
	union example data;

	data.c = 'A';
	printf("data.c:%c data.i:%d\n", data.c, data.i);

	data.i = 10000;
	printf("data.c:%c data.i:%d\n", data.c, data.i);
}

//data.c:A data.i : -858993599
//data.c :  data.i:10000


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum days { MON, TUE, WED, THU, FRI, SAT, SUN };

char* days_name[] = {
	"monday", "tuesday", "wednesday", "thursday", "friday","saturday", "sunday"
};

int main(void)
{
	enum days d;

	for (d = MON; d <= SUN; d++)
		printf("%d��° ������ �̸��� %s�Դϴ�\n", d, days_name[d]);

	return 0;
}

//0��° ������ �̸��� monday�Դϴ�
//1��° ������ �̸��� tuesday�Դϴ�
//2��° ������ �̸��� wednesday�Դϴ�
//3��° ������ �̸��� thursday�Դϴ�
//4��° ������ �̸��� friday�Դϴ�
//5��° ������ �̸��� saturday�Դϴ�
//6��° ������ �̸��� sunday�Դϴ�


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum tvtype { tube, lcd, plasma, projection };

int main(void)
{
	enum tvtype type;
	printf("TV ���� �ڵ带 �Է��ϼ���: ");
	scanf("%d", &type);

	switch (type)
	{
	case tube:
		printf("����� TV ����\n");
		break;
		
	case lcd:
		printf("LCD TV ����.\n");
		break;
		
	case plasma:
		printf("PDP TV ����\n");
		break;

	case projection:
		printf("�������� TV ����\n");
		break;

	default:
		printf("�ٽ� ����\n");
		break;
	}
	return 0;
}

//TV ���� �ڵ带 �Է��ϼ��� : 0
//����� TV ����


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} POINT;

POINT translate(POINT p, POINT delta);

int main(void)
{
	POINT p = { 2,3 };
	POINT delta = { 10,10 };
	POINT result;

	result = translate(p, delta);
	printf("(%d, %d)+(%d, %d) -> (%d, %d)\n", p.x, p.y, delta.x, delta.y, result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta)
{
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

//(2, 3)+(10, 10) -> (12, 13)


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
	int id;
	char name[30];
	char author[30];
};

struct book library[1000];

int main()
{
	char name[30], author[30];
	int select = 0;
	int nbooks = 0;

	while (select != 6)
	{
		int select;

		printf("==================================\n");
		printf("1. ���� ��ȣ�� å ã��\n");
		printf("2. ���� �̸����� å ã��\n");
		printf("3. �������� å ã��\n");
		printf("4. ���ο� å �߰�\n");
		printf("5. �������� ������ ������ �� ǥ��\n");
		printf("6. ����\n");
		printf("==================================\n");
		printf("�޴� �߿��� �ϳ��� �����ϼ���: \n");
		
		scanf("%d", &select);
		getchar();

		switch (select)
		{
		case 4:
			printf("å �̸� = ");
			gets_s(library[nbooks].name, 30);
			printf("���� �̸� = ");
			gets_s(library[nbooks].author, 30);
			library[nbooks].id = nbooks;
			
			nbooks++;

			break;

		case 5:
			for (int i = 0; i < nbooks; i++)
			{
				printf("å �̸� = %s ", library[i].name);
				printf("���� = %s", library[i].author);
			}
			printf("\n\n");
			break;

		case 2:
			printf("���� �̸��� �Է��ϼ���: ");
			scanf("%s", author);
			for (int i = 0; i < nbooks; i++)
			{
				if (strcmp(author, library[i].author) == 0)
					printf("%s %s \n\n", library[i].name, library[i].author);
			}
			break;

		case 6:
			exit(0);
	}
	}
	return 0;
}

//==================================
//1. ���� ��ȣ�� å ã��
//2. ���� �̸����� å ã��
//3. �������� å ã��
//4. ���ο� å �߰�
//5. �������� ������ ������ �� ǥ��
//6. ����
//==================================
//�޴� �߿��� �ϳ��� �����ϼ��� :
//2
//���� �̸��� �Է��ϼ��� : J K �Ѹ�