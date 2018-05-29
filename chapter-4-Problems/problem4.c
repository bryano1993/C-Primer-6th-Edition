/*Write a program that requests the download speed in megabits per second (Mbs) and
the size of a file in megabytes (MB). The program should calculate the download time
for the file. Note that in this context one byte is eight bits. Use type float , and use /
for division. The program should report all three values (download speed, file size, and
download time) showing two digits to the right of the decimal point, as in the following:
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.*/

#include <stdio.h>
int problem4 (void)
{
    float mbs, mb,downloadSpeed,convertedMb;

    printf("Please enter download speed in megabits per second(Mbs): ");
    scanf("%f", &mbs);


    printf("Please enter the size of the file in megabytes (MB): ");
    scanf("%f", &mb);
    getchar();

    convertedMb = mb * 8;
    downloadSpeed = mbs / convertedMb;

    printf("At %1.2f megabits per second, a file of %1.2f megabytes downloads in %1.2f seconds\n", mbs, mb, downloadSpeed);

    return 0;
}
