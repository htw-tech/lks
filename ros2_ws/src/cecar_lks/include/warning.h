
#ifdef __cplusplus
extern "C" {
#endif

//int joyrumble(int joynumber, int strong, int weak, int duration);



void  joyrumble_end(void);
extern int joyrumble(int joynumber, int strong, int weak, int duration);
int joyrumble_init(void);
void joy_reopen(int joy);
int dir_exists(char *filename);
int file_exists(char *filename);


#ifdef __cplusplus
}
#endif