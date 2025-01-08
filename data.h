#pragma once
extern int scale;
extern char version[8];
extern int presult;
extern PLAYING_MODE mode;
extern int batch_mode;
extern int swindle_mode;
extern int call_flag;
extern int crafty_rating;
extern int opponent_rating;
extern int time_used;
extern int time_used_opponent;
extern uint64_t total_moves;
extern int allow_cores;
extern int allow_memory;
extern int initialized;
extern int early_exit;
extern char *AK_list[128];
extern char *GM_list[128];
extern char *IM_list[128];
extern char *B_list[128];
extern char *SP_list[128];
extern char *SP_opening_filename[128];
extern char *SP_personality_filename[128];
extern FILE *input_stream;
extern FILE *book_file;
extern FILE *books_file;
extern FILE *normal_bs_file;
extern FILE *computer_bs_file;
extern FILE *history_file;
extern FILE *log_file;
extern int log_id;
extern int output_format;
#if defined(SYZYGY)
extern int EGTBlimit;
extern int EGTB_use;
extern int EGTB_draw;
extern int EGTB_depth;
extern int EGTB_setup;
#endif
extern int last_mate_score;
extern int last_opponent_move;
extern int check_depth;
extern int null_depth;
extern int null_divisor;
extern int LMR_rdepth;
extern int LMR_min;
extern int LMR_max;
extern double LMR_db;
extern double LMR_mb;
extern double LMR_s;
extern uint8_t LMR[32][64];
extern int rep_index;
extern int pgn_suggested_percent;
extern char pgn_event[128];
extern char pgn_date[128];
extern char pgn_round[128];
extern char pgn_site[128];
extern char pgn_white[128];
extern char pgn_white_elo[128];
extern char pgn_black[128];
extern char pgn_black_elo[128];
extern char pgn_result[128];
extern char log_filename[256];
extern char history_filename[256];
extern int number_of_solutions;
extern int solutions[10];
extern int solution_type;
extern int abs_draw_score;
extern int accept_draws;
extern int offer_draws;
extern int dynamic_draw_score;
extern int adaptive_hash;
extern size_t adaptive_hash_min;
extern size_t adaptive_hash_max;
extern size_t adaptive_hashp_min;
extern size_t adaptive_hashp_max;
extern int over;
extern int xboard;
extern int xboard_done;
extern int pong;
extern char book_path[128];
extern char log_path[128];
extern char tb_path[128];
extern char rc_path[128];
extern char cmd_buffer[4096];
extern char *args[512];
extern char buffer[4096];
extern int line_length;
extern unsigned char convert_buff[8];
extern int nargs;
extern int kibitz;
extern int game_wtm;
extern int last_search_value;
extern int FP_margin[16];
extern int FP_depth;
extern int LMP[16];
extern int LMP_depth;
extern int LMP_base;
extern double LMP_scale;
extern double LMP_scale;
extern int failhi_delta[CPUS], faillo_delta[CPUS];
extern int ponder_value;
extern int move_actually_played;
extern int analyze_mode;
extern int annotate_mode;
extern int input_status;        /* 0=no input;
                                   1=predicted move read;
                                   2=unpredicted move read;
                                   3=something read, not executed. */
