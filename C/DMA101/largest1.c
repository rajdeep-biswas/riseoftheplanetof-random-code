#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num;
	float *data;

	printf("number of elements: ");
	scanf("%d", &num);

	data = (float*) malloc(num * sizeof(float));

	if(data == NULL) {
		printf("memory error\n");
		return 0;
	}

	for(i = 0; i < num; ++i) {
		printf("enter number %d: ", i + 1);
		scanf("%f", data + i);
	} 

	for(i = 1; i < num; ++i) {
		if(*data < *(data + i))
			*data = *(data + i);
	}

	printf("largest element: %.2f\n", *data);
}