#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(void) {
    char * stra ="hello";//字符指针*
    char * strb="world";

    const uint32_t DIST_LEN=100;
    char dist[DIST_LEN];
    memset(dist,0,DIST_LEN);
    //字符串连接
    strcat(dist,stra);
    strcat(dist," ");
    strcat(dist,strb);
    strncat(dist,strb,3);
    puts(dist);

    //格式化字符串
    char * str ="Item";
    int a=93;\
    char dists[100];
    sprintf(dists,"%s%d",str,a);
    puts(dists);

    //分解字符串
    char  * strs="Item 11";
    char buff[10];
    int c;
    sscanf(strs,"%4s%d",buff,&c);
    printf("%s---%d\n",buff,c);

    //字符串转型
    double value=atof("3.1415926");
    printf("%f\n",value);

    //字符串比较
    char *strq="hello";
    char *strw="hello ";
    char s[]={"hello"};
    printf("%d\n",strq==strw);

    printf("内存地址：%p %p\n",strq,strw);

    int result =strcmp(strq,s);//比较的是值，可以和数组比较 等于0是相同，大于小于0有不同的意义
    printf("%d\n",result);

    char *strhw="hello World";
    char *sh=strchr(strhw,'o');//从前到最后
    char *sw=strrchr(strhw,'o');//从后面查找
    char *shw=strstr(strhw,"Wo");//这传的是字符串

    printf("%s\n",sh);
    printf("%s\n",sw);
    printf("%s\n",shw);

    char ss[10];
    memset(ss,0,10);
    strncpy(ss,strhw,3);
    puts(ss);

    char * sss=strhw+3;
    puts(sss);
    return EXIT_SUCCESS;
}