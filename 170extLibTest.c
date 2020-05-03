//sourceforge.net
//apt search <lib.>
//apt-get install <lib.>
//dpkg -s <lib.>

//brew, https://brew.sh
#include <stdio.h>
#include <jpeglib.h>
int main()
{
    printf("%d\n", JPEG_LIB_VERSION);
    printf("%d\n", JPEG_LIB_VERSION_MAJOR);
    printf("%d\n", JPEG_LIB_VERSION_MINOR);
    return(0);
}