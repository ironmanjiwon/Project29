//11장. 구조체

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
	strcpy(s.name, "손흥민");
	s.grade = 4.5;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);

	return 0;
}

//학번: 204407
//이름 : 손흥민
//학점 : 4.500000


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

	printf("점의 좌표를 입력하세요(x y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를 입력하세요(x y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);

	printf("두 점 사이의 거리는 %f입니다.\n", dist);

	return 0;
}

//점의 좌표를 입력하세요(x y) : 10 10
//점의 좌표를 입력하세요(x y) : 20 20
//두 점 사이의 거리는 14.142136입니다.


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
		printf("p1와 p2이 같습니다.");
	}
	return 0;
}

//p1.x = 30, p1.y = 40
//p1와 p2이 같습니다.


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

	printf("왼쪽 상단의 좌표를 입력하세요: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하세요: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

	return 0;
}

//왼쪽 상단의 좌표를 입력하세요 : 1 1
//오른쪽 상단의 좌표를 입력하세요 : 6 6
//면적은 25이고 둘레는 20입니다.


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
	strcpy(list[2].name, "카리나");
	list[2].grade = 178.0;

	printf("list[2].number=%d\n", list[2].number);
	printf("list[2].name=%s\n", list[2].name);
	printf("list[2].grade=%f\n", list[2].grade);
}

//list[2].number = 27
//list[2].name = 카리나
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
		printf("학번: %d, 이름: %s, 학점: %f\n", list[i].number, list[i].name, list[i].grade);
	printf("\n=======================================\n");

	return 0;
}

//======================================
//학번: 1, 이름 : Park, 학점 : 172.800000
//학번 : 2, 이름 : Kim, 학점 : 179.200000
//학번 : 3, 이름 : Lee, 학점 : 180.300000
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
	{"임베디드 장치에 가장 적합한 프로그래밍 언어는?", "1. Python", "2. Java", "3. C", "4. Javascript", 3},
	{"서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3},
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
			printf("맞았습니다.\n\n");
		else
			printf("틀렸습니다.\n\n");
	}
	return 0;
}

//임베디드 장치에 가장 적합한 프로그래밍 언어는 ?
//1. Python 2. Java 3. C 4. Javascript 3
//맞았습니다.
//
//서로 다른 자료형을 모을 수 있는 구조는 ?
//1. 배열 2. 변수 3. 구조체 4. 포인터 3
//맞았습니다.


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
	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}

//벡터의 합은(7.000000, 9.000000)입니다.


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
	struct student s = { 20010426, "박지원", 4.3 };
	struct student* p;

	p = &s;
	printf("학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name, (*p).grade);
	printf("학번=%d 이름=%s 학점=%f \n", p->number, p->name, p->grade);

	return 0;
}

//학번 = 20010426 이름 = 박지원 학점 = 4.300000
//학번 = 20010426 이름 = 박지원 학점 = 4.300000
//학번 = 20010426 이름 = 박지원 학점 = 4.300000


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
	strcpy(p->name, "박지나");
	p->age = 40;
	strcpy(p->address, "인천광역시 연수구");
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "박지원");
	p1.age = 30;
	strcpy(p1.address, "광주광역시 서구");

	setPerson(&p1);

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}

//이름: 박지나
//나이 : 40
//주소 : 인천광역시 연수구


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
		printf("%d번째 요일의 이름은 %s입니다\n", d, days_name[d]);

	return 0;
}

//0번째 요일의 이름은 monday입니다
//1번째 요일의 이름은 tuesday입니다
//2번째 요일의 이름은 wednesday입니다
//3번째 요일의 이름은 thursday입니다
//4번째 요일의 이름은 friday입니다
//5번째 요일의 이름은 saturday입니다
//6번째 요일의 이름은 sunday입니다


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum tvtype { tube, lcd, plasma, projection };

int main(void)
{
	enum tvtype type;
	printf("TV 종류 코드를 입력하세요: ");
	scanf("%d", &type);

	switch (type)
	{
	case tube:
		printf("브라운관 TV 선택\n");
		break;
		
	case lcd:
		printf("LCD TV 선택.\n");
		break;
		
	case plasma:
		printf("PDP TV 선택\n");
		break;

	case projection:
		printf("프로젝션 TV 선택\n");
		break;

	default:
		printf("다시 선택\n");
		break;
	}
	return 0;
}

//TV 종류 코드를 입력하세요 : 0
//브라운관 TV 선택


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
		printf("1. 도서 번호로 책 찾기\n");
		printf("2. 저자 이름으로 책 찾기\n");
		printf("3. 제목으로 책 찾기\n");
		printf("4. 새로운 책 추가\n");
		printf("5. 도서관이 소장한 도서의 수 표시\n");
		printf("6. 종료\n");
		printf("==================================\n");
		printf("메뉴 중에서 하나를 선택하세요: \n");
		
		scanf("%d", &select);
		getchar();

		switch (select)
		{
		case 4:
			printf("책 이름 = ");
			gets_s(library[nbooks].name, 30);
			printf("저자 이름 = ");
			gets_s(library[nbooks].author, 30);
			library[nbooks].id = nbooks;
			
			nbooks++;

			break;

		case 5:
			for (int i = 0; i < nbooks; i++)
			{
				printf("책 이름 = %s ", library[i].name);
				printf("저자 = %s", library[i].author);
			}
			printf("\n\n");
			break;

		case 2:
			printf("저자 이름을 입력하세요: ");
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
//1. 도서 번호로 책 찾기
//2. 저자 이름으로 책 찾기
//3. 제목으로 책 찾기
//4. 새로운 책 추가
//5. 도서관이 소장한 도서의 수 표시
//6. 종료
//==================================
//메뉴 중에서 하나를 선택하세요 :
//2
//저자 이름을 입력하세요 : J K 롤링