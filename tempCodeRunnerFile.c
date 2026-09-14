int main ()
{
do
        {
            printf("\nRoll dice?(y): ");
            scanf(" %c", &choice);

            if(choice != 'y')
            {
                printf("Error input\n");
            }
        }
        while(choice != 'y');
return 0;
    }