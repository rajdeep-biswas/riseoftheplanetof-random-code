#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[128];
	int phy, chem, math;
} student;

int alphaCmp(char *s1, char *s2) {
	while(*s1 != '\0' || *s2 != '\0') {
		if(*s1 == *s2)
			s1++, s2++;
		else if(*s1 < *s2)
			return 0;
		else
			return 1;
	}
}

int main() {
	int n;
	scanf("%d", &n);

	student stu[n], temp;
 
	for(int i = 0; i < n; i++) {
		scanf("%s", stu[i].name);
		scanf("%d", &stu[i].phy);
		scanf("%d", &stu[i].chem);
		scanf("%d", &stu[i].math);
	}

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(stu[i].phy > stu[j].phy) {
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
			else if(stu[i].phy == stu[j].phy && stu[i].chem > stu[j].chem) {
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
			else if(stu[i].phy == stu[j].phy && stu[i].chem == stu[j].chem && stu[i].math > stu[j].math) {
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
			else if(stu[i].phy == stu[j].phy && stu[i].chem == stu[j].chem && stu[i].math == stu[j].math && alphaCmp(stu[i].name, stu[j].name)) {
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}

	for(int i = 0; i < n; i++) {
      if(i != n - 1)
		printf("%-8s%-8d%-8d%d\n", stu[i].name, stu[i].phy, stu[i].chem, stu[i].math);
      else
        printf("%-8s%-8d%-8d%d", stu[i].name, stu[i].phy, stu[i].chem, stu[i].math);
	}
}