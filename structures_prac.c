#include<stdio.h>
#include<string.h>
typedef struct student_data
{
    int id;
    char name[30];
    int marks;
    char fav_char;
}std_data;
int main()
{
std_data ravi,ashok,rahul;
scanf("%d",&ravi.id);

ashok.id=2345;
rahul.id=2346;
strcpy(ravi.name,"ravi ");
strcpy(ashok.name,"ashok kumar");
strcpy(rahul.name,"rahul singh");
ravi.marks=910;
ashok.marks=867;
rahul.marks=936;
ravi.fav_char='r';
ashok.fav_char='a';
rahul.fav_char='s';
/*printf(" %s %s %s\n",ravi.name,ashok.name,rahul.name);
printf(" %d %d %d\n",ravi.marks,ashok.marks,rahul.marks);
printf(" %d %d %d\n",ravi.id,ashok.id,rahul.id);
printf(" %c %c %c\n",ravi.fav_char,ashok.fav_char,rahul.fav_char);*/
return 0;


}