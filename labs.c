#include "stdio.h"
#define MAX 1000
#define MAXLINE 1000
#define TRUE 1
#define FALSE 0
#define YES 1
#define NO 0
#define MAX_SIZE 100


// Функция для вычисления степени числа
    static int power(int base, int exponent) {
    int result = 1;
    while(exponent > 0) {
    result *= base;
    exponent--;
    }
    return result;
}

void process_line( char buffer[] )
{
char c; // текущий символ
int flag; // признак слова
int found; // индикатор того, что искомый признак в слове обнаружен
int i; // позиция текущего символа исходной cтроки
int pos; // позиция текущего символа результирующей строки
int start; // позиция начала слова
int j;
// начальные присваивания (инициализация)
flag = NO;
found = NO;
start = 0;
i = 0;
pos = 0;
c = buffer[i]; // взять текущий символ из буфера
// цикл чтения символов из строки
while( c != '\0' ){
c = buffer[i];
if( c == ' ' || c == '.' || c == ',' ||
c == '\n' || c == '\0')
{
// найден разделитель
if( flag == YES )
{
// это первый разделить после слова
// проверить, обнаружен ли в слове искомый признак
if( found == NO )
{
// слово не подлежит удалению
// оно копируется в результирующую строку
for( j = start; j < i+1; j++ ){
buffer[pos++] = buffer[j];}
//buffer[pos++] = ('\n');
}
}
flag = NO;
}
else
{
// найдена буква
if( flag == NO ){
start = i; // запомнить позицию начала слова
// проверка гласной буквы(обнаружение искомого признака в слове)
if((c=='E')||(c=='Y')||(c=='U')||(c=='I')||(c=='O')||(c=='A')||(c=='e')||(c=='y')||(c=='u')||(c=='i')||(c=='o')||(c=='a')){
found = YES;

}
else
found = NO;}
flag = YES;
}
i++;
}
}

void process_line1( char buffer[] )
{
char c; // текущий символ
int flag; // признак слова
int found; // индикатор того, что искомый признак в слове обнаружен
int i; // позиция текущего символа исходной cтроки
int pos; // позиция текущего символа результирующей строки
int start; // позиция начала слова
int j;
// начальные присваивания (инициализация)
flag = NO;
found = NO;
start = 0;
i = 0;
pos = 0;
c = buffer[i]; // взять текущий символ из буфера
// цикл чтения символов из строки
while( c != '\0' ){
c = buffer[i];
if( c == ' ' || c == '.' || c == ',' ||
c == '\n' || c == '\0')
{
// найден разделитель
if( flag == YES )
{
// это первый разделить после слова
// проверить, обнаружен ли в слове искомый признак
if( found == NO )
{
// слово не подлежит удалению
// оно копируется в результирующую строку
for( j = start; j < i+1; j++ ){
buffer[pos++] = buffer[j];}
buffer[pos++] = ('\n');
}
}
flag = NO;
}
else
{
// найдена буква
if( flag == NO ){
start = i; // запомнить позицию начала слова
// проверка гласной буквы(обнаружение искомого признака в слове)
if((c=='E')||(c=='Y')||(c=='U')||(c=='I')||(c=='O')||(c=='A')||(c=='e')||(c=='y')||(c=='u')||(c=='i')||(c=='o')||(c=='a')){
found = YES;

}
else
found = NO;}
flag = YES;
}
i++;
}
}

void dop(int v1, int v2)
    {
if (v2 > v1) {
    printf("Motorcycle bystree \n ");
} else  if(v1>v2) {
    printf("Automobile bystree \n");
} else {
    printf("Skorosti ravny \n");
}
}

void posl(int n){
float s;
float b;
b=power(2,n-1);
if (n%2==0){
    s=n/b*(-1);
}
else{
    s=n/b*(1);
}
printf("Posledniy element = %f\n", s);
}

// Функция для обмена пар битов
long swap_adjacent_bits(long num) {
        // Создаем маски для четных и нечетных битов
        long even_mask = 0xAAAAAAAAAAAAAAAA; // 10101010...
        long odd_mask  = 0x5555555555555555; // 01010101...

        // Извлекаем четные и нечетные биты
        long even_bits = num & even_mask;
        long odd_bits = num & odd_mask;

        // Сдвигаем четные биты вправо и нечетные влево
        even_bits >>= 1;
        odd_bits <<= 1;

        // Объединяем сдвинутые биты
        return (even_bits | odd_bits);
    }

void swapDigits(int *num) {
int temp;
for (int i = 0; i < sizeof(*num) * 8 - 1; i += 2) {
    temp = ((*num >> i) & 1) ^ ((*num >> (i + 1)) & 1);
    *num ^= (temp << i) | (temp << (i + 1));
}
}

unsigned int swapBits(unsigned int n) {
    // Побитово меняем местами разряды
    return ((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1);
}

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n) {
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1]) {
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
}




