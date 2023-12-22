#ifndef __FILE_H__
#define __FILE_H__

#define STR_EMPTY	""		//상수변수
#define ID_EMPTY	-1

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;

extern void file_write_rand(ADDR ad[], char filename[], int len);
extern void file_write(ADDR ad, char filename[]);
extern void file_read(char filename[]);
extern void file_del_all(char filename[]);
extern void file_search(char serch_name[], int serch_id, char serch_email[], char filename[]);
extern void file_delete(char del_name[], char filename[]);
//extern void file_modify(char filename[], char before_name[], ADDR modify);
extern void file_update(char filename[], char beforename[], char afterename[]);

#endif