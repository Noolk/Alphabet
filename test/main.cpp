#include "../src/sort.h"
#include "tst.h"
#include <stdio.h>
#include <string.h>

int tests();
int tests2();
int tests3();
int tests4();
int tests5();
int tests6();

int main()
{
int ret = 0;
ret += tests();
ret += tests2();
ret += tests3();
ret += tests4();
ret += tests5();
ret += tests6();
return ret;
}

int tests()
{
int ret=0;
const int n=3;
char A[n][10]={"dfs", "abc", "ssa"};
InsertSort( A, n) ;
if (strcmp("abc", A[0]) != 0)
{
 ret++;
printf(FAIL);
printf("TEST_SORT1: FAIL\n");
}
else {
printf(OK);
printf("TEST_SORT1: OK\n");
}
return ret > 0 ? 1 : 0;
}

int tests2()
{
int ret=0;
const int n=3;
char A[n][10]={"\0", "abc", ""};
InsertSort( A, n) ;
if (strcmp("abc", A[2]) != 0)
{
ret++;
printf(FAIL);
printf("TEST_SORT2: FAIL\n");
}
else {
printf(OK);
printf("TEST_SORT2: OK\n");
}
return ret > 0 ? 1 : 0;
}


int tests3()
{
int ret=0;
const int n=3;
char A[n][10]={"abc", "\0n", ""};
InsertSort( A, n) ;
if (strcmp("abc", A[2]) != 0)
{
ret++;
printf(FAIL);
printf("TEST_SORT3: FAIL\n");
}
else {
printf(OK);
printf("TEST_SORT3: OK\n");
}
return ret > 0 ? 1 : 0;
}

int tests4()
{
int ret=0;
const int n=3;
char A[n][10]={"123", "\0n", "abc"};
InsertSort( A, n) ;
if (strcmp("123", A[1]) != 0)
{
ret++;
printf(FAIL);
printf("TEST_SORT4: FAIL\n");
}
else {
printf(OK);
printf("TEST_SORT4: OK\n");
}
return ret > 0 ? 1 : 0;
}

int tests5()
{
int ret=0;
const int n=4;
char A[n][10]={"123", "\0n", "abc", "aaa"};
InsertSort( A, n-1) ;
if (strcmp("abc", A[2]) != 0)
{
ret++;
printf(FAIL);
printf("TEST_SORT5: FAIL\n");
}
else {
printf(OK);
printf("TEST_SORT5: OK\n");
}
return ret > 0 ? 1 : 0;
}

int tests6()
{
int ret=0;
const int n=3;
char A[n][10]={"\0", "abc", "\n"};
InsertSort( A, n) ;
if (strcmp("\n", A[1]) != 0)
{
ret++;
printf(FAIL);
printf("TEST_SORT6: FAIL\n");
}
else {
printf(OK);
printf("TEST_SORT6: OK\n");
}
return ret > 0 ? 1 : 0;
}