int lab1()
{
        //Описание переменных
float v1; //скорость машины
float v2; //скорость мотоциклиста
float t; //время до встречи
float s;//искомое расстояние

    //Ввод исходных данных
printf("v1 = ");
scanf("%f", &v1);
printf("v2 = ");
scanf("%f", &v2);
printf("t = ");
scanf("%f", &t);
//dop(v1,v2);
    //Решение задачи
s=(v1+v2)*t;
    //Вывод результатов
printf("Rasstoyanie = %.f", s);
    return 0;
}

int lab11()
{
        //Описание переменных
float v1; //скорость машины
float v2; //скорость мотоциклиста

    //Ввод исходных данных
printf("v1 = ");
scanf("%f", &v1);
printf("v2 = ");
scanf("%f", &v2);
dop(v1,v2);
    return 0;
}

int lab2(){
double sum;
float b;
float i;
int n;
int sign;
printf("n=");
scanf("%d", &n);
b=power(2,n-1);
sum=0;
if (n%2==0){
    sign = -1;}
else{
    sign=1;}
i=n;
//posl(n);
while (i>=1){
    sum = sum+i/b*sign;
    sign = -sign;
    b=b/2;
    i=i-1;}
printf("sum=%lf",sum);
return 0;
}

int lab21(){
double sum;
float b;
float i;
int n;
int sign;
printf("n=");
scanf("%d", &n);
b=power(2,n-1);
sum=0;
if (n%2==0){
    sign = -1;}
else{
    sign=1;}
i=n;
posl(n);
return 0;
}


int lab3()
{
int counter, found, flag, buk, s, pos = 0;
char c;
char arr[10];

while ((c=getchar())!=EOF)
{
if ((c==' ')||(c==',')||(c=='\n'))
{
flag=0;
buk=0;
s++;
}
else
{
if ((flag==1) && (c==found)&&(buk==1))
{
arr[pos++] = s;
counter++;
flag=0;
}
else
flag=1;
found=c;
buk++;
}
}
printf("\nN=%d\n", counter);
return 0;
}

int lab31()
{
int counter, found, flag, buk, s, pos = 0;
char c;
char arr[10];

while ((c=getchar())!=EOF)
{
if ((c==' ')||(c==',')||(c=='\n'))
{
flag=0;
buk=0;
s++;
}
else
{
if ((flag==1) && (c==found)&&(buk==1))
{
arr[pos++] = s;
counter++;
flag=0;
}
else
flag=1;
found=c;
buk++;
}
}
//printf("\nN=%d\n", counter);
if (counter>0){
    printf("Nuzhnye slova na mestah: ");
    for (int i=0; i<counter; i++){
        printf("%d ", arr[i]);
    }
}
else{
    printf("Takih slov net");
}
return 0;
}



int lab4(){
getchar();
char line[MAXLINE];
printf("Vvedite ctroky: ");
gets( line );
process_line( line );
printf("Izmenennaya stroka: \n");
puts( line );
return 0;
}

int lab41(){
getchar();
char line[MAXLINE];
printf("Vvedite ctroky: ");
gets( line );
process_line1( line );
printf("Izmenennaya stroka: \n");
puts( line );
return 0;
}


int lab5() {
    int n = 10;
    int arr[n];
    int i;


    for( i = 0; i < n; i++ )
    scanf("%d", &arr[i]);

    int minIndex = 0;
    int maxIndex = 0;

    // Находим индексы минимального и максимального значений
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Меняем местами минимальное и максимальное значения
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Выводим измененный массив
    printf("Massive posle zameny:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int lab6(){
    int N=4, K=3;


    int array[N][K];
    printf("Vvedite elementy massiva:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Находим минимальный элемент и его позицию
    int min = array[0][0];
    int min_i = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (array[i][j] < min) {
                min = array[i][j];
                min_i = i;
            }
        }
    }

    // Обнуляем строки ниже минимального элемента
    for (int i = min_i + 1; i < N; i++) {
        for (int j = 0; j < K; j++) {
            array[i][j] = 0;
        }
    }

    // Выводим измененный массив
    printf("Izmenennyi massive:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int lab61() {
   int m=4, n=3;
   int arr[m][n];

   printf("Vvedite elementy massiva:\n");
   for(int i=0; i<m; i++)
      for(int j=0; j<n; j++)
         scanf("%d", &arr[i][j]);

   // Сортировка по строкам
   for (int i = 0; i < m; i++)
       bubbleSort(arr[i], n);

   int temp[m*n];
   int k = 0;
   for (int i = 0; i < m; i++)
       for (int j = 0; j < n; j++)
           temp[k++] = arr[i][j];


   bubbleSort(temp, m*n);


   k = 0;
   for (int i = 0; i < m; i++)
       for (int j = 0; j < n; j++)
           arr[i][j] = temp[k++];

   printf("Otsortirovannyi massive:\n");
   for(int i=0; i<m; i++) {
      for(int j=0; j<n; j++)
         printf("%d ", arr[i][j]);
      printf("\n");
   }

   return 0;
}

int lab7() {
        long num;

        // Ввод числа пользователем
        printf("Vvedite chislo tipa long: ");
        scanf("%ld", &num);

        // Обмен битов
        long swapped_num = swap_adjacent_bits(num);

        // Вывод результата
        printf("Results: %ld\n", swapped_num);

        return 0;
    }