extern int resign;
extern int resign_counter;
extern int resign_count;
extern int draw_counter;
extern int draw_count;
extern int draw_offer_pending;
extern int draw_offered;
extern char audible_alarm;
extern char speech;
extern char ponder_text[512];
extern char book_hint[512];
extern int post;
extern int search_depth;
extern uint64_t search_nodes;
extern uint64_t temp_search_nodes;
extern int search_move;
extern int ponder;
extern int ponder_move;
extern int force;
extern unsigned ponder_moves[256];
extern int num_ponder_moves;
extern char initial_position[80];
extern int predicted;
extern int trace_level;
extern int book_move;
extern int book_accept_mask;
extern int book_reject_mask;
extern int book_random;
extern float book_weight_freq;
extern float book_weight_eval;
extern float book_weight_learn;
extern int book_search_trigger;
extern int book_selection_width;
extern int show_book;
extern int learn;
extern int learning;
extern int learn_value;
extern int abort_search;
extern int iteration;
extern int root_wtm;
extern int last_root_value;
extern ROOT_MOVE root_moves[256 * CPUS];
extern int n_root_moves;
extern int difficulty;
extern int time_limit;
extern int absolute_time_limit;
extern int search_time_limit;
extern int burp;
extern int quit;
extern unsigned opponent_start_time, opponent_end_time;
extern unsigned program_start_time, program_end_time;
extern unsigned start_time, end_time;
extern TREE *block[MAX_BLOCKS + 1];
extern THREAD thread[CPUS];
#if (CPUS > 1)
extern lock_t lock_smp, lock_io;
#  if defined(UNIX)
extern pthread_attr_t attributes;
#  endif
#endif
extern unsigned int hardware_processors;
extern unsigned int smp_max_threads;
extern unsigned int smp_split_group;
extern unsigned int smp_split_at_root;
extern unsigned int smp_min_split_depth;
extern unsigned int smp_gratuitous_depth;
extern unsigned int smp_gratuitous_limit;
extern int smp_nice;
extern int smp_affinity;
extern int smp_affinity_increment;
extern int smp_numa;
extern int autotune_params;
extern struct autotune tune[16];
extern unsigned smp_split_nodes;
extern unsigned parallel_splits;
extern unsigned parallel_splits_wasted;
extern unsigned parallel_aborts;
extern unsigned parallel_joins;
extern unsigned busy_percent;
extern uint64_t game_max_blocks;
extern volatile int smp_split;
extern volatile int smp_threads;
extern volatile int initialized_threads;
extern int crafty_is_white;
extern unsigned nodes_between_time_checks;
extern unsigned nodes_per_second;
extern int next_time_check;
extern int transposition_age;
extern int thinking;
extern int pondering;
extern int puzzling;
extern int booking;
extern int display_options;
extern unsigned noise_level;
extern int noise_block;
extern int tc_moves;
extern int tc_time;
extern int tc_time_remaining[2];
extern int tc_moves_remaining[2];
extern int tc_secondary_moves;
extern int tc_secondary_time;
extern int tc_increment;
extern int tc_sudden_death;
extern int tc_safety_margin;
extern int draw_score[2];
extern char kibitz_text[4096];
extern int kibitz_depth;
extern int move_number;
extern int moves_out_of_book;
extern int first_nonbook_factor;
extern int first_nonbook_span;
#if defined(SKILL)
extern int skill;
#endif
extern int book_learn_eval[LEARN_INTERVAL];
extern int book_learn_depth[LEARN_INTERVAL];
extern int learn_seekto[64];
extern uint64_t learn_key[64];
extern int learn_nmoves[64];
extern uint64_t book_learn_key;
extern int learn_positions_count;
extern int book_learn_nmoves;
extern int book_learn_seekto;
extern int usage_level;
extern size_t hash_table_size;
extern size_t hash_path_size;
extern uint64_t hash_mask;
extern uint64_t mask_clear_entry;
extern uint64_t hash_path_mask;
extern size_t pawn_hash_table_size;
extern uint64_t pawn_hash_mask;
extern HASH_ENTRY *hash_table;
extern HPATH_ENTRY *hash_path;
extern PAWN_HASH_ENTRY *pawn_hash_table;
extern void *segments[MAX_BLOCKS + 32][2];
extern int nsegments;
extern const int pcval[7];
extern const int p_vals[7];
extern const int MVV_LVA[7][7];
extern const int pieces[2][7];
extern const int lower_n;
extern const int lower_b;
extern const int mobility_score_n[4];
extern const int mobility_score_b[4];
extern const int mobility_score_r[4];
extern const int mob_curve_r[48];
extern PATH last_pv;
extern int last_value;
extern const char translate[13];
extern const char empty_sqs[9];
extern const int mate[64];
extern const uint64_t magic_rook[64];
extern const uint64_t magic_rook_mask[64];
extern const unsigned magic_rook_shift[64];
extern const uint64_t mobility_mask_b[4];
extern const uint64_t mobility_mask_r[4];
extern int16_t *magic_bishop_mobility_indices[64];
extern int16_t magic_bishop_mobility_table[5248];
extern uint64_t *magic_rook_indices[64];
extern uint64_t magic_rook_table[102400];
extern int16_t *magic_rook_mobility_indices[64];
extern int16_t magic_rook_mobility_table[102400];
extern const uint64_t magic_bishop[64];
extern const uint64_t magic_bishop_mask[64];
extern const unsigned magic_bishop_shift[64];
extern uint64_t *magic_bishop_indices[64];
extern uint64_t magic_bishop_table[5248];
extern int16_t *magic_bishop_mobility_indices[64];
extern int16_t magic_bishop_mobility_table[5248];
extern int8_t directions[64][64];
extern uint64_t pawn_attacks[2][64];
extern uint64_t knight_attacks[64];
extern uint64_t rook_attacks[64];
extern uint64_t bishop_attacks[64];
extern POSITION display;
extern uint64_t king_attacks[64];
extern uint64_t intervening[64][64];
extern int history[1024];
extern const uint64_t randoms[2][7][64];
extern const uint64_t castle_random[2][2];
extern const uint64_t enpassant_random[65];
extern uint64_t clear_mask[65];
extern uint64_t set_mask[65];
extern uint64_t file_mask[8];
extern uint64_t rank_mask[8];
extern const uint64_t OO[2];
extern const uint64_t OOO[2];
extern const uint64_t mask_efgh, mask_fgh, mask_abc, mask_abcd;
extern const uint64_t mask_advance_2_w;
extern const uint64_t mask_advance_2_b;
extern const uint64_t mask_left_edge;
extern const uint64_t mask_right_edge;
extern const uint64_t mask_not_edge;
extern const uint64_t mask_rook_files;
extern const uint64_t dark_squares;
extern const uint64_t not_rook_pawns;
extern const uint64_t not_rook_files;
extern uint64_t plus1dir[65];
extern uint64_t plus7dir[65];
extern uint64_t plus8dir[65];
extern uint64_t plus9dir[65];
extern uint64_t minus1dir[65];
extern uint64_t minus7dir[65];
extern uint64_t minus8dir[65];
extern uint64_t minus9dir[65];
extern uint64_t mask_eptest[64];
#if !defined(INLINEASM)
extern unsigned char msb[65536];
extern unsigned char lsb[65536];
#endif
extern unsigned char msb_8bit[256];
extern unsigned char lsb_8bit[256];
extern unsigned char pop_cnt_8bit[256];
extern uint64_t mask_pawn_connected[2][64];
extern uint64_t mask_pawn_isolated[64];
extern uint64_t mask_passed[2][64];
extern uint64_t mask_pattacks[2][64];
extern uint64_t pawn_race[2][2][64];
extern BOOK_POSITION book_buffer[BOOK_CLUSTER_SIZE];
extern BOOK_POSITION book_buffer_char[BOOK_CLUSTER_SIZE];
extern const int rankflip[2][8];
extern const int sqflip[2][64];
extern const int rank1[2];
extern const int rank2[2];
extern const int rank3[2];
extern const int rank4[2];
extern const int rank5[2];
extern const int rank6[2];
extern const int rank7[2];
extern const int rank8[2];
extern const int epdir[2];
extern const int csq[2];
extern const int dsq[2];
extern const int esq[2];
extern const int fsq[2];
extern const int gsq[2];
extern const int sign[2];
extern const char square_color[64];
extern uint64_t distance_ring[64][8];
extern const int OOsqs[2][3];
extern const int OOOsqs[2][3];
extern const int OOfrom[2];
extern const int OOto[2];
extern const int OOOto[2];
extern const int epsq[2];
extern const int rook_A[2];
extern const int rook_D[2];
extern const int rook_F[2];
extern const int rook_G[2];
extern const int rook_H[2];
extern const int capleft[2];
extern const int capright[2];
extern const int pawnadv1[2];
extern const int pawnadv2[2];
extern int piece_values[2][7];
extern struct personality_term personality_packet[256];
