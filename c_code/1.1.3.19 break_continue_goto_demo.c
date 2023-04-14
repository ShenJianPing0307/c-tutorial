#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 2; j++) {
			if (j == 1) {
				goto end;
			}
			printf("i=%d \t j=%d\n", i, j);
		}

	}

end:
	printf("goto...");


}

//int main() {
//
//	for (int i = 0; i < 3; i++) {
//
//		for (int j = 0; j < 2; j++) {
//			if (j == 1) {
//				break;
//			}
//			printf("i=%d \t j=%d\n", i, j);
//		}
//
//	}
//
//}

//int main() {
//	
//	for (int i = 0; i < 3; i++) {
//		
//		for (int j = 0; j < 2; j++) {
//			if (j == 1) {
//				continue;
//			}
//			printf("i=%d \t j=%d\n", i, j);
//		}
//	
//	}
//
//}