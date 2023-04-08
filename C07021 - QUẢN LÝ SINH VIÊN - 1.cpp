#include <stdio.h>
#include <string.h>
struct Sinhvien
{
	int msv;
	char name[1000];
	float diemA, diemB, diemC;
	float total;
} a[1000];
int index = 0;
void Swap(struct Sinhvien *a, struct Sinhvien *b){
	struct Sinhvien tmp = *a;
	*a = *b;
	*b = tmp;
}
void Sort(struct Sinhvien a[1000],int index){
	for (int i = 0; i < index; i++)
		for (int j = i + 1; j < index; j++)
			if (a[i].total > a[j].total) Swap(&a[i], &a[j]);
}
void Select1(char name[1000], float diemA, float diemB, float diemC){
	a[index].msv = index + 1;
	strcpy(a[index].name, name);
	a[index].diemA = diemA;
	a[index].diemB = diemB;
	a[index].diemC = diemC;
	a[index].total = a[index].diemA + a[index].diemB + a[index].diemC;
	index++;
}
void Select2(int msv, char name[1000], float diemA, float diemB, float diemC){
	for (int i = 0; i < index; i++)
		if (a[i].msv == msv){
			strcpy(a[i].name, name);
			a[i].diemA = diemA;
			a[i].diemB = diemB;
			a[i].diemC = diemC;
			a[i].total = a[i].diemA + a[i].diemB + a[i].diemC;
			break;
		}
}
void Select3(){
	Sort(a, index);
	for (int i = 0; i < index; i++)
		printf("%d %s %.1f %.1f %.1f\n", a[i].msv, a[i].name, a[i].diemA, a[i].diemB, a[i].diemC);
}
int main(){
	while (1){
		int select;
		scanf("%d", &select);
		if (select == 1){
			int n;
			scanf("%d", &n);
			for (int i = 0; i < n; i++){
				char name[1000] = "";
				float diemA, diemB, diemC;
				scanf("\n");
				gets(name);
				scanf("%f %f %f", &diemA, &diemB, &diemC);
				Select1(name, diemA, diemB, diemC);
			}
			printf("%d\n", n);
		}else if (select == 2){
			int msv;
			char name[1000] = "";
			float diemA, diemB, diemC;
			scanf("%d\n", &msv);
			gets(name);
			scanf("%f %f %f", &diemA, &diemB, &diemC);
			Select2(msv, name, diemA, diemB, diemC);
			printf("%d\n", msv);
		}else if (select == 3){
			Select3();
			break;
		}
	}
	return 0;
}
