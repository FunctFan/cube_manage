#ifndef DEFINE_CONVERT_H
#define DEFINE_CONVERT_H
 
struct init_struct
{
	char * output_file;
}__attribute__((packed));
 
int define_convert_init (void * sub_proc, void * para);
int define_convert_start (void * sub_proc, void * para);
#endif
