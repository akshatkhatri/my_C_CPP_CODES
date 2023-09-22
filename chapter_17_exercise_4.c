// author-akshat khatri//
// date-29-06-2023//
// to hold records of 20 cricketers and then sort them using qsort//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct cricket_records
{
    char name[40];
    int age;
    int matches;
    float avg_runs;
} cricket_t;

int compare(const void *pa,const void *pb)
{
     const cricket_t *a = (const cricket_t *)pa;
    const cricket_t *b = (const cricket_t *)pb;
    if (a->avg_runs < b->avg_runs) {
        return -1;
    } else if (a->avg_runs > b->avg_runs) {
        return 1;
    } else {
        return 0;
    }
}

    

int main()
{

    cricket_t records[20] = {
        "Joe Root",
        31,
        109,
        50.99,
        "Steve Smith",
        32,
        77,
        61.80,
        "Kane Williamson",
        31,
        83,
        53.07,
        "Virat Kohli",
        33,
        92,
        52.04,
        "Babar Azam",
        26,
        33,
        44.79,
        "Cheteshwar Pujara",
        34,
        85,
        48.66,
        "David Warner",
        35,
        84,
        48.94,
        "Ben Stokes",
        30,
        71,
        37.04,
        "Ross Taylor",
        37,
        105,
        46.28,
        "Quinton de Kock",
        28,
        53,
        38.77,
        "Ajinkya Rahane",
        33,
        75,
        42.88,
        "Faf du Plessis",
        37,
        69,
        40.02,
        "Hashim Amla",
        38,
        124,
        46.64,
        "Azhar Ali",
        36,
        87,
        42.45,
        "Kraigg Brathwaite",
        28,
        68,
        33.94,
        "Kane Richardson",
        30,
        26,
        20.63,
        "Tim Southee",
        32,
        78,
        18.79,
        "Pat Cummins",
        28,
        34,
        22.60,
        "Mitchell Starc",
        32,
        61,
        22.04,
        "Jasprit Bumrah",
        28,
        20,
        34.33,

    };
    int length = 20;

    qsort(records,20,sizeof(cricket_t),compare);

   for(int i=0;i<20;i++)
   {
    printf("%.2f\n",records[i].avg_runs);
   }

  
return 0;
    
}
