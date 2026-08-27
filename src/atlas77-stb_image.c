#include "stb_image.h"
#include "atlas77-stb_image.h"

extern stb_stbi_uc *stb_stbi_load_from_memory (stb_stbi_uc const *buffer, int len , int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_uc*)(stbi_load_from_memory((stbi_uc* )buffer, len, x, y, channels_in_file, desired_channels));
}

extern stb_stbi_uc *stb_stbi_load_from_callbacks(stb_stbi_io_callbacks const *clbk , void *user, int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_uc*)(stbi_load_from_callbacks((stbi_io_callbacks* )clbk, user, x, y, channels_in_file, desired_channels));
}

extern stb_stbi_uc *stb_stbi_load (char const *filename, int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_uc*)(stbi_load(filename, x, y, channels_in_file, desired_channels));
}

extern stb_stbi_uc *stb_stbi_load_from_file (FILE *f, int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_uc*)(stbi_load_from_file(f, x, y, channels_in_file, desired_channels));
}

extern stb_stbi_uc *stb_stbi_load_gif_from_memory(stb_stbi_uc const *buffer, int len, int **delays, int *x, int *y, int *z, int *comp, int req_comp) {
    return (stb_stbi_uc*)(stbi_load_gif_from_memory((stbi_uc* )buffer, len, delays, x, y, z, comp, req_comp));
}

extern stb_stbi_us *stb_stbi_load_16_from_memory (stb_stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_us*)(stbi_load_16_from_memory((stbi_uc* )buffer, len, x, y, channels_in_file, desired_channels));
}

extern stb_stbi_us *stb_stbi_load_16_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_us*)(stbi_load_16_from_callbacks((stbi_io_callbacks* )clbk, user, x, y, channels_in_file, desired_channels));
}

extern stb_stbi_us *stb_stbi_load_16 (char const *filename, int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_us*)(stbi_load_16(filename, x, y, channels_in_file, desired_channels));
}

extern stb_stbi_us *stb_stbi_load_from_file_16(FILE *f, int *x, int *y, int *channels_in_file, int desired_channels) {
    return (stb_stbi_us*)(stbi_load_from_file_16(f, x, y, channels_in_file, desired_channels));
}

extern float *stb_stbi_loadf_from_memory (stb_stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels) {
    return stbi_loadf_from_memory((stbi_uc* )buffer, len, x, y, channels_in_file, desired_channels);
}

extern float *stb_stbi_loadf_from_callbacks (stb_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels) {
    return stbi_loadf_from_callbacks((stbi_io_callbacks* )clbk, user, x, y, channels_in_file, desired_channels);
}

extern float *stb_stbi_loadf (char const *filename, int *x, int *y, int *channels_in_file, int desired_channels) {
    return stbi_loadf(filename, x, y, channels_in_file, desired_channels);
}

extern float *stb_stbi_loadf_from_file (FILE *f, int *x, int *y, int *channels_in_file, int desired_channels) {
    return stbi_loadf_from_file(f, x, y, channels_in_file, desired_channels);
}

extern void stb_stbi_hdr_to_ldr_gamma(float gamma) {
    stbi_hdr_to_ldr_gamma(gamma);
}

extern void stb_stbi_hdr_to_ldr_scale(float scale) {
    stbi_hdr_to_ldr_scale(scale);
}

extern void stb_stbi_ldr_to_hdr_gamma(float gamma) {
    stbi_ldr_to_hdr_gamma(gamma);
}

extern void stb_stbi_ldr_to_hdr_scale(float scale) {
    stbi_ldr_to_hdr_scale(scale);
}

extern int stb_stbi_is_hdr_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user) {
    return stbi_is_hdr_from_callbacks((stbi_io_callbacks* )clbk, user);
}

extern int stb_stbi_is_hdr_from_memory(stb_stbi_uc const *buffer, int len) {
    return stbi_is_hdr_from_memory((stbi_uc* )buffer, len);
}

extern int stb_stbi_is_hdr (char const *filename) {
    return stbi_is_hdr(filename);
}

extern int stb_stbi_is_hdr_from_file(FILE *f) {
    return stbi_is_hdr_from_file(f);
}

