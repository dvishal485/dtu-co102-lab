/* This program is written by Vishal Das
(2K21/A8/24) on July 07, 2022 03:30 PM
for Lab File of course CO102
*/

#include <stdio.h>
#include <string.h>

int str_compare(char* str1, char* str2) {
	int str1_len = strlen(str1);
	int str2_len = strlen(str2);
	if (str1_len != str2_len)
		return -1;
	for (int i = 0; i < str1_len; i++) {
		if (str1[i] != str2[i])
			return -1;
	}
	return 1;
}

int main() {
    char s1[] = "hello world";
    char s2[] = "hello world";
    char s3[] = "hEllo World";
    printf("s1 : %s\ns2 : %s\ns3 : %s", s1, s2, s3);
    printf("\n\ns1 and s2 are ");
    printf((str_compare(s1,s2)==1) ? "equal strings" : "unequal strings");
    printf("\ns1 and s3 are ");
    printf((str_compare(s2,s3)==1) ? "equal strings" : "unequal strings");
    printf("\n");
    return 0;
}
