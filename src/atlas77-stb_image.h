#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned char stb_stbi_uc;
typedef unsigned short stb_stbi_us;
typedef struct
{
   int (*read) (void *user,char *data,int size);
   void (*skip) (void *user,int n);
   int (*eof) (void *user);
} stb_stbi_io_callbacks;

extern stb_stbi_uc *stb_stbi_load_from_memory (stb_stbi_uc const *buffer, int len , int *x, int *y, int *channels_in_file, int desired_channels);
extern stb_stbi_uc *stb_stbi_load_from_callbacks(stb_stbi_io_callbacks const *clbk , void *user, int *x, int *y, int *channels_in_file, int desired_channels);
extern stb_stbi_uc *stb_stbi_load (char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);
extern stb_stbi_uc *stb_stbi_load_from_file (FILE *f, int *x, int *y, int *channels_in_file, int desired_channels);
extern stb_stbi_uc *stb_stbi_load_gif_from_memory(stb_stbi_uc const *buffer, int len, int **delays, int *x, int *y, int *z, int *comp, int req_comp);
extern stb_stbi_us *stb_stbi_load_16_from_memory (stb_stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels);
extern stb_stbi_us *stb_stbi_load_16_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels);
extern stb_stbi_us *stb_stbi_load_16 (char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);
extern stb_stbi_us *stb_stbi_load_from_file_16(FILE *f, int *x, int *y, int *channels_in_file, int desired_channels);
extern float *stb_stbi_loadf_from_memory (stb_stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels);
extern float *stb_stbi_loadf_from_callbacks (stb_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels);
extern float *stb_stbi_loadf (char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);
extern float *stb_stbi_loadf_from_file (FILE *f, int *x, int *y, int *channels_in_file, int desired_channels);
extern void stb_stbi_hdr_to_ldr_gamma(float gamma);
extern void stb_stbi_hdr_to_ldr_scale(float scale);
extern void stb_stbi_ldr_to_hdr_gamma(float gamma);
extern void stb_stbi_ldr_to_hdr_scale(float scale);
extern int stb_stbi_is_hdr_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user);
extern int stb_stbi_is_hdr_from_memory(stb_stbi_uc const *buffer, int len);
extern int stb_stbi_is_hdr (char const *filename);
extern int stb_stbi_is_hdr_from_file(FILE *f);
extern const char *stb_stbi_failure_reason (void);
extern void stb_stbi_image_free (void *retval_from_stbi_load);
extern int stb_stbi_info_from_memory(stb_stbi_uc const *buffer, int len, int *x, int *y, int *comp);
extern int stb_stbi_info_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *comp);
extern int stb_stbi_is_16_bit_from_memory(stb_stbi_uc const *buffer, int len);
extern int stb_stbi_is_16_bit_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user);
extern int stb_stbi_info (char const *filename, int *x, int *y, int *comp);
extern int stb_stbi_info_from_file (FILE *f, int *x, int *y, int *comp);
extern int stb_stbi_is_16_bit (char const *filename);
extern int stb_stbi_is_16_bit_from_file(FILE *f);
extern void stb_stbi_set_unpremultiply_on_load(int flag_true_if_should_unpremultiply);
extern void stb_stbi_convert_iphone_png_to_rgb(int flag_true_if_should_convert);
extern void stb_stbi_set_flip_vertically_on_load(int flag_true_if_should_flip);
extern void stb_stbi_set_unpremultiply_on_load_thread(int flag_true_if_should_unpremultiply);
extern void stb_stbi_convert_iphone_png_to_rgb_thread(int flag_true_if_should_convert);
extern void stb_stbi_set_flip_vertically_on_load_thread(int flag_true_if_should_flip);
extern char *stb_stbi_zlib_decode_malloc_guesssize(const char *buffer, int len, int initial_size, int *outlen);
extern char *stb_stbi_zlib_decode_malloc_guesssize_headerflag(const char *buffer, int len, int initial_size, int *outlen, int parse_header);
extern char *stb_stbi_zlib_decode_malloc(const char *buffer, int len, int *outlen);
extern int stb_stbi_zlib_decode_buffer(char *obuffer, int olen, const char *ibuffer, int ilen);
extern char *stb_stbi_zlib_decode_noheader_malloc(const char *buffer, int len, int *outlen);
extern int stb_stbi_zlib_decode_noheader_buffer(char *obuffer, int olen, const char *ibuffer, int ilen);

#ifdef __cplusplus
}
#endif