extern const char *stb_stbi_failure_reason (void) {
    return stbi_failure_reason();
}

extern void stb_stbi_image_free (void *retval_from_stbi_load) {
    stbi_image_free(retval_from_stbi_load);
}

extern int stb_stbi_info_from_memory(stb_stbi_uc const *buffer, int len, int *x, int *y, int *comp) {
    return stbi_info_from_memory((stbi_uc* )buffer, len, x, y, comp);
}

extern int stb_stbi_info_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user, int *x, int *y, int *comp) {
    return stbi_info_from_callbacks((stbi_io_callbacks* )clbk, user, x, y, comp);
}

extern int stb_stbi_is_16_bit_from_memory(stb_stbi_uc const *buffer, int len) {
    return stbi_is_16_bit_from_memory((stbi_uc* )buffer, len);
}

extern int stb_stbi_is_16_bit_from_callbacks(stb_stbi_io_callbacks const *clbk, void *user) {
    return stbi_is_16_bit_from_callbacks((stbi_io_callbacks* )clbk, user);
}

extern int stb_stbi_info (char const *filename, int *x, int *y, int *comp) {
    return stbi_info(filename, x, y, comp);
}

extern int stb_stbi_info_from_file (FILE *f, int *x, int *y, int *comp) {
    return stbi_info_from_file(f, x, y, comp);
}

extern int stb_stbi_is_16_bit (char const *filename) {
    return stbi_is_16_bit(filename);
}

extern int stb_stbi_is_16_bit_from_file(FILE *f) {
    return stbi_is_16_bit_from_file(f);
}

extern void stb_stbi_set_unpremultiply_on_load(int flag_true_if_should_unpremultiply) {
    stbi_set_unpremultiply_on_load(flag_true_if_should_unpremultiply);
}

extern void stb_stbi_convert_iphone_png_to_rgb(int flag_true_if_should_convert) {
    stbi_convert_iphone_png_to_rgb(flag_true_if_should_convert);
}

extern void stb_stbi_set_flip_vertically_on_load(int flag_true_if_should_flip) {
    stbi_set_flip_vertically_on_load(flag_true_if_should_flip);
}

extern void stb_stbi_set_unpremultiply_on_load_thread(int flag_true_if_should_unpremultiply) {
    stbi_set_unpremultiply_on_load_thread(flag_true_if_should_unpremultiply);
}

extern void stb_stbi_convert_iphone_png_to_rgb_thread(int flag_true_if_should_convert) {
    stbi_convert_iphone_png_to_rgb_thread(flag_true_if_should_convert);
}

extern void stb_stbi_set_flip_vertically_on_load_thread(int flag_true_if_should_flip) {
    stbi_set_flip_vertically_on_load_thread(flag_true_if_should_flip);
}

extern char *stb_stbi_zlib_decode_malloc_guesssize(const char *buffer, int len, int initial_size, int *outlen) {
    return stbi_zlib_decode_malloc_guesssize(buffer, len, initial_size, outlen);
}

extern char *stb_stbi_zlib_decode_malloc_guesssize_headerflag(const char *buffer, int len, int initial_size, int *outlen, int parse_header) {
    return stbi_zlib_decode_malloc_guesssize_headerflag(buffer, len, initial_size, outlen, parse_header);
}

extern char *stb_stbi_zlib_decode_malloc(const char *buffer, int len, int *outlen) {
    return stbi_zlib_decode_malloc(buffer, len, outlen);
}

extern int stb_stbi_zlib_decode_buffer(char *obuffer, int olen, const char *ibuffer, int ilen) {
    return stbi_zlib_decode_buffer(obuffer, olen, ibuffer, ilen);
}

extern char *stb_stbi_zlib_decode_noheader_malloc(const char *buffer, int len, int *outlen) {
    return stbi_zlib_decode_noheader_malloc(buffer, len, outlen);
}

extern int stb_stbi_zlib_decode_noheader_buffer(char *obuffer, int olen, const char *ibuffer, int ilen) {
    return stbi_zlib_decode_noheader_buffer(obuffer, olen, ibuffer, ilen);
}

