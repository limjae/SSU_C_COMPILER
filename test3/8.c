//함수 리턴과 호출
int func (int a, int b)
{
    return a+b;
}

void main()
{
    int i,j,k;
    i=3;j=2;
    k = func(i,j);
    printf("%d\n",k);
}