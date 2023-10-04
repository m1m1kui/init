/* Generated code for Python module 'arcade.draw_commands'
 * created by Nuitka version 1.8.2
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_arcade$draw_commands" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_arcade$draw_commands;
PyDictObject *moduledict_arcade$draw_commands;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[266];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[266];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("arcade.draw_commands"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 266; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_arcade$draw_commands(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 266; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_86b804faf5a29dd8fee8e96e437ac774;
static PyCodeObject *codeobj_527aea5d9292171f2b8845e12250d6f0;
static PyCodeObject *codeobj_0ad1b6d3985e598a2a0c38d5fa878feb;
static PyCodeObject *codeobj_48b474d3ecfd06e4017a33b21402e0d4;
static PyCodeObject *codeobj_649eb054ce92861093195308f24ca615;
static PyCodeObject *codeobj_c7ecaf82122c691f6a899355477cbdcd;
static PyCodeObject *codeobj_f2bcb33b2c9c666a9ba85ae80edead2c;
static PyCodeObject *codeobj_9eadd2e35dfbb911baac33471ce90862;
static PyCodeObject *codeobj_356f62113a5a347bf6a1c82dfdebf3d2;
static PyCodeObject *codeobj_7f14034a8e6daa11bc3a6d577765c2e0;
static PyCodeObject *codeobj_13de2a10df279ce228281468f10a0e5f;
static PyCodeObject *codeobj_7031eff880db8a71a7d1bbd192741280;
static PyCodeObject *codeobj_b9d663a50284f4fbeb9bfdce0c642a4e;
static PyCodeObject *codeobj_43813661009e692cbf6486a5a6efaa13;
static PyCodeObject *codeobj_b9ee7dd88eb3687ea152ac0f0916f14b;
static PyCodeObject *codeobj_5576f7de8039870cce4a685f9d8f3534;
static PyCodeObject *codeobj_ae3896fca990503b46021040d22af441;
static PyCodeObject *codeobj_aa4c41670a36ea2916a1d13ae7dc265c;
static PyCodeObject *codeobj_b34188845368c695444f1e2a1a1aef25;
static PyCodeObject *codeobj_c7cb3b58f6243af4aa14e434cffb2f56;
static PyCodeObject *codeobj_802bcd0d8210e5eafcf7dacd898be13f;
static PyCodeObject *codeobj_c72e2b65430c3e6084e5443ffac17623;
static PyCodeObject *codeobj_ea330878ad2d03a4a81e7dd56c091c85;
static PyCodeObject *codeobj_ba0140247a4ef2d2f4c9974968c7e701;
static PyCodeObject *codeobj_2e14f690cc3e94b69bfd8ef3783f04c0;
static PyCodeObject *codeobj_4a7097d120b2335b6a5186506cc99620;
static PyCodeObject *codeobj_f0c47bba2fa838ce0b46a041c2793e89;
static PyCodeObject *codeobj_651fe29c80ea34068f37b2875bc98434;
static PyCodeObject *codeobj_e85c64b771a189fb283e6ca2d0ab8f23;
static PyCodeObject *codeobj_b822802f24814a5b41bfbc0eab8a3f78;
static PyCodeObject *codeobj_de0929fe113bbe31a2ce5859747fdbd0;
static PyCodeObject *codeobj_6f0a093f3bb2f75a91c404a88c571499;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[232]); CHECK_OBJECT(module_filename_obj);
    codeobj_86b804faf5a29dd8fee8e96e437ac774 = MAKE_CODE_OBJECT(module_filename_obj, 887, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[233], NULL, 1, 0, 0);
    codeobj_527aea5d9292171f2b8845e12250d6f0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[234], mod_consts[234], NULL, NULL, 0, 0, 0);
    codeobj_0ad1b6d3985e598a2a0c38d5fa878feb = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[235], NULL, 3, 0, 0);
    codeobj_48b474d3ecfd06e4017a33b21402e0d4 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[236], NULL, 9, 0, 0);
    codeobj_649eb054ce92861093195308f24ca615 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[237], NULL, 10, 0, 0);
    codeobj_c7ecaf82122c691f6a899355477cbdcd = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[186], mod_consts[186], mod_consts[238], NULL, 6, 0, 0);
    codeobj_f2bcb33b2c9c666a9ba85ae80edead2c = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[239], NULL, 7, 0, 0);
    codeobj_9eadd2e35dfbb911baac33471ce90862 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[240], NULL, 7, 0, 0);
    codeobj_356f62113a5a347bf6a1c82dfdebf3d2 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[241], NULL, 8, 0, 0);
    codeobj_7f14034a8e6daa11bc3a6d577765c2e0 = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[242], NULL, 6, 0, 0);
    codeobj_13de2a10df279ce228281468f10a0e5f = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[243], NULL, 3, 0, 0);
    codeobj_7031eff880db8a71a7d1bbd192741280 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[244], NULL, 3, 0, 0);
    codeobj_b9d663a50284f4fbeb9bfdce0c642a4e = MAKE_CODE_OBJECT(module_filename_obj, 723, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[214], mod_consts[214], mod_consts[245], NULL, 5, 0, 0);
    codeobj_43813661009e692cbf6486a5a6efaa13 = MAKE_CODE_OBJECT(module_filename_obj, 633, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[246], NULL, 6, 0, 0);
    codeobj_b9ee7dd88eb3687ea152ac0f0916f14b = MAKE_CODE_OBJECT(module_filename_obj, 843, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[224], mod_consts[247], NULL, 7, 0, 0);
    codeobj_5576f7de8039870cce4a685f9d8f3534 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[248], NULL, 6, 0, 0);
    codeobj_ae3896fca990503b46021040d22af441 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[249], NULL, 7, 0, 0);
    codeobj_aa4c41670a36ea2916a1d13ae7dc265c = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[250], NULL, 4, 0, 0);
    codeobj_b34188845368c695444f1e2a1a1aef25 = MAKE_CODE_OBJECT(module_filename_obj, 496, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[196], mod_consts[196], mod_consts[251], NULL, 3, 0, 0);
    codeobj_c7cb3b58f6243af4aa14e434cffb2f56 = MAKE_CODE_OBJECT(module_filename_obj, 536, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[252], NULL, 2, 0, 0);
    codeobj_802bcd0d8210e5eafcf7dacd898be13f = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[253], NULL, 3, 0, 0);
    codeobj_c72e2b65430c3e6084e5443ffac17623 = MAKE_CODE_OBJECT(module_filename_obj, 769, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[254], NULL, 6, 0, 0);
    codeobj_ea330878ad2d03a4a81e7dd56c091c85 = MAKE_CODE_OBJECT(module_filename_obj, 685, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[255], NULL, 7, 0, 0);
    codeobj_ba0140247a4ef2d2f4c9974968c7e701 = MAKE_CODE_OBJECT(module_filename_obj, 803, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[221], mod_consts[221], mod_consts[256], NULL, 6, 0, 0);
    codeobj_2e14f690cc3e94b69bfd8ef3783f04c0 = MAKE_CODE_OBJECT(module_filename_obj, 822, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[223], mod_consts[223], mod_consts[257], NULL, 7, 0, 0);
    codeobj_4a7097d120b2335b6a5186506cc99620 = MAKE_CODE_OBJECT(module_filename_obj, 581, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[204], mod_consts[204], mod_consts[258], NULL, 7, 0, 0);
    codeobj_f0c47bba2fa838ce0b46a041c2793e89 = MAKE_CODE_OBJECT(module_filename_obj, 603, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[259], NULL, 8, 0, 0);
    codeobj_651fe29c80ea34068f37b2875bc98434 = MAKE_CODE_OBJECT(module_filename_obj, 751, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[260], NULL, 5, 0, 0);
    codeobj_e85c64b771a189fb283e6ca2d0ab8f23 = MAKE_CODE_OBJECT(module_filename_obj, 665, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[213], mod_consts[261], NULL, 6, 0, 0);
    codeobj_b822802f24814a5b41bfbc0eab8a3f78 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[262], NULL, 1, 0, 0);
    codeobj_de0929fe113bbe31a2ce5859747fdbd0 = MAKE_CODE_OBJECT(module_filename_obj, 890, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[231], mod_consts[231], mod_consts[263], NULL, 4, 0, 0);
    codeobj_6f0a093f3bb2f75a91c404a88c571499 = MAKE_CODE_OBJECT(module_filename_obj, 865, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[229], mod_consts[229], mod_consts[264], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__10_draw_line_strip(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__11_draw_line(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__12_draw_lines(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__13_draw_point(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__14_draw_points(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__15_draw_polygon_filled(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__16_draw_polygon_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__17_draw_triangle_filled(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__18_draw_triangle_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__19_draw_lrtb_rectangle_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__1_draw_arc_filled(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__20_draw_xywh_rectangle_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__21_draw_rectangle_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__22_draw_lrtb_rectangle_filled(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__23_draw_xywh_rectangle_filled(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__24_draw_rectangle_filled(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__25_draw_scaled_texture_rectangle(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__26_draw_texture_rectangle(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__27_draw_lrwh_rectangle_textured(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__28_get_pixel(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__29_get_image(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__2_draw_arc_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__3_draw_parabola_filled(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__4_draw_parabola_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__5_draw_circle_filled(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__6_draw_circle_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__7_draw_ellipse_filled(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__8_draw_ellipse_outline(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__9__generic_draw_line_strip(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__9__generic_draw_line_strip$$$function__1_gen_flatten();


// The module function definitions.
static PyObject *impl_arcade$draw_commands$$$function__1_draw_arc_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_start_angle = python_pars[5];
    PyObject *par_end_angle = python_pars[6];
    PyObject *par_tilt_angle = python_pars[7];
    PyObject *par_num_segments = python_pars[8];
    PyObject *var_unrotated_point_list = NULL;
    PyObject *var_start_segment = NULL;
    PyObject *var_end_segment = NULL;
    PyObject *var_segment = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_uncentered_point_list = NULL;
    PyObject *var_point = NULL;
    PyObject *var_point_list = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_48b474d3ecfd06e4017a33b21402e0d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_48b474d3ecfd06e4017a33b21402e0d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[0], "l");
        assert(var_unrotated_point_list == NULL);
        var_unrotated_point_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_48b474d3ecfd06e4017a33b21402e0d4)) {
        Py_XDECREF(cache_frame_48b474d3ecfd06e4017a33b21402e0d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48b474d3ecfd06e4017a33b21402e0d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48b474d3ecfd06e4017a33b21402e0d4 = MAKE_FUNCTION_FRAME(tstate, codeobj_48b474d3ecfd06e4017a33b21402e0d4, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48b474d3ecfd06e4017a33b21402e0d4->m_type_description == NULL);
    frame_48b474d3ecfd06e4017a33b21402e0d4 = cache_frame_48b474d3ecfd06e4017a33b21402e0d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_48b474d3ecfd06e4017a33b21402e0d4);
    assert(Py_REFCNT(frame_48b474d3ecfd06e4017a33b21402e0d4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_start_angle);
        tmp_truediv_expr_left_1 = par_start_angle;
        tmp_truediv_expr_right_1 = mod_consts[1];
        tmp_mult_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_segments);
        tmp_mult_expr_right_1 = par_num_segments;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_start_segment == NULL);
        var_start_segment = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(par_end_angle);
        tmp_truediv_expr_left_2 = par_end_angle;
        tmp_truediv_expr_right_2 = mod_consts[1];
        tmp_mult_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_segments);
        tmp_mult_expr_right_2 = par_num_segments;
        tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_end_segment == NULL);
        var_end_segment = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_start_segment);
        tmp_xrange_low_1 = var_start_segment;
        CHECK_OBJECT(var_end_segment);
        tmp_add_expr_left_1 = var_end_segment;
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 66;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_segment;
            var_segment = tmp_assign_source_6;
            Py_INCREF(var_segment);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_mult_expr_left_3 = mod_consts[3];
        CHECK_OBJECT(var_segment);
        tmp_mult_expr_right_3 = var_segment;
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_num_segments == NULL) {
            Py_DECREF(tmp_truediv_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_right_3 = par_num_segments;
        tmp_assign_source_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_theta;
            var_theta = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (par_width == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_4 = par_width;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_1 = var_theta;
        frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame.f_lineno = 69;
        tmp_mult_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[7], tmp_args_element_value_1);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_right_4 = mod_consts[8];
        tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (par_height == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_5 = par_height;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_2 = var_theta;
        frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame.f_lineno = 70;
        tmp_mult_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[10], tmp_args_element_value_2);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_truediv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_right_5 = mod_consts[8];
        tmp_assign_source_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_left_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        if (var_unrotated_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = var_unrotated_point_list;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_x);
        tmp_list_element_1 = var_x;
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
        CHECK_OBJECT(var_y);
        tmp_list_element_1 = var_y;
        PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_1);
        frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 66;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_tilt_angle);
        tmp_cmp_expr_left_1 = par_tilt_angle;
        tmp_cmp_expr_right_1 = mod_consts[13];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        if (var_unrotated_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_10 = var_unrotated_point_list;
        assert(var_uncentered_point_list == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_uncentered_point_list = tmp_assign_source_10;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_LIST_EMPTY(0);
        assert(var_uncentered_point_list == NULL);
        var_uncentered_point_list = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        if (var_unrotated_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = var_unrotated_point_list;
        tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 78;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_14 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_14;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (var_uncentered_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_2 = var_uncentered_point_list;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_3 = var_point;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_4 = var_point;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_7 = mod_consts[13];
        tmp_args_element_value_8 = mod_consts[13];
        if (par_tilt_angle == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_9 = par_tilt_angle;
        frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame.f_lineno = 79;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 78;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_LIST_EMPTY(0);
        assert(var_point_list == NULL);
        var_point_list = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_3;
        if (var_uncentered_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_3 = var_uncentered_point_list;
        tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 82;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_18 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_18;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        if (var_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_5 = var_point_list;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_6 = var_point;
        tmp_subscript_value_3 = mod_consts[13];
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_3, 0);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (par_center_x == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_add_expr_right_2 = par_center_x;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_args_element_value_10, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_point);
            tmp_expression_value_7 = var_point;
            tmp_subscript_value_4 = mod_consts[2];
            tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_4, 1);
            if (tmp_add_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            if (par_center_y == NULL) {
                Py_DECREF(tmp_add_expr_left_3);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 83;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_add_expr_right_3 = par_center_y;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_10, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_10);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame.f_lineno = 83;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 82;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_8;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_12 = par_color;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[22]);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48b474d3ecfd06e4017a33b21402e0d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48b474d3ecfd06e4017a33b21402e0d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48b474d3ecfd06e4017a33b21402e0d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48b474d3ecfd06e4017a33b21402e0d4,
        type_description_1,
        par_center_x,
        par_center_y,
        par_width,
        par_height,
        par_color,
        par_start_angle,
        par_end_angle,
        par_tilt_angle,
        par_num_segments,
        var_unrotated_point_list,
        var_start_segment,
        var_end_segment,
        var_segment,
        var_theta,
        var_x,
        var_y,
        var_uncentered_point_list,
        var_point,
        var_point_list
    );


    // Release cached frame if used for exception.
    if (frame_48b474d3ecfd06e4017a33b21402e0d4 == cache_frame_48b474d3ecfd06e4017a33b21402e0d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48b474d3ecfd06e4017a33b21402e0d4);
        cache_frame_48b474d3ecfd06e4017a33b21402e0d4 = NULL;
    }

    assertFrameObject(frame_48b474d3ecfd06e4017a33b21402e0d4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_unrotated_point_list);
    var_unrotated_point_list = NULL;
    CHECK_OBJECT(var_start_segment);
    Py_DECREF(var_start_segment);
    var_start_segment = NULL;
    CHECK_OBJECT(var_end_segment);
    Py_DECREF(var_end_segment);
    var_end_segment = NULL;
    Py_XDECREF(var_segment);
    var_segment = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_uncentered_point_list);
    var_uncentered_point_list = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_point_list);
    var_point_list = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_unrotated_point_list);
    var_unrotated_point_list = NULL;
    Py_XDECREF(var_start_segment);
    var_start_segment = NULL;
    Py_XDECREF(var_end_segment);
    var_end_segment = NULL;
    Py_XDECREF(var_segment);
    var_segment = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_uncentered_point_list);
    var_uncentered_point_list = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_point_list);
    var_point_list = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_start_angle);
    Py_DECREF(par_start_angle);
    CHECK_OBJECT(par_end_angle);
    Py_DECREF(par_end_angle);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_start_angle);
    Py_DECREF(par_start_angle);
    CHECK_OBJECT(par_end_angle);
    Py_DECREF(par_end_angle);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__2_draw_arc_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_start_angle = python_pars[5];
    PyObject *par_end_angle = python_pars[6];
    PyObject *par_border_width = python_pars[7];
    PyObject *par_tilt_angle = python_pars[8];
    PyObject *par_num_segments = python_pars[9];
    PyObject *var_unrotated_point_list = NULL;
    PyObject *var_start_segment = NULL;
    PyObject *var_end_segment = NULL;
    PyObject *var_inside_width = NULL;
    PyObject *var_outside_width = NULL;
    PyObject *var_inside_height = NULL;
    PyObject *var_outside_height = NULL;
    PyObject *var_segment = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_x1 = NULL;
    PyObject *var_y1 = NULL;
    PyObject *var_x2 = NULL;
    PyObject *var_y2 = NULL;
    PyObject *var_uncentered_point_list = NULL;
    PyObject *var_point = NULL;
    PyObject *var_point_list = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_649eb054ce92861093195308f24ca615;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_649eb054ce92861093195308f24ca615 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_unrotated_point_list == NULL);
        var_unrotated_point_list = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_649eb054ce92861093195308f24ca615)) {
        Py_XDECREF(cache_frame_649eb054ce92861093195308f24ca615);

#if _DEBUG_REFCOUNTS
        if (cache_frame_649eb054ce92861093195308f24ca615 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_649eb054ce92861093195308f24ca615 = MAKE_FUNCTION_FRAME(tstate, codeobj_649eb054ce92861093195308f24ca615, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_649eb054ce92861093195308f24ca615->m_type_description == NULL);
    frame_649eb054ce92861093195308f24ca615 = cache_frame_649eb054ce92861093195308f24ca615;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_649eb054ce92861093195308f24ca615);
    assert(Py_REFCNT(frame_649eb054ce92861093195308f24ca615) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_start_angle);
        tmp_truediv_expr_left_1 = par_start_angle;
        tmp_truediv_expr_right_1 = mod_consts[1];
        tmp_mult_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_segments);
        tmp_mult_expr_right_1 = par_num_segments;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_start_segment == NULL);
        var_start_segment = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(par_end_angle);
        tmp_truediv_expr_left_2 = par_end_angle;
        tmp_truediv_expr_right_2 = mod_consts[1];
        tmp_mult_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_segments);
        tmp_mult_expr_right_2 = par_num_segments;
        tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_end_segment == NULL);
        var_end_segment = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        CHECK_OBJECT(par_width);
        tmp_sub_expr_left_1 = par_width;
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_4 = par_border_width;
        tmp_truediv_expr_right_4 = mod_consts[8];
        tmp_sub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[8];
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inside_width == NULL);
        var_inside_width = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        CHECK_OBJECT(par_width);
        tmp_add_expr_left_1 = par_width;
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_6 = par_border_width;
        tmp_truediv_expr_right_6 = mod_consts[8];
        tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_5 = mod_consts[8];
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_left_5);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outside_width == NULL);
        var_outside_width = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_truediv_expr_left_7;
        PyObject *tmp_truediv_expr_right_7;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        CHECK_OBJECT(par_height);
        tmp_sub_expr_left_2 = par_height;
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_8 = par_border_width;
        tmp_truediv_expr_right_8 = mod_consts[8];
        tmp_sub_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_truediv_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_7 = mod_consts[8];
        tmp_assign_source_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
        Py_DECREF(tmp_truediv_expr_left_7);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inside_height == NULL);
        var_inside_height = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_truediv_expr_left_9;
        PyObject *tmp_truediv_expr_right_9;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_truediv_expr_left_10;
        PyObject *tmp_truediv_expr_right_10;
        CHECK_OBJECT(par_height);
        tmp_add_expr_left_2 = par_height;
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_10 = par_border_width;
        tmp_truediv_expr_right_10 = mod_consts[8];
        tmp_add_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_truediv_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_9 = mod_consts[8];
        tmp_assign_source_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
        Py_DECREF(tmp_truediv_expr_left_9);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outside_height == NULL);
        var_outside_height = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(var_start_segment);
        tmp_xrange_low_1 = var_start_segment;
        CHECK_OBJECT(var_end_segment);
        tmp_add_expr_left_3 = var_end_segment;
        tmp_add_expr_right_3 = mod_consts[2];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_xrange_high_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 119;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_segment;
            var_segment = tmp_assign_source_10;
            Py_INCREF(var_segment);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_truediv_expr_left_11;
        PyObject *tmp_truediv_expr_right_11;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_1;
        tmp_mult_expr_left_4 = mod_consts[24];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_segment);
        tmp_mult_expr_right_3 = var_segment;
        tmp_truediv_expr_left_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_truediv_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_num_segments == NULL) {
            Py_DECREF(tmp_truediv_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_right_11 = par_num_segments;
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_11, tmp_truediv_expr_right_11);
        Py_DECREF(tmp_truediv_expr_left_11);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_theta;
            var_theta = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (var_inside_width == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_5 = var_inside_width;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_1 = var_theta;
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 122;
        tmp_mult_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[7], tmp_args_element_value_1);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_x1;
            var_x1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (var_inside_height == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_6 = var_inside_height;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_2 = var_theta;
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 123;
        tmp_mult_expr_right_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[10], tmp_args_element_value_2);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_y1;
            var_y1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        if (var_outside_width == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_7 = var_outside_width;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_3 = var_theta;
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 125;
        tmp_mult_expr_right_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[7], tmp_args_element_value_3);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_x2;
            var_x2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        if (var_outside_height == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_8 = var_outside_height;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_4 = var_theta;
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 126;
        tmp_mult_expr_right_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[10], tmp_args_element_value_4);
        if (tmp_mult_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_right_8);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_y2;
            var_y2 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_list_element_1;
        if (var_unrotated_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_unrotated_point_list;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_x1);
        tmp_list_element_1 = var_x1;
        tmp_args_element_value_5 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_5, 0, tmp_list_element_1);
        CHECK_OBJECT(var_y1);
        tmp_list_element_1 = var_y1;
        PyList_SET_ITEM0(tmp_args_element_value_5, 1, tmp_list_element_1);
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 128;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_list_element_2;
        if (var_unrotated_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_unrotated_point_list;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_x2);
        tmp_list_element_2 = var_x2;
        tmp_args_element_value_6 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_6, 0, tmp_list_element_2);
        CHECK_OBJECT(var_y2);
        tmp_list_element_2 = var_y2;
        PyList_SET_ITEM0(tmp_args_element_value_6, 1, tmp_list_element_2);
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 129;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 119;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_tilt_angle);
        tmp_cmp_expr_left_1 = par_tilt_angle;
        tmp_cmp_expr_right_1 = mod_consts[13];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_16;
        if (var_unrotated_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_16 = var_unrotated_point_list;
        assert(var_uncentered_point_list == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_uncentered_point_list = tmp_assign_source_16;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_LIST_EMPTY(0);
        assert(var_uncentered_point_list == NULL);
        var_uncentered_point_list = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        if (var_unrotated_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = var_unrotated_point_list;
        tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_18;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 135;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_20 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_20;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        if (var_uncentered_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_4 = var_uncentered_point_list;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_5 = var_point;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_6 = var_point;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_10 = mod_consts[13];
        tmp_args_element_value_11 = mod_consts[13];
        if (par_tilt_angle == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_12 = par_tilt_angle;
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 136;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 135;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
        assert(var_point_list == NULL);
        var_point_list = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_3;
        if (var_uncentered_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_3 = var_uncentered_point_list;
        tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 139;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_24 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_24;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        if (var_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_7 = var_point_list;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_8 = var_point;
        tmp_subscript_value_3 = mod_consts[13];
        tmp_add_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (par_center_x == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_add_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_add_expr_right_4 = par_center_x;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_point);
            tmp_expression_value_9 = var_point;
            tmp_subscript_value_4 = mod_consts[2];
            tmp_add_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 1);
            if (tmp_add_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            if (par_center_y == NULL) {
                Py_DECREF(tmp_add_expr_left_5);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_add_expr_right_5 = par_center_y;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
            Py_DECREF(tmp_add_expr_left_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_13);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 140;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 139;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_10;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_15 = par_color;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[30]);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_649eb054ce92861093195308f24ca615->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_649eb054ce92861093195308f24ca615, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_649eb054ce92861093195308f24ca615->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_649eb054ce92861093195308f24ca615, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_649eb054ce92861093195308f24ca615,
        type_description_1,
        par_center_x,
        par_center_y,
        par_width,
        par_height,
        par_color,
        par_start_angle,
        par_end_angle,
        par_border_width,
        par_tilt_angle,
        par_num_segments,
        var_unrotated_point_list,
        var_start_segment,
        var_end_segment,
        var_inside_width,
        var_outside_width,
        var_inside_height,
        var_outside_height,
        var_segment,
        var_theta,
        var_x1,
        var_y1,
        var_x2,
        var_y2,
        var_uncentered_point_list,
        var_point,
        var_point_list
    );


    // Release cached frame if used for exception.
    if (frame_649eb054ce92861093195308f24ca615 == cache_frame_649eb054ce92861093195308f24ca615) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_649eb054ce92861093195308f24ca615);
        cache_frame_649eb054ce92861093195308f24ca615 = NULL;
    }

    assertFrameObject(frame_649eb054ce92861093195308f24ca615);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_unrotated_point_list);
    var_unrotated_point_list = NULL;
    CHECK_OBJECT(var_start_segment);
    Py_DECREF(var_start_segment);
    var_start_segment = NULL;
    CHECK_OBJECT(var_end_segment);
    Py_DECREF(var_end_segment);
    var_end_segment = NULL;
    Py_XDECREF(var_inside_width);
    var_inside_width = NULL;
    Py_XDECREF(var_outside_width);
    var_outside_width = NULL;
    Py_XDECREF(var_inside_height);
    var_inside_height = NULL;
    Py_XDECREF(var_outside_height);
    var_outside_height = NULL;
    Py_XDECREF(var_segment);
    var_segment = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_x1);
    var_x1 = NULL;
    Py_XDECREF(var_y1);
    var_y1 = NULL;
    Py_XDECREF(var_x2);
    var_x2 = NULL;
    Py_XDECREF(var_y2);
    var_y2 = NULL;
    Py_XDECREF(var_uncentered_point_list);
    var_uncentered_point_list = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_point_list);
    var_point_list = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_unrotated_point_list);
    var_unrotated_point_list = NULL;
    Py_XDECREF(var_start_segment);
    var_start_segment = NULL;
    Py_XDECREF(var_end_segment);
    var_end_segment = NULL;
    Py_XDECREF(var_inside_width);
    var_inside_width = NULL;
    Py_XDECREF(var_outside_width);
    var_outside_width = NULL;
    Py_XDECREF(var_inside_height);
    var_inside_height = NULL;
    Py_XDECREF(var_outside_height);
    var_outside_height = NULL;
    Py_XDECREF(var_segment);
    var_segment = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_x1);
    var_x1 = NULL;
    Py_XDECREF(var_y1);
    var_y1 = NULL;
    Py_XDECREF(var_x2);
    var_x2 = NULL;
    Py_XDECREF(var_y2);
    var_y2 = NULL;
    Py_XDECREF(var_uncentered_point_list);
    var_uncentered_point_list = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_point_list);
    var_point_list = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_start_angle);
    Py_DECREF(par_start_angle);
    CHECK_OBJECT(par_end_angle);
    Py_DECREF(par_end_angle);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_start_angle);
    Py_DECREF(par_start_angle);
    CHECK_OBJECT(par_end_angle);
    Py_DECREF(par_end_angle);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__3_draw_parabola_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_start_x = python_pars[0];
    PyObject *par_start_y = python_pars[1];
    PyObject *par_end_x = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_tilt_angle = python_pars[5];
    PyObject *var_center_x = NULL;
    PyObject *var_center_y = NULL;
    PyObject *var_width = NULL;
    struct Nuitka_FrameObject *frame_5576f7de8039870cce4a685f9d8f3534;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5576f7de8039870cce4a685f9d8f3534 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5576f7de8039870cce4a685f9d8f3534)) {
        Py_XDECREF(cache_frame_5576f7de8039870cce4a685f9d8f3534);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5576f7de8039870cce4a685f9d8f3534 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5576f7de8039870cce4a685f9d8f3534 = MAKE_FUNCTION_FRAME(tstate, codeobj_5576f7de8039870cce4a685f9d8f3534, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5576f7de8039870cce4a685f9d8f3534->m_type_description == NULL);
    frame_5576f7de8039870cce4a685f9d8f3534 = cache_frame_5576f7de8039870cce4a685f9d8f3534;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5576f7de8039870cce4a685f9d8f3534);
    assert(Py_REFCNT(frame_5576f7de8039870cce4a685f9d8f3534) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_start_x);
        tmp_add_expr_left_1 = par_start_x;
        CHECK_OBJECT(par_end_x);
        tmp_add_expr_right_1 = par_end_x;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert(var_center_x == NULL);
        var_center_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_start_y);
        tmp_add_expr_left_2 = par_start_y;
        CHECK_OBJECT(par_height);
        tmp_add_expr_right_2 = par_height;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert(var_center_y == NULL);
        var_center_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_start_x);
        tmp_sub_expr_left_1 = par_start_x;
        CHECK_OBJECT(par_end_x);
        tmp_sub_expr_right_1 = par_end_x;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_center_x);
        tmp_args_element_value_1 = var_center_x;
        CHECK_OBJECT(var_center_y);
        tmp_args_element_value_2 = var_center_y;
        CHECK_OBJECT(var_width);
        tmp_args_element_value_3 = var_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_4 = par_height;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        tmp_args_element_value_6 = mod_consts[13];
        tmp_args_element_value_7 = mod_consts[33];
        CHECK_OBJECT(par_tilt_angle);
        tmp_args_element_value_8 = par_tilt_angle;
        frame_5576f7de8039870cce4a685f9d8f3534->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooNNo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5576f7de8039870cce4a685f9d8f3534, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5576f7de8039870cce4a685f9d8f3534->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5576f7de8039870cce4a685f9d8f3534, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5576f7de8039870cce4a685f9d8f3534,
        type_description_1,
        par_start_x,
        par_start_y,
        par_end_x,
        par_height,
        par_color,
        par_tilt_angle,
        var_center_x,
        var_center_y,
        NULL,
        NULL,
        var_width
    );


    // Release cached frame if used for exception.
    if (frame_5576f7de8039870cce4a685f9d8f3534 == cache_frame_5576f7de8039870cce4a685f9d8f3534) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5576f7de8039870cce4a685f9d8f3534);
        cache_frame_5576f7de8039870cce4a685f9d8f3534 = NULL;
    }

    assertFrameObject(frame_5576f7de8039870cce4a685f9d8f3534);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_center_x);
    Py_DECREF(var_center_x);
    var_center_x = NULL;
    CHECK_OBJECT(var_center_y);
    Py_DECREF(var_center_y);
    var_center_y = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_center_x);
    var_center_x = NULL;
    Py_XDECREF(var_center_y);
    var_center_y = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_end_x);
    Py_DECREF(par_end_x);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_end_x);
    Py_DECREF(par_end_x);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__4_draw_parabola_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_start_x = python_pars[0];
    PyObject *par_start_y = python_pars[1];
    PyObject *par_end_x = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_border_width = python_pars[5];
    PyObject *par_tilt_angle = python_pars[6];
    PyObject *var_center_x = NULL;
    PyObject *var_center_y = NULL;
    PyObject *var_width = NULL;
    struct Nuitka_FrameObject *frame_ae3896fca990503b46021040d22af441;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ae3896fca990503b46021040d22af441 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ae3896fca990503b46021040d22af441)) {
        Py_XDECREF(cache_frame_ae3896fca990503b46021040d22af441);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae3896fca990503b46021040d22af441 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae3896fca990503b46021040d22af441 = MAKE_FUNCTION_FRAME(tstate, codeobj_ae3896fca990503b46021040d22af441, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae3896fca990503b46021040d22af441->m_type_description == NULL);
    frame_ae3896fca990503b46021040d22af441 = cache_frame_ae3896fca990503b46021040d22af441;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ae3896fca990503b46021040d22af441);
    assert(Py_REFCNT(frame_ae3896fca990503b46021040d22af441) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_start_x);
        tmp_add_expr_left_1 = par_start_x;
        CHECK_OBJECT(par_end_x);
        tmp_add_expr_right_1 = par_end_x;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert(var_center_x == NULL);
        var_center_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_start_y);
        tmp_add_expr_left_2 = par_start_y;
        CHECK_OBJECT(par_height);
        tmp_add_expr_right_2 = par_height;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert(var_center_y == NULL);
        var_center_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_start_x);
        tmp_sub_expr_left_1 = par_start_x;
        CHECK_OBJECT(par_end_x);
        tmp_sub_expr_right_1 = par_end_x;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_center_x);
        tmp_args_element_value_1 = var_center_x;
        CHECK_OBJECT(var_center_y);
        tmp_args_element_value_2 = var_center_y;
        CHECK_OBJECT(var_width);
        tmp_args_element_value_3 = var_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_4 = par_height;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        tmp_args_element_value_6 = mod_consts[13];
        tmp_args_element_value_7 = mod_consts[33];
        CHECK_OBJECT(par_border_width);
        tmp_args_element_value_8 = par_border_width;
        CHECK_OBJECT(par_tilt_angle);
        tmp_args_element_value_9 = par_tilt_angle;
        frame_ae3896fca990503b46021040d22af441->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooNNo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae3896fca990503b46021040d22af441, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae3896fca990503b46021040d22af441->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae3896fca990503b46021040d22af441, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae3896fca990503b46021040d22af441,
        type_description_1,
        par_start_x,
        par_start_y,
        par_end_x,
        par_height,
        par_color,
        par_border_width,
        par_tilt_angle,
        var_center_x,
        var_center_y,
        NULL,
        NULL,
        var_width
    );


    // Release cached frame if used for exception.
    if (frame_ae3896fca990503b46021040d22af441 == cache_frame_ae3896fca990503b46021040d22af441) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae3896fca990503b46021040d22af441);
        cache_frame_ae3896fca990503b46021040d22af441 = NULL;
    }

    assertFrameObject(frame_ae3896fca990503b46021040d22af441);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_center_x);
    Py_DECREF(var_center_x);
    var_center_x = NULL;
    CHECK_OBJECT(var_center_y);
    Py_DECREF(var_center_y);
    var_center_y = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_center_x);
    var_center_x = NULL;
    Py_XDECREF(var_center_y);
    var_center_y = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_end_x);
    Py_DECREF(par_end_x);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_end_x);
    Py_DECREF(par_end_x);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__5_draw_circle_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_radius = python_pars[2];
    PyObject *par_color = python_pars[3];
    PyObject *par_tilt_angle = python_pars[4];
    PyObject *par_num_segments = python_pars[5];
    struct Nuitka_FrameObject *frame_c7ecaf82122c691f6a899355477cbdcd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c7ecaf82122c691f6a899355477cbdcd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c7ecaf82122c691f6a899355477cbdcd)) {
        Py_XDECREF(cache_frame_c7ecaf82122c691f6a899355477cbdcd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7ecaf82122c691f6a899355477cbdcd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7ecaf82122c691f6a899355477cbdcd = MAKE_FUNCTION_FRAME(tstate, codeobj_c7ecaf82122c691f6a899355477cbdcd, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7ecaf82122c691f6a899355477cbdcd->m_type_description == NULL);
    frame_c7ecaf82122c691f6a899355477cbdcd = cache_frame_c7ecaf82122c691f6a899355477cbdcd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c7ecaf82122c691f6a899355477cbdcd);
    assert(Py_REFCNT(frame_c7ecaf82122c691f6a899355477cbdcd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_center_x);
        tmp_kw_call_arg_value_0_1 = par_center_x;
        CHECK_OBJECT(par_center_y);
        tmp_kw_call_arg_value_1_1 = par_center_y;
        CHECK_OBJECT(par_radius);
        tmp_mult_expr_left_1 = par_radius;
        tmp_mult_expr_right_1 = mod_consts[8];
        tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_radius);
        tmp_mult_expr_left_2 = par_radius;
        tmp_mult_expr_right_2 = mod_consts[8];
        tmp_kw_call_arg_value_3_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 219;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_kw_call_arg_value_4_1 = par_color;
        CHECK_OBJECT(par_tilt_angle);
        tmp_kw_call_dict_value_0_1 = par_tilt_angle;
        CHECK_OBJECT(par_num_segments);
        tmp_kw_call_dict_value_1_1 = par_num_segments;
        frame_c7ecaf82122c691f6a899355477cbdcd->m_frame.f_lineno = 219;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7ecaf82122c691f6a899355477cbdcd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7ecaf82122c691f6a899355477cbdcd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7ecaf82122c691f6a899355477cbdcd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7ecaf82122c691f6a899355477cbdcd,
        type_description_1,
        par_center_x,
        par_center_y,
        par_radius,
        par_color,
        par_tilt_angle,
        par_num_segments
    );


    // Release cached frame if used for exception.
    if (frame_c7ecaf82122c691f6a899355477cbdcd == cache_frame_c7ecaf82122c691f6a899355477cbdcd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7ecaf82122c691f6a899355477cbdcd);
        cache_frame_c7ecaf82122c691f6a899355477cbdcd = NULL;
    }

    assertFrameObject(frame_c7ecaf82122c691f6a899355477cbdcd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_radius);
    Py_DECREF(par_radius);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_radius);
    Py_DECREF(par_radius);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__6_draw_circle_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_radius = python_pars[2];
    PyObject *par_color = python_pars[3];
    PyObject *par_border_width = python_pars[4];
    PyObject *par_tilt_angle = python_pars[5];
    PyObject *par_num_segments = python_pars[6];
    struct Nuitka_FrameObject *frame_f2bcb33b2c9c666a9ba85ae80edead2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c)) {
        Py_XDECREF(cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c = MAKE_FUNCTION_FRAME(tstate, codeobj_f2bcb33b2c9c666a9ba85ae80edead2c, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c->m_type_description == NULL);
    frame_f2bcb33b2c9c666a9ba85ae80edead2c = cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f2bcb33b2c9c666a9ba85ae80edead2c);
    assert(Py_REFCNT(frame_f2bcb33b2c9c666a9ba85ae80edead2c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_center_x);
        tmp_kw_call_value_0_1 = par_center_x;
        CHECK_OBJECT(par_center_y);
        tmp_kw_call_value_1_1 = par_center_y;
        CHECK_OBJECT(par_radius);
        tmp_mult_expr_left_1 = par_radius;
        tmp_mult_expr_right_1 = mod_consts[8];
        tmp_kw_call_value_2_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_radius);
        tmp_mult_expr_left_2 = par_radius;
        tmp_mult_expr_right_2 = mod_consts[8];
        tmp_kw_call_value_3_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_kw_call_value_4_1 = par_color;
        CHECK_OBJECT(par_border_width);
        tmp_kw_call_value_5_1 = par_border_width;
        CHECK_OBJECT(par_tilt_angle);
        tmp_kw_call_value_6_1 = par_tilt_angle;
        CHECK_OBJECT(par_num_segments);
        tmp_kw_call_value_7_1 = par_num_segments;
        frame_f2bcb33b2c9c666a9ba85ae80edead2c->m_frame.f_lineno = 243;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[41]);
        }

        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2bcb33b2c9c666a9ba85ae80edead2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2bcb33b2c9c666a9ba85ae80edead2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2bcb33b2c9c666a9ba85ae80edead2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2bcb33b2c9c666a9ba85ae80edead2c,
        type_description_1,
        par_center_x,
        par_center_y,
        par_radius,
        par_color,
        par_border_width,
        par_tilt_angle,
        par_num_segments
    );


    // Release cached frame if used for exception.
    if (frame_f2bcb33b2c9c666a9ba85ae80edead2c == cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c);
        cache_frame_f2bcb33b2c9c666a9ba85ae80edead2c = NULL;
    }

    assertFrameObject(frame_f2bcb33b2c9c666a9ba85ae80edead2c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_radius);
    Py_DECREF(par_radius);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_radius);
    Py_DECREF(par_radius);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__7_draw_ellipse_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_tilt_angle = python_pars[5];
    PyObject *par_num_segments = python_pars[6];
    PyObject *var_window = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_program = NULL;
    PyObject *var_geometry = NULL;
    PyObject *var_buffer = NULL;
    PyObject *var_color_normalized = NULL;
    struct Nuitka_FrameObject *frame_9eadd2e35dfbb911baac33471ce90862;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9eadd2e35dfbb911baac33471ce90862 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9eadd2e35dfbb911baac33471ce90862)) {
        Py_XDECREF(cache_frame_9eadd2e35dfbb911baac33471ce90862);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9eadd2e35dfbb911baac33471ce90862 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9eadd2e35dfbb911baac33471ce90862 = MAKE_FUNCTION_FRAME(tstate, codeobj_9eadd2e35dfbb911baac33471ce90862, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9eadd2e35dfbb911baac33471ce90862->m_type_description == NULL);
    frame_9eadd2e35dfbb911baac33471ce90862 = cache_frame_9eadd2e35dfbb911baac33471ce90862;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9eadd2e35dfbb911baac33471ce90862);
    assert(Py_REFCNT(frame_9eadd2e35dfbb911baac33471ce90862) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9eadd2e35dfbb911baac33471ce90862->m_frame.f_lineno = 273;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[45]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program == NULL);
        var_program = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[46]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geometry == NULL);
        var_geometry = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_4 = var_ctx;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[47]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_color);
        tmp_len_arg_1 = par_color;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 3;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_color);
        tmp_expression_value_5 = par_color;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[48];
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_6 = par_color;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_7 = par_color;
            tmp_subscript_value_3 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_3 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_assign_source_6, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_6;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_color);
        tmp_len_arg_2 = par_color;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_color);
        tmp_expression_value_8 = par_color;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[48];
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_9 = par_color;
            tmp_subscript_value_5 = mod_consts[2];
            tmp_truediv_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 1);
            if (tmp_truediv_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_5 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_10 = par_color;
            tmp_subscript_value_6 = mod_consts[8];
            tmp_truediv_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 2);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_6 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_11 = par_color;
            tmp_subscript_value_7 = mod_consts[50];
            tmp_truediv_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 3);
            if (tmp_truediv_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_7 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            Py_DECREF(tmp_truediv_expr_left_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_9eadd2e35dfbb911baac33471ce90862->m_frame.f_lineno = 285;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 285;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_color_normalized);
        tmp_ass_subvalue_1 = var_color_normalized;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_1 = var_program;
        tmp_ass_subscript_1 = mod_consts[52];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_8 = par_width;
        tmp_truediv_expr_right_8 = mod_consts[8];
        tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_truediv_expr_left_9;
            PyObject *tmp_truediv_expr_right_9;
            PyTuple_SET_ITEM(tmp_ass_subvalue_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_9 = par_height;
            tmp_truediv_expr_right_9 = mod_consts[8];
            tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_ass_subvalue_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(par_tilt_angle);
            tmp_tuple_element_3 = par_tilt_angle;
            PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_ass_subvalue_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_2 = var_program;
        tmp_ass_subscript_2 = mod_consts[53];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_num_segments);
        tmp_ass_subvalue_3 = par_num_segments;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_3 = var_program;
        tmp_ass_subscript_3 = mod_consts[54];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_12 = var_buffer;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[57];
        CHECK_OBJECT(par_center_x);
        tmp_tuple_element_4 = par_center_x;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_center_y);
        tmp_tuple_element_4 = par_center_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_4);
        frame_9eadd2e35dfbb911baac33471ce90862->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9eadd2e35dfbb911baac33471ce90862->m_frame.f_lineno = 290;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(var_geometry);
        tmp_expression_value_13 = var_geometry;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[59]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program);
        tmp_kw_call_arg_value_0_1 = var_program;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[60]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[2];
        frame_9eadd2e35dfbb911baac33471ce90862->m_frame.f_lineno = 292;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9eadd2e35dfbb911baac33471ce90862, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9eadd2e35dfbb911baac33471ce90862->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9eadd2e35dfbb911baac33471ce90862, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9eadd2e35dfbb911baac33471ce90862,
        type_description_1,
        par_center_x,
        par_center_y,
        par_width,
        par_height,
        par_color,
        par_tilt_angle,
        par_num_segments,
        var_window,
        var_ctx,
        var_program,
        var_geometry,
        var_buffer,
        var_color_normalized
    );


    // Release cached frame if used for exception.
    if (frame_9eadd2e35dfbb911baac33471ce90862 == cache_frame_9eadd2e35dfbb911baac33471ce90862) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9eadd2e35dfbb911baac33471ce90862);
        cache_frame_9eadd2e35dfbb911baac33471ce90862 = NULL;
    }

    assertFrameObject(frame_9eadd2e35dfbb911baac33471ce90862);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_program);
    Py_DECREF(var_program);
    var_program = NULL;
    CHECK_OBJECT(var_geometry);
    Py_DECREF(var_geometry);
    var_geometry = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_color_normalized);
    Py_DECREF(var_color_normalized);
    var_color_normalized = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_program);
    var_program = NULL;
    Py_XDECREF(var_geometry);
    var_geometry = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_color_normalized);
    var_color_normalized = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__8_draw_ellipse_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_border_width = python_pars[5];
    PyObject *par_tilt_angle = python_pars[6];
    PyObject *par_num_segments = python_pars[7];
    PyObject *var_window = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_program = NULL;
    PyObject *var_geometry = NULL;
    PyObject *var_buffer = NULL;
    PyObject *var_color_normalized = NULL;
    struct Nuitka_FrameObject *frame_356f62113a5a347bf6a1c82dfdebf3d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_356f62113a5a347bf6a1c82dfdebf3d2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_356f62113a5a347bf6a1c82dfdebf3d2)) {
        Py_XDECREF(cache_frame_356f62113a5a347bf6a1c82dfdebf3d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_356f62113a5a347bf6a1c82dfdebf3d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_356f62113a5a347bf6a1c82dfdebf3d2 = MAKE_FUNCTION_FRAME(tstate, codeobj_356f62113a5a347bf6a1c82dfdebf3d2, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_356f62113a5a347bf6a1c82dfdebf3d2->m_type_description == NULL);
    frame_356f62113a5a347bf6a1c82dfdebf3d2 = cache_frame_356f62113a5a347bf6a1c82dfdebf3d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_356f62113a5a347bf6a1c82dfdebf3d2);
    assert(Py_REFCNT(frame_356f62113a5a347bf6a1c82dfdebf3d2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_356f62113a5a347bf6a1c82dfdebf3d2->m_frame.f_lineno = 318;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[63]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program == NULL);
        var_program = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[64]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geometry == NULL);
        var_geometry = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_4 = var_ctx;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[65]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_color);
        tmp_len_arg_1 = par_color;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 3;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_color);
        tmp_expression_value_5 = par_color;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[48];
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_6 = par_color;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_7 = par_color;
            tmp_subscript_value_3 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_3 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_assign_source_6, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_6;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_color);
        tmp_len_arg_2 = par_color;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_color);
        tmp_expression_value_8 = par_color;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[48];
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_9 = par_color;
            tmp_subscript_value_5 = mod_consts[2];
            tmp_truediv_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 1);
            if (tmp_truediv_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_5 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_10 = par_color;
            tmp_subscript_value_6 = mod_consts[8];
            tmp_truediv_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 2);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_6 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_11 = par_color;
            tmp_subscript_value_7 = mod_consts[50];
            tmp_truediv_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 3);
            if (tmp_truediv_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_7 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            Py_DECREF(tmp_truediv_expr_left_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_356f62113a5a347bf6a1c82dfdebf3d2->m_frame.f_lineno = 330;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 330;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_color_normalized);
        tmp_ass_subvalue_1 = var_color_normalized;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_1 = var_program;
        tmp_ass_subscript_1 = mod_consts[52];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_8 = par_width;
        tmp_truediv_expr_right_8 = mod_consts[8];
        tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_9;
            PyObject *tmp_truediv_expr_right_9;
            PyTuple_SET_ITEM(tmp_ass_subvalue_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_9 = par_height;
            tmp_truediv_expr_right_9 = mod_consts[8];
            tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_ass_subvalue_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(par_tilt_angle);
            tmp_tuple_element_3 = par_tilt_angle;
            PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_border_width);
            tmp_tuple_element_3 = par_border_width;
            PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_ass_subvalue_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_2 = var_program;
        tmp_ass_subscript_2 = mod_consts[53];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_num_segments);
        tmp_ass_subvalue_3 = par_num_segments;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_3 = var_program;
        tmp_ass_subscript_3 = mod_consts[54];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_12 = var_buffer;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 335;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[57];
        CHECK_OBJECT(par_center_x);
        tmp_tuple_element_4 = par_center_x;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_center_y);
        tmp_tuple_element_4 = par_center_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_4);
        frame_356f62113a5a347bf6a1c82dfdebf3d2->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 335;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_356f62113a5a347bf6a1c82dfdebf3d2->m_frame.f_lineno = 335;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(var_geometry);
        tmp_expression_value_13 = var_geometry;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[59]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program);
        tmp_kw_call_arg_value_0_1 = var_program;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 337;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[60]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 337;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[2];
        frame_356f62113a5a347bf6a1c82dfdebf3d2->m_frame.f_lineno = 337;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_356f62113a5a347bf6a1c82dfdebf3d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_356f62113a5a347bf6a1c82dfdebf3d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_356f62113a5a347bf6a1c82dfdebf3d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_356f62113a5a347bf6a1c82dfdebf3d2,
        type_description_1,
        par_center_x,
        par_center_y,
        par_width,
        par_height,
        par_color,
        par_border_width,
        par_tilt_angle,
        par_num_segments,
        var_window,
        var_ctx,
        var_program,
        var_geometry,
        var_buffer,
        var_color_normalized
    );


    // Release cached frame if used for exception.
    if (frame_356f62113a5a347bf6a1c82dfdebf3d2 == cache_frame_356f62113a5a347bf6a1c82dfdebf3d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_356f62113a5a347bf6a1c82dfdebf3d2);
        cache_frame_356f62113a5a347bf6a1c82dfdebf3d2 = NULL;
    }

    assertFrameObject(frame_356f62113a5a347bf6a1c82dfdebf3d2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_program);
    Py_DECREF(var_program);
    var_program = NULL;
    CHECK_OBJECT(var_geometry);
    Py_DECREF(var_geometry);
    var_geometry = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_color_normalized);
    Py_DECREF(var_color_normalized);
    var_color_normalized = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_program);
    var_program = NULL;
    Py_XDECREF(var_geometry);
    var_geometry = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_color_normalized);
    var_color_normalized = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    CHECK_OBJECT(par_num_segments);
    Py_DECREF(par_num_segments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__9__generic_draw_line_strip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_point_list = python_pars[0];
    PyObject *par_color = python_pars[1];
    PyObject *par_mode = python_pars[2];
    PyObject *var_window = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_c4 = NULL;
    PyObject *var_c4e = NULL;
    PyObject *var_a = NULL;
    PyObject *var_gen_flatten = NULL;
    PyObject *var_vertices = NULL;
    PyObject *var_geometry = NULL;
    PyObject *var_program = NULL;
    struct Nuitka_FrameObject *frame_0ad1b6d3985e598a2a0c38d5fa878feb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb)) {
        Py_XDECREF(cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb = MAKE_FUNCTION_FRAME(tstate, codeobj_0ad1b6d3985e598a2a0c38d5fa878feb, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_type_description == NULL);
    frame_0ad1b6d3985e598a2a0c38d5fa878feb = cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0ad1b6d3985e598a2a0c38d5fa878feb);
    assert(Py_REFCNT(frame_0ad1b6d3985e598a2a0c38d5fa878feb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 358;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_args_element_value_1 = par_color;
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 361;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c4 == NULL);
        var_c4 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_c4);
        tmp_mult_expr_left_1 = var_c4;
        CHECK_OBJECT(par_point_list);
        tmp_len_arg_1 = par_point_list;
        tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c4e == NULL);
        var_c4e = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[68];
        CHECK_OBJECT(var_c4e);
        tmp_args_element_value_3 = var_c4e;
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_arcade$draw_commands$$$function__9__generic_draw_line_strip$$$function__1_gen_flatten();

        assert(var_gen_flatten == NULL);
        var_gen_flatten = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[56]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[57];
        CHECK_OBJECT(var_gen_flatten);
        tmp_called_value_4 = var_gen_flatten;
        CHECK_OBJECT(par_point_list);
        tmp_args_element_value_6 = par_point_list;
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 368;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 368;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vertices == NULL);
        var_vertices = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[71]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geometry == NULL);
        var_geometry = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_4 = var_ctx;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[72]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program == NULL);
        var_program = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_point_list);
        tmp_len_arg_2 = par_point_list;
        tmp_assattr_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_geometry);
        tmp_assattr_target_1 = var_geometry;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[73], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_vertices);
        tmp_len_arg_3 = var_vertices;
        tmp_mult_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[74];
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        if (var_ctx == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_ctx;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[75]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 375;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[76]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 375;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_ctx;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[75]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[77]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_ctx == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_ctx;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[75]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[76]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[8];
        tmp_args_element_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 376;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_ctx;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[78]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[77]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_ctx == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_ctx;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[78]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[76]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_4 = mod_consts[8];
        tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 377;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 375;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 379;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = var_ctx;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[75]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vertices);
        tmp_args_element_value_9 = var_vertices;
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 379;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[55], tmp_args_element_value_9);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = var_ctx;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[78]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_a);
        tmp_args_element_value_10 = var_a;
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 380;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[55], tmp_args_element_value_10);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_geometry);
        tmp_expression_value_17 = var_geometry;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[59]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program);
        tmp_kw_call_arg_value_0_1 = var_program;
        CHECK_OBJECT(par_mode);
        tmp_kw_call_dict_value_0_1 = par_mode;
        frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame.f_lineno = 382;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[79]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ad1b6d3985e598a2a0c38d5fa878feb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ad1b6d3985e598a2a0c38d5fa878feb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ad1b6d3985e598a2a0c38d5fa878feb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ad1b6d3985e598a2a0c38d5fa878feb,
        type_description_1,
        par_point_list,
        par_color,
        par_mode,
        var_window,
        var_ctx,
        var_c4,
        var_c4e,
        var_a,
        var_gen_flatten,
        var_vertices,
        var_geometry,
        var_program
    );


    // Release cached frame if used for exception.
    if (frame_0ad1b6d3985e598a2a0c38d5fa878feb == cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb);
        cache_frame_0ad1b6d3985e598a2a0c38d5fa878feb = NULL;
    }

    assertFrameObject(frame_0ad1b6d3985e598a2a0c38d5fa878feb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_c4);
    Py_DECREF(var_c4);
    var_c4 = NULL;
    CHECK_OBJECT(var_c4e);
    Py_DECREF(var_c4e);
    var_c4e = NULL;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
    CHECK_OBJECT(var_gen_flatten);
    Py_DECREF(var_gen_flatten);
    var_gen_flatten = NULL;
    CHECK_OBJECT(var_vertices);
    Py_DECREF(var_vertices);
    var_vertices = NULL;
    CHECK_OBJECT(var_geometry);
    Py_DECREF(var_geometry);
    var_geometry = NULL;
    CHECK_OBJECT(var_program);
    Py_DECREF(var_program);
    var_program = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_c4);
    var_c4 = NULL;
    Py_XDECREF(var_c4e);
    var_c4e = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_gen_flatten);
    var_gen_flatten = NULL;
    Py_XDECREF(var_vertices);
    var_vertices = NULL;
    Py_XDECREF(var_geometry);
    var_geometry = NULL;
    Py_XDECREF(var_program);
    var_program = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__9__generic_draw_line_strip$$$function__1_gen_flatten(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_my_list = python_pars[0];
    PyObject *outline_0_var_sublist = NULL;
    PyObject *outline_0_var_item = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_b822802f24814a5b41bfbc0eab8a3f78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b822802f24814a5b41bfbc0eab8a3f78 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b822802f24814a5b41bfbc0eab8a3f78)) {
        Py_XDECREF(cache_frame_b822802f24814a5b41bfbc0eab8a3f78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b822802f24814a5b41bfbc0eab8a3f78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b822802f24814a5b41bfbc0eab8a3f78 = MAKE_FUNCTION_FRAME(tstate, codeobj_b822802f24814a5b41bfbc0eab8a3f78, module_arcade$draw_commands, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b822802f24814a5b41bfbc0eab8a3f78->m_type_description == NULL);
    frame_b822802f24814a5b41bfbc0eab8a3f78 = cache_frame_b822802f24814a5b41bfbc0eab8a3f78;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b822802f24814a5b41bfbc0eab8a3f78);
    assert(Py_REFCNT(frame_b822802f24814a5b41bfbc0eab8a3f78) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_my_list);
        tmp_iter_arg_1 = par_my_list;
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "o";
                exception_lineno = 366;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_1;
            tmp_listcomp_1__iter_value_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_1;
        {
            PyObject *old = outline_0_var_sublist;
            outline_0_var_sublist = tmp_assign_source_4;
            Py_INCREF(outline_0_var_sublist);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(outline_0_var_sublist);
        tmp_iter_arg_2 = outline_0_var_sublist;
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_listcomp_1__contraction_iter_0;
            tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "o";
                exception_lineno = 366;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_item;
            outline_0_var_item = tmp_assign_source_7;
            Py_INCREF(outline_0_var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_item);
        tmp_append_value_1 = outline_0_var_item;
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 366;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
    Py_DECREF(tmp_listcomp_1__contraction_iter_0);
    tmp_listcomp_1__contraction_iter_0 = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 366;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
    tmp_listcomp_1__contraction_iter_0 = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_1);
    tmp_listcomp_1__iter_value_1 = NULL;
    goto try_return_handler_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
    tmp_listcomp_1__contraction_iter_0 = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_1);
    tmp_listcomp_1__iter_value_1 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_sublist);
    outline_0_var_sublist = NULL;
    Py_XDECREF(outline_0_var_item);
    outline_0_var_item = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_sublist);
    outline_0_var_sublist = NULL;
    Py_XDECREF(outline_0_var_item);
    outline_0_var_item = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 366;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b822802f24814a5b41bfbc0eab8a3f78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b822802f24814a5b41bfbc0eab8a3f78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b822802f24814a5b41bfbc0eab8a3f78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b822802f24814a5b41bfbc0eab8a3f78,
        type_description_1,
        par_my_list
    );


    // Release cached frame if used for exception.
    if (frame_b822802f24814a5b41bfbc0eab8a3f78 == cache_frame_b822802f24814a5b41bfbc0eab8a3f78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b822802f24814a5b41bfbc0eab8a3f78);
        cache_frame_b822802f24814a5b41bfbc0eab8a3f78 = NULL;
    }

    assertFrameObject(frame_b822802f24814a5b41bfbc0eab8a3f78);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_my_list);
    Py_DECREF(par_my_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_my_list);
    Py_DECREF(par_my_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__10_draw_line_strip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_point_list = python_pars[0];
    PyObject *par_color = python_pars[1];
    PyObject *par_line_width = python_pars[2];
    PyObject *var_triangle_point_list = NULL;
    PyObject *var_last_point = NULL;
    PyObject *var_point = NULL;
    PyObject *var_points = NULL;
    PyObject *var_reordered_points = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_13de2a10df279ce228281468f10a0e5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_13de2a10df279ce228281468f10a0e5f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_13de2a10df279ce228281468f10a0e5f)) {
        Py_XDECREF(cache_frame_13de2a10df279ce228281468f10a0e5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13de2a10df279ce228281468f10a0e5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13de2a10df279ce228281468f10a0e5f = MAKE_FUNCTION_FRAME(tstate, codeobj_13de2a10df279ce228281468f10a0e5f, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_13de2a10df279ce228281468f10a0e5f->m_type_description == NULL);
    frame_13de2a10df279ce228281468f10a0e5f = cache_frame_13de2a10df279ce228281468f10a0e5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_13de2a10df279ce228281468f10a0e5f);
    assert(Py_REFCNT(frame_13de2a10df279ce228281468f10a0e5f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_line_width);
        tmp_cmp_expr_left_1 = par_line_width;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_point_list);
        tmp_args_element_value_1 = par_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_2 = par_color;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[81]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_13de2a10df279ce228281468f10a0e5f->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_triangle_point_list == NULL);
        var_triangle_point_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_last_point == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_last_point = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_point_list);
        tmp_iter_arg_1 = par_point_list;
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 400;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_5;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_last_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = var_last_point;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (var_last_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_last_point;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (var_last_point == NULL) {
            Py_DECREF(tmp_args_element_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_last_point;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_4 = var_point;
        tmp_subscript_value_3 = mod_consts[13];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_5 = var_point;
        tmp_subscript_value_4 = mod_consts[2];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (par_line_width == NULL) {
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = par_line_width;
        frame_13de2a10df279ce228281468f10a0e5f->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_points;
            var_points = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_points);
        tmp_expression_value_6 = var_points;
        tmp_subscript_value_5 = mod_consts[2];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_5, 1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_8;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_points);
            tmp_expression_value_7 = var_points;
            tmp_subscript_value_6 = mod_consts[13];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_6, 0);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_points);
            tmp_expression_value_8 = var_points;
            tmp_subscript_value_7 = mod_consts[8];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_7, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_points);
            tmp_expression_value_9 = var_points;
            tmp_subscript_value_8 = mod_consts[50];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_8, 3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_7);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        {
            PyObject *old = var_reordered_points;
            var_reordered_points = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_9;
        if (var_triangle_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 405;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = var_triangle_point_list;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[86]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_reordered_points);
        tmp_args_element_value_9 = var_reordered_points;
        frame_13de2a10df279ce228281468f10a0e5f->m_frame.f_lineno = 405;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(var_point);
        tmp_assign_source_8 = var_point;
        {
            PyObject *old = var_last_point;
            var_last_point = tmp_assign_source_8;
            Py_INCREF(var_last_point);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 400;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_11;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_triangle_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_triangle_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_11 = par_color;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[30]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_13de2a10df279ce228281468f10a0e5f->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_13de2a10df279ce228281468f10a0e5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13de2a10df279ce228281468f10a0e5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13de2a10df279ce228281468f10a0e5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13de2a10df279ce228281468f10a0e5f,
        type_description_1,
        par_point_list,
        par_color,
        par_line_width,
        var_triangle_point_list,
        var_last_point,
        var_point,
        var_points,
        var_reordered_points
    );


    // Release cached frame if used for exception.
    if (frame_13de2a10df279ce228281468f10a0e5f == cache_frame_13de2a10df279ce228281468f10a0e5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_13de2a10df279ce228281468f10a0e5f);
        cache_frame_13de2a10df279ce228281468f10a0e5f = NULL;
    }

    assertFrameObject(frame_13de2a10df279ce228281468f10a0e5f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_triangle_point_list);
    var_triangle_point_list = NULL;
    Py_XDECREF(var_last_point);
    var_last_point = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_points);
    var_points = NULL;
    Py_XDECREF(var_reordered_points);
    var_reordered_points = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_triangle_point_list);
    var_triangle_point_list = NULL;
    Py_XDECREF(var_last_point);
    var_last_point = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_points);
    var_points = NULL;
    Py_XDECREF(var_reordered_points);
    var_reordered_points = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__11_draw_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_start_x = python_pars[0];
    PyObject *par_start_y = python_pars[1];
    PyObject *par_end_x = python_pars[2];
    PyObject *par_end_y = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_line_width = python_pars[5];
    PyObject *var_window = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_program = NULL;
    PyObject *var_geometry = NULL;
    PyObject *var_color_normalized = NULL;
    struct Nuitka_FrameObject *frame_7f14034a8e6daa11bc3a6d577765c2e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7f14034a8e6daa11bc3a6d577765c2e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7f14034a8e6daa11bc3a6d577765c2e0)) {
        Py_XDECREF(cache_frame_7f14034a8e6daa11bc3a6d577765c2e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f14034a8e6daa11bc3a6d577765c2e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f14034a8e6daa11bc3a6d577765c2e0 = MAKE_FUNCTION_FRAME(tstate, codeobj_7f14034a8e6daa11bc3a6d577765c2e0, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f14034a8e6daa11bc3a6d577765c2e0->m_type_description == NULL);
    frame_7f14034a8e6daa11bc3a6d577765c2e0 = cache_frame_7f14034a8e6daa11bc3a6d577765c2e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7f14034a8e6daa11bc3a6d577765c2e0);
    assert(Py_REFCNT(frame_7f14034a8e6daa11bc3a6d577765c2e0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f14034a8e6daa11bc3a6d577765c2e0->m_frame.f_lineno = 423;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[88]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program == NULL);
        var_program = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[89]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geometry == NULL);
        var_geometry = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_color);
        tmp_len_arg_1 = par_color;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 3;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_color);
        tmp_expression_value_4 = par_color;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[48];
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_5 = par_color;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_5, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_6 = par_color;
            tmp_subscript_value_3 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_3, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_3 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_5, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_assign_source_5, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_5;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_color);
        tmp_len_arg_2 = par_color;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_color);
        tmp_expression_value_7 = par_color;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_4, 0);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[48];
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_8 = par_color;
            tmp_subscript_value_5 = mod_consts[2];
            tmp_truediv_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_5, 1);
            if (tmp_truediv_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_5 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_9 = par_color;
            tmp_subscript_value_6 = mod_consts[8];
            tmp_truediv_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_6, 2);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_6 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_10 = par_color;
            tmp_subscript_value_7 = mod_consts[50];
            tmp_truediv_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_7, 3);
            if (tmp_truediv_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_7 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            Py_DECREF(tmp_truediv_expr_left_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_6;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_7f14034a8e6daa11bc3a6d577765c2e0->m_frame.f_lineno = 434;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 434;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_line_width);
        tmp_ass_subvalue_1 = par_line_width;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_1 = var_program;
        tmp_ass_subscript_1 = mod_consts[84];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_color_normalized);
        tmp_ass_subvalue_2 = var_color_normalized;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_2 = var_program;
        tmp_ass_subscript_2 = mod_consts[52];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_12 = var_ctx;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[90]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[55]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 439;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[57];
        CHECK_OBJECT(par_start_x);
        tmp_list_element_1 = par_start_x;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
        CHECK_OBJECT(par_start_y);
        tmp_list_element_1 = par_start_y;
        PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
        CHECK_OBJECT(par_end_x);
        tmp_list_element_1 = par_end_x;
        PyList_SET_ITEM0(tmp_args_element_value_2, 2, tmp_list_element_1);
        CHECK_OBJECT(par_end_y);
        tmp_list_element_1 = par_end_y;
        PyList_SET_ITEM0(tmp_args_element_value_2, 3, tmp_list_element_1);
        frame_7f14034a8e6daa11bc3a6d577765c2e0->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 439;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f14034a8e6daa11bc3a6d577765c2e0->m_frame.f_lineno = 438;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(var_geometry);
        tmp_expression_value_13 = var_geometry;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[59]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program);
        tmp_kw_call_arg_value_0_1 = var_program;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 440;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[91]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 440;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[8];
        frame_7f14034a8e6daa11bc3a6d577765c2e0->m_frame.f_lineno = 440;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f14034a8e6daa11bc3a6d577765c2e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f14034a8e6daa11bc3a6d577765c2e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f14034a8e6daa11bc3a6d577765c2e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f14034a8e6daa11bc3a6d577765c2e0,
        type_description_1,
        par_start_x,
        par_start_y,
        par_end_x,
        par_end_y,
        par_color,
        par_line_width,
        var_window,
        var_ctx,
        var_program,
        var_geometry,
        var_color_normalized
    );


    // Release cached frame if used for exception.
    if (frame_7f14034a8e6daa11bc3a6d577765c2e0 == cache_frame_7f14034a8e6daa11bc3a6d577765c2e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f14034a8e6daa11bc3a6d577765c2e0);
        cache_frame_7f14034a8e6daa11bc3a6d577765c2e0 = NULL;
    }

    assertFrameObject(frame_7f14034a8e6daa11bc3a6d577765c2e0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_program);
    Py_DECREF(var_program);
    var_program = NULL;
    CHECK_OBJECT(var_geometry);
    Py_DECREF(var_geometry);
    var_geometry = NULL;
    CHECK_OBJECT(var_color_normalized);
    Py_DECREF(var_color_normalized);
    var_color_normalized = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_program);
    var_program = NULL;
    Py_XDECREF(var_geometry);
    var_geometry = NULL;
    Py_XDECREF(var_color_normalized);
    var_color_normalized = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_end_x);
    Py_DECREF(par_end_x);
    CHECK_OBJECT(par_end_y);
    Py_DECREF(par_end_y);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_end_x);
    Py_DECREF(par_end_x);
    CHECK_OBJECT(par_end_y);
    Py_DECREF(par_end_y);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__12_draw_lines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_point_list = python_pars[0];
    PyObject *par_color = python_pars[1];
    PyObject *par_line_width = python_pars[2];
    PyObject *var_window = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_program = NULL;
    PyObject *var_geometry = NULL;
    PyObject *var_color_normalized = NULL;
    PyObject *outline_0_var_point = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_7031eff880db8a71a7d1bbd192741280;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_7031eff880db8a71a7d1bbd192741280 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7031eff880db8a71a7d1bbd192741280)) {
        Py_XDECREF(cache_frame_7031eff880db8a71a7d1bbd192741280);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7031eff880db8a71a7d1bbd192741280 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7031eff880db8a71a7d1bbd192741280 = MAKE_FUNCTION_FRAME(tstate, codeobj_7031eff880db8a71a7d1bbd192741280, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7031eff880db8a71a7d1bbd192741280->m_type_description == NULL);
    frame_7031eff880db8a71a7d1bbd192741280 = cache_frame_7031eff880db8a71a7d1bbd192741280;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7031eff880db8a71a7d1bbd192741280);
    assert(Py_REFCNT(frame_7031eff880db8a71a7d1bbd192741280) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7031eff880db8a71a7d1bbd192741280->m_frame.f_lineno = 457;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[88]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program == NULL);
        var_program = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[89]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geometry == NULL);
        var_geometry = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_color);
        tmp_len_arg_1 = par_color;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 3;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_color);
        tmp_expression_value_4 = par_color;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[48];
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_5 = par_color;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_5, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_6 = par_color;
            tmp_subscript_value_3 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_3, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_3 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_5, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_assign_source_5, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_5;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_color);
        tmp_len_arg_2 = par_color;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_color);
        tmp_expression_value_7 = par_color;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_4, 0);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[48];
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_8 = par_color;
            tmp_subscript_value_5 = mod_consts[2];
            tmp_truediv_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_5, 1);
            if (tmp_truediv_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_5 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_9 = par_color;
            tmp_subscript_value_6 = mod_consts[8];
            tmp_truediv_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_6, 2);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_6 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_10 = par_color;
            tmp_subscript_value_7 = mod_consts[50];
            tmp_truediv_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_7, 3);
            if (tmp_truediv_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_7 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            Py_DECREF(tmp_truediv_expr_left_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_6;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_7031eff880db8a71a7d1bbd192741280->m_frame.f_lineno = 468;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 468;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    loop_start_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_point_list);
        tmp_len_arg_3 = par_point_list;
        tmp_mult_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[50];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        assert(!(tmp_mult_expr_left_1 == NULL));
        tmp_mult_expr_right_1 = mod_consts[74];
        tmp_cmp_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        assert(!(tmp_cmp_expr_left_3 == NULL));
        if (var_ctx == NULL) {
            Py_DECREF(tmp_cmp_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 470;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_ctx;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[90]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 470;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[76]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 470;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_ctx;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[90]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[77]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_ctx == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = var_ctx;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[90]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[76]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[8];
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7031eff880db8a71a7d1bbd192741280->m_frame.f_lineno = 471;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 470;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_line_width);
        tmp_ass_subvalue_1 = par_line_width;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_1 = var_program;
        tmp_ass_subscript_1 = mod_consts[84];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_color_normalized);
        tmp_ass_subvalue_2 = var_color_normalized;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_2 = var_program;
        tmp_ass_subscript_2 = mod_consts[52];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 475;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_ctx;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[90]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[55]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 476;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[56]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 476;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[57];
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_point_list);
            tmp_iter_arg_1 = par_point_list;
            tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooo";
                    exception_lineno = 476;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_point;
                outline_0_var_point = tmp_assign_source_10;
                Py_INCREF(outline_0_var_point);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(outline_0_var_point);
            tmp_iter_arg_2 = outline_0_var_point;
            tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooo";
                    exception_lineno = 476;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_13 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_13;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_v);
            tmp_append_value_1 = outline_0_var_v;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_point);
        outline_0_var_point = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_point);
        outline_0_var_point = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 476;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_7031eff880db8a71a7d1bbd192741280->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 476;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7031eff880db8a71a7d1bbd192741280->m_frame.f_lineno = 475;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(var_geometry);
        tmp_expression_value_20 = var_geometry;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[59]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program);
        tmp_kw_call_arg_value_0_1 = var_program;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 477;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[91]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 477;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_point_list);
        tmp_len_arg_4 = par_point_list;
        tmp_kw_call_dict_value_1_1 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 477;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_7031eff880db8a71a7d1bbd192741280->m_frame.f_lineno = 477;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7031eff880db8a71a7d1bbd192741280, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7031eff880db8a71a7d1bbd192741280->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7031eff880db8a71a7d1bbd192741280, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7031eff880db8a71a7d1bbd192741280,
        type_description_1,
        par_point_list,
        par_color,
        par_line_width,
        var_window,
        var_ctx,
        var_program,
        var_geometry,
        var_color_normalized
    );


    // Release cached frame if used for exception.
    if (frame_7031eff880db8a71a7d1bbd192741280 == cache_frame_7031eff880db8a71a7d1bbd192741280) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7031eff880db8a71a7d1bbd192741280);
        cache_frame_7031eff880db8a71a7d1bbd192741280 = NULL;
    }

    assertFrameObject(frame_7031eff880db8a71a7d1bbd192741280);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_program);
    Py_DECREF(var_program);
    var_program = NULL;
    CHECK_OBJECT(var_geometry);
    Py_DECREF(var_geometry);
    var_geometry = NULL;
    CHECK_OBJECT(var_color_normalized);
    Py_DECREF(var_color_normalized);
    var_color_normalized = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_program);
    var_program = NULL;
    Py_XDECREF(var_geometry);
    var_geometry = NULL;
    Py_XDECREF(var_color_normalized);
    var_color_normalized = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__13_draw_point(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_color = python_pars[2];
    PyObject *par_size = python_pars[3];
    struct Nuitka_FrameObject *frame_aa4c41670a36ea2916a1d13ae7dc265c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa4c41670a36ea2916a1d13ae7dc265c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa4c41670a36ea2916a1d13ae7dc265c)) {
        Py_XDECREF(cache_frame_aa4c41670a36ea2916a1d13ae7dc265c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa4c41670a36ea2916a1d13ae7dc265c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa4c41670a36ea2916a1d13ae7dc265c = MAKE_FUNCTION_FRAME(tstate, codeobj_aa4c41670a36ea2916a1d13ae7dc265c, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa4c41670a36ea2916a1d13ae7dc265c->m_type_description == NULL);
    frame_aa4c41670a36ea2916a1d13ae7dc265c = cache_frame_aa4c41670a36ea2916a1d13ae7dc265c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa4c41670a36ea2916a1d13ae7dc265c);
    assert(Py_REFCNT(frame_aa4c41670a36ea2916a1d13ae7dc265c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_2 = par_y;
        CHECK_OBJECT(par_size);
        tmp_args_element_value_3 = par_size;
        CHECK_OBJECT(par_size);
        tmp_args_element_value_4 = par_size;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        frame_aa4c41670a36ea2916a1d13ae7dc265c->m_frame.f_lineno = 493;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa4c41670a36ea2916a1d13ae7dc265c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa4c41670a36ea2916a1d13ae7dc265c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa4c41670a36ea2916a1d13ae7dc265c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa4c41670a36ea2916a1d13ae7dc265c,
        type_description_1,
        par_x,
        par_y,
        par_color,
        par_size
    );


    // Release cached frame if used for exception.
    if (frame_aa4c41670a36ea2916a1d13ae7dc265c == cache_frame_aa4c41670a36ea2916a1d13ae7dc265c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa4c41670a36ea2916a1d13ae7dc265c);
        cache_frame_aa4c41670a36ea2916a1d13ae7dc265c = NULL;
    }

    assertFrameObject(frame_aa4c41670a36ea2916a1d13ae7dc265c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__14_draw_points(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_point_list = python_pars[0];
    PyObject *par_color = python_pars[1];
    PyObject *par_size = python_pars[2];
    PyObject *var_window = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_program = NULL;
    PyObject *var_geometry = NULL;
    PyObject *var_buffer = NULL;
    PyObject *var_color_normalized = NULL;
    PyObject *var_data_size = NULL;
    PyObject *outline_0_var_point = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_b34188845368c695444f1e2a1a1aef25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b34188845368c695444f1e2a1a1aef25 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b34188845368c695444f1e2a1a1aef25)) {
        Py_XDECREF(cache_frame_b34188845368c695444f1e2a1a1aef25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b34188845368c695444f1e2a1a1aef25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b34188845368c695444f1e2a1a1aef25 = MAKE_FUNCTION_FRAME(tstate, codeobj_b34188845368c695444f1e2a1a1aef25, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b34188845368c695444f1e2a1a1aef25->m_type_description == NULL);
    frame_b34188845368c695444f1e2a1a1aef25 = cache_frame_b34188845368c695444f1e2a1a1aef25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b34188845368c695444f1e2a1a1aef25);
    assert(Py_REFCNT(frame_b34188845368c695444f1e2a1a1aef25) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b34188845368c695444f1e2a1a1aef25->m_frame.f_lineno = 506;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[96]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program == NULL);
        var_program = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[97]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geometry == NULL);
        var_geometry = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_4 = var_ctx;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[98]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_color);
        tmp_len_arg_1 = par_color;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 3;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_color);
        tmp_expression_value_5 = par_color;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[48];
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_6 = par_color;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_7 = par_color;
            tmp_subscript_value_3 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_3 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 514;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_assign_source_6, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_6;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_color);
        tmp_len_arg_2 = par_color;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_color);
        tmp_expression_value_8 = par_color;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[48];
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_9 = par_color;
            tmp_subscript_value_5 = mod_consts[2];
            tmp_truediv_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 1);
            if (tmp_truediv_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_5 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_10 = par_color;
            tmp_subscript_value_6 = mod_consts[8];
            tmp_truediv_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 2);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_6 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_11 = par_color;
            tmp_subscript_value_7 = mod_consts[50];
            tmp_truediv_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 3);
            if (tmp_truediv_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_7 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            Py_DECREF(tmp_truediv_expr_left_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_b34188845368c695444f1e2a1a1aef25->m_frame.f_lineno = 518;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 518;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(par_point_list);
        tmp_len_arg_3 = par_point_list;
        tmp_mult_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[99];
        tmp_assign_source_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        assert(!(tmp_assign_source_8 == NULL));
        assert(var_data_size == NULL);
        var_data_size = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_12 = var_buffer;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[77]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data_size);
        tmp_kw_call_value_0_1 = var_data_size;
        frame_b34188845368c695444f1e2a1a1aef25->m_frame.f_lineno = 523;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_color_normalized);
        tmp_ass_subvalue_1 = var_color_normalized;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_1 = var_program;
        tmp_ass_subscript_1 = mod_consts[52];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_size);
        tmp_tuple_element_3 = par_size;
        tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_size);
        tmp_tuple_element_3 = par_size;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[13];
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 2, tmp_tuple_element_3);
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_2 = var_program;
        tmp_ass_subscript_2 = mod_consts[53];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_13 = var_buffer;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[55]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[56]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[57];
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_point_list);
            tmp_iter_arg_1 = par_point_list;
            tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_10;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooo";
                    exception_lineno = 527;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_12 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_point;
                outline_0_var_point = tmp_assign_source_12;
                Py_INCREF(outline_0_var_point);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(outline_0_var_point);
            tmp_iter_arg_2 = outline_0_var_point;
            tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooo";
                    exception_lineno = 527;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_15;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_v);
            tmp_append_value_1 = outline_0_var_v;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_point);
        outline_0_var_point = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_point);
        outline_0_var_point = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 527;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_b34188845368c695444f1e2a1a1aef25->m_frame.f_lineno = 527;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b34188845368c695444f1e2a1a1aef25->m_frame.f_lineno = 527;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        CHECK_OBJECT(var_geometry);
        tmp_expression_value_15 = var_geometry;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[59]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program);
        tmp_kw_call_arg_value_0_1 = var_program;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_16 = var_ctx;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[101]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 528;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data_size);
        tmp_floordiv_expr_left_1 = var_data_size;
        tmp_floordiv_expr_right_1 = mod_consts[99];
        tmp_kw_call_dict_value_1_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 528;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b34188845368c695444f1e2a1a1aef25->m_frame.f_lineno = 528;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b34188845368c695444f1e2a1a1aef25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b34188845368c695444f1e2a1a1aef25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b34188845368c695444f1e2a1a1aef25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b34188845368c695444f1e2a1a1aef25,
        type_description_1,
        par_point_list,
        par_color,
        par_size,
        var_window,
        var_ctx,
        var_program,
        var_geometry,
        var_buffer,
        var_color_normalized,
        var_data_size
    );


    // Release cached frame if used for exception.
    if (frame_b34188845368c695444f1e2a1a1aef25 == cache_frame_b34188845368c695444f1e2a1a1aef25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b34188845368c695444f1e2a1a1aef25);
        cache_frame_b34188845368c695444f1e2a1a1aef25 = NULL;
    }

    assertFrameObject(frame_b34188845368c695444f1e2a1a1aef25);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_program);
    Py_DECREF(var_program);
    var_program = NULL;
    CHECK_OBJECT(var_geometry);
    Py_DECREF(var_geometry);
    var_geometry = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_color_normalized);
    Py_DECREF(var_color_normalized);
    var_color_normalized = NULL;
    CHECK_OBJECT(var_data_size);
    Py_DECREF(var_data_size);
    var_data_size = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_program);
    var_program = NULL;
    Py_XDECREF(var_geometry);
    var_geometry = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_color_normalized);
    var_color_normalized = NULL;
    Py_XDECREF(var_data_size);
    var_data_size = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__15_draw_polygon_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_point_list = python_pars[0];
    PyObject *par_color = python_pars[1];
    PyObject *var_triangle_points = NULL;
    PyObject *var_flattened_list = NULL;
    PyObject *outline_0_var_g = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_c7cb3b58f6243af4aa14e434cffb2f56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c7cb3b58f6243af4aa14e434cffb2f56 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c7cb3b58f6243af4aa14e434cffb2f56)) {
        Py_XDECREF(cache_frame_c7cb3b58f6243af4aa14e434cffb2f56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7cb3b58f6243af4aa14e434cffb2f56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7cb3b58f6243af4aa14e434cffb2f56 = MAKE_FUNCTION_FRAME(tstate, codeobj_c7cb3b58f6243af4aa14e434cffb2f56, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7cb3b58f6243af4aa14e434cffb2f56->m_type_description == NULL);
    frame_c7cb3b58f6243af4aa14e434cffb2f56 = cache_frame_c7cb3b58f6243af4aa14e434cffb2f56;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c7cb3b58f6243af4aa14e434cffb2f56);
    assert(Py_REFCNT(frame_c7cb3b58f6243af4aa14e434cffb2f56) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_point_list);
        tmp_args_element_value_1 = par_point_list;
        frame_c7cb3b58f6243af4aa14e434cffb2f56->m_frame.f_lineno = 546;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_triangle_points == NULL);
        var_triangle_points = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_triangle_points);
            tmp_iter_arg_1 = var_triangle_points;
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 547;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_g;
                outline_0_var_g = tmp_assign_source_6;
                Py_INCREF(outline_0_var_g);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(outline_0_var_g);
            tmp_iter_arg_2 = outline_0_var_g;
            tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_2 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    exception_lineno = 547;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_9;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_i);
            tmp_append_value_1 = outline_0_var_i;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_g);
        outline_0_var_g = NULL;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_g);
        outline_0_var_g = NULL;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 547;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_flattened_list == NULL);
        var_flattened_list = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_flattened_list);
        tmp_args_element_value_2 = var_flattened_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_3 = par_color;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[104]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c7cb3b58f6243af4aa14e434cffb2f56->m_frame.f_lineno = 548;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7cb3b58f6243af4aa14e434cffb2f56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7cb3b58f6243af4aa14e434cffb2f56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7cb3b58f6243af4aa14e434cffb2f56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7cb3b58f6243af4aa14e434cffb2f56,
        type_description_1,
        par_point_list,
        par_color,
        var_triangle_points,
        var_flattened_list
    );


    // Release cached frame if used for exception.
    if (frame_c7cb3b58f6243af4aa14e434cffb2f56 == cache_frame_c7cb3b58f6243af4aa14e434cffb2f56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7cb3b58f6243af4aa14e434cffb2f56);
        cache_frame_c7cb3b58f6243af4aa14e434cffb2f56 = NULL;
    }

    assertFrameObject(frame_c7cb3b58f6243af4aa14e434cffb2f56);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_triangle_points);
    Py_DECREF(var_triangle_points);
    var_triangle_points = NULL;
    CHECK_OBJECT(var_flattened_list);
    Py_DECREF(var_flattened_list);
    var_flattened_list = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_triangle_points);
    var_triangle_points = NULL;
    Py_XDECREF(var_flattened_list);
    var_flattened_list = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__16_draw_polygon_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_point_list = python_pars[0];
    PyObject *par_color = python_pars[1];
    PyObject *par_line_width = python_pars[2];
    PyObject *var_new_point_list = NULL;
    PyObject *var_triangle_point_list = NULL;
    PyObject *var_last_point = NULL;
    PyObject *var_point = NULL;
    PyObject *var_points = NULL;
    PyObject *var_reordered_points = NULL;
    PyObject *outline_0_var_point = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_802bcd0d8210e5eafcf7dacd898be13f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_802bcd0d8210e5eafcf7dacd898be13f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_802bcd0d8210e5eafcf7dacd898be13f)) {
        Py_XDECREF(cache_frame_802bcd0d8210e5eafcf7dacd898be13f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_802bcd0d8210e5eafcf7dacd898be13f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_802bcd0d8210e5eafcf7dacd898be13f = MAKE_FUNCTION_FRAME(tstate, codeobj_802bcd0d8210e5eafcf7dacd898be13f, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_802bcd0d8210e5eafcf7dacd898be13f->m_type_description == NULL);
    frame_802bcd0d8210e5eafcf7dacd898be13f = cache_frame_802bcd0d8210e5eafcf7dacd898be13f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_802bcd0d8210e5eafcf7dacd898be13f);
    assert(Py_REFCNT(frame_802bcd0d8210e5eafcf7dacd898be13f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_point_list);
            tmp_iter_arg_1 = par_point_list;
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooo";
                    exception_lineno = 562;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_point;
                outline_0_var_point = tmp_assign_source_5;
                Py_INCREF(outline_0_var_point);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_point);
            tmp_append_value_1 = outline_0_var_point;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_point);
        outline_0_var_point = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_point);
        outline_0_var_point = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 562;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_new_point_list == NULL);
        var_new_point_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_new_point_list);
        tmp_expression_value_1 = var_new_point_list;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_point_list);
        tmp_expression_value_2 = par_point_list;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 563;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_802bcd0d8210e5eafcf7dacd898be13f->m_frame.f_lineno = 563;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_triangle_point_list == NULL);
        var_triangle_point_list = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_last_point == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_last_point = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_new_point_list);
        tmp_iter_arg_2 = var_new_point_list;
        tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 568;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_10;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_last_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 569;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_cmp_expr_left_1 = var_last_point;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        if (var_last_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_3 = var_last_point;
        tmp_subscript_value_2 = mod_consts[13];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        if (var_last_point == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_4 = var_last_point;
        tmp_subscript_value_3 = mod_consts[2];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_5 = var_point;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_6 = var_point;
        tmp_subscript_value_5 = mod_consts[2];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_5, 1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        if (par_line_width == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_6 = par_line_width;
        frame_802bcd0d8210e5eafcf7dacd898be13f->m_frame.f_lineno = 570;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_points;
            var_points = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_points);
        tmp_expression_value_7 = var_points;
        tmp_subscript_value_6 = mod_consts[2];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_6, 1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_9;
            PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_points);
            tmp_expression_value_8 = var_points;
            tmp_subscript_value_7 = mod_consts[13];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_7, 0);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_points);
            tmp_expression_value_9 = var_points;
            tmp_subscript_value_8 = mod_consts[8];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_8, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_points);
            tmp_expression_value_10 = var_points;
            tmp_subscript_value_9 = mod_consts[50];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_9, 3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_12);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        {
            PyObject *old = var_reordered_points;
            var_reordered_points = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        if (var_triangle_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 572;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_11 = var_triangle_point_list;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[86]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_reordered_points);
        tmp_args_element_value_7 = var_reordered_points;
        frame_802bcd0d8210e5eafcf7dacd898be13f->m_frame.f_lineno = 572;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(var_point);
        tmp_assign_source_13 = var_point;
        {
            PyObject *old = var_last_point;
            var_last_point = tmp_assign_source_13;
            Py_INCREF(var_last_point);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 568;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_point_list);
        tmp_expression_value_13 = var_new_point_list;
        tmp_subscript_value_10 = mod_consts[13];
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_10, 0);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[13];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_11, 0);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_point_list);
        tmp_expression_value_15 = var_new_point_list;
        tmp_subscript_value_12 = mod_consts[13];
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_12, 0);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[2];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_13, 1);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_point_list);
        tmp_expression_value_17 = var_new_point_list;
        tmp_subscript_value_14 = mod_consts[2];
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_14, 1);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[13];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_15, 0);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_point_list);
        tmp_expression_value_19 = var_new_point_list;
        tmp_subscript_value_16 = mod_consts[2];
        tmp_expression_value_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_16, 1);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[2];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_17, 1);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_line_width == NULL) {
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = par_line_width;
        frame_802bcd0d8210e5eafcf7dacd898be13f->m_frame.f_lineno = 575;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_points;
            var_points = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_18;
        if (var_triangle_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = var_triangle_point_list;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_points);
        tmp_expression_value_21 = var_points;
        tmp_subscript_value_18 = mod_consts[2];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_18, 1);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_802bcd0d8210e5eafcf7dacd898be13f->m_frame.f_lineno = 577;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_22;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_triangle_point_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 578;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_triangle_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_15 = par_color;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[30]);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_802bcd0d8210e5eafcf7dacd898be13f->m_frame.f_lineno = 578;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_802bcd0d8210e5eafcf7dacd898be13f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_802bcd0d8210e5eafcf7dacd898be13f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_802bcd0d8210e5eafcf7dacd898be13f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_802bcd0d8210e5eafcf7dacd898be13f,
        type_description_1,
        par_point_list,
        par_color,
        par_line_width,
        var_new_point_list,
        var_triangle_point_list,
        var_last_point,
        var_point,
        var_points,
        var_reordered_points
    );


    // Release cached frame if used for exception.
    if (frame_802bcd0d8210e5eafcf7dacd898be13f == cache_frame_802bcd0d8210e5eafcf7dacd898be13f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_802bcd0d8210e5eafcf7dacd898be13f);
        cache_frame_802bcd0d8210e5eafcf7dacd898be13f = NULL;
    }

    assertFrameObject(frame_802bcd0d8210e5eafcf7dacd898be13f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_point_list);
    Py_DECREF(var_new_point_list);
    var_new_point_list = NULL;
    Py_XDECREF(var_triangle_point_list);
    var_triangle_point_list = NULL;
    Py_XDECREF(var_last_point);
    var_last_point = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    CHECK_OBJECT(var_points);
    Py_DECREF(var_points);
    var_points = NULL;
    Py_XDECREF(var_reordered_points);
    var_reordered_points = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_new_point_list);
    var_new_point_list = NULL;
    Py_XDECREF(var_triangle_point_list);
    var_triangle_point_list = NULL;
    Py_XDECREF(var_last_point);
    var_last_point = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_points);
    var_points = NULL;
    Py_XDECREF(var_reordered_points);
    var_reordered_points = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_point_list);
    Py_DECREF(par_point_list);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_line_width);
    Py_DECREF(par_line_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__17_draw_triangle_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x1 = python_pars[0];
    PyObject *par_y1 = python_pars[1];
    PyObject *par_x2 = python_pars[2];
    PyObject *par_y2 = python_pars[3];
    PyObject *par_x3 = python_pars[4];
    PyObject *par_y3 = python_pars[5];
    PyObject *par_color = python_pars[6];
    PyObject *var_first_point = NULL;
    PyObject *var_second_point = NULL;
    PyObject *var_third_point = NULL;
    PyObject *var_point_list = NULL;
    struct Nuitka_FrameObject *frame_4a7097d120b2335b6a5186506cc99620;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a7097d120b2335b6a5186506cc99620 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_x1);
        tmp_tuple_element_1 = par_x1;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y1);
        tmp_tuple_element_1 = par_y1;
        PyTuple_SET_ITEM0(tmp_assign_source_1, 1, tmp_tuple_element_1);
        assert(var_first_point == NULL);
        var_first_point = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_x2);
        tmp_tuple_element_2 = par_x2;
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_y2);
        tmp_tuple_element_2 = par_y2;
        PyTuple_SET_ITEM0(tmp_assign_source_2, 1, tmp_tuple_element_2);
        assert(var_second_point == NULL);
        var_second_point = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_x3);
        tmp_tuple_element_3 = par_x3;
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_y3);
        tmp_tuple_element_3 = par_y3;
        PyTuple_SET_ITEM0(tmp_assign_source_3, 1, tmp_tuple_element_3);
        assert(var_third_point == NULL);
        var_third_point = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_first_point);
        tmp_tuple_element_4 = var_first_point;
        tmp_assign_source_4 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_assign_source_4, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_second_point);
        tmp_tuple_element_4 = var_second_point;
        PyTuple_SET_ITEM0(tmp_assign_source_4, 1, tmp_tuple_element_4);
        CHECK_OBJECT(var_third_point);
        tmp_tuple_element_4 = var_third_point;
        PyTuple_SET_ITEM0(tmp_assign_source_4, 2, tmp_tuple_element_4);
        assert(var_point_list == NULL);
        var_point_list = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_4a7097d120b2335b6a5186506cc99620)) {
        Py_XDECREF(cache_frame_4a7097d120b2335b6a5186506cc99620);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a7097d120b2335b6a5186506cc99620 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a7097d120b2335b6a5186506cc99620 = MAKE_FUNCTION_FRAME(tstate, codeobj_4a7097d120b2335b6a5186506cc99620, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a7097d120b2335b6a5186506cc99620->m_type_description == NULL);
    frame_4a7097d120b2335b6a5186506cc99620 = cache_frame_4a7097d120b2335b6a5186506cc99620;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4a7097d120b2335b6a5186506cc99620);
    assert(Py_REFCNT(frame_4a7097d120b2335b6a5186506cc99620) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_point_list);
        tmp_args_element_value_1 = var_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_2 = par_color;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[104]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4a7097d120b2335b6a5186506cc99620->m_frame.f_lineno = 600;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a7097d120b2335b6a5186506cc99620, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a7097d120b2335b6a5186506cc99620->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a7097d120b2335b6a5186506cc99620, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a7097d120b2335b6a5186506cc99620,
        type_description_1,
        par_x1,
        par_y1,
        par_x2,
        par_y2,
        par_x3,
        par_y3,
        par_color,
        var_first_point,
        var_second_point,
        var_third_point,
        var_point_list
    );


    // Release cached frame if used for exception.
    if (frame_4a7097d120b2335b6a5186506cc99620 == cache_frame_4a7097d120b2335b6a5186506cc99620) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a7097d120b2335b6a5186506cc99620);
        cache_frame_4a7097d120b2335b6a5186506cc99620 = NULL;
    }

    assertFrameObject(frame_4a7097d120b2335b6a5186506cc99620);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_first_point);
    Py_DECREF(var_first_point);
    var_first_point = NULL;
    CHECK_OBJECT(var_second_point);
    Py_DECREF(var_second_point);
    var_second_point = NULL;
    CHECK_OBJECT(var_third_point);
    Py_DECREF(var_third_point);
    var_third_point = NULL;
    CHECK_OBJECT(var_point_list);
    Py_DECREF(var_point_list);
    var_point_list = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_first_point);
    Py_DECREF(var_first_point);
    var_first_point = NULL;
    CHECK_OBJECT(var_second_point);
    Py_DECREF(var_second_point);
    var_second_point = NULL;
    CHECK_OBJECT(var_third_point);
    Py_DECREF(var_third_point);
    var_third_point = NULL;
    CHECK_OBJECT(var_point_list);
    Py_DECREF(var_point_list);
    var_point_list = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x1);
    Py_DECREF(par_x1);
    CHECK_OBJECT(par_y1);
    Py_DECREF(par_y1);
    CHECK_OBJECT(par_x2);
    Py_DECREF(par_x2);
    CHECK_OBJECT(par_y2);
    Py_DECREF(par_y2);
    CHECK_OBJECT(par_x3);
    Py_DECREF(par_x3);
    CHECK_OBJECT(par_y3);
    Py_DECREF(par_y3);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x1);
    Py_DECREF(par_x1);
    CHECK_OBJECT(par_y1);
    Py_DECREF(par_y1);
    CHECK_OBJECT(par_x2);
    Py_DECREF(par_x2);
    CHECK_OBJECT(par_y2);
    Py_DECREF(par_y2);
    CHECK_OBJECT(par_x3);
    Py_DECREF(par_x3);
    CHECK_OBJECT(par_y3);
    Py_DECREF(par_y3);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__18_draw_triangle_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x1 = python_pars[0];
    PyObject *par_y1 = python_pars[1];
    PyObject *par_x2 = python_pars[2];
    PyObject *par_y2 = python_pars[3];
    PyObject *par_x3 = python_pars[4];
    PyObject *par_y3 = python_pars[5];
    PyObject *par_color = python_pars[6];
    PyObject *par_border_width = python_pars[7];
    PyObject *var_first_point = NULL;
    PyObject *var_second_point = NULL;
    PyObject *var_third_point = NULL;
    PyObject *var_point_list = NULL;
    struct Nuitka_FrameObject *frame_f0c47bba2fa838ce0b46a041c2793e89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0c47bba2fa838ce0b46a041c2793e89 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_x1);
        tmp_list_element_1 = par_x1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_y1);
        tmp_list_element_1 = par_y1;
        PyList_SET_ITEM0(tmp_assign_source_1, 1, tmp_list_element_1);
        assert(var_first_point == NULL);
        var_first_point = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(par_x2);
        tmp_list_element_2 = par_x2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_2);
        CHECK_OBJECT(par_y2);
        tmp_list_element_2 = par_y2;
        PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_2);
        assert(var_second_point == NULL);
        var_second_point = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT(par_x3);
        tmp_list_element_3 = par_x3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assign_source_3, 0, tmp_list_element_3);
        CHECK_OBJECT(par_y3);
        tmp_list_element_3 = par_y3;
        PyList_SET_ITEM0(tmp_assign_source_3, 1, tmp_list_element_3);
        assert(var_third_point == NULL);
        var_third_point = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_first_point);
        tmp_tuple_element_1 = var_first_point;
        tmp_assign_source_4 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_assign_source_4, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_second_point);
        tmp_tuple_element_1 = var_second_point;
        PyTuple_SET_ITEM0(tmp_assign_source_4, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_third_point);
        tmp_tuple_element_1 = var_third_point;
        PyTuple_SET_ITEM0(tmp_assign_source_4, 2, tmp_tuple_element_1);
        assert(var_point_list == NULL);
        var_point_list = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f0c47bba2fa838ce0b46a041c2793e89)) {
        Py_XDECREF(cache_frame_f0c47bba2fa838ce0b46a041c2793e89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0c47bba2fa838ce0b46a041c2793e89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0c47bba2fa838ce0b46a041c2793e89 = MAKE_FUNCTION_FRAME(tstate, codeobj_f0c47bba2fa838ce0b46a041c2793e89, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0c47bba2fa838ce0b46a041c2793e89->m_type_description == NULL);
    frame_f0c47bba2fa838ce0b46a041c2793e89 = cache_frame_f0c47bba2fa838ce0b46a041c2793e89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f0c47bba2fa838ce0b46a041c2793e89);
    assert(Py_REFCNT(frame_f0c47bba2fa838ce0b46a041c2793e89) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_point_list);
        tmp_args_element_value_1 = var_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_2 = par_color;
        CHECK_OBJECT(par_border_width);
        tmp_args_element_value_3 = par_border_width;
        frame_f0c47bba2fa838ce0b46a041c2793e89->m_frame.f_lineno = 624;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0c47bba2fa838ce0b46a041c2793e89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0c47bba2fa838ce0b46a041c2793e89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0c47bba2fa838ce0b46a041c2793e89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0c47bba2fa838ce0b46a041c2793e89,
        type_description_1,
        par_x1,
        par_y1,
        par_x2,
        par_y2,
        par_x3,
        par_y3,
        par_color,
        par_border_width,
        var_first_point,
        var_second_point,
        var_third_point,
        var_point_list
    );


    // Release cached frame if used for exception.
    if (frame_f0c47bba2fa838ce0b46a041c2793e89 == cache_frame_f0c47bba2fa838ce0b46a041c2793e89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0c47bba2fa838ce0b46a041c2793e89);
        cache_frame_f0c47bba2fa838ce0b46a041c2793e89 = NULL;
    }

    assertFrameObject(frame_f0c47bba2fa838ce0b46a041c2793e89);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_first_point);
    Py_DECREF(var_first_point);
    var_first_point = NULL;
    CHECK_OBJECT(var_second_point);
    Py_DECREF(var_second_point);
    var_second_point = NULL;
    CHECK_OBJECT(var_third_point);
    Py_DECREF(var_third_point);
    var_third_point = NULL;
    CHECK_OBJECT(var_point_list);
    Py_DECREF(var_point_list);
    var_point_list = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_first_point);
    Py_DECREF(var_first_point);
    var_first_point = NULL;
    CHECK_OBJECT(var_second_point);
    Py_DECREF(var_second_point);
    var_second_point = NULL;
    CHECK_OBJECT(var_third_point);
    Py_DECREF(var_third_point);
    var_third_point = NULL;
    Py_XDECREF(var_point_list);
    var_point_list = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x1);
    Py_DECREF(par_x1);
    CHECK_OBJECT(par_y1);
    Py_DECREF(par_y1);
    CHECK_OBJECT(par_x2);
    Py_DECREF(par_x2);
    CHECK_OBJECT(par_y2);
    Py_DECREF(par_y2);
    CHECK_OBJECT(par_x3);
    Py_DECREF(par_x3);
    CHECK_OBJECT(par_y3);
    Py_DECREF(par_y3);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x1);
    Py_DECREF(par_x1);
    CHECK_OBJECT(par_y1);
    Py_DECREF(par_y1);
    CHECK_OBJECT(par_x2);
    Py_DECREF(par_x2);
    CHECK_OBJECT(par_y2);
    Py_DECREF(par_y2);
    CHECK_OBJECT(par_x3);
    Py_DECREF(par_x3);
    CHECK_OBJECT(par_y3);
    Py_DECREF(par_y3);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__19_draw_lrtb_rectangle_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    PyObject *par_top = python_pars[2];
    PyObject *par_bottom = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_border_width = python_pars[5];
    PyObject *var_center_x = NULL;
    PyObject *var_center_y = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    struct Nuitka_FrameObject *frame_43813661009e692cbf6486a5a6efaa13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_43813661009e692cbf6486a5a6efaa13 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_43813661009e692cbf6486a5a6efaa13)) {
        Py_XDECREF(cache_frame_43813661009e692cbf6486a5a6efaa13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43813661009e692cbf6486a5a6efaa13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43813661009e692cbf6486a5a6efaa13 = MAKE_FUNCTION_FRAME(tstate, codeobj_43813661009e692cbf6486a5a6efaa13, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43813661009e692cbf6486a5a6efaa13->m_type_description == NULL);
    frame_43813661009e692cbf6486a5a6efaa13 = cache_frame_43813661009e692cbf6486a5a6efaa13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_43813661009e692cbf6486a5a6efaa13);
    assert(Py_REFCNT(frame_43813661009e692cbf6486a5a6efaa13) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_left);
        tmp_cmp_expr_left_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_cmp_expr_right_1 = par_right;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[110];
        frame_43813661009e692cbf6486a5a6efaa13->m_frame.f_lineno = 650;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 650;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_bottom);
        tmp_cmp_expr_left_2 = par_bottom;
        CHECK_OBJECT(par_top);
        tmp_cmp_expr_right_2 = par_top;
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[111];
        frame_43813661009e692cbf6486a5a6efaa13->m_frame.f_lineno = 654;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 654;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_left);
        tmp_add_expr_left_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_add_expr_right_1 = par_right;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_x == NULL);
        var_center_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_top);
        tmp_add_expr_left_2 = par_top;
        CHECK_OBJECT(par_bottom);
        tmp_add_expr_right_2 = par_bottom;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[8];
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_y == NULL);
        var_center_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_sub_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_sub_expr_right_1 = par_left;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(par_top);
        tmp_sub_expr_left_2 = par_top;
        CHECK_OBJECT(par_bottom);
        tmp_sub_expr_right_2 = par_bottom;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_center_x);
        tmp_args_element_value_1 = var_center_x;
        CHECK_OBJECT(var_center_y);
        tmp_args_element_value_2 = var_center_y;
        CHECK_OBJECT(var_width);
        tmp_args_element_value_3 = var_width;
        CHECK_OBJECT(var_height);
        tmp_args_element_value_4 = var_height;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        CHECK_OBJECT(par_border_width);
        tmp_args_element_value_6 = par_border_width;
        frame_43813661009e692cbf6486a5a6efaa13->m_frame.f_lineno = 661;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_43813661009e692cbf6486a5a6efaa13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43813661009e692cbf6486a5a6efaa13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43813661009e692cbf6486a5a6efaa13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43813661009e692cbf6486a5a6efaa13,
        type_description_1,
        par_left,
        par_right,
        par_top,
        par_bottom,
        par_color,
        par_border_width,
        var_center_x,
        var_center_y,
        var_width,
        var_height
    );


    // Release cached frame if used for exception.
    if (frame_43813661009e692cbf6486a5a6efaa13 == cache_frame_43813661009e692cbf6486a5a6efaa13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43813661009e692cbf6486a5a6efaa13);
        cache_frame_43813661009e692cbf6486a5a6efaa13 = NULL;
    }

    assertFrameObject(frame_43813661009e692cbf6486a5a6efaa13);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_center_x);
    Py_DECREF(var_center_x);
    var_center_x = NULL;
    CHECK_OBJECT(var_center_y);
    Py_DECREF(var_center_y);
    var_center_y = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_center_x);
    var_center_x = NULL;
    Py_XDECREF(var_center_y);
    var_center_y = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__20_draw_xywh_rectangle_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bottom_left_x = python_pars[0];
    PyObject *par_bottom_left_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_border_width = python_pars[5];
    PyObject *var_center_x = NULL;
    PyObject *var_center_y = NULL;
    struct Nuitka_FrameObject *frame_e85c64b771a189fb283e6ca2d0ab8f23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e85c64b771a189fb283e6ca2d0ab8f23 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e85c64b771a189fb283e6ca2d0ab8f23)) {
        Py_XDECREF(cache_frame_e85c64b771a189fb283e6ca2d0ab8f23);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e85c64b771a189fb283e6ca2d0ab8f23 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e85c64b771a189fb283e6ca2d0ab8f23 = MAKE_FUNCTION_FRAME(tstate, codeobj_e85c64b771a189fb283e6ca2d0ab8f23, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e85c64b771a189fb283e6ca2d0ab8f23->m_type_description == NULL);
    frame_e85c64b771a189fb283e6ca2d0ab8f23 = cache_frame_e85c64b771a189fb283e6ca2d0ab8f23;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e85c64b771a189fb283e6ca2d0ab8f23);
    assert(Py_REFCNT(frame_e85c64b771a189fb283e6ca2d0ab8f23) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_bottom_left_x);
        tmp_add_expr_left_1 = par_bottom_left_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_1 = par_width;
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_x == NULL);
        var_center_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(par_bottom_left_y);
        tmp_add_expr_left_2 = par_bottom_left_y;
        CHECK_OBJECT(par_height);
        tmp_truediv_expr_left_2 = par_height;
        tmp_truediv_expr_right_2 = mod_consts[8];
        tmp_add_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_y == NULL);
        var_center_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_center_x);
        tmp_args_element_value_1 = var_center_x;
        CHECK_OBJECT(var_center_y);
        tmp_args_element_value_2 = var_center_y;
        CHECK_OBJECT(par_width);
        tmp_args_element_value_3 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_4 = par_height;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        CHECK_OBJECT(par_border_width);
        tmp_args_element_value_6 = par_border_width;
        frame_e85c64b771a189fb283e6ca2d0ab8f23->m_frame.f_lineno = 681;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e85c64b771a189fb283e6ca2d0ab8f23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e85c64b771a189fb283e6ca2d0ab8f23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e85c64b771a189fb283e6ca2d0ab8f23, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e85c64b771a189fb283e6ca2d0ab8f23,
        type_description_1,
        par_bottom_left_x,
        par_bottom_left_y,
        par_width,
        par_height,
        par_color,
        par_border_width,
        var_center_x,
        var_center_y
    );


    // Release cached frame if used for exception.
    if (frame_e85c64b771a189fb283e6ca2d0ab8f23 == cache_frame_e85c64b771a189fb283e6ca2d0ab8f23) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e85c64b771a189fb283e6ca2d0ab8f23);
        cache_frame_e85c64b771a189fb283e6ca2d0ab8f23 = NULL;
    }

    assertFrameObject(frame_e85c64b771a189fb283e6ca2d0ab8f23);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_center_x);
    Py_DECREF(var_center_x);
    var_center_x = NULL;
    CHECK_OBJECT(var_center_y);
    Py_DECREF(var_center_y);
    var_center_y = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_center_x);
    var_center_x = NULL;
    Py_XDECREF(var_center_y);
    var_center_y = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bottom_left_x);
    Py_DECREF(par_bottom_left_x);
    CHECK_OBJECT(par_bottom_left_y);
    Py_DECREF(par_bottom_left_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bottom_left_x);
    Py_DECREF(par_bottom_left_x);
    CHECK_OBJECT(par_bottom_left_y);
    Py_DECREF(par_bottom_left_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__21_draw_rectangle_outline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_border_width = python_pars[5];
    PyObject *par_tilt_angle = python_pars[6];
    PyObject *var_point_list = NULL;
    PyObject *var_point_list_2 = NULL;
    PyObject *var_i_lb = NULL;
    PyObject *var_i_rb = NULL;
    PyObject *var_i_rt = NULL;
    PyObject *var_i_lt = NULL;
    PyObject *var_o_lb = NULL;
    PyObject *var_o_rb = NULL;
    PyObject *var_o_rt = NULL;
    PyObject *var_o_lt = NULL;
    PyObject *var_point = NULL;
    PyObject *var_new_point = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ea330878ad2d03a4a81e7dd56c091c85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ea330878ad2d03a4a81e7dd56c091c85 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ea330878ad2d03a4a81e7dd56c091c85)) {
        Py_XDECREF(cache_frame_ea330878ad2d03a4a81e7dd56c091c85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea330878ad2d03a4a81e7dd56c091c85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea330878ad2d03a4a81e7dd56c091c85 = MAKE_FUNCTION_FRAME(tstate, codeobj_ea330878ad2d03a4a81e7dd56c091c85, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea330878ad2d03a4a81e7dd56c091c85->m_type_description == NULL);
    frame_ea330878ad2d03a4a81e7dd56c091c85 = cache_frame_ea330878ad2d03a4a81e7dd56c091c85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ea330878ad2d03a4a81e7dd56c091c85);
    assert(Py_REFCNT(frame_ea330878ad2d03a4a81e7dd56c091c85) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(par_center_x);
        tmp_sub_expr_left_1 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_1 = par_width;
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_sub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_2 = par_border_width;
        tmp_truediv_expr_right_2 = mod_consts[8];
        tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 701;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_truediv_expr_left_4;
            PyObject *tmp_truediv_expr_right_4;
            PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_center_y);
            tmp_sub_expr_left_2 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_3 = par_height;
            tmp_truediv_expr_right_3 = mod_consts[8];
            tmp_sub_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            if (tmp_sub_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 701;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_add_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_right_2);
            if (tmp_add_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 701;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_4 = par_border_width;
            tmp_truediv_expr_right_4 = mod_consts[8];
            tmp_add_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
            if (tmp_add_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 701;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            Py_DECREF(tmp_add_expr_right_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 701;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_i_lb == NULL);
        var_i_lb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        CHECK_OBJECT(par_center_x);
        tmp_add_expr_left_3 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_5 = par_width;
        tmp_truediv_expr_right_5 = mod_consts[8];
        tmp_add_expr_right_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_6 = par_border_width;
        tmp_truediv_expr_right_6 = mod_consts[8];
        tmp_sub_expr_right_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_truediv_expr_left_8;
            PyObject *tmp_truediv_expr_right_8;
            PyTuple_SET_ITEM(tmp_assign_source_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_center_y);
            tmp_sub_expr_left_4 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_7 = par_height;
            tmp_truediv_expr_right_7 = mod_consts[8];
            tmp_sub_expr_right_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            if (tmp_sub_expr_right_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 702;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_right_4);
            if (tmp_add_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 702;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_8 = par_border_width;
            tmp_truediv_expr_right_8 = mod_consts[8];
            tmp_add_expr_right_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
            if (tmp_add_expr_right_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 702;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_add_expr_right_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 702;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_i_rb == NULL);
        var_i_rb = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_truediv_expr_left_9;
        PyObject *tmp_truediv_expr_right_9;
        PyObject *tmp_truediv_expr_left_10;
        PyObject *tmp_truediv_expr_right_10;
        CHECK_OBJECT(par_center_x);
        tmp_add_expr_left_5 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_9 = par_width;
        tmp_truediv_expr_right_9 = mod_consts[8];
        tmp_add_expr_right_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_10 = par_border_width;
        tmp_truediv_expr_right_10 = mod_consts[8];
        tmp_sub_expr_right_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_6;
            PyObject *tmp_sub_expr_right_6;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            PyObject *tmp_truediv_expr_left_11;
            PyObject *tmp_truediv_expr_right_11;
            PyObject *tmp_truediv_expr_left_12;
            PyObject *tmp_truediv_expr_right_12;
            PyTuple_SET_ITEM(tmp_assign_source_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_center_y);
            tmp_add_expr_left_6 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_11 = par_height;
            tmp_truediv_expr_right_11 = mod_consts[8];
            tmp_add_expr_right_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_11, tmp_truediv_expr_right_11);
            if (tmp_add_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 703;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_sub_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
            Py_DECREF(tmp_add_expr_right_6);
            if (tmp_sub_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 703;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_12 = par_border_width;
            tmp_truediv_expr_right_12 = mod_consts[8];
            tmp_sub_expr_right_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_12, tmp_truediv_expr_right_12);
            if (tmp_sub_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 703;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
            Py_DECREF(tmp_sub_expr_left_6);
            Py_DECREF(tmp_sub_expr_right_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 703;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(var_i_rt == NULL);
        var_i_rt = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_truediv_expr_left_13;
        PyObject *tmp_truediv_expr_right_13;
        PyObject *tmp_truediv_expr_left_14;
        PyObject *tmp_truediv_expr_right_14;
        CHECK_OBJECT(par_center_x);
        tmp_sub_expr_left_7 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_13 = par_width;
        tmp_truediv_expr_right_13 = mod_consts[8];
        tmp_sub_expr_right_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_13, tmp_truediv_expr_right_13);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_14 = par_border_width;
        tmp_truediv_expr_right_14 = mod_consts[8];
        tmp_add_expr_right_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_14, tmp_truediv_expr_right_14);
        if (tmp_add_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_7);

            exception_lineno = 704;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        Py_DECREF(tmp_add_expr_right_7);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_8;
            PyObject *tmp_sub_expr_right_8;
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyObject *tmp_truediv_expr_left_15;
            PyObject *tmp_truediv_expr_right_15;
            PyObject *tmp_truediv_expr_left_16;
            PyObject *tmp_truediv_expr_right_16;
            PyTuple_SET_ITEM(tmp_assign_source_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_center_y);
            tmp_add_expr_left_8 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_15 = par_height;
            tmp_truediv_expr_right_15 = mod_consts[8];
            tmp_add_expr_right_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_15, tmp_truediv_expr_right_15);
            if (tmp_add_expr_right_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 704;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_sub_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
            Py_DECREF(tmp_add_expr_right_8);
            if (tmp_sub_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 704;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_16 = par_border_width;
            tmp_truediv_expr_right_16 = mod_consts[8];
            tmp_sub_expr_right_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_16, tmp_truediv_expr_right_16);
            if (tmp_sub_expr_right_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_8);

                exception_lineno = 704;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
            Py_DECREF(tmp_sub_expr_left_8);
            Py_DECREF(tmp_sub_expr_right_8);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 704;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_4, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        assert(var_i_lt == NULL);
        var_i_lt = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_truediv_expr_left_17;
        PyObject *tmp_truediv_expr_right_17;
        PyObject *tmp_truediv_expr_left_18;
        PyObject *tmp_truediv_expr_right_18;
        CHECK_OBJECT(par_center_x);
        tmp_sub_expr_left_10 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_17 = par_width;
        tmp_truediv_expr_right_17 = mod_consts[8];
        tmp_sub_expr_right_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_17, tmp_truediv_expr_right_17);
        if (tmp_sub_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        Py_DECREF(tmp_sub_expr_right_10);
        if (tmp_sub_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_18 = par_border_width;
        tmp_truediv_expr_right_18 = mod_consts[8];
        tmp_sub_expr_right_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_18, tmp_truediv_expr_right_18);
        if (tmp_sub_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_9);

            exception_lineno = 706;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        Py_DECREF(tmp_sub_expr_left_9);
        Py_DECREF(tmp_sub_expr_right_9);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_11;
            PyObject *tmp_sub_expr_right_11;
            PyObject *tmp_sub_expr_left_12;
            PyObject *tmp_sub_expr_right_12;
            PyObject *tmp_truediv_expr_left_19;
            PyObject *tmp_truediv_expr_right_19;
            PyObject *tmp_truediv_expr_left_20;
            PyObject *tmp_truediv_expr_right_20;
            PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_5);
            CHECK_OBJECT(par_center_y);
            tmp_sub_expr_left_12 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_19 = par_height;
            tmp_truediv_expr_right_19 = mod_consts[8];
            tmp_sub_expr_right_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_19, tmp_truediv_expr_right_19);
            if (tmp_sub_expr_right_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_sub_expr_left_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
            Py_DECREF(tmp_sub_expr_right_12);
            if (tmp_sub_expr_left_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_20 = par_border_width;
            tmp_truediv_expr_right_20 = mod_consts[8];
            tmp_sub_expr_right_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_20, tmp_truediv_expr_right_20);
            if (tmp_sub_expr_right_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_11);

                exception_lineno = 706;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
            Py_DECREF(tmp_sub_expr_left_11);
            Py_DECREF(tmp_sub_expr_right_11);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 706;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_5, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        assert(var_o_lb == NULL);
        var_o_lb = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_truediv_expr_left_21;
        PyObject *tmp_truediv_expr_right_21;
        PyObject *tmp_truediv_expr_left_22;
        PyObject *tmp_truediv_expr_right_22;
        CHECK_OBJECT(par_center_x);
        tmp_add_expr_left_10 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_21 = par_width;
        tmp_truediv_expr_right_21 = mod_consts[8];
        tmp_add_expr_right_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_21, tmp_truediv_expr_right_21);
        if (tmp_add_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_22 = par_border_width;
        tmp_truediv_expr_right_22 = mod_consts[8];
        tmp_add_expr_right_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_22, tmp_truediv_expr_right_22);
        if (tmp_add_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        Py_DECREF(tmp_add_expr_right_9);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_13;
            PyObject *tmp_sub_expr_right_13;
            PyObject *tmp_sub_expr_left_14;
            PyObject *tmp_sub_expr_right_14;
            PyObject *tmp_truediv_expr_left_23;
            PyObject *tmp_truediv_expr_right_23;
            PyObject *tmp_truediv_expr_left_24;
            PyObject *tmp_truediv_expr_right_24;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(par_center_y);
            tmp_sub_expr_left_14 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_23 = par_height;
            tmp_truediv_expr_right_23 = mod_consts[8];
            tmp_sub_expr_right_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_23, tmp_truediv_expr_right_23);
            if (tmp_sub_expr_right_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_sub_expr_left_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_14, tmp_sub_expr_right_14);
            Py_DECREF(tmp_sub_expr_right_14);
            if (tmp_sub_expr_left_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_24 = par_border_width;
            tmp_truediv_expr_right_24 = mod_consts[8];
            tmp_sub_expr_right_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_24, tmp_truediv_expr_right_24);
            if (tmp_sub_expr_right_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_13);

                exception_lineno = 707;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
            Py_DECREF(tmp_sub_expr_left_13);
            Py_DECREF(tmp_sub_expr_right_13);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        assert(var_o_rb == NULL);
        var_o_rb = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_truediv_expr_left_25;
        PyObject *tmp_truediv_expr_right_25;
        PyObject *tmp_truediv_expr_left_26;
        PyObject *tmp_truediv_expr_right_26;
        CHECK_OBJECT(par_center_x);
        tmp_add_expr_left_12 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_25 = par_width;
        tmp_truediv_expr_right_25 = mod_consts[8];
        tmp_add_expr_right_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_25, tmp_truediv_expr_right_25);
        if (tmp_add_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_26 = par_border_width;
        tmp_truediv_expr_right_26 = mod_consts[8];
        tmp_add_expr_right_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_26, tmp_truediv_expr_right_26);
        if (tmp_add_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 708;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_13;
            PyObject *tmp_add_expr_right_13;
            PyObject *tmp_add_expr_left_14;
            PyObject *tmp_add_expr_right_14;
            PyObject *tmp_truediv_expr_left_27;
            PyObject *tmp_truediv_expr_right_27;
            PyObject *tmp_truediv_expr_left_28;
            PyObject *tmp_truediv_expr_right_28;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_7);
            CHECK_OBJECT(par_center_y);
            tmp_add_expr_left_14 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_27 = par_height;
            tmp_truediv_expr_right_27 = mod_consts[8];
            tmp_add_expr_right_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_27, tmp_truediv_expr_right_27);
            if (tmp_add_expr_right_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 708;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
            Py_DECREF(tmp_add_expr_right_14);
            if (tmp_add_expr_left_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 708;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_28 = par_border_width;
            tmp_truediv_expr_right_28 = mod_consts[8];
            tmp_add_expr_right_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_28, tmp_truediv_expr_right_28);
            if (tmp_add_expr_right_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_13);

                exception_lineno = 708;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
            Py_DECREF(tmp_add_expr_left_13);
            Py_DECREF(tmp_add_expr_right_13);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 708;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        assert(var_o_rt == NULL);
        var_o_rt = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_sub_expr_left_15;
        PyObject *tmp_sub_expr_right_15;
        PyObject *tmp_sub_expr_left_16;
        PyObject *tmp_sub_expr_right_16;
        PyObject *tmp_truediv_expr_left_29;
        PyObject *tmp_truediv_expr_right_29;
        PyObject *tmp_truediv_expr_left_30;
        PyObject *tmp_truediv_expr_right_30;
        CHECK_OBJECT(par_center_x);
        tmp_sub_expr_left_16 = par_center_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_29 = par_width;
        tmp_truediv_expr_right_29 = mod_consts[8];
        tmp_sub_expr_right_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_29, tmp_truediv_expr_right_29);
        if (tmp_sub_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_16, tmp_sub_expr_right_16);
        Py_DECREF(tmp_sub_expr_right_16);
        if (tmp_sub_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_border_width);
        tmp_truediv_expr_left_30 = par_border_width;
        tmp_truediv_expr_right_30 = mod_consts[8];
        tmp_sub_expr_right_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_30, tmp_truediv_expr_right_30);
        if (tmp_sub_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_15);

            exception_lineno = 709;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_15, tmp_sub_expr_right_15);
        Py_DECREF(tmp_sub_expr_left_15);
        Py_DECREF(tmp_sub_expr_right_15);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_15;
            PyObject *tmp_add_expr_right_15;
            PyObject *tmp_add_expr_left_16;
            PyObject *tmp_add_expr_right_16;
            PyObject *tmp_truediv_expr_left_31;
            PyObject *tmp_truediv_expr_right_31;
            PyObject *tmp_truediv_expr_left_32;
            PyObject *tmp_truediv_expr_right_32;
            PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_8);
            CHECK_OBJECT(par_center_y);
            tmp_add_expr_left_16 = par_center_y;
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_31 = par_height;
            tmp_truediv_expr_right_31 = mod_consts[8];
            tmp_add_expr_right_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_31, tmp_truediv_expr_right_31);
            if (tmp_add_expr_right_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 709;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
            Py_DECREF(tmp_add_expr_right_16);
            if (tmp_add_expr_left_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 709;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            CHECK_OBJECT(par_border_width);
            tmp_truediv_expr_left_32 = par_border_width;
            tmp_truediv_expr_right_32 = mod_consts[8];
            tmp_add_expr_right_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_32, tmp_truediv_expr_right_32);
            if (tmp_add_expr_right_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_15);

                exception_lineno = 709;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
            Py_DECREF(tmp_add_expr_left_15);
            Py_DECREF(tmp_add_expr_right_15);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 709;
                type_description_1 = "ooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        assert(var_o_lt == NULL);
        var_o_lt = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_o_lt);
        tmp_list_element_1 = var_o_lt;
        tmp_assign_source_9 = MAKE_LIST_EMPTY(10);
        PyList_SET_ITEM0(tmp_assign_source_9, 0, tmp_list_element_1);
        CHECK_OBJECT(var_i_lt);
        tmp_list_element_1 = var_i_lt;
        PyList_SET_ITEM0(tmp_assign_source_9, 1, tmp_list_element_1);
        CHECK_OBJECT(var_o_rt);
        tmp_list_element_1 = var_o_rt;
        PyList_SET_ITEM0(tmp_assign_source_9, 2, tmp_list_element_1);
        CHECK_OBJECT(var_i_rt);
        tmp_list_element_1 = var_i_rt;
        PyList_SET_ITEM0(tmp_assign_source_9, 3, tmp_list_element_1);
        CHECK_OBJECT(var_o_rb);
        tmp_list_element_1 = var_o_rb;
        PyList_SET_ITEM0(tmp_assign_source_9, 4, tmp_list_element_1);
        CHECK_OBJECT(var_i_rb);
        tmp_list_element_1 = var_i_rb;
        PyList_SET_ITEM0(tmp_assign_source_9, 5, tmp_list_element_1);
        CHECK_OBJECT(var_o_lb);
        tmp_list_element_1 = var_o_lb;
        PyList_SET_ITEM0(tmp_assign_source_9, 6, tmp_list_element_1);
        CHECK_OBJECT(var_i_lb);
        tmp_list_element_1 = var_i_lb;
        PyList_SET_ITEM0(tmp_assign_source_9, 7, tmp_list_element_1);
        CHECK_OBJECT(var_o_lt);
        tmp_list_element_1 = var_o_lt;
        PyList_SET_ITEM0(tmp_assign_source_9, 8, tmp_list_element_1);
        CHECK_OBJECT(var_i_lt);
        tmp_list_element_1 = var_i_lt;
        PyList_SET_ITEM0(tmp_assign_source_9, 9, tmp_list_element_1);
        assert(var_point_list == NULL);
        var_point_list = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_tilt_angle);
        tmp_cmp_expr_left_1 = par_tilt_angle;
        tmp_cmp_expr_right_1 = mod_consts[13];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
        assert(var_point_list_2 == NULL);
        var_point_list_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_point_list);
        tmp_iter_arg_1 = var_point_list;
        tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 715;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_13;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_1 = var_point;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_point);
        tmp_expression_value_2 = var_point;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_center_x == NULL) {
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_center_x;
        if (par_center_y == NULL) {
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_center_y;
        if (par_tilt_angle == NULL) {
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_tilt_angle;
        frame_ea330878ad2d03a4a81e7dd56c091c85->m_frame.f_lineno = 716;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new_point;
            var_new_point = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        if (var_point_list_2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_point_list_2;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_new_point);
        tmp_args_element_value_6 = var_new_point;
        frame_ea330878ad2d03a4a81e7dd56c091c85->m_frame.f_lineno = 717;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 715;
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_15;
        if (var_point_list_2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 718;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_15 = var_point_list_2;
        {
            PyObject *old = var_point_list;
            assert(old != NULL);
            var_point_list = tmp_assign_source_15;
            Py_INCREF(var_point_list);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_point_list);
        tmp_args_element_value_7 = var_point_list;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_8 = par_color;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[30]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ea330878ad2d03a4a81e7dd56c091c85->m_frame.f_lineno = 720;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea330878ad2d03a4a81e7dd56c091c85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea330878ad2d03a4a81e7dd56c091c85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea330878ad2d03a4a81e7dd56c091c85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea330878ad2d03a4a81e7dd56c091c85,
        type_description_1,
        par_center_x,
        par_center_y,
        par_width,
        par_height,
        par_color,
        par_border_width,
        par_tilt_angle,
        var_point_list,
        var_point_list_2,
        var_i_lb,
        var_i_rb,
        var_i_rt,
        var_i_lt,
        var_o_lb,
        var_o_rb,
        var_o_rt,
        var_o_lt,
        var_point,
        var_new_point
    );


    // Release cached frame if used for exception.
    if (frame_ea330878ad2d03a4a81e7dd56c091c85 == cache_frame_ea330878ad2d03a4a81e7dd56c091c85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea330878ad2d03a4a81e7dd56c091c85);
        cache_frame_ea330878ad2d03a4a81e7dd56c091c85 = NULL;
    }

    assertFrameObject(frame_ea330878ad2d03a4a81e7dd56c091c85);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_point_list);
    Py_DECREF(var_point_list);
    var_point_list = NULL;
    Py_XDECREF(var_point_list_2);
    var_point_list_2 = NULL;
    CHECK_OBJECT(var_i_lb);
    Py_DECREF(var_i_lb);
    var_i_lb = NULL;
    CHECK_OBJECT(var_i_rb);
    Py_DECREF(var_i_rb);
    var_i_rb = NULL;
    CHECK_OBJECT(var_i_rt);
    Py_DECREF(var_i_rt);
    var_i_rt = NULL;
    CHECK_OBJECT(var_i_lt);
    Py_DECREF(var_i_lt);
    var_i_lt = NULL;
    CHECK_OBJECT(var_o_lb);
    Py_DECREF(var_o_lb);
    var_o_lb = NULL;
    CHECK_OBJECT(var_o_rb);
    Py_DECREF(var_o_rb);
    var_o_rb = NULL;
    CHECK_OBJECT(var_o_rt);
    Py_DECREF(var_o_rt);
    var_o_rt = NULL;
    CHECK_OBJECT(var_o_lt);
    Py_DECREF(var_o_lt);
    var_o_lt = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_new_point);
    var_new_point = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_point_list);
    var_point_list = NULL;
    Py_XDECREF(var_point_list_2);
    var_point_list_2 = NULL;
    Py_XDECREF(var_i_lb);
    var_i_lb = NULL;
    Py_XDECREF(var_i_rb);
    var_i_rb = NULL;
    Py_XDECREF(var_i_rt);
    var_i_rt = NULL;
    Py_XDECREF(var_i_lt);
    var_i_lt = NULL;
    Py_XDECREF(var_o_lb);
    var_o_lb = NULL;
    Py_XDECREF(var_o_rb);
    var_o_rb = NULL;
    Py_XDECREF(var_o_rt);
    var_o_rt = NULL;
    Py_XDECREF(var_o_lt);
    var_o_lt = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_new_point);
    var_new_point = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__22_draw_lrtb_rectangle_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    PyObject *par_top = python_pars[2];
    PyObject *par_bottom = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *var_center_x = NULL;
    PyObject *var_center_y = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    struct Nuitka_FrameObject *frame_b9d663a50284f4fbeb9bfdce0c642a4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e)) {
        Py_XDECREF(cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e = MAKE_FUNCTION_FRAME(tstate, codeobj_b9d663a50284f4fbeb9bfdce0c642a4e, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e->m_type_description == NULL);
    frame_b9d663a50284f4fbeb9bfdce0c642a4e = cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b9d663a50284f4fbeb9bfdce0c642a4e);
    assert(Py_REFCNT(frame_b9d663a50284f4fbeb9bfdce0c642a4e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_left);
        tmp_cmp_expr_left_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_cmp_expr_right_1 = par_right;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[117];
        CHECK_OBJECT(par_left);
        tmp_kw_call_arg_value_1_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_kw_call_arg_value_2_1 = par_right;
        frame_b9d663a50284f4fbeb9bfdce0c642a4e->m_frame.f_lineno = 737;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 737;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b9d663a50284f4fbeb9bfdce0c642a4e->m_frame.f_lineno = 737;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 737;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_bottom);
        tmp_cmp_expr_left_2 = par_bottom;
        CHECK_OBJECT(par_top);
        tmp_cmp_expr_right_2 = par_top;
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        tmp_kw_call_arg_value_0_2 = mod_consts[118];
        CHECK_OBJECT(par_bottom);
        tmp_kw_call_arg_value_1_2 = par_bottom;
        CHECK_OBJECT(par_top);
        tmp_kw_call_arg_value_2_2 = par_top;
        frame_b9d663a50284f4fbeb9bfdce0c642a4e->m_frame.f_lineno = 741;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b9d663a50284f4fbeb9bfdce0c642a4e->m_frame.f_lineno = 741;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 741;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_left);
        tmp_add_expr_left_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_add_expr_right_1 = par_right;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_x == NULL);
        var_center_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_top);
        tmp_add_expr_left_2 = par_top;
        CHECK_OBJECT(par_bottom);
        tmp_add_expr_right_2 = par_bottom;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[8];
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_y == NULL);
        var_center_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_sub_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_sub_expr_right_1 = par_left;
        tmp_add_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[2];
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(par_top);
        tmp_sub_expr_left_2 = par_top;
        CHECK_OBJECT(par_bottom);
        tmp_sub_expr_right_2 = par_bottom;
        tmp_add_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 747;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = mod_consts[2];
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 747;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_center_x);
        tmp_args_element_value_1 = var_center_x;
        CHECK_OBJECT(var_center_y);
        tmp_args_element_value_2 = var_center_y;
        CHECK_OBJECT(var_width);
        tmp_args_element_value_3 = var_width;
        CHECK_OBJECT(var_height);
        tmp_args_element_value_4 = var_height;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        frame_b9d663a50284f4fbeb9bfdce0c642a4e->m_frame.f_lineno = 748;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9d663a50284f4fbeb9bfdce0c642a4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9d663a50284f4fbeb9bfdce0c642a4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9d663a50284f4fbeb9bfdce0c642a4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9d663a50284f4fbeb9bfdce0c642a4e,
        type_description_1,
        par_left,
        par_right,
        par_top,
        par_bottom,
        par_color,
        var_center_x,
        var_center_y,
        var_width,
        var_height
    );


    // Release cached frame if used for exception.
    if (frame_b9d663a50284f4fbeb9bfdce0c642a4e == cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e);
        cache_frame_b9d663a50284f4fbeb9bfdce0c642a4e = NULL;
    }

    assertFrameObject(frame_b9d663a50284f4fbeb9bfdce0c642a4e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_center_x);
    Py_DECREF(var_center_x);
    var_center_x = NULL;
    CHECK_OBJECT(var_center_y);
    Py_DECREF(var_center_y);
    var_center_y = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_center_x);
    var_center_x = NULL;
    Py_XDECREF(var_center_y);
    var_center_y = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__23_draw_xywh_rectangle_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bottom_left_x = python_pars[0];
    PyObject *par_bottom_left_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *var_center_x = NULL;
    PyObject *var_center_y = NULL;
    struct Nuitka_FrameObject *frame_651fe29c80ea34068f37b2875bc98434;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_651fe29c80ea34068f37b2875bc98434 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_651fe29c80ea34068f37b2875bc98434)) {
        Py_XDECREF(cache_frame_651fe29c80ea34068f37b2875bc98434);

#if _DEBUG_REFCOUNTS
        if (cache_frame_651fe29c80ea34068f37b2875bc98434 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_651fe29c80ea34068f37b2875bc98434 = MAKE_FUNCTION_FRAME(tstate, codeobj_651fe29c80ea34068f37b2875bc98434, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_651fe29c80ea34068f37b2875bc98434->m_type_description == NULL);
    frame_651fe29c80ea34068f37b2875bc98434 = cache_frame_651fe29c80ea34068f37b2875bc98434;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_651fe29c80ea34068f37b2875bc98434);
    assert(Py_REFCNT(frame_651fe29c80ea34068f37b2875bc98434) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_bottom_left_x);
        tmp_add_expr_left_1 = par_bottom_left_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_1 = par_width;
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_x == NULL);
        var_center_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(par_bottom_left_y);
        tmp_add_expr_left_2 = par_bottom_left_y;
        CHECK_OBJECT(par_height);
        tmp_truediv_expr_left_2 = par_height;
        tmp_truediv_expr_right_2 = mod_consts[8];
        tmp_add_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_y == NULL);
        var_center_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_center_x);
        tmp_args_element_value_1 = var_center_x;
        CHECK_OBJECT(var_center_y);
        tmp_args_element_value_2 = var_center_y;
        CHECK_OBJECT(par_width);
        tmp_args_element_value_3 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_4 = par_height;
        CHECK_OBJECT(par_color);
        tmp_args_element_value_5 = par_color;
        frame_651fe29c80ea34068f37b2875bc98434->m_frame.f_lineno = 766;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_651fe29c80ea34068f37b2875bc98434, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_651fe29c80ea34068f37b2875bc98434->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_651fe29c80ea34068f37b2875bc98434, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_651fe29c80ea34068f37b2875bc98434,
        type_description_1,
        par_bottom_left_x,
        par_bottom_left_y,
        par_width,
        par_height,
        par_color,
        var_center_x,
        var_center_y
    );


    // Release cached frame if used for exception.
    if (frame_651fe29c80ea34068f37b2875bc98434 == cache_frame_651fe29c80ea34068f37b2875bc98434) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_651fe29c80ea34068f37b2875bc98434);
        cache_frame_651fe29c80ea34068f37b2875bc98434 = NULL;
    }

    assertFrameObject(frame_651fe29c80ea34068f37b2875bc98434);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_center_x);
    Py_DECREF(var_center_x);
    var_center_x = NULL;
    CHECK_OBJECT(var_center_y);
    Py_DECREF(var_center_y);
    var_center_y = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_center_x);
    var_center_x = NULL;
    Py_XDECREF(var_center_y);
    var_center_y = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bottom_left_x);
    Py_DECREF(par_bottom_left_x);
    CHECK_OBJECT(par_bottom_left_y);
    Py_DECREF(par_bottom_left_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bottom_left_x);
    Py_DECREF(par_bottom_left_x);
    CHECK_OBJECT(par_bottom_left_y);
    Py_DECREF(par_bottom_left_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__24_draw_rectangle_filled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_tilt_angle = python_pars[5];
    PyObject *var_window = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_program = NULL;
    PyObject *var_geometry = NULL;
    PyObject *var_buffer = NULL;
    PyObject *var_color_normalized = NULL;
    struct Nuitka_FrameObject *frame_c72e2b65430c3e6084e5443ffac17623;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c72e2b65430c3e6084e5443ffac17623 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c72e2b65430c3e6084e5443ffac17623)) {
        Py_XDECREF(cache_frame_c72e2b65430c3e6084e5443ffac17623);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c72e2b65430c3e6084e5443ffac17623 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c72e2b65430c3e6084e5443ffac17623 = MAKE_FUNCTION_FRAME(tstate, codeobj_c72e2b65430c3e6084e5443ffac17623, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c72e2b65430c3e6084e5443ffac17623->m_type_description == NULL);
    frame_c72e2b65430c3e6084e5443ffac17623 = cache_frame_c72e2b65430c3e6084e5443ffac17623;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c72e2b65430c3e6084e5443ffac17623);
    assert(Py_REFCNT(frame_c72e2b65430c3e6084e5443ffac17623) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c72e2b65430c3e6084e5443ffac17623->m_frame.f_lineno = 783;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[96]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_program == NULL);
        var_program = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[97]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geometry == NULL);
        var_geometry = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_4 = var_ctx;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[98]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_color);
        tmp_len_arg_1 = par_color;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 3;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_color);
        tmp_expression_value_5 = par_color;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[48];
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_6 = par_color;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_color);
            tmp_expression_value_7 = par_color;
            tmp_subscript_value_3 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_3 = mod_consts[48];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_assign_source_6, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_6;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_color);
        tmp_len_arg_2 = par_color;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 4;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_color);
        tmp_expression_value_8 = par_color;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 793;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[48];
        tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 793;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_9 = par_color;
            tmp_subscript_value_5 = mod_consts[2];
            tmp_truediv_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 1);
            if (tmp_truediv_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 793;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_5 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 793;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_10 = par_color;
            tmp_subscript_value_6 = mod_consts[8];
            tmp_truediv_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 2);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 793;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_6 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 793;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_color);
            tmp_expression_value_11 = par_color;
            tmp_subscript_value_7 = mod_consts[50];
            tmp_truediv_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 3);
            if (tmp_truediv_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 793;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_truediv_expr_right_7 = mod_consts[48];
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            Py_DECREF(tmp_truediv_expr_left_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 793;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_color_normalized == NULL);
        var_color_normalized = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_c72e2b65430c3e6084e5443ffac17623->m_frame.f_lineno = 795;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 795;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_color_normalized);
        tmp_ass_subvalue_1 = var_color_normalized;
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_1 = var_program;
        tmp_ass_subscript_1 = mod_consts[52];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_width);
        tmp_tuple_element_3 = par_width;
        tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_height);
        tmp_tuple_element_3 = par_height;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(par_tilt_angle);
        tmp_tuple_element_3 = par_tilt_angle;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 2, tmp_tuple_element_3);
        CHECK_OBJECT(var_program);
        tmp_ass_subscribed_2 = var_program;
        tmp_ass_subscript_2 = mod_consts[53];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_12 = var_buffer;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 799;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[57];
        CHECK_OBJECT(par_center_x);
        tmp_tuple_element_4 = par_center_x;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_center_y);
        tmp_tuple_element_4 = par_center_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_4);
        frame_c72e2b65430c3e6084e5443ffac17623->m_frame.f_lineno = 799;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 799;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c72e2b65430c3e6084e5443ffac17623->m_frame.f_lineno = 799;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(var_geometry);
        tmp_expression_value_13 = var_geometry;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[59]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_program);
        tmp_kw_call_arg_value_0_1 = var_program;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_14 = var_ctx;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[101]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 800;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[2];
        frame_c72e2b65430c3e6084e5443ffac17623->m_frame.f_lineno = 800;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 800;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c72e2b65430c3e6084e5443ffac17623, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c72e2b65430c3e6084e5443ffac17623->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c72e2b65430c3e6084e5443ffac17623, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c72e2b65430c3e6084e5443ffac17623,
        type_description_1,
        par_center_x,
        par_center_y,
        par_width,
        par_height,
        par_color,
        par_tilt_angle,
        var_window,
        var_ctx,
        var_program,
        var_geometry,
        var_buffer,
        var_color_normalized
    );


    // Release cached frame if used for exception.
    if (frame_c72e2b65430c3e6084e5443ffac17623 == cache_frame_c72e2b65430c3e6084e5443ffac17623) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c72e2b65430c3e6084e5443ffac17623);
        cache_frame_c72e2b65430c3e6084e5443ffac17623 = NULL;
    }

    assertFrameObject(frame_c72e2b65430c3e6084e5443ffac17623);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_program);
    Py_DECREF(var_program);
    var_program = NULL;
    CHECK_OBJECT(var_geometry);
    Py_DECREF(var_geometry);
    var_geometry = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_color_normalized);
    Py_DECREF(var_color_normalized);
    var_color_normalized = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_program);
    var_program = NULL;
    Py_XDECREF(var_geometry);
    var_geometry = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_color_normalized);
    var_color_normalized = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_tilt_angle);
    Py_DECREF(par_tilt_angle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__25_draw_scaled_texture_rectangle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_texture = python_pars[2];
    PyObject *par_scale = python_pars[3];
    PyObject *par_angle = python_pars[4];
    PyObject *par_alpha = python_pars[5];
    struct Nuitka_FrameObject *frame_ba0140247a4ef2d2f4c9974968c7e701;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba0140247a4ef2d2f4c9974968c7e701 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba0140247a4ef2d2f4c9974968c7e701)) {
        Py_XDECREF(cache_frame_ba0140247a4ef2d2f4c9974968c7e701);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba0140247a4ef2d2f4c9974968c7e701 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba0140247a4ef2d2f4c9974968c7e701 = MAKE_FUNCTION_FRAME(tstate, codeobj_ba0140247a4ef2d2f4c9974968c7e701, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba0140247a4ef2d2f4c9974968c7e701->m_type_description == NULL);
    frame_ba0140247a4ef2d2f4c9974968c7e701 = cache_frame_ba0140247a4ef2d2f4c9974968c7e701;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ba0140247a4ef2d2f4c9974968c7e701);
    assert(Py_REFCNT(frame_ba0140247a4ef2d2f4c9974968c7e701) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_texture);
        tmp_called_instance_1 = par_texture;
        CHECK_OBJECT(par_center_x);
        tmp_args_element_value_1 = par_center_x;
        CHECK_OBJECT(par_center_y);
        tmp_args_element_value_2 = par_center_y;
        CHECK_OBJECT(par_scale);
        tmp_args_element_value_3 = par_scale;
        CHECK_OBJECT(par_angle);
        tmp_args_element_value_4 = par_angle;
        CHECK_OBJECT(par_alpha);
        tmp_args_element_value_5 = par_alpha;
        frame_ba0140247a4ef2d2f4c9974968c7e701->m_frame.f_lineno = 819;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_1,
                mod_consts[122],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba0140247a4ef2d2f4c9974968c7e701, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba0140247a4ef2d2f4c9974968c7e701->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba0140247a4ef2d2f4c9974968c7e701, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba0140247a4ef2d2f4c9974968c7e701,
        type_description_1,
        par_center_x,
        par_center_y,
        par_texture,
        par_scale,
        par_angle,
        par_alpha
    );


    // Release cached frame if used for exception.
    if (frame_ba0140247a4ef2d2f4c9974968c7e701 == cache_frame_ba0140247a4ef2d2f4c9974968c7e701) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba0140247a4ef2d2f4c9974968c7e701);
        cache_frame_ba0140247a4ef2d2f4c9974968c7e701 = NULL;
    }

    assertFrameObject(frame_ba0140247a4ef2d2f4c9974968c7e701);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_texture);
    Py_DECREF(par_texture);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_texture);
    Py_DECREF(par_texture);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__26_draw_texture_rectangle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_center_x = python_pars[0];
    PyObject *par_center_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_texture = python_pars[4];
    PyObject *par_angle = python_pars[5];
    PyObject *par_alpha = python_pars[6];
    struct Nuitka_FrameObject *frame_2e14f690cc3e94b69bfd8ef3783f04c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0)) {
        Py_XDECREF(cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_2e14f690cc3e94b69bfd8ef3783f04c0, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0->m_type_description == NULL);
    frame_2e14f690cc3e94b69bfd8ef3783f04c0 = cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2e14f690cc3e94b69bfd8ef3783f04c0);
    assert(Py_REFCNT(frame_2e14f690cc3e94b69bfd8ef3783f04c0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_texture);
        tmp_called_instance_1 = par_texture;
        CHECK_OBJECT(par_center_x);
        tmp_args_element_value_1 = par_center_x;
        CHECK_OBJECT(par_center_y);
        tmp_args_element_value_2 = par_center_y;
        CHECK_OBJECT(par_width);
        tmp_args_element_value_3 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_4 = par_height;
        CHECK_OBJECT(par_angle);
        tmp_args_element_value_5 = par_angle;
        CHECK_OBJECT(par_alpha);
        tmp_args_element_value_6 = par_alpha;
        frame_2e14f690cc3e94b69bfd8ef3783f04c0->m_frame.f_lineno = 840;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS6(
                tstate,
                tmp_called_instance_1,
                mod_consts[124],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 840;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e14f690cc3e94b69bfd8ef3783f04c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e14f690cc3e94b69bfd8ef3783f04c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e14f690cc3e94b69bfd8ef3783f04c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e14f690cc3e94b69bfd8ef3783f04c0,
        type_description_1,
        par_center_x,
        par_center_y,
        par_width,
        par_height,
        par_texture,
        par_angle,
        par_alpha
    );


    // Release cached frame if used for exception.
    if (frame_2e14f690cc3e94b69bfd8ef3783f04c0 == cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0);
        cache_frame_2e14f690cc3e94b69bfd8ef3783f04c0 = NULL;
    }

    assertFrameObject(frame_2e14f690cc3e94b69bfd8ef3783f04c0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_texture);
    Py_DECREF(par_texture);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_center_x);
    Py_DECREF(par_center_x);
    CHECK_OBJECT(par_center_y);
    Py_DECREF(par_center_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_texture);
    Py_DECREF(par_texture);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__27_draw_lrwh_rectangle_textured(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bottom_left_x = python_pars[0];
    PyObject *par_bottom_left_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_texture = python_pars[4];
    PyObject *par_angle = python_pars[5];
    PyObject *par_alpha = python_pars[6];
    PyObject *var_center_x = NULL;
    PyObject *var_center_y = NULL;
    struct Nuitka_FrameObject *frame_b9ee7dd88eb3687ea152ac0f0916f14b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b)) {
        Py_XDECREF(cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b = MAKE_FUNCTION_FRAME(tstate, codeobj_b9ee7dd88eb3687ea152ac0f0916f14b, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b->m_type_description == NULL);
    frame_b9ee7dd88eb3687ea152ac0f0916f14b = cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b9ee7dd88eb3687ea152ac0f0916f14b);
    assert(Py_REFCNT(frame_b9ee7dd88eb3687ea152ac0f0916f14b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_bottom_left_x);
        tmp_add_expr_left_1 = par_bottom_left_x;
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_1 = par_width;
        tmp_truediv_expr_right_1 = mod_consts[8];
        tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_x == NULL);
        var_center_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(par_bottom_left_y);
        tmp_add_expr_left_2 = par_bottom_left_y;
        CHECK_OBJECT(par_height);
        tmp_truediv_expr_left_2 = par_height;
        tmp_truediv_expr_right_2 = mod_consts[8];
        tmp_add_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_center_y == NULL);
        var_center_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_texture);
        tmp_expression_value_1 = par_texture;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[124]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 862;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_center_x);
        tmp_kw_call_arg_value_0_1 = var_center_x;
        CHECK_OBJECT(var_center_y);
        tmp_kw_call_arg_value_1_1 = var_center_y;
        CHECK_OBJECT(par_width);
        tmp_kw_call_arg_value_2_1 = par_width;
        CHECK_OBJECT(par_height);
        tmp_kw_call_arg_value_3_1 = par_height;
        CHECK_OBJECT(par_angle);
        tmp_kw_call_dict_value_0_1 = par_angle;
        CHECK_OBJECT(par_alpha);
        tmp_kw_call_dict_value_1_1 = par_alpha;
        frame_b9ee7dd88eb3687ea152ac0f0916f14b->m_frame.f_lineno = 862;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[126]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 862;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9ee7dd88eb3687ea152ac0f0916f14b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9ee7dd88eb3687ea152ac0f0916f14b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9ee7dd88eb3687ea152ac0f0916f14b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9ee7dd88eb3687ea152ac0f0916f14b,
        type_description_1,
        par_bottom_left_x,
        par_bottom_left_y,
        par_width,
        par_height,
        par_texture,
        par_angle,
        par_alpha,
        var_center_x,
        var_center_y
    );


    // Release cached frame if used for exception.
    if (frame_b9ee7dd88eb3687ea152ac0f0916f14b == cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b);
        cache_frame_b9ee7dd88eb3687ea152ac0f0916f14b = NULL;
    }

    assertFrameObject(frame_b9ee7dd88eb3687ea152ac0f0916f14b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_center_x);
    Py_DECREF(var_center_x);
    var_center_x = NULL;
    CHECK_OBJECT(var_center_y);
    Py_DECREF(var_center_y);
    var_center_y = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_center_x);
    var_center_x = NULL;
    Py_XDECREF(var_center_y);
    var_center_y = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bottom_left_x);
    Py_DECREF(par_bottom_left_x);
    CHECK_OBJECT(par_bottom_left_y);
    Py_DECREF(par_bottom_left_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_texture);
    Py_DECREF(par_texture);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bottom_left_x);
    Py_DECREF(par_bottom_left_x);
    CHECK_OBJECT(par_bottom_left_y);
    Py_DECREF(par_bottom_left_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_texture);
    Py_DECREF(par_texture);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$draw_commands$$$function__28_get_pixel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_components = python_pars[2];
    PyObject *var_window = NULL;
    PyObject *var_pixel_ratio = NULL;
    PyObject *var_a = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_6f0a093f3bb2f75a91c404a88c571499;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6f0a093f3bb2f75a91c404a88c571499 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6f0a093f3bb2f75a91c404a88c571499)) {
        Py_XDECREF(cache_frame_6f0a093f3bb2f75a91c404a88c571499);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f0a093f3bb2f75a91c404a88c571499 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f0a093f3bb2f75a91c404a88c571499 = MAKE_FUNCTION_FRAME(tstate, codeobj_6f0a093f3bb2f75a91c404a88c571499, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f0a093f3bb2f75a91c404a88c571499->m_type_description == NULL);
    frame_6f0a093f3bb2f75a91c404a88c571499 = cache_frame_6f0a093f3bb2f75a91c404a88c571499;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6f0a093f3bb2f75a91c404a88c571499);
    assert(Py_REFCNT(frame_6f0a093f3bb2f75a91c404a88c571499) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_6f0a093f3bb2f75a91c404a88c571499->m_frame.f_lineno = 879;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_window);
        tmp_called_instance_1 = var_window;
        frame_6f0a093f3bb2f75a91c404a88c571499->m_frame.f_lineno = 881;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[128]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 881;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pixel_ratio == NULL);
        var_pixel_ratio = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_pixel_ratio);
        tmp_mult_expr_left_1 = var_pixel_ratio;
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 882;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 882;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_pixel_ratio);
        tmp_mult_expr_left_2 = var_pixel_ratio;
        CHECK_OBJECT(par_y);
        tmp_mult_expr_right_2 = par_y;
        tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 883;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 883;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert(old != NULL);
            par_y = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[129]);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[74];
        tmp_called_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_6f0a093f3bb2f75a91c404a88c571499->m_frame.f_lineno = 885;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[130]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[131]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_2 = par_y;
        tmp_args_element_value_3 = mod_consts[2];
        tmp_args_element_value_4 = mod_consts[2];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[132]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[133]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_a);
        tmp_args_element_value_7 = var_a;
        frame_6f0a093f3bb2f75a91c404a88c571499->m_frame.f_lineno = 886;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_stop_value_1;
            CHECK_OBJECT(var_a);
            tmp_expression_value_5 = var_a;
            CHECK_OBJECT(par_components);
            tmp_stop_value_1 = par_components;
            tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
            assert(!(tmp_subscript_value_1 == NULL));
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 887;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 887;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_6;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 887;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f0a093f3bb2f75a91c404a88c571499, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f0a093f3bb2f75a91c404a88c571499->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f0a093f3bb2f75a91c404a88c571499, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f0a093f3bb2f75a91c404a88c571499,
        type_description_1,
        par_x,
        par_y,
        par_components,
        var_window,
        var_pixel_ratio,
        var_a
    );


    // Release cached frame if used for exception.
    if (frame_6f0a093f3bb2f75a91c404a88c571499 == cache_frame_6f0a093f3bb2f75a91c404a88c571499) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f0a093f3bb2f75a91c404a88c571499);
        cache_frame_6f0a093f3bb2f75a91c404a88c571499 = NULL;
    }

    assertFrameObject(frame_6f0a093f3bb2f75a91c404a88c571499);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    par_y = NULL;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_pixel_ratio);
    Py_DECREF(var_pixel_ratio);
    var_pixel_ratio = NULL;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_y);
    par_y = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_pixel_ratio);
    var_pixel_ratio = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr_locals {
    PyObject *var_i;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr_locals *generator_heap = (struct arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_86b804faf5a29dd8fee8e96e437ac774, module_arcade$draw_commands, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 887;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_int_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_int_arg_1 = generator_heap->var_i;
        tmp_expression_value_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 887;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 887;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 887;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_i
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr_context,
        module_arcade$draw_commands,
        mod_consts[135],
#if PYTHON_VERSION >= 0x350
        mod_consts[136],
#endif
        codeobj_86b804faf5a29dd8fee8e96e437ac774,
        closure,
        1,
#if 1
        sizeof(struct arcade$draw_commands$$$function__28_get_pixel$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_arcade$draw_commands$$$function__29_get_image(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *var_window = NULL;
    PyObject *var_pixel_ratio = NULL;
    PyObject *var_image_buffer = NULL;
    PyObject *var_image = NULL;
    struct Nuitka_FrameObject *frame_de0929fe113bbe31a2ce5859747fdbd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_de0929fe113bbe31a2ce5859747fdbd0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_de0929fe113bbe31a2ce5859747fdbd0)) {
        Py_XDECREF(cache_frame_de0929fe113bbe31a2ce5859747fdbd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de0929fe113bbe31a2ce5859747fdbd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de0929fe113bbe31a2ce5859747fdbd0 = MAKE_FUNCTION_FRAME(tstate, codeobj_de0929fe113bbe31a2ce5859747fdbd0, module_arcade$draw_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de0929fe113bbe31a2ce5859747fdbd0->m_type_description == NULL);
    frame_de0929fe113bbe31a2ce5859747fdbd0 = cache_frame_de0929fe113bbe31a2ce5859747fdbd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_de0929fe113bbe31a2ce5859747fdbd0);
    assert(Py_REFCNT(frame_de0929fe113bbe31a2ce5859747fdbd0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 906;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_de0929fe113bbe31a2ce5859747fdbd0->m_frame.f_lineno = 906;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 906;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_window);
        tmp_called_instance_1 = var_window;
        frame_de0929fe113bbe31a2ce5859747fdbd0->m_frame.f_lineno = 908;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[128]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pixel_ratio == NULL);
        var_pixel_ratio = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_pixel_ratio);
        tmp_mult_expr_left_1 = var_pixel_ratio;
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_pixel_ratio);
        tmp_mult_expr_left_2 = var_pixel_ratio;
        CHECK_OBJECT(par_y);
        tmp_mult_expr_right_2 = par_y;
        tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert(old != NULL);
            par_y = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_width);
        tmp_cmp_expr_left_1 = par_width;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_sub_expr_right_1 = par_x;
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_width;
            assert(old != NULL);
            par_width = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_height);
        tmp_cmp_expr_left_2 = par_height;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_window);
        tmp_expression_value_2 = var_window;
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 915;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_sub_expr_right_2 = par_y;
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 915;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_height;
            assert(old != NULL);
            par_height = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_pixel_ratio);
        tmp_mult_expr_left_3 = var_pixel_ratio;
        CHECK_OBJECT(par_width);
        tmp_mult_expr_right_3 = par_width;
        tmp_int_arg_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_int_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_width;
            assert(old != NULL);
            par_width = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        CHECK_OBJECT(var_pixel_ratio);
        tmp_mult_expr_left_4 = var_pixel_ratio;
        CHECK_OBJECT(par_height);
        tmp_mult_expr_right_4 = par_height;
        tmp_int_arg_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_int_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_height;
            assert(old != NULL);
            par_height = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[129]);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_7 = mod_consts[74];
        CHECK_OBJECT(par_width);
        tmp_mult_expr_right_7 = par_width;
        tmp_mult_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_mult_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);

            exception_lineno = 922;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_height);
        tmp_mult_expr_right_6 = par_height;
        tmp_mult_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);

            exception_lineno = 922;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_de0929fe113bbe31a2ce5859747fdbd0->m_frame.f_lineno = 922;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[130]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 922;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image_buffer == NULL);
        var_image_buffer = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[131]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_x == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[137]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_x;
        if (par_y == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[138]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_y;
        CHECK_OBJECT(par_width);
        tmp_args_element_value_3 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_4 = par_height;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[132]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[133]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_image_buffer);
        tmp_args_element_value_7 = var_image_buffer;
        frame_de0929fe113bbe31a2ce5859747fdbd0->m_frame.f_lineno = 924;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[140]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[142];
        CHECK_OBJECT(par_width);
        tmp_tuple_element_1 = par_width;
        tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_height);
        tmp_tuple_element_1 = par_height;
        PyTuple_SET_ITEM0(tmp_args_element_value_9, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_image_buffer);
        tmp_args_element_value_10 = var_image_buffer;
        frame_de0929fe113bbe31a2ce5859747fdbd0->m_frame.f_lineno = 925;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[141],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image == NULL);
        var_image = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[143]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_image);
        tmp_args_element_value_11 = var_image;
        frame_de0929fe113bbe31a2ce5859747fdbd0->m_frame.f_lineno = 926;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[144], tmp_args_element_value_11);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_image;
            assert(old != NULL);
            var_image = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de0929fe113bbe31a2ce5859747fdbd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de0929fe113bbe31a2ce5859747fdbd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de0929fe113bbe31a2ce5859747fdbd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de0929fe113bbe31a2ce5859747fdbd0,
        type_description_1,
        par_x,
        par_y,
        par_width,
        par_height,
        var_window,
        var_pixel_ratio,
        var_image_buffer,
        var_image
    );


    // Release cached frame if used for exception.
    if (frame_de0929fe113bbe31a2ce5859747fdbd0 == cache_frame_de0929fe113bbe31a2ce5859747fdbd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de0929fe113bbe31a2ce5859747fdbd0);
        cache_frame_de0929fe113bbe31a2ce5859747fdbd0 = NULL;
    }

    assertFrameObject(frame_de0929fe113bbe31a2ce5859747fdbd0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_image);
    tmp_return_value = var_image;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_y);
    par_y = NULL;
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    par_width = NULL;
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    par_height = NULL;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_pixel_ratio);
    Py_DECREF(var_pixel_ratio);
    var_pixel_ratio = NULL;
    CHECK_OBJECT(var_image_buffer);
    Py_DECREF(var_image_buffer);
    var_image_buffer = NULL;
    CHECK_OBJECT(var_image);
    Py_DECREF(var_image);
    var_image = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_y);
    par_y = NULL;
    Py_XDECREF(par_width);
    par_width = NULL;
    Py_XDECREF(par_height);
    par_height = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_pixel_ratio);
    var_pixel_ratio = NULL;
    Py_XDECREF(var_image_buffer);
    var_image_buffer = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__10_draw_line_strip(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__10_draw_line_strip,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13de2a10df279ce228281468f10a0e5f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__11_draw_line(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__11_draw_line,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f14034a8e6daa11bc3a6d577765c2e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[92],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__12_draw_lines(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__12_draw_lines,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7031eff880db8a71a7d1bbd192741280,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__13_draw_point(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__13_draw_point,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa4c41670a36ea2916a1d13ae7dc265c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__14_draw_points(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__14_draw_points,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b34188845368c695444f1e2a1a1aef25,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__15_draw_polygon_filled(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__15_draw_polygon_filled,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c7cb3b58f6243af4aa14e434cffb2f56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__16_draw_polygon_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__16_draw_polygon_outline,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_802bcd0d8210e5eafcf7dacd898be13f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[106],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__17_draw_triangle_filled(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__17_draw_triangle_filled,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a7097d120b2335b6a5186506cc99620,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__18_draw_triangle_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__18_draw_triangle_outline,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0c47bba2fa838ce0b46a041c2793e89,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__19_draw_lrtb_rectangle_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__19_draw_lrtb_rectangle_outline,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43813661009e692cbf6486a5a6efaa13,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[113],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__1_draw_arc_filled(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__1_draw_arc_filled,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_48b474d3ecfd06e4017a33b21402e0d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__20_draw_xywh_rectangle_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__20_draw_xywh_rectangle_outline,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e85c64b771a189fb283e6ca2d0ab8f23,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__21_draw_rectangle_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__21_draw_rectangle_outline,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ea330878ad2d03a4a81e7dd56c091c85,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[116],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__22_draw_lrtb_rectangle_filled(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__22_draw_lrtb_rectangle_filled,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9d663a50284f4fbeb9bfdce0c642a4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[119],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__23_draw_xywh_rectangle_filled(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__23_draw_xywh_rectangle_filled,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_651fe29c80ea34068f37b2875bc98434,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__24_draw_rectangle_filled(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__24_draw_rectangle_filled,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c72e2b65430c3e6084e5443ffac17623,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[121],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__25_draw_scaled_texture_rectangle(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__25_draw_scaled_texture_rectangle,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba0140247a4ef2d2f4c9974968c7e701,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__26_draw_texture_rectangle(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__26_draw_texture_rectangle,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e14f690cc3e94b69bfd8ef3783f04c0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[125],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__27_draw_lrwh_rectangle_textured(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__27_draw_lrwh_rectangle_textured,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9ee7dd88eb3687ea152ac0f0916f14b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__28_get_pixel(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__28_get_pixel,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f0a093f3bb2f75a91c404a88c571499,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[134],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__29_get_image(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__29_get_image,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_de0929fe113bbe31a2ce5859747fdbd0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[145],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__2_draw_arc_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__2_draw_arc_outline,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_649eb054ce92861093195308f24ca615,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__3_draw_parabola_filled(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__3_draw_parabola_filled,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5576f7de8039870cce4a685f9d8f3534,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__4_draw_parabola_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__4_draw_parabola_outline,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae3896fca990503b46021040d22af441,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__5_draw_circle_filled(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__5_draw_circle_filled,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c7ecaf82122c691f6a899355477cbdcd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__6_draw_circle_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__6_draw_circle_outline,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f2bcb33b2c9c666a9ba85ae80edead2c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__7_draw_ellipse_filled(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__7_draw_ellipse_filled,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9eadd2e35dfbb911baac33471ce90862,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__8_draw_ellipse_outline(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__8_draw_ellipse_outline,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_356f62113a5a347bf6a1c82dfdebf3d2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__9__generic_draw_line_strip(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__9__generic_draw_line_strip,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ad1b6d3985e598a2a0c38d5fa878feb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$draw_commands,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$draw_commands$$$function__9__generic_draw_line_strip$$$function__1_gen_flatten() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$draw_commands$$$function__9__generic_draw_line_strip$$$function__1_gen_flatten,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_b822802f24814a5b41bfbc0eab8a3f78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$draw_commands,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_arcade$draw_commands[] = {
    impl_arcade$draw_commands$$$function__9__generic_draw_line_strip$$$function__1_gen_flatten,
    impl_arcade$draw_commands$$$function__1_draw_arc_filled,
    impl_arcade$draw_commands$$$function__2_draw_arc_outline,
    impl_arcade$draw_commands$$$function__3_draw_parabola_filled,
    impl_arcade$draw_commands$$$function__4_draw_parabola_outline,
    impl_arcade$draw_commands$$$function__5_draw_circle_filled,
    impl_arcade$draw_commands$$$function__6_draw_circle_outline,
    impl_arcade$draw_commands$$$function__7_draw_ellipse_filled,
    impl_arcade$draw_commands$$$function__8_draw_ellipse_outline,
    impl_arcade$draw_commands$$$function__9__generic_draw_line_strip,
    impl_arcade$draw_commands$$$function__10_draw_line_strip,
    impl_arcade$draw_commands$$$function__11_draw_line,
    impl_arcade$draw_commands$$$function__12_draw_lines,
    impl_arcade$draw_commands$$$function__13_draw_point,
    impl_arcade$draw_commands$$$function__14_draw_points,
    impl_arcade$draw_commands$$$function__15_draw_polygon_filled,
    impl_arcade$draw_commands$$$function__16_draw_polygon_outline,
    impl_arcade$draw_commands$$$function__17_draw_triangle_filled,
    impl_arcade$draw_commands$$$function__18_draw_triangle_outline,
    impl_arcade$draw_commands$$$function__19_draw_lrtb_rectangle_outline,
    impl_arcade$draw_commands$$$function__20_draw_xywh_rectangle_outline,
    impl_arcade$draw_commands$$$function__21_draw_rectangle_outline,
    impl_arcade$draw_commands$$$function__22_draw_lrtb_rectangle_filled,
    impl_arcade$draw_commands$$$function__23_draw_xywh_rectangle_filled,
    impl_arcade$draw_commands$$$function__24_draw_rectangle_filled,
    impl_arcade$draw_commands$$$function__25_draw_scaled_texture_rectangle,
    impl_arcade$draw_commands$$$function__26_draw_texture_rectangle,
    impl_arcade$draw_commands$$$function__27_draw_lrwh_rectangle_textured,
    impl_arcade$draw_commands$$$function__28_get_pixel,
    impl_arcade$draw_commands$$$function__29_get_image,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_arcade$draw_commands;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_arcade$draw_commands) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_arcade$draw_commands[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_arcade$draw_commands,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_arcade$draw_commands(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("arcade.draw_commands");

    // Store the module for future use.
    module_arcade$draw_commands = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("arcade.draw_commands: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("arcade.draw_commands: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initarcade$draw_commands\n");

    moduledict_arcade$draw_commands = MODULE_DICT(module_arcade$draw_commands);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_arcade$draw_commands,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_arcade$draw_commands,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[265]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_arcade$draw_commands,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$draw_commands,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$draw_commands,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_arcade$draw_commands);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_arcade$draw_commands);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_527aea5d9292171f2b8845e12250d6f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_2);
    }
    frame_527aea5d9292171f2b8845e12250d6f0 = MAKE_MODULE_FRAME(codeobj_527aea5d9292171f2b8845e12250d6f0, module_arcade$draw_commands);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_527aea5d9292171f2b8845e12250d6f0);
    assert(Py_REFCNT(frame_527aea5d9292171f2b8845e12250d6f0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[150], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[151], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[56];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[153];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 14;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[154];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 15;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[155];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 16;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[156];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[21],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[157],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[157]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[158],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[158]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_False;
        UPDATE_STRING_DICT0(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[160];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[161];
        tmp_level_value_7 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 24;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[162],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[162]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[160];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[163];
        tmp_level_value_8 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 25;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[164],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[164]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[160];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[165];
        tmp_level_value_9 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 26;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[103],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[166];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[167];
        tmp_level_value_10 = mod_consts[2];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 27;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[15],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[160];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[168];
        tmp_level_value_11 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 28;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[67],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[160];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[169];
        tmp_level_value_12 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 29;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[83],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[160];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[170];
        tmp_level_value_13 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 30;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[171],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[171]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[160];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_arcade$draw_commands;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[172];
        tmp_level_value_14 = mod_consts[13];
        frame_527aea5d9292171f2b8845e12250d6f0->m_frame.f_lineno = 31;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_arcade$draw_commands,
                mod_consts[43],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_defaults_1 = mod_consts[173];
        tmp_dict_key_1 = mod_consts[18];
        tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[19];
        tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[52];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[174];
        tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[175];
        tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_21 = MAKE_FUNCTION_arcade$draw_commands$$$function__1_draw_arc_filled(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_defaults_2 = mod_consts[176];
        tmp_dict_key_2 = mod_consts[18];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_annotations_2 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[19];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[5];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[9];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[52];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[174];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[175];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[177];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[16];
        tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[4];
        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_22 = MAKE_FUNCTION_arcade$draw_commands$$$function__2_draw_arc_outline(tmp_defaults_2, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_defaults_3 = mod_consts[130];
        tmp_dict_key_3 = mod_consts[178];
        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
        tmp_annotations_3 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[179];
        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[180];
        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[9];
        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[52];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[16];
        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_23 = MAKE_FUNCTION_arcade$draw_commands$$$function__3_draw_parabola_filled(tmp_defaults_3, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_defaults_4 = mod_consts[182];
        tmp_dict_key_4 = mod_consts[178];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[179];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[180];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[9];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[52];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[177];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[16];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_24 = MAKE_FUNCTION_arcade$draw_commands$$$function__4_draw_parabola_outline(tmp_defaults_4, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_defaults_5 = mod_consts[184];
        tmp_dict_key_5 = mod_consts[18];
        tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
        tmp_annotations_5 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[19];
        tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[185];
        tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[52];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[16];
        tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[4];
        tmp_dict_value_5 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_25 = MAKE_FUNCTION_arcade$draw_commands$$$function__5_draw_circle_filled(tmp_defaults_5, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_defaults_6 = mod_consts[187];
        tmp_dict_key_6 = mod_consts[18];
        tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
        tmp_annotations_6 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[19];
        tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[185];
        tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[52];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[177];
        tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[16];
        tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[4];
        tmp_dict_value_6 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_26 = MAKE_FUNCTION_arcade$draw_commands$$$function__6_draw_circle_outline(tmp_defaults_6, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_7;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_defaults_7 = mod_consts[184];
        tmp_dict_key_7 = mod_consts[18];
        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
        tmp_annotations_7 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[19];
        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[5];
        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[9];
        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[52];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto dict_build_exception_7;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[16];
        tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[4];
        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_27 = MAKE_FUNCTION_arcade$draw_commands$$$function__7_draw_ellipse_filled(tmp_defaults_7, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_8;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_defaults_8 = mod_consts[187];
        tmp_dict_key_8 = mod_consts[18];
        tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
        tmp_annotations_8 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[19];
        tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[5];
        tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[9];
        tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[52];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[177];
        tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[16];
        tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[4];
        tmp_dict_value_8 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_28 = MAKE_FUNCTION_arcade$draw_commands$$$function__8_draw_ellipse_outline(tmp_defaults_8, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[81]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_defaults_9 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_9, 0, tmp_tuple_element_1);
        tmp_dict_key_9 = mod_consts[17];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_9);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[52];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[189];
        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_defaults_9);
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_29 = MAKE_FUNCTION_arcade$draw_commands$$$function__9__generic_draw_line_strip(tmp_defaults_9, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_10;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_defaults_10 = mod_consts[190];
        tmp_dict_key_10 = mod_consts[17];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[52];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[84];
        tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_30 = MAKE_FUNCTION_arcade$draw_commands$$$function__10_draw_line_strip(tmp_defaults_10, tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_11;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_defaults_11 = mod_consts[190];
        tmp_dict_key_11 = mod_consts[178];
        tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
        tmp_annotations_11 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[179];
        tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[180];
        tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[192];
        tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[52];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[84];
        tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_31 = MAKE_FUNCTION_arcade$draw_commands$$$function__11_draw_line(tmp_defaults_11, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_12;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_defaults_12 = mod_consts[190];
        tmp_dict_key_12 = mod_consts[17];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[52];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[84];
        tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_32 = MAKE_FUNCTION_arcade$draw_commands$$$function__12_draw_lines(tmp_defaults_12, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_13 = mod_consts[137];
        tmp_dict_value_13 = (PyObject *)&PyFloat_Type;
        tmp_annotations_13 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[138];
        tmp_dict_value_13 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[52];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto dict_build_exception_13;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[76];
        tmp_dict_value_13 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;


        tmp_assign_source_33 = MAKE_FUNCTION_arcade$draw_commands$$$function__13_draw_point(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_13;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_defaults_13 = mod_consts[190];
        tmp_dict_key_14 = mod_consts[17];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[52];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto dict_build_exception_14;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[76];
        tmp_dict_value_14 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_34 = MAKE_FUNCTION_arcade$draw_commands$$$function__14_draw_points(tmp_defaults_13, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_dict_key_15 = mod_consts[17];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[52];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto dict_build_exception_15;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;


        tmp_assign_source_35 = MAKE_FUNCTION_arcade$draw_commands$$$function__15_draw_polygon_filled(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_14;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        tmp_defaults_14 = mod_consts[190];
        tmp_dict_key_16 = mod_consts[17];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[52];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto dict_build_exception_16;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[84];
        tmp_dict_value_16 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;
        Py_INCREF(tmp_defaults_14);


        tmp_assign_source_36 = MAKE_FUNCTION_arcade$draw_commands$$$function__16_draw_polygon_outline(tmp_defaults_14, tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_dict_key_17 = mod_consts[198];
        tmp_dict_value_17 = (PyObject *)&PyFloat_Type;
        tmp_annotations_17 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[199];
        tmp_dict_value_17 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[200];
        tmp_dict_value_17 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[201];
        tmp_dict_value_17 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[202];
        tmp_dict_value_17 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[203];
        tmp_dict_value_17 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[52];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto dict_build_exception_17;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_annotations_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;


        tmp_assign_source_37 = MAKE_FUNCTION_arcade$draw_commands$$$function__17_draw_triangle_filled(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_15;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_defaults_15 = mod_consts[190];
        tmp_dict_key_18 = mod_consts[198];
        tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        tmp_annotations_18 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[199];
        tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[200];
        tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[201];
        tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[202];
        tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[203];
        tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[52];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;

            goto dict_build_exception_18;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[177];
        tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_18;
        // Exception handling pass through code for dict_build:
        dict_build_exception_18:;
        Py_DECREF(tmp_annotations_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_18:;
        Py_INCREF(tmp_defaults_15);


        tmp_assign_source_38 = MAKE_FUNCTION_arcade$draw_commands$$$function__18_draw_triangle_outline(tmp_defaults_15, tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_16;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        tmp_defaults_16 = mod_consts[190];
        tmp_dict_key_19 = mod_consts[206];
        tmp_dict_value_19 = (PyObject *)&PyFloat_Type;
        tmp_annotations_19 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[207];
        tmp_dict_value_19 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[208];
        tmp_dict_value_19 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[209];
        tmp_dict_value_19 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[52];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto dict_build_exception_19;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[177];
        tmp_dict_value_19 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_19;
        // Exception handling pass through code for dict_build:
        dict_build_exception_19:;
        Py_DECREF(tmp_annotations_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_19:;
        Py_INCREF(tmp_defaults_16);


        tmp_assign_source_39 = MAKE_FUNCTION_arcade$draw_commands$$$function__19_draw_lrtb_rectangle_outline(tmp_defaults_16, tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_17;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_defaults_17 = mod_consts[190];
        tmp_dict_key_20 = mod_consts[211];
        tmp_dict_value_20 = (PyObject *)&PyFloat_Type;
        tmp_annotations_20 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[212];
        tmp_dict_value_20 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[5];
        tmp_dict_value_20 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[9];
        tmp_dict_value_20 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[52];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto dict_build_exception_20;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = mod_consts[177];
        tmp_dict_value_20 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_20;
        // Exception handling pass through code for dict_build:
        dict_build_exception_20:;
        Py_DECREF(tmp_annotations_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_20:;
        Py_INCREF(tmp_defaults_17);


        tmp_assign_source_40 = MAKE_FUNCTION_arcade$draw_commands$$$function__20_draw_xywh_rectangle_outline(tmp_defaults_17, tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_18;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        tmp_defaults_18 = mod_consts[182];
        tmp_dict_key_21 = mod_consts[18];
        tmp_dict_value_21 = (PyObject *)&PyFloat_Type;
        tmp_annotations_21 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[19];
        tmp_dict_value_21 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[5];
        tmp_dict_value_21 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[9];
        tmp_dict_value_21 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[52];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;

            goto dict_build_exception_21;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[177];
        tmp_dict_value_21 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[16];
        tmp_dict_value_21 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_21;
        // Exception handling pass through code for dict_build:
        dict_build_exception_21:;
        Py_DECREF(tmp_annotations_21);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_21:;
        Py_INCREF(tmp_defaults_18);


        tmp_assign_source_41 = MAKE_FUNCTION_arcade$draw_commands$$$function__21_draw_rectangle_outline(tmp_defaults_18, tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        tmp_dict_key_22 = mod_consts[206];
        tmp_dict_value_22 = (PyObject *)&PyFloat_Type;
        tmp_annotations_22 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[207];
        tmp_dict_value_22 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[208];
        tmp_dict_value_22 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[209];
        tmp_dict_value_22 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[52];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;

            goto dict_build_exception_22;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_22;
        // Exception handling pass through code for dict_build:
        dict_build_exception_22:;
        Py_DECREF(tmp_annotations_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_22:;


        tmp_assign_source_42 = MAKE_FUNCTION_arcade$draw_commands$$$function__22_draw_lrtb_rectangle_filled(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        tmp_dict_key_23 = mod_consts[211];
        tmp_dict_value_23 = (PyObject *)&PyFloat_Type;
        tmp_annotations_23 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[212];
        tmp_dict_value_23 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[5];
        tmp_dict_value_23 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[9];
        tmp_dict_value_23 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[52];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;

            goto dict_build_exception_23;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_23;
        // Exception handling pass through code for dict_build:
        dict_build_exception_23:;
        Py_DECREF(tmp_annotations_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_23:;


        tmp_assign_source_43 = MAKE_FUNCTION_arcade$draw_commands$$$function__23_draw_xywh_rectangle_filled(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_defaults_19;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        tmp_defaults_19 = mod_consts[130];
        tmp_dict_key_24 = mod_consts[18];
        tmp_dict_value_24 = (PyObject *)&PyFloat_Type;
        tmp_annotations_24 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[19];
        tmp_dict_value_24 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[5];
        tmp_dict_value_24 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[9];
        tmp_dict_value_24 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[52];
        tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_dict_value_24 == NULL)) {
            tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_dict_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;

            goto dict_build_exception_24;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[16];
        tmp_dict_value_24 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_24;
        // Exception handling pass through code for dict_build:
        dict_build_exception_24:;
        Py_DECREF(tmp_annotations_24);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_24:;
        Py_INCREF(tmp_defaults_19);


        tmp_assign_source_44 = MAKE_FUNCTION_arcade$draw_commands$$$function__24_draw_rectangle_filled(tmp_defaults_19, tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_20;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        tmp_defaults_20 = mod_consts[216];
        tmp_dict_key_25 = mod_consts[18];
        tmp_dict_value_25 = (PyObject *)&PyFloat_Type;
        tmp_annotations_25 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[19];
        tmp_dict_value_25 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[217];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;

            goto dict_build_exception_25;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[218];
        tmp_dict_value_25 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[219];
        tmp_dict_value_25 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[220];
        tmp_dict_value_25 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_25;
        // Exception handling pass through code for dict_build:
        dict_build_exception_25:;
        Py_DECREF(tmp_annotations_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_25:;
        Py_INCREF(tmp_defaults_20);


        tmp_assign_source_45 = MAKE_FUNCTION_arcade$draw_commands$$$function__25_draw_scaled_texture_rectangle(tmp_defaults_20, tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_defaults_21;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        tmp_defaults_21 = mod_consts[222];
        tmp_dict_key_26 = mod_consts[18];
        tmp_dict_value_26 = (PyObject *)&PyFloat_Type;
        tmp_annotations_26 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[19];
        tmp_dict_value_26 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[5];
        tmp_dict_value_26 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[9];
        tmp_dict_value_26 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[217];
        tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_26 == NULL)) {
            tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 825;

            goto dict_build_exception_26;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[219];
        tmp_dict_value_26 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = mod_consts[220];
        tmp_dict_value_26 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_26;
        // Exception handling pass through code for dict_build:
        dict_build_exception_26:;
        Py_DECREF(tmp_annotations_26);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_26:;
        Py_INCREF(tmp_defaults_21);


        tmp_assign_source_46 = MAKE_FUNCTION_arcade$draw_commands$$$function__26_draw_texture_rectangle(tmp_defaults_21, tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_22;
        PyObject *tmp_annotations_27;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        tmp_defaults_22 = mod_consts[222];
        tmp_dict_key_27 = mod_consts[211];
        tmp_dict_value_27 = (PyObject *)&PyFloat_Type;
        tmp_annotations_27 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[212];
        tmp_dict_value_27 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[5];
        tmp_dict_value_27 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[9];
        tmp_dict_value_27 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[217];
        tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_dict_value_27 == NULL)) {
            tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;

            goto dict_build_exception_27;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[219];
        tmp_dict_value_27 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = mod_consts[220];
        tmp_dict_value_27 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_27;
        // Exception handling pass through code for dict_build:
        dict_build_exception_27:;
        Py_DECREF(tmp_annotations_27);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_27:;
        Py_INCREF(tmp_defaults_22);


        tmp_assign_source_47 = MAKE_FUNCTION_arcade$draw_commands$$$function__27_draw_lrwh_rectangle_textured(tmp_defaults_22, tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_defaults_23;
        PyObject *tmp_annotations_28;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        tmp_defaults_23 = mod_consts[225];
        tmp_dict_key_28 = mod_consts[137];
        tmp_dict_value_28 = (PyObject *)&PyLong_Type;
        tmp_annotations_28 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[138];
            tmp_dict_value_28 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[226];
            tmp_dict_value_28 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            assert(!(tmp_res != 0));
            tmp_dict_key_28 = mod_consts[227];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 865;

                goto dict_build_exception_28;
            }
            tmp_subscript_value_1 = mod_consts[228];
            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
            if (tmp_dict_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 865;

                goto dict_build_exception_28;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_28;
        // Exception handling pass through code for dict_build:
        dict_build_exception_28:;
        Py_DECREF(tmp_annotations_28);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_28:;
        Py_INCREF(tmp_defaults_23);


        tmp_assign_source_48 = MAKE_FUNCTION_arcade$draw_commands$$$function__28_get_pixel(tmp_defaults_23, tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_defaults_24;
        PyObject *tmp_annotations_29;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        tmp_defaults_24 = mod_consts[230];
        tmp_dict_key_29 = mod_consts[137];
        tmp_dict_value_29 = (PyObject *)&PyLong_Type;
        tmp_annotations_29 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[138];
            tmp_dict_value_29 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[5];
            tmp_dict_value_29 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[9];
            tmp_dict_value_29 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            assert(!(tmp_res != 0));
            tmp_dict_key_29 = mod_consts[227];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 890;

                goto dict_build_exception_29;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[140]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 890;

                goto dict_build_exception_29;
            }
            tmp_dict_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[140]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_dict_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 890;

                goto dict_build_exception_29;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_29;
        // Exception handling pass through code for dict_build:
        dict_build_exception_29:;
        Py_DECREF(tmp_annotations_29);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_29:;
        Py_INCREF(tmp_defaults_24);


        tmp_assign_source_49 = MAKE_FUNCTION_arcade$draw_commands$$$function__29_get_image(tmp_defaults_24, tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_arcade$draw_commands, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_49);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_527aea5d9292171f2b8845e12250d6f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_527aea5d9292171f2b8845e12250d6f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_527aea5d9292171f2b8845e12250d6f0, exception_lineno);
    }



    assertFrameObject(frame_527aea5d9292171f2b8845e12250d6f0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("arcade.draw_commands", false);

    Py_INCREF(module_arcade$draw_commands);
    return module_arcade$draw_commands;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$draw_commands, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("arcade$draw_commands", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
