#define MAX_INPUT_NUMBER 255
#define MIN_INPUT_NUMBER 0

void validate_number(int number)
{
    if (number < MAX_INPUT_NUMBER && number > MIN_INPUT_NUMBER)
    {
        return;
    }
    printf("There is an error in the number input process.");
    exit(1);
}

int get_number()
{
    int num = 0;

    printf("Please enter a number from %d - %d: ", MIN_INPUT_NUMBER, MAX_INPUT_NUMBER);
    scanf("%d", &num);
    validate_number(num);
    printf("The current number input is: %d", num);

    printf("\n");

    return num;
}
