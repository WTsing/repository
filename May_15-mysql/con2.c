/*************************************************************************
	* 文件名：  con2.c
	* 描  述：      
	* 创建人：  王卿
	* 日  期：  2017年05月15日 星期一 14时41分29秒
	* 版  本：  1.0
	* 备  注：  
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>
int main()
{
    MYSQL * mysql = (MYSQL *)calloc(1,sizeof(MYSQL));
    mysql_init(mysql);

    if( !mysql_real_connect(mysql, "localhost", "root", "123", "db_students", 0, NULL, 0) )
    {
        printf("error connecting to database:%s\n", mysql_error(mysql));
        return -1;
    }
    printf("connecting success!\n");
    
    mysql_close(mysql);
    free(mysql);

    return 0;
}

