#ifdef WIN32
/*
 * While the definitions in the original header are technically the
 * same as the definitions in 'zlibDecls.h' on Windows they are not,
 * in a small detail: DLLEXPORT vs. DLLIMPORT. As our artificial
 * definitions do the right thing we use the macro definitions below
 * to move the original definitionsd out of the way. We do retain the
 * inclusion of all the type definitions, etc.
 */
#define jpeg_std_error __mask_jpeg_std_error
#define jpeg_CreateCompress __mask_jpeg_CreateCompress
#define jpeg_CreateDecompress __mask_jpeg_CreateDecompress
#define jpeg_destroy_compress __mask_jpeg_destroy_compress
#define jpeg_destroy_decompress __mask_jpeg_destroy_decompress
#define jpeg_stdio_dest __mask_jpeg_stdio_dest
#define jpeg_stdio_src __mask_jpeg_stdio_src
#define jpeg_set_defaults __mask_jpeg_set_defaults
#define jpeg_set_colorspace __mask_jpeg_set_colorspace
#define jpeg_default_colorspace __mask_jpeg_default_colorspace
#define jpeg_set_quality __mask_jpeg_set_quality
#define jpeg_set_linear_quality __mask_jpeg_set_linear_quality
#define jpeg_add_quant_table __mask_jpeg_add_quant_table
#define jpeg_quality_scaling __mask_jpeg_quality_scaling
#define jpeg_simple_progression __mask_jpeg_simple_progression
#define jpeg_suppress_tables __mask_jpeg_suppress_tables
#define jpeg_alloc_quant_table __mask_jpeg_alloc_quant_table
#define jpeg_alloc_huff_table __mask_jpeg_alloc_huff_table
#define jpeg_start_compress __mask_jpeg_start_compress
#define jpeg_write_scanlines __mask_jpeg_write_scanlines
#define jpeg_finish_compress __mask_jpeg_finish_compress
#define jpeg_write_raw_data __mask_jpeg_write_raw_data
#define jpeg_write_marker __mask_jpeg_write_marker
#define jpeg_write_m_header __mask_jpeg_write_m_header
#define jpeg_write_m_byte __mask_jpeg_write_m_byte
#define jpeg_write_tables __mask_jpeg_write_tables
#define jpeg_read_header __mask_jpeg_read_header
#define jpeg_start_decompress __mask_jpeg_start_decompress
#define jpeg_read_scanlines __mask_jpeg_read_scanlines
#define jpeg_finish_decompress __mask_jpeg_finish_decompress
#define jpeg_read_raw_data __mask_jpeg_read_raw_data
#define jpeg_has_multiple_scans __mask_jpeg_has_multiple_scans
#define jpeg_start_output __mask_jpeg_start_output
#define jpeg_finish_output __mask_jpeg_finish_output
#define jpeg_input_complete __mask_jpeg_input_complete
#define jpeg_new_colormap __mask_jpeg_new_colormap
#define jpeg_consume_input __mask_jpeg_consume_input
#define jpeg_calc_output_dimensions __mask_jpeg_calc_output_dimensions
#define jpeg_save_markers __mask_jpeg_save_markers
#define jpeg_set_marker_processor __mask_jpeg_set_marker_processor
#define jpeg_read_coefficients __mask_jpeg_read_coefficients
#define jpeg_write_coefficients __mask_jpeg_write_coefficients
#define jpeg_copy_critical_parameters __mask_jpeg_copy_critical_parameters
#define jpeg_abort_compress __mask_jpeg_abort_compress
#define jpeg_abort_decompress __mask_jpeg_abort_decompress
#define jpeg_abort __mask_jpeg_abort
#define jpeg_destroy __mask_jpeg_destroy
#define jpeg_resync_to_restart __mask_jpeg_resync_to_restart
#endif /* WIN32 */