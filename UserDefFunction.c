#include <stdio.h>
int g = 40;
Q(){
int a = 10;
printf("a = %i\n", a);
}
P(){
int x = 20;
Q();
printf("x = %i\n", x);

}
int main(){
int static z = 30;
P();
printf("z = %i\n", z);


}
