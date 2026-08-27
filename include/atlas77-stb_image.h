#pragma once

#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif

   typedef unsigned char stbi_stbi_uc;
   typedef unsigned short stbi_stbi_us;
   typedef struct
   {
      int (*read)(void *user, char *data, int size);
      void (*skip)(void *user, int n);
      int (*eof)(void *user);
   } stbi_stbi_io_callbacks;

   extern stbi_stbi_uc *stbi_stbi_load_from_memory(stbi_stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels);
   extern stbi_stbi_uc *stbi_stbi_load_from_callbacks(stbi_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels);
   extern stbi_stbi_uc *stbi_stbi_load(char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);
   extern stbi_stbi_uc *stbi_stbi_load_from_file(FILE *f, int *x, int *y, int *channels_in_file, int desired_channels);
   extern stbi_stbi_uc *stbi_stbi_load_gif_from_memory(stbi_stbi_uc const *buffer, int len, int **delays, int *x, int *y, int *z, int *comp, int req_comp);
   extern stbi_stbi_us *stbi_stbi_load_16_from_memory(stbi_stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels);
   extern stbi_stbi_us *stbi_stbi_load_16_from_callbacks(stbi_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels);
   extern stbi_stbi_us *stbi_stbi_load_16(char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);
   extern stbi_stbi_us *stbi_stbi_load_from_file_16(FILE *f, int *x, int *y, int *channels_in_file, int desired_channels);
   extern float *stbi_stbi_loadf_from_memory(stbi_stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels);
   extern float *stbi_stbi_loadf_from_callbacks(stbi_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels);
   extern float *stbi_stbi_loadf(char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);
   extern float *stbi_stbi_loadf_from_file(FILE *f, int *x, int *y, int *channels_in_file, int desired_channels);
   extern void stbi_stbi_hdr_to_ldr_gamma(float gamma);
   extern void stbi_stbi_hdr_to_ldr_scale(float scale);
   extern void stbi_stbi_ldr_to_hdr_gamma(float gamma);
   extern void stbi_stbi_ldr_to_hdr_scale(float scale);
   extern int stbi_stbi_is_hdr_from_callbacks(stbi_stbi_io_callbacks const *clbk, void *user);
   extern int stbi_stbi_is_hdr_from_memory(stbi_stbi_uc const *buffer, int len);
   extern int stbi_stbi_is_hdr(char const *filename);
   extern int stbi_stbi_is_hdr_from_file(FILE *f);
   extern const char *stbi_stbi_failure_reason(void);
   extern void stbi_stbi_image_free(void *retval_from_stbi_load);
   extern int stbi_stbi_info_from_memory(stbi_stbi_uc const *buffer, int len, int *x, int *y, int *comp);
   extern int stbi_stbi_info_from_callbacks(stbi_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *comp);
   extern int stbi_stbi_is_16_bit_from_memory(stbi_stbi_uc const *buffer, int len);
   extern int stbi_stbi_is_16_bit_from_callbacks(stbi_stbi_io_callbacks const *clbk, void *user);
   extern int stbi_stbi_info(char const *filename, int *x, int *y, int *comp);
   extern int stbi_stbi_info_from_file(FILE *f, int *x, int *y, int *comp);
   extern int stbi_stbi_is_16_bit(char const *filename);
   extern int stbi_stbi_is_16_bit_from_file(FILE *f);
   extern void stbi_stbi_set_unpremultiply_on_load(int flag_true_if_should_unpremultiply);
   extern void stbi_stbi_convert_iphone_png_to_rgb(int flag_true_if_should_convert);
   extern void stbi_stbi_set_flip_vertically_on_load(int flag_true_if_should_flip);
   extern void stbi_stbi_set_unpremultiply_on_load_thread(int flag_true_if_should_unpremultiply);
   extern void stbi_stbi_convert_iphone_png_to_rgb_thread(int flag_true_if_should_convert);
   extern void stbi_stbi_set_flip_vertically_on_load_thread(int flag_true_if_should_flip);
   extern char *stbi_stbi_zlib_decode_malloc_guesssize(const char *buffer, int len, int initial_size, int *outlen);
   extern char *stbi_stbi_zlib_decode_malloc_guesssize_headerflag(const char *buffer, int len, int initial_size, int *outlen, int parse_header);
   extern char *stbi_stbi_zlib_decode_malloc(const char *buffer, int len, int *outlen);
   extern int stbi_stbi_zlib_decode_buffer(char *obuffer, int olen, const char *ibuffer, int ilen);
   extern char *stbi_stbi_zlib_decode_noheader_malloc(const char *buffer, int len, int *outlen);
   extern int stbi_stbi_zlib_decode_noheader_buffer(char *obuffer, int olen, const char *ibuffer, int ilen);

#ifdef __cplusplus
}
#endif
