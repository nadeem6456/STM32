extern int add_numbers(int a, int b);

int result;

int main(void)
{
    HAL_Init();
    SystemClock_Config();
  //embedded systems project using stm32
    result = add_numbers(10, 20);

    while (1)
    {
    }
}
