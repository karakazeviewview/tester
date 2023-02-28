/*
toupper
tolower
strchr
strrchr
strncmp
memchr
memcmp
strnstr
atoi
*/
#include <libc.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c;

	c = toupper('a');
	printf("aを大文字に変換→%c\n",c);
	return 0;
}


#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int c;

	c = tolower('A');
	printf("Aを小文字に変換→%c\n",c);
	return 0;
}


#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	int c;

	printf("検索文字を入力してください。");
	c = getchar();
	p = strchr(str, c);
	if (p != NULL) {
		printf("%cは文字列の%d番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
		
	return 0;
}


#include <string.h>
#include <stdio.h>

int main(void)
{
	char test[20] = "123456321";
	char *p;

	p = strrchr(test,'3');
	printf("検索文字が見つかった場所から表示→%s\n",p);
	return 0;
}


#include <string.h>
#include <stdio.h>

int main(void)
{
	char test1[10] = "abc12";
	char test2[10] = "abcde";

	//test1とtest2の文字列を先頭から5文字比較
	if(strncmp(test1,test2,5)==0){
		puts("文字列は一致しています。");
	}else{
		puts("文字列は一致していません。");
	}
	//test1とtest2の文字列を先頭から３文字比較
	if(strncmp(test1,test2,3)==0){
		puts("文字列は一致しています。");
	}else{
		puts("文字列は一致していません。");
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char buf[] = "ABCD5EFGH";
	char *ch;

	ch = (char*)memchr(buf,'5',sizeof(buf));
	if(ch!=NULL){
		printf("検索文字から表示→%s\n",ch);
	}else{
		puts("検索文字が見つかりませんでした。");
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char buf[] = "ABCD5EFGH";
	char buf2[] = "ABC123456";

	if(memcmp(buf,buf2,3)==0){
		puts("先頭から3バイトは一致しています。");
	}else{
		puts("一致していません。");
	}
	return 0;
}


#include <libc.h>
int main(void) {
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    char str[8] = "12345";
    int num;
    
    // 文字列型からint型への変換
    num = atoi(str);
    printf("int型変数numの値は: %d\n", num);
    return 0;
}