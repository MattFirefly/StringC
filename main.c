#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(void) {
    char * stra ="hello";//�ַ�ָ��*
    char * strb="world";

    const uint32_t DIST_LEN=100;
    char dist[DIST_LEN];
    memset(dist,0,DIST_LEN);
    //�ַ�������
    strcat(dist,stra);
    strcat(dist," ");
    strcat(dist,strb);
    strncat(dist,strb,3);
    puts(dist);

    //��ʽ���ַ���
    char * str ="Item";
    int a=93;\
    char dists[100];
    sprintf(dists,"%s%d",str,a);
    puts(dists);

    //�ֽ��ַ���
    char  * strs="Item 11";
    char buff[10];
    int c;
    sscanf(strs,"%4s%d",buff,&c);
    printf("%s---%d\n",buff,c);

    //�ַ���ת��
    double value=atof("3.1415926");
    printf("%f\n",value);

    //�ַ����Ƚ�
    char *strq="hello";
    char *strw="hello ";
    char s[]={"hello"};
    printf("%d\n",strq==strw);

    printf("�ڴ��ַ��%p %p\n",strq,strw);

    int result =strcmp(strq,s);//�Ƚϵ���ֵ�����Ժ�����Ƚ� ����0����ͬ������С��0�в�ͬ������
    printf("%d\n",result);

    char *strhw="hello World";
    char *sh=strchr(strhw,'o');//��ǰ�����
    char *sw=strrchr(strhw,'o');//�Ӻ������
    char *shw=strstr(strhw,"Wo");//�⴫�����ַ���

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