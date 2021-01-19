//잘못된 expression 속 명칭(ex 함수 호출이 아닌 수식에서 함수 명칭 수식)
float func()
{
    return 4.5;
}
int main(void)
{
    func;
}

