#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>


int main(void)
{
    void Cfunction()
        string measurements = get_string("What volume measurement system are you using? E.g., gallons, liters, barrels.:  ");
        float concentration = get_float("Please enter your current concentration using integers. ");
        float volume_one = get_float("Please enter your current volume using integers. ");
        float concentration_two = get_float("What is your desired concentration? ");
        float volume_two = (volume_one * concentration_two) / concentration;
        float final_result = (volume_one - volume_two);
        printf("Final result: You need to add %.2f %s of water. \n",final_result, measurements);
}


