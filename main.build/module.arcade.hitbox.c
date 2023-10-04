/* Generated code for Python module 'arcade.hitbox'
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

/* The "module_arcade$hitbox" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_arcade$hitbox;
PyDictObject *moduledict_arcade$hitbox;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[91];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[91];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("arcade.hitbox"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 91; i++) {
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
void checkModuleConstants_arcade$hitbox(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 91; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_148b1c5f069d59623881f1f5973e667e;
static PyCodeObject *codeobj_8445a2d873e92634e130604cd474c64c;
static PyCodeObject *codeobj_c8fb7e12360309544250fae8a8cd28db;
static PyCodeObject *codeobj_1478648fe4b3728bae2cf148e26ee4d7;
static PyCodeObject *codeobj_146c6dc997681eb1f16345993c440785;
static PyCodeObject *codeobj_c2985881e89913d7d88bb06db44b27d9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[82]); CHECK_OBJECT(module_filename_obj);
    codeobj_148b1c5f069d59623881f1f5973e667e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[83], mod_consts[83], NULL, NULL, 0, 0, 0);
    codeobj_8445a2d873e92634e130604cd474c64c = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[84], mod_consts[85], 4, 0, 0);
    codeobj_c8fb7e12360309544250fae8a8cd28db = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[86], NULL, 3, 0, 0);
    codeobj_1478648fe4b3728bae2cf148e26ee4d7 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[87], NULL, 2, 0, 0);
    codeobj_146c6dc997681eb1f16345993c440785 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[88], NULL, 1, 0, 0);
    codeobj_c2985881e89913d7d88bb06db44b27d9 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[89], mod_consts[85], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__1__check_corner_offset(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__2__r(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed$$$function__1_sample_func(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_image = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_left_border = NULL;
    PyObject *var_good = NULL;
    PyObject *var_row = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_pixel = NULL;
    PyObject *var_right_border = NULL;
    PyObject *var_top_border = NULL;
    PyObject *var_column = NULL;
    PyObject *var_bottom_border = NULL;
    PyObject *var__check_corner_offset = NULL;
    PyObject *var__r = NULL;
    PyObject *var_top_left_corner_offset = NULL;
    PyObject *var_top_right_corner_offset = NULL;
    PyObject *var_bottom_left_corner_offset = NULL;
    PyObject *var_bottom_right_corner_offset = NULL;
    PyObject *var_p1 = NULL;
    PyObject *var_p2 = NULL;
    PyObject *var_p3 = NULL;
    PyObject *var_p4 = NULL;
    PyObject *var_p5 = NULL;
    PyObject *var_p6 = NULL;
    PyObject *var_p7 = NULL;
    PyObject *var_p8 = NULL;
    PyObject *var_result = NULL;
    PyObject *var_h = NULL;
    PyObject *var_w = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    struct Nuitka_FrameObject *frame_146c6dc997681eb1f16345993c440785;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_146c6dc997681eb1f16345993c440785 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_146c6dc997681eb1f16345993c440785)) {
        Py_XDECREF(cache_frame_146c6dc997681eb1f16345993c440785);

#if _DEBUG_REFCOUNTS
        if (cache_frame_146c6dc997681eb1f16345993c440785 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_146c6dc997681eb1f16345993c440785 = MAKE_FUNCTION_FRAME(tstate, codeobj_146c6dc997681eb1f16345993c440785, module_arcade$hitbox, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_146c6dc997681eb1f16345993c440785->m_type_description == NULL);
    frame_146c6dc997681eb1f16345993c440785 = cache_frame_146c6dc997681eb1f16345993c440785;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_146c6dc997681eb1f16345993c440785);
    assert(Py_REFCNT(frame_146c6dc997681eb1f16345993c440785) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_image);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "coooooooooooooooooooooooooo";
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
        tmp_make_exception_arg_1 = mod_consts[2];
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 22;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[3];
        assert(var_left_border == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_left_border = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        assert(var_good == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_good = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 26;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_and_left_value_1 = var_good;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 26;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_left_border;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 26;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(par_image);
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_operand_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 27;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(par_image);
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "coooooooooooooooooooooooooo";
                exception_lineno = 27;
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
            PyObject *old = var_row;
            var_row = tmp_assign_source_5;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 28;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = var_left_border;
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_6, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_row);
        tmp_tuple_element_1 = var_row;
        PyTuple_SET_ITEM0(tmp_assign_source_6, 1, tmp_tuple_element_1);
        {
            PyObject *old = var_pos;
            var_pos = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 29;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(par_image);
        CHECK_OBJECT(var_pos);
        tmp_args_element_value_1 = var_pos;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 29;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pixel;
            var_pixel = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_pixel);
        tmp_expression_value_4 = var_pixel;
        tmp_subscript_value_1 = mod_consts[10];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_3 = mod_consts[3];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_False;
        {
            PyObject *old = var_good;
            var_good = tmp_assign_source_8;
            Py_INCREF(var_good);
            Py_XDECREF(old);
        }

    }
    goto loop_end_2;
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 27;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 33;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_good);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 34;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_left_border;
        tmp_iadd_expr_right_1 = mod_consts[11];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_1;
        var_left_border = tmp_assign_source_9;

    }
    branch_no_4:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 26;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 36;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(par_image);
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[7]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_right_border == NULL);
        var_right_border = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_True;
        {
            PyObject *old = var_good;
            var_good = tmp_assign_source_11;
            Py_INCREF(var_good);
            Py_XDECREF(old);
        }

    }
    loop_start_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 38;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_and_left_value_2 = var_good;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 38;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = var_right_border;
        tmp_cmp_expr_right_4 = mod_consts[3];
        tmp_and_right_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_operand_value_2 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto loop_end_3;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 39;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(par_image);
        tmp_xrange_low_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_xrange_low_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
        Py_DECREF(tmp_xrange_low_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "coooooooooooooooooooooooooo";
                exception_lineno = 39;
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
            PyObject *old = var_row;
            var_row = tmp_assign_source_14;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_2;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 40;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_2 = var_right_border;
        tmp_assign_source_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_15, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_row);
        tmp_tuple_element_2 = var_row;
        PyTuple_SET_ITEM0(tmp_assign_source_15, 1, tmp_tuple_element_2);
        {
            PyObject *old = var_pos;
            var_pos = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 41;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(par_image);
        CHECK_OBJECT(var_pos);
        tmp_args_element_value_2 = var_pos;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 41;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[9], tmp_args_element_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_pixel;
            var_pixel = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_pixel);
        tmp_expression_value_7 = var_pixel;
        tmp_subscript_value_2 = mod_consts[10];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 3);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_5 = mod_consts[3];
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_False;
        {
            PyObject *old = var_good;
            var_good = tmp_assign_source_17;
            Py_INCREF(var_good);
            Py_XDECREF(old);
        }

    }
    goto loop_end_4;
    branch_no_6:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 39;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_4;
    loop_end_4:;
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
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 45;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_good);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 46;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isub_expr_left_1 = var_right_border;
        tmp_isub_expr_right_1 = mod_consts[11];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_isub_expr_left_1;
        var_right_border = tmp_assign_source_18;

    }
    branch_no_7:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 38;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[3];
        assert(var_top_border == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_top_border = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_True;
        {
            PyObject *old = var_good;
            var_good = tmp_assign_source_20;
            Py_INCREF(var_good);
            Py_XDECREF(old);
        }

    }
    loop_start_5:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_3;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_8;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 50;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_and_left_value_3 = var_good;
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (var_top_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 50;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_6 = var_top_border;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 50;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(par_image);
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[8]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_and_right_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        Py_INCREF(tmp_and_left_value_3);
        tmp_operand_value_3 = tmp_and_left_value_3;
        and_end_3:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    goto loop_end_5;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_3;
        PyObject *tmp_expression_value_9;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 51;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(par_image);
        tmp_xrange_low_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[7]);
        if (tmp_xrange_low_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_3 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
        Py_DECREF(tmp_xrange_low_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_22 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "coooooooooooooooooooooooooo";
                exception_lineno = 51;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_23 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_column;
            var_column = tmp_assign_source_23;
            Py_INCREF(var_column);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_column);
        tmp_tuple_element_3 = var_column;
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_3);
        if (var_top_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 52;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = var_top_border;
        PyTuple_SET_ITEM0(tmp_assign_source_24, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_24);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        {
            PyObject *old = var_pos;
            var_pos = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 53;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(par_image);
        CHECK_OBJECT(var_pos);
        tmp_args_element_value_3 = var_pos;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 53;
        tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[9], tmp_args_element_value_3);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_pixel;
            var_pixel = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_pixel);
        tmp_expression_value_10 = var_pixel;
        tmp_subscript_value_3 = mod_consts[10];
        tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 3);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_7 = mod_consts[3];
        tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_False;
        {
            PyObject *old = var_good;
            var_good = tmp_assign_source_26;
            Py_INCREF(var_good);
            Py_XDECREF(old);
        }

    }
    goto loop_end_6;
    branch_no_9:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 51;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_6;
    loop_end_6:;
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
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 57;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(var_good);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_top_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_top_border;
        tmp_iadd_expr_right_2 = mod_consts[11];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = tmp_iadd_expr_left_2;
        var_top_border = tmp_assign_source_27;

    }
    branch_no_10:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 50;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_5;
    loop_end_5:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_11;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 60;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(par_image);
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[8]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = mod_consts[11];
        tmp_assign_source_28 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bottom_border == NULL);
        var_bottom_border = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = Py_True;
        {
            PyObject *old = var_good;
            var_good = tmp_assign_source_29;
            Py_INCREF(var_good);
            Py_XDECREF(old);
        }

    }
    loop_start_7:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_4;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 62;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_and_left_value_4 = var_good;
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        if (var_bottom_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 62;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_8 = var_bottom_border;
        tmp_cmp_expr_right_8 = mod_consts[3];
        tmp_and_right_value_4 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_right_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_4 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        Py_INCREF(tmp_and_left_value_4);
        tmp_operand_value_4 = tmp_and_left_value_4;
        and_end_4:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    goto loop_end_7;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_4;
        PyObject *tmp_expression_value_12;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 63;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(par_image);
        tmp_xrange_low_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[7]);
        if (tmp_xrange_low_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_4 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_4);
        Py_DECREF(tmp_xrange_low_4);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_31 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "coooooooooooooooooooooooooo";
                exception_lineno = 63;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_32 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_column;
            var_column = tmp_assign_source_32;
            Py_INCREF(var_column);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_column);
        tmp_tuple_element_4 = var_column;
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_4);
        if (var_bottom_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 64;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_4 = var_bottom_border;
        PyTuple_SET_ITEM0(tmp_assign_source_33, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_33);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        {
            PyObject *old = var_pos;
            var_pos = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 65;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(par_image);
        CHECK_OBJECT(var_pos);
        tmp_args_element_value_4 = var_pos;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 65;
        tmp_assign_source_34 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[9], tmp_args_element_value_4);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_pixel;
            var_pixel = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_pixel);
        tmp_expression_value_13 = var_pixel;
        tmp_subscript_value_4 = mod_consts[10];
        tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_4, 3);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_9 = mod_consts[3];
        tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = Py_False;
        {
            PyObject *old = var_good;
            var_good = tmp_assign_source_35;
            Py_INCREF(var_good);
            Py_XDECREF(old);
        }

    }
    goto loop_end_8;
    branch_no_12:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        if (var_good == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 69;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_good);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_isub_expr_left_2;
        PyObject *tmp_isub_expr_right_2;
        if (var_bottom_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 70;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isub_expr_left_2 = var_bottom_border;
        tmp_isub_expr_right_2 = mod_consts[11];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = tmp_isub_expr_left_2;
        var_bottom_border = tmp_assign_source_36;

    }
    branch_no_13:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 62;
        type_description_1 = "coooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_7;
    loop_end_7:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        if (var_bottom_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 73;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_10 = var_bottom_border;
        tmp_cmp_expr_right_10 = mod_consts[3];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto frame_return_exit_1;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[15]);

        tmp_closure_1[0] = par_image;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_37 = MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__1__check_corner_offset(tmp_annotations_1, tmp_closure_1);

        assert(var__check_corner_offset == NULL);
        var__check_corner_offset = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        tmp_dict_key_1 = mod_consts[18];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[20];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_5);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[21];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_38 = MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__2__r(tmp_annotations_2);

        assert(var__r == NULL);
        var__r = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var__check_corner_offset);
        tmp_called_value_1 = var__check_corner_offset;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 100;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_left_border;
        if (var_top_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 100;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_top_border;
        tmp_args_element_value_7 = mod_consts[11];
        tmp_args_element_value_8 = mod_consts[11];
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_top_left_corner_offset == NULL);
        var_top_left_corner_offset = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(var__check_corner_offset);
        tmp_called_value_2 = var__check_corner_offset;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 101;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_right_border;
        if (var_top_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 101;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_top_border;
        tmp_args_element_value_11 = mod_consts[25];
        tmp_args_element_value_12 = mod_consts[11];
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_top_right_corner_offset == NULL);
        var_top_right_corner_offset = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(var__check_corner_offset);
        tmp_called_value_3 = var__check_corner_offset;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 102;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = var_left_border;
        if (var_bottom_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 102;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_bottom_border;
        tmp_args_element_value_15 = mod_consts[11];
        tmp_args_element_value_16 = mod_consts[25];
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bottom_left_corner_offset == NULL);
        var_bottom_left_corner_offset = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(var__check_corner_offset);
        tmp_called_value_4 = var__check_corner_offset;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 103;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = var_right_border;
        if (var_bottom_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 103;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = var_bottom_border;
        tmp_args_element_value_19 = mod_consts[25];
        tmp_args_element_value_20 = mod_consts[25];
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bottom_right_corner_offset == NULL);
        var_bottom_right_corner_offset = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 105;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_1 = var_left_border;
        CHECK_OBJECT(var_top_left_corner_offset);
        tmp_add_expr_right_1 = var_top_left_corner_offset;
        tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_43 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_43, 0, tmp_tuple_element_5);
        if (var_top_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 105;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_5 = var_top_border;
        PyTuple_SET_ITEM0(tmp_assign_source_43, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_43);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(var_p1 == NULL);
        var_p1 = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_2 = var_right_border;
        tmp_add_expr_right_2 = mod_consts[11];
        tmp_sub_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_top_right_corner_offset);
        tmp_sub_expr_right_3 = var_top_right_corner_offset;
        tmp_tuple_element_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_44, 0, tmp_tuple_element_6);
        if (var_top_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_6 = var_top_border;
        PyTuple_SET_ITEM0(tmp_assign_source_44, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_44);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        assert(var_p2 == NULL);
        var_p2 = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 107;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_3 = var_right_border;
        tmp_add_expr_right_3 = mod_consts[11];
        tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyTuple_SET_ITEM(tmp_assign_source_45, 0, tmp_tuple_element_7);
            if (var_top_border == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 107;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_add_expr_left_4 = var_top_border;
            CHECK_OBJECT(var_top_right_corner_offset);
            tmp_add_expr_right_4 = var_top_right_corner_offset;
            tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_45, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_45);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        assert(var_p3 == NULL);
        var_p3 = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 108;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_5 = var_right_border;
        tmp_add_expr_right_5 = mod_consts[11];
        tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            PyTuple_SET_ITEM(tmp_assign_source_46, 0, tmp_tuple_element_8);
            if (var_bottom_border == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 108;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_add_expr_left_6 = var_bottom_border;
            tmp_add_expr_right_6 = mod_consts[11];
            tmp_sub_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
            if (tmp_sub_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(var_bottom_right_corner_offset);
            tmp_sub_expr_right_4 = var_bottom_right_corner_offset;
            tmp_tuple_element_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_left_4);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_46, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_46);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        assert(var_p4 == NULL);
        var_p4 = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        if (var_right_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 109;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_7 = var_right_border;
        tmp_add_expr_right_7 = mod_consts[11];
        tmp_sub_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bottom_right_corner_offset);
        tmp_sub_expr_right_5 = var_bottom_right_corner_offset;
        tmp_tuple_element_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_9);
            if (var_bottom_border == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 109;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_add_expr_left_8 = var_bottom_border;
            tmp_add_expr_right_8 = mod_consts[11];
            tmp_tuple_element_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_47, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_47);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        assert(var_p5 == NULL);
        var_p5 = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 110;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_9 = var_left_border;
        CHECK_OBJECT(var_bottom_left_corner_offset);
        tmp_add_expr_right_9 = var_bottom_left_corner_offset;
        tmp_tuple_element_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_10;
            PyObject *tmp_add_expr_right_10;
            PyTuple_SET_ITEM(tmp_assign_source_48, 0, tmp_tuple_element_10);
            if (var_bottom_border == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 110;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }

            tmp_add_expr_left_10 = var_bottom_border;
            tmp_add_expr_right_10 = mod_consts[11];
            tmp_tuple_element_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_48, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assign_source_48);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        assert(var_p6 == NULL);
        var_p6 = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_tuple_element_11;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 111;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_11 = var_left_border;
        tmp_assign_source_49 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_6;
            PyObject *tmp_sub_expr_right_6;
            PyObject *tmp_add_expr_left_11;
            PyObject *tmp_add_expr_right_11;
            PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_11);
            if (var_bottom_border == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 111;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }

            tmp_add_expr_left_11 = var_bottom_border;
            tmp_add_expr_right_11 = mod_consts[11];
            tmp_sub_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
            if (tmp_sub_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            CHECK_OBJECT(var_bottom_left_corner_offset);
            tmp_sub_expr_right_6 = var_bottom_left_corner_offset;
            tmp_tuple_element_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
            Py_DECREF(tmp_sub_expr_left_6);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_49, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_49);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        assert(var_p7 == NULL);
        var_p7 = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_12;
        if (var_left_border == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 112;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_12 = var_left_border;
        tmp_assign_source_50 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_12;
            PyObject *tmp_add_expr_right_12;
            PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_12);
            if (var_top_border == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 112;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }

            tmp_add_expr_left_12 = var_top_border;
            CHECK_OBJECT(var_top_left_corner_offset);
            tmp_add_expr_right_12 = var_top_left_corner_offset;
            tmp_tuple_element_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "coooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_50, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_assign_source_50);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        assert(var_p8 == NULL);
        var_p8 = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_LIST_EMPTY(0);
        assert(var_result == NULL);
        var_result = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_expression_value_15;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 116;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(par_image);
        tmp_assign_source_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[8]);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_expression_value_16;
        if (Nuitka_Cell_GET(par_image) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 117;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = Nuitka_Cell_GET(par_image);
        tmp_assign_source_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[7]);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_53;
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_1 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_5 = var__r;
        CHECK_OBJECT(var_p7);
        tmp_args_element_value_21 = var_p7;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_22 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_23 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_item_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_item_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_bottom_left_corner_offset);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_bottom_left_corner_offset);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_2 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_6 = var__r;
        CHECK_OBJECT(var_p6);
        tmp_args_element_value_24 = var_p6;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_25 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_26 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_item_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_item_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_15:;
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_3 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_7 = var__r;
        CHECK_OBJECT(var_p5);
        tmp_args_element_value_27 = var_p5;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_28 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_29 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_item_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_item_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_bottom_right_corner_offset);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_bottom_right_corner_offset);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_list_arg_value_4;
        PyObject *tmp_item_value_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_4 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_8 = var__r;
        CHECK_OBJECT(var_p4);
        tmp_args_element_value_30 = var_p4;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_31 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_32 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_item_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_item_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
        assert(!(tmp_result == false));
    }
    branch_no_16:;
    {
        PyObject *tmp_list_arg_value_5;
        PyObject *tmp_item_value_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_5 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_9 = var__r;
        CHECK_OBJECT(var_p3);
        tmp_args_element_value_33 = var_p3;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_34 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_35 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_item_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
        }

        if (tmp_item_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_top_right_corner_offset);
        tmp_truth_name_7 = CHECK_IF_TRUE(var_top_right_corner_offset);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_list_arg_value_6;
        PyObject *tmp_item_value_6;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_6 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_10 = var__r;
        CHECK_OBJECT(var_p2);
        tmp_args_element_value_36 = var_p2;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_37 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_38 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_item_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
        }

        if (tmp_item_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_6, tmp_item_value_6);
        assert(!(tmp_result == false));
    }
    branch_no_17:;
    {
        PyObject *tmp_list_arg_value_7;
        PyObject *tmp_item_value_7;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_7 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_11 = var__r;
        CHECK_OBJECT(var_p1);
        tmp_args_element_value_39 = var_p1;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_40 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_41 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_item_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
        }

        if (tmp_item_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_7, tmp_item_value_7);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_top_left_corner_offset);
        tmp_truth_name_8 = CHECK_IF_TRUE(var_top_left_corner_offset);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_list_arg_value_8;
        PyObject *tmp_item_value_8;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        CHECK_OBJECT(var_result);
        tmp_list_arg_value_8 = var_result;
        CHECK_OBJECT(var__r);
        tmp_called_value_12 = var__r;
        CHECK_OBJECT(var_p8);
        tmp_args_element_value_42 = var_p8;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_43 = var_h;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_44 = var_w;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_item_value_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
        }

        if (tmp_item_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "coooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_8, tmp_item_value_8);
        assert(!(tmp_result == false));
    }
    branch_no_18:;
    {
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_iterable_value_1;
        CHECK_OBJECT(var_result);
        tmp_iterable_value_1 = var_result;
        frame_146c6dc997681eb1f16345993c440785->m_frame.f_lineno = 136;
        tmp_tuple_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, dict_builtin_fromkeys, tmp_iterable_value_1);
        assert(!(tmp_tuple_arg_1 == NULL));
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "coooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_146c6dc997681eb1f16345993c440785, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_146c6dc997681eb1f16345993c440785->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_146c6dc997681eb1f16345993c440785, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_146c6dc997681eb1f16345993c440785,
        type_description_1,
        par_image,
        var_left_border,
        var_good,
        var_row,
        var_pos,
        var_pixel,
        var_right_border,
        var_top_border,
        var_column,
        var_bottom_border,
        var__check_corner_offset,
        var__r,
        var_top_left_corner_offset,
        var_top_right_corner_offset,
        var_bottom_left_corner_offset,
        var_bottom_right_corner_offset,
        var_p1,
        var_p2,
        var_p3,
        var_p4,
        var_p5,
        var_p6,
        var_p7,
        var_p8,
        var_result,
        var_h,
        var_w
    );


    // Release cached frame if used for exception.
    if (frame_146c6dc997681eb1f16345993c440785 == cache_frame_146c6dc997681eb1f16345993c440785) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_146c6dc997681eb1f16345993c440785);
        cache_frame_146c6dc997681eb1f16345993c440785 = NULL;
    }

    assertFrameObject(frame_146c6dc997681eb1f16345993c440785);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_left_border);
    var_left_border = NULL;
    Py_XDECREF(var_good);
    var_good = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_pixel);
    var_pixel = NULL;
    Py_XDECREF(var_right_border);
    var_right_border = NULL;
    Py_XDECREF(var_top_border);
    var_top_border = NULL;
    Py_XDECREF(var_column);
    var_column = NULL;
    Py_XDECREF(var_bottom_border);
    var_bottom_border = NULL;
    Py_XDECREF(var__check_corner_offset);
    var__check_corner_offset = NULL;
    Py_XDECREF(var__r);
    var__r = NULL;
    Py_XDECREF(var_top_left_corner_offset);
    var_top_left_corner_offset = NULL;
    Py_XDECREF(var_top_right_corner_offset);
    var_top_right_corner_offset = NULL;
    Py_XDECREF(var_bottom_left_corner_offset);
    var_bottom_left_corner_offset = NULL;
    Py_XDECREF(var_bottom_right_corner_offset);
    var_bottom_right_corner_offset = NULL;
    Py_XDECREF(var_p1);
    var_p1 = NULL;
    Py_XDECREF(var_p2);
    var_p2 = NULL;
    Py_XDECREF(var_p3);
    var_p3 = NULL;
    Py_XDECREF(var_p4);
    var_p4 = NULL;
    Py_XDECREF(var_p5);
    var_p5 = NULL;
    Py_XDECREF(var_p6);
    var_p6 = NULL;
    Py_XDECREF(var_p7);
    var_p7 = NULL;
    Py_XDECREF(var_p8);
    var_p8 = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_left_border);
    var_left_border = NULL;
    Py_XDECREF(var_good);
    var_good = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_pixel);
    var_pixel = NULL;
    Py_XDECREF(var_right_border);
    var_right_border = NULL;
    Py_XDECREF(var_top_border);
    var_top_border = NULL;
    Py_XDECREF(var_column);
    var_column = NULL;
    Py_XDECREF(var_bottom_border);
    var_bottom_border = NULL;
    Py_XDECREF(var__check_corner_offset);
    var__check_corner_offset = NULL;
    Py_XDECREF(var__r);
    var__r = NULL;
    Py_XDECREF(var_top_left_corner_offset);
    var_top_left_corner_offset = NULL;
    Py_XDECREF(var_top_right_corner_offset);
    var_top_right_corner_offset = NULL;
    Py_XDECREF(var_bottom_left_corner_offset);
    var_bottom_left_corner_offset = NULL;
    Py_XDECREF(var_bottom_right_corner_offset);
    var_bottom_right_corner_offset = NULL;
    Py_XDECREF(var_p1);
    var_p1 = NULL;
    Py_XDECREF(var_p2);
    var_p2 = NULL;
    Py_XDECREF(var_p3);
    var_p3 = NULL;
    Py_XDECREF(var_p4);
    var_p4 = NULL;
    Py_XDECREF(var_p5);
    var_p5 = NULL;
    Py_XDECREF(var_p6);
    var_p6 = NULL;
    Py_XDECREF(var_p7);
    var_p7 = NULL;
    Py_XDECREF(var_p8);
    var_p8 = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__1__check_corner_offset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_start_x = python_pars[0];
    PyObject *par_start_y = python_pars[1];
    PyObject *par_x_direction = python_pars[2];
    PyObject *par_y_direction = python_pars[3];
    PyObject *var_bad = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_y = NULL;
    PyObject *var_x = NULL;
    PyObject *var_count = NULL;
    PyObject *var_my_pixel = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8445a2d873e92634e130604cd474c64c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8445a2d873e92634e130604cd474c64c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_False;
        assert(var_bad == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_bad = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[3];
        assert(var_offset == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_offset = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_8445a2d873e92634e130604cd474c64c)) {
        Py_XDECREF(cache_frame_8445a2d873e92634e130604cd474c64c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8445a2d873e92634e130604cd474c64c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8445a2d873e92634e130604cd474c64c = MAKE_FUNCTION_FRAME(tstate, codeobj_8445a2d873e92634e130604cd474c64c, module_arcade$hitbox, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8445a2d873e92634e130604cd474c64c->m_type_description == NULL);
    frame_8445a2d873e92634e130604cd474c64c = cache_frame_8445a2d873e92634e130604cd474c64c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8445a2d873e92634e130604cd474c64c);
    assert(Py_REFCNT(frame_8445a2d873e92634e130604cd474c64c) == 2);

    // Framed code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        if (var_bad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 80;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = var_bad;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        if (par_start_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_1 = par_start_y;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_1 = var_offset;
        if (par_y_direction == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_1 = par_y_direction;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        if (par_start_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_4 = par_start_x;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_4;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_2 = var_offset;
        tmp_add_expr_right_2 = mod_consts[11];
        tmp_xrange_low_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooc";
                exception_lineno = 83;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_count;
            var_count = tmp_assign_source_7;
            Py_INCREF(var_count);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = var_x;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooooooooc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_8445a2d873e92634e130604cd474c64c->m_frame.f_lineno = 84;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_my_pixel;
            var_my_pixel = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_my_pixel);
        tmp_expression_value_2 = var_my_pixel;
        tmp_subscript_value_1 = mod_consts[10];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        {
            PyObject *old = var_bad;
            var_bad = tmp_assign_source_9;
            Py_INCREF(var_bad);
            Py_XDECREF(old);
        }

    }
    goto loop_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }

        tmp_isub_expr_left_1 = var_y;
        if (par_y_direction == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 89;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }

        tmp_isub_expr_right_1 = par_y_direction;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_isub_expr_left_1;
        var_y = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_x;
        if (par_x_direction == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_right_1 = par_x_direction;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_1;
        var_x = tmp_assign_source_11;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;
        type_description_1 = "ooooooooooc";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        if (var_bad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_3 = var_bad;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooc";
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
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 93;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_offset;
        tmp_iadd_expr_right_2 = mod_consts[11];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_2;
        var_offset = tmp_assign_source_12;

    }
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 80;
        type_description_1 = "ooooooooooc";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_offset == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 95;
        type_description_1 = "ooooooooooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_offset;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8445a2d873e92634e130604cd474c64c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8445a2d873e92634e130604cd474c64c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8445a2d873e92634e130604cd474c64c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8445a2d873e92634e130604cd474c64c,
        type_description_1,
        par_start_x,
        par_start_y,
        par_x_direction,
        par_y_direction,
        var_bad,
        var_offset,
        var_y,
        var_x,
        var_count,
        var_my_pixel,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8445a2d873e92634e130604cd474c64c == cache_frame_8445a2d873e92634e130604cd474c64c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8445a2d873e92634e130604cd474c64c);
        cache_frame_8445a2d873e92634e130604cd474c64c = NULL;
    }

    assertFrameObject(frame_8445a2d873e92634e130604cd474c64c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_bad);
    var_bad = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_my_pixel);
    var_my_pixel = NULL;
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

    Py_XDECREF(var_bad);
    var_bad = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_my_pixel);
    var_my_pixel = NULL;
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
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_x_direction);
    Py_DECREF(par_x_direction);
    CHECK_OBJECT(par_y_direction);
    Py_DECREF(par_y_direction);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_x_direction);
    Py_DECREF(par_x_direction);
    CHECK_OBJECT(par_y_direction);
    Py_DECREF(par_y_direction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__2__r(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_point = python_pars[0];
    PyObject *par_height = python_pars[1];
    PyObject *par_width = python_pars[2];
    struct Nuitka_FrameObject *frame_c8fb7e12360309544250fae8a8cd28db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8fb7e12360309544250fae8a8cd28db = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8fb7e12360309544250fae8a8cd28db)) {
        Py_XDECREF(cache_frame_c8fb7e12360309544250fae8a8cd28db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8fb7e12360309544250fae8a8cd28db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8fb7e12360309544250fae8a8cd28db = MAKE_FUNCTION_FRAME(tstate, codeobj_c8fb7e12360309544250fae8a8cd28db, module_arcade$hitbox, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8fb7e12360309544250fae8a8cd28db->m_type_description == NULL);
    frame_c8fb7e12360309544250fae8a8cd28db = cache_frame_c8fb7e12360309544250fae8a8cd28db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c8fb7e12360309544250fae8a8cd28db);
    assert(Py_REFCNT(frame_c8fb7e12360309544250fae8a8cd28db) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_point);
        tmp_expression_value_1 = par_point;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_truediv_expr_left_1 = par_width;
        tmp_truediv_expr_right_1 = mod_consts[35];
        tmp_sub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_height);
            tmp_sub_expr_left_3 = par_height;
            CHECK_OBJECT(par_point);
            tmp_expression_value_2 = par_point;
            tmp_subscript_value_2 = mod_consts[11];
            tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_sub_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_height);
            tmp_truediv_expr_left_2 = par_height;
            tmp_truediv_expr_right_2 = mod_consts[35];
            tmp_sub_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            if (tmp_sub_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_2);

                exception_lineno = 98;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_sub_expr_right_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8fb7e12360309544250fae8a8cd28db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8fb7e12360309544250fae8a8cd28db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8fb7e12360309544250fae8a8cd28db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8fb7e12360309544250fae8a8cd28db,
        type_description_1,
        par_point,
        par_height,
        par_width
    );


    // Release cached frame if used for exception.
    if (frame_c8fb7e12360309544250fae8a8cd28db == cache_frame_c8fb7e12360309544250fae8a8cd28db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8fb7e12360309544250fae8a8cd28db);
        cache_frame_c8fb7e12360309544250fae8a8cd28db = NULL;
    }

    assertFrameObject(frame_c8fb7e12360309544250fae8a8cd28db);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_image = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_hit_box_detail = python_pars[1];
    PyObject *var_sample_func = NULL;
    PyObject *var_p1 = NULL;
    PyObject *var_p2 = NULL;
    PyObject *var_p3 = NULL;
    PyObject *var_p4 = NULL;
    PyObject *var_logo_bb = NULL;
    PyObject *var_line_set = NULL;
    PyObject *var_horizontal_samples = NULL;
    PyObject *var_vertical_samples = NULL;
    PyObject *var_line_sets = NULL;
    PyObject *var_selected_line_set = NULL;
    PyObject *var_selected_range = NULL;
    PyObject *var_line = NULL;
    PyObject *var_min_x = NULL;
    PyObject *var_min_y = NULL;
    PyObject *var_max_x = NULL;
    PyObject *var_max_y = NULL;
    PyObject *var_point = NULL;
    PyObject *var_my_range = NULL;
    PyObject *var_hh = NULL;
    PyObject *var_hw = NULL;
    PyObject *var_points = NULL;
    PyObject *var_vec2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1478648fe4b3728bae2cf148e26ee4d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_1478648fe4b3728bae2cf148e26ee4d7 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1478648fe4b3728bae2cf148e26ee4d7)) {
        Py_XDECREF(cache_frame_1478648fe4b3728bae2cf148e26ee4d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1478648fe4b3728bae2cf148e26ee4d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1478648fe4b3728bae2cf148e26ee4d7 = MAKE_FUNCTION_FRAME(tstate, codeobj_1478648fe4b3728bae2cf148e26ee4d7, module_arcade$hitbox, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1478648fe4b3728bae2cf148e26ee4d7->m_type_description == NULL);
    frame_1478648fe4b3728bae2cf148e26ee4d7 = cache_frame_1478648fe4b3728bae2cf148e26ee4d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1478648fe4b3728bae2cf148e26ee4d7);
    assert(Py_REFCNT(frame_1478648fe4b3728bae2cf148e26ee4d7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_image);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "cooooooooNoooooooooooooooo";
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
        tmp_make_exception_arg_1 = mod_consts[2];
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 154;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 154;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "cooooooooNoooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_dict_key_1 = mod_consts[36];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[21];
        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));

        tmp_closure_1[0] = par_image;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed$$$function__1_sample_func(tmp_annotations_1, tmp_closure_1);

        assert(var_sample_func == NULL);
        var_sample_func = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[3];
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(par_image));
            tmp_expression_value_2 = Nuitka_Cell_GET(par_image);
            tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_right_1 = mod_consts[11];
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_p2 == NULL);
        var_p2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_image);
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = mod_consts[11];
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_assign_source_3, 0, tmp_tuple_element_2);
            CHECK_OBJECT(Nuitka_Cell_GET(par_image));
            tmp_expression_value_4 = Nuitka_Cell_GET(par_image);
            tmp_sub_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
            if (tmp_sub_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_sub_expr_right_3 = mod_consts[11];
            tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_left_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_3, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_p3 == NULL);
        var_p3 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_image);
        tmp_sub_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[7]);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_4 = mod_consts[11];
        tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_4, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[3];
        PyTuple_SET_ITEM0(tmp_assign_source_4, 1, tmp_tuple_element_3);
        assert(var_p4 == NULL);
        var_p4 = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_2;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_sample_func);
        tmp_called_value_1 = var_sample_func;
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 177;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[40]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_sample_func);
        tmp_called_value_2 = var_sample_func;
        CHECK_OBJECT(var_p2);
        tmp_args_element_value_1 = var_p2;
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 177;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_sample_func);
        tmp_called_value_3 = var_sample_func;
        CHECK_OBJECT(var_p3);
        tmp_args_element_value_2 = var_p3;
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 177;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_sample_func);
        tmp_called_value_4 = var_sample_func;
        CHECK_OBJECT(var_p4);
        tmp_args_element_value_3 = var_p4;
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 177;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 177;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_image);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[7]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[35];
        tmp_tuple_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_4);
            CHECK_OBJECT(Nuitka_Cell_GET(par_image));
            tmp_expression_value_7 = Nuitka_Cell_GET(par_image);
            tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[8]);
            if (tmp_operand_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_truediv_expr_left_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
            Py_DECREF(tmp_operand_value_2);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_truediv_expr_right_2 = mod_consts[35];
            tmp_tuple_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_5, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(var_p1 == NULL);
        var_p1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_8 = Nuitka_Cell_GET(par_image);
        tmp_truediv_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[7]);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[35];
        tmp_tuple_element_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_truediv_expr_left_4;
            PyObject *tmp_truediv_expr_right_4;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_9;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_5);
            CHECK_OBJECT(Nuitka_Cell_GET(par_image));
            tmp_expression_value_9 = Nuitka_Cell_GET(par_image);
            tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[8]);
            if (tmp_operand_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_truediv_expr_left_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
            Py_DECREF(tmp_operand_value_3);
            if (tmp_truediv_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_truediv_expr_right_4 = mod_consts[35];
            tmp_tuple_element_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
            Py_DECREF(tmp_truediv_expr_left_4);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        {
            PyObject *old = var_p2;
            var_p2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_10 = Nuitka_Cell_GET(par_image);
        tmp_truediv_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[7]);
        if (tmp_truediv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_5 = mod_consts[35];
        tmp_tuple_element_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_left_5);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_expression_value_11;
            PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_6);
            CHECK_OBJECT(Nuitka_Cell_GET(par_image));
            tmp_expression_value_11 = Nuitka_Cell_GET(par_image);
            tmp_truediv_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[8]);
            if (tmp_truediv_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_truediv_expr_right_6 = mod_consts[35];
            tmp_tuple_element_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            Py_DECREF(tmp_truediv_expr_left_6);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        {
            PyObject *old = var_p3;
            var_p3 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_truediv_expr_left_7;
        PyObject *tmp_truediv_expr_right_7;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_image);
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[7]);
        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_7 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_truediv_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_7 = mod_consts[35];
        tmp_tuple_element_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
        Py_DECREF(tmp_truediv_expr_left_7);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_truediv_expr_left_8;
            PyObject *tmp_truediv_expr_right_8;
            PyObject *tmp_expression_value_13;
            PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_7);
            CHECK_OBJECT(Nuitka_Cell_GET(par_image));
            tmp_expression_value_13 = Nuitka_Cell_GET(par_image);
            tmp_truediv_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[8]);
            if (tmp_truediv_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_truediv_expr_right_8 = mod_consts[35];
            tmp_tuple_element_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
            Py_DECREF(tmp_truediv_expr_left_8);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        {
            PyObject *old = var_p4;
            var_p4 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT(var_p1);
        tmp_tuple_element_8 = var_p1;
        tmp_return_value = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_p2);
        tmp_tuple_element_8 = var_p2;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_8);
        CHECK_OBJECT(var_p3);
        tmp_tuple_element_8 = var_p3;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_8);
        CHECK_OBJECT(var_p4);
        tmp_tuple_element_8 = var_p4;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_8);
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[42]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[25];
        tmp_args_element_value_5 = mod_consts[25];
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_15 = Nuitka_Cell_GET(par_image);
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[7]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 187;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_16 = Nuitka_Cell_GET(par_image);
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[8]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 187;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_logo_bb == NULL);
        var_logo_bb = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 190;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[44]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_line_set == NULL);
        var_line_set = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_truediv_expr_left_9;
        PyObject *tmp_truediv_expr_right_9;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_17 = Nuitka_Cell_GET(par_image);
        tmp_truediv_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[7]);
        if (tmp_truediv_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_9 = mod_consts[11];
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
        Py_DECREF(tmp_truediv_expr_left_9);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_horizontal_samples == NULL);
        var_horizontal_samples = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_truediv_expr_left_10;
        PyObject *tmp_truediv_expr_right_10;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_18 = Nuitka_Cell_GET(par_image);
        tmp_truediv_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[8]);
        if (tmp_truediv_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_10 = mod_consts[11];
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
        Py_DECREF(tmp_truediv_expr_left_10);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vertical_samples == NULL);
        var_vertical_samples = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_logo_bb);
        tmp_args_element_value_8 = var_logo_bb;
        CHECK_OBJECT(var_horizontal_samples);
        tmp_args_element_value_9 = var_horizontal_samples;
        CHECK_OBJECT(var_vertical_samples);
        tmp_args_element_value_10 = var_vertical_samples;
        tmp_args_element_value_11 = mod_consts[46];
        CHECK_OBJECT(var_sample_func);
        tmp_args_element_value_12 = var_sample_func;
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_2,
                mod_consts[45],
                call_args
            );
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_line_sets == NULL);
        var_line_sets = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_line_sets);
        tmp_len_arg_1 = var_line_sets;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 0;
        tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_line_sets);
        tmp_expression_value_19 = var_line_sets;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_1, 0);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_selected_line_set == NULL);
        var_selected_line_set = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_None;
        assert(var_selected_range == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_selected_range = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_line_set);
        tmp_len_arg_2 = var_line_set;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 1;
        tmp_condition_result_4 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_line_set);
        tmp_iter_arg_1 = var_line_set;
        tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooNoooooooooooooooo";
                exception_lineno = 213;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_18 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_18;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_None;
        {
            PyObject *old = var_min_x;
            var_min_x = tmp_assign_source_19;
            Py_INCREF(var_min_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_None;
        {
            PyObject *old = var_min_y;
            var_min_y = tmp_assign_source_20;
            Py_INCREF(var_min_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = Py_None;
        {
            PyObject *old = var_max_x;
            var_max_x = tmp_assign_source_21;
            Py_INCREF(var_max_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = Py_None;
        {
            PyObject *old = var_max_y;
            var_max_y = tmp_assign_source_22;
            Py_INCREF(var_max_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_line);
        tmp_iter_arg_2 = var_line;
        tmp_assign_source_23 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooNoooooooooooooooo";
                exception_lineno = 218;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_25 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_25;
            Py_INCREF(var_point);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_20;
        if (var_min_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 219;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_4 = var_min_x;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_point);
        tmp_expression_value_20 = var_point;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[32]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_min_x == NULL) {
            Py_DECREF(tmp_cmp_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 219;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_right_5 = var_min_x;
        tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_21;
        if (var_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 220;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_21 = var_point;
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[32]);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_min_x;
            var_min_x = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_22;
        if (var_max_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 221;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_6 = var_max_x;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_or_left_value_2 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (var_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 221;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_22 = var_point;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[32]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_max_x == NULL) {
            Py_DECREF(tmp_cmp_expr_left_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 221;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_right_7 = var_max_x;
        tmp_or_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_6 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_23;
        if (var_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 222;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_23 = var_point;
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[32]);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_max_x;
            var_max_x = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_24;
        if (var_min_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_8 = var_min_y;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_or_left_value_3 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        if (var_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_24 = var_point;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[33]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_min_y == NULL) {
            Py_DECREF(tmp_cmp_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_right_9 = var_min_y;
        tmp_or_right_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_7 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_25;
        if (var_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 224;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_25 = var_point;
        tmp_assign_source_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[33]);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_min_y;
            var_min_y = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_26;
        if (var_max_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_10 = var_max_y;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_or_left_value_4 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        if (var_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_26 = var_point;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[33]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_max_y == NULL) {
            Py_DECREF(tmp_cmp_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_right_11 = var_max_y;
        tmp_or_right_value_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_or_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_8 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_8 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_value_27;
        if (var_point == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_27 = var_point;
        tmp_assign_source_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[33]);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_max_y;
            var_max_y = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 218;
        type_description_1 = "cooooooooNoooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_9;
        int tmp_or_left_truth_5;
        bool tmp_or_left_value_5;
        bool tmp_or_right_value_5;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        int tmp_or_left_truth_6;
        bool tmp_or_left_value_6;
        bool tmp_or_right_value_6;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        int tmp_or_left_truth_7;
        bool tmp_or_left_value_7;
        bool tmp_or_right_value_7;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        if (var_min_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 228;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_12 = var_min_x;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_or_left_value_5 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        tmp_or_left_truth_5 = tmp_or_left_value_5 != false ? 1 : 0;
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        if (var_max_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 228;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_13 = var_max_x;
        tmp_cmp_expr_right_13 = Py_None;
        tmp_or_left_value_6 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
        tmp_or_left_truth_6 = tmp_or_left_value_6 != false ? 1 : 0;
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        if (var_min_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 228;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_14 = var_min_y;
        tmp_cmp_expr_right_14 = Py_None;
        tmp_or_left_value_7 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        tmp_or_left_truth_7 = tmp_or_left_value_7 != false ? 1 : 0;
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        if (var_max_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 228;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_15 = var_max_y;
        tmp_cmp_expr_right_15 = Py_None;
        tmp_or_right_value_7 = (tmp_cmp_expr_left_15 == tmp_cmp_expr_right_15) ? true : false;
        tmp_or_right_value_6 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_or_right_value_6 = tmp_or_left_value_7;
        or_end_7:;
        tmp_or_right_value_5 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_or_right_value_5 = tmp_or_left_value_6;
        or_end_6:;
        tmp_condition_result_9 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_condition_result_9 = tmp_or_left_value_5;
        or_end_5:;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[51];
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 229;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 229;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "cooooooooNoooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        if (var_max_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 231;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_left_5 = var_max_x;
        if (var_min_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 231;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_5 = var_min_x;
        tmp_add_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_max_y == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 231;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_right_2 = var_max_y;
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_min_y == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 231;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_right_1 = var_min_y;
        tmp_assign_source_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_my_range;
            var_my_range = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_or_left_truth_8;
        nuitka_bool tmp_or_left_value_8;
        nuitka_bool tmp_or_right_value_8;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        if (var_selected_range == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 232;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_16 = var_selected_range;
        tmp_cmp_expr_right_16 = Py_None;
        tmp_or_left_value_8 = (tmp_cmp_expr_left_16 == tmp_cmp_expr_right_16) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_8 = tmp_or_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_8 == 1) {
            goto or_left_8;
        } else {
            goto or_right_8;
        }
        or_right_8:;
        CHECK_OBJECT(var_my_range);
        tmp_cmp_expr_left_17 = var_my_range;
        if (var_selected_range == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 232;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_17 = var_selected_range;
        tmp_or_right_value_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_or_right_value_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = tmp_or_right_value_8;
        goto or_end_8;
        or_left_8:;
        tmp_condition_result_10 = tmp_or_left_value_8;
        or_end_8:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(var_my_range);
        tmp_assign_source_31 = var_my_range;
        {
            PyObject *old = var_selected_range;
            var_selected_range = tmp_assign_source_31;
            Py_INCREF(var_selected_range);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(var_line);
        tmp_assign_source_32 = var_line;
        {
            PyObject *old = var_selected_line_set;
            var_selected_line_set = tmp_assign_source_32;
            Py_INCREF(var_selected_line_set);
            Py_XDECREF(old);
        }

    }
    branch_no_10:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 213;
        type_description_1 = "cooooooooNoooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[53]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_selected_line_set == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 238;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = var_selected_line_set;
        CHECK_OBJECT(par_hit_box_detail);
        tmp_args_element_value_14 = par_hit_box_detail;
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_selected_line_set;
            var_selected_line_set = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_truediv_expr_left_11;
        PyObject *tmp_truediv_expr_right_11;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_29 = Nuitka_Cell_GET(par_image);
        tmp_truediv_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[8]);
        if (tmp_truediv_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_11 = mod_consts[35];
        tmp_assign_source_34 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_11, tmp_truediv_expr_right_11);
        Py_DECREF(tmp_truediv_expr_left_11);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hh == NULL);
        var_hh = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_truediv_expr_left_12;
        PyObject *tmp_truediv_expr_right_12;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(Nuitka_Cell_GET(par_image));
        tmp_expression_value_30 = Nuitka_Cell_GET(par_image);
        tmp_truediv_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[7]);
        if (tmp_truediv_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_12 = mod_consts[35];
        tmp_assign_source_35 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_12, tmp_truediv_expr_right_12);
        Py_DECREF(tmp_truediv_expr_left_12);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hw == NULL);
        var_hw = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
        assert(var_points == NULL);
        var_points = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_selected_line_set);
        tmp_iter_arg_3 = var_selected_line_set;
        tmp_assign_source_37 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_37;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_38 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_38 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooNoooooooooooooooo";
                exception_lineno = 246;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_39 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_vec2;
            var_vec2 = tmp_assign_source_39;
            Py_INCREF(var_vec2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_expression_value_31;
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[55]);
        assert(tmp_called_value_7 != NULL);
        CHECK_OBJECT(var_vec2);
        tmp_expression_value_31 = var_vec2;
        tmp_sub_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[32]);
        if (tmp_sub_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_hw == NULL) {
            Py_DECREF(tmp_sub_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 247;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_sub_expr_right_6 = var_hw;
        tmp_args_element_value_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_left_6);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 247;
        tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_40 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_sub_expr_left_7;
            PyObject *tmp_sub_expr_right_7;
            PyObject *tmp_sub_expr_left_8;
            PyObject *tmp_sub_expr_right_8;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_sub_expr_left_9;
            PyObject *tmp_sub_expr_right_9;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_9);
            tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[55]);
            assert(tmp_called_value_8 != NULL);
            if (Nuitka_Cell_GET(par_image) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_expression_value_32 = Nuitka_Cell_GET(par_image);
            tmp_sub_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[8]);
            if (tmp_sub_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }
            CHECK_OBJECT(var_vec2);
            tmp_expression_value_33 = var_vec2;
            tmp_sub_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[33]);
            if (tmp_sub_expr_left_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_8);

                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }
            if (var_hh == NULL) {
                Py_DECREF(tmp_sub_expr_left_8);
                Py_DECREF(tmp_sub_expr_left_9);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_sub_expr_right_9 = var_hh;
            tmp_sub_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
            Py_DECREF(tmp_sub_expr_left_9);
            if (tmp_sub_expr_right_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_8);

                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_sub_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
            Py_DECREF(tmp_sub_expr_left_8);
            Py_DECREF(tmp_sub_expr_right_8);
            if (tmp_sub_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }
            if (Nuitka_Cell_GET(par_image) == NULL) {
                Py_DECREF(tmp_sub_expr_left_7);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_expression_value_34 = Nuitka_Cell_GET(par_image);
            tmp_sub_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[8]);
            if (tmp_sub_expr_right_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_7);

                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_args_element_value_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_right_7);
            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }
            frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 247;
            tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "cooooooooNoooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_40, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_40);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        {
            PyObject *old = var_point;
            var_point = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_17;
        if (var_points == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 248;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_35 = var_points;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[59]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_point);
        tmp_args_element_value_17 = var_point;
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 248;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 246;
        type_description_1 = "cooooooooNoooooooooooooooo";
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
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_18;
        nuitka_digit tmp_cmp_expr_right_18;
        PyObject *tmp_len_arg_3;
        bool tmp_tmp_and_left_value_4_cbool_1;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_3;
        if (var_points == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_3 = var_points;
        tmp_cmp_expr_left_18 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_18 = 1;
        tmp_tmp_and_left_value_4_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_left_18);
        tmp_and_left_value_4 = tmp_tmp_and_left_value_4_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        if (var_points == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = var_points;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_cmp_expr_left_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_2, 0);
        if (tmp_cmp_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_points == NULL) {
            Py_DECREF(tmp_cmp_expr_left_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = var_points;
        tmp_subscript_value_3 = mod_consts[25];
        tmp_cmp_expr_right_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_3, -1);
        if (tmp_cmp_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_19);

            exception_lineno = 250;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_left_19);
        Py_DECREF(tmp_cmp_expr_right_19);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_11 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_6;
        if (var_points == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 251;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = var_points;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[60]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame.f_lineno = 251;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "cooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_11:;
    if (var_points == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 254;
        type_description_1 = "cooooooooNoooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_points;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1478648fe4b3728bae2cf148e26ee4d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1478648fe4b3728bae2cf148e26ee4d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1478648fe4b3728bae2cf148e26ee4d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1478648fe4b3728bae2cf148e26ee4d7,
        type_description_1,
        par_image,
        par_hit_box_detail,
        var_sample_func,
        var_p1,
        var_p2,
        var_p3,
        var_p4,
        var_logo_bb,
        var_line_set,
        NULL,
        var_horizontal_samples,
        var_vertical_samples,
        var_line_sets,
        var_selected_line_set,
        var_selected_range,
        var_line,
        var_min_x,
        var_min_y,
        var_max_x,
        var_max_y,
        var_point,
        var_my_range,
        var_hh,
        var_hw,
        var_points,
        var_vec2
    );


    // Release cached frame if used for exception.
    if (frame_1478648fe4b3728bae2cf148e26ee4d7 == cache_frame_1478648fe4b3728bae2cf148e26ee4d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1478648fe4b3728bae2cf148e26ee4d7);
        cache_frame_1478648fe4b3728bae2cf148e26ee4d7 = NULL;
    }

    assertFrameObject(frame_1478648fe4b3728bae2cf148e26ee4d7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sample_func);
    Py_DECREF(var_sample_func);
    var_sample_func = NULL;
    Py_XDECREF(var_p1);
    var_p1 = NULL;
    Py_XDECREF(var_p2);
    var_p2 = NULL;
    Py_XDECREF(var_p3);
    var_p3 = NULL;
    Py_XDECREF(var_p4);
    var_p4 = NULL;
    Py_XDECREF(var_logo_bb);
    var_logo_bb = NULL;
    Py_XDECREF(var_line_set);
    var_line_set = NULL;
    Py_XDECREF(var_horizontal_samples);
    var_horizontal_samples = NULL;
    Py_XDECREF(var_vertical_samples);
    var_vertical_samples = NULL;
    Py_XDECREF(var_line_sets);
    var_line_sets = NULL;
    Py_XDECREF(var_selected_line_set);
    var_selected_line_set = NULL;
    Py_XDECREF(var_selected_range);
    var_selected_range = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_min_x);
    var_min_x = NULL;
    Py_XDECREF(var_min_y);
    var_min_y = NULL;
    Py_XDECREF(var_max_x);
    var_max_x = NULL;
    Py_XDECREF(var_max_y);
    var_max_y = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_my_range);
    var_my_range = NULL;
    Py_XDECREF(var_hh);
    var_hh = NULL;
    Py_XDECREF(var_hw);
    var_hw = NULL;
    Py_XDECREF(var_points);
    var_points = NULL;
    Py_XDECREF(var_vec2);
    var_vec2 = NULL;
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

    Py_XDECREF(var_sample_func);
    var_sample_func = NULL;
    Py_XDECREF(var_p1);
    var_p1 = NULL;
    Py_XDECREF(var_p2);
    var_p2 = NULL;
    Py_XDECREF(var_p3);
    var_p3 = NULL;
    Py_XDECREF(var_p4);
    var_p4 = NULL;
    Py_XDECREF(var_logo_bb);
    var_logo_bb = NULL;
    Py_XDECREF(var_line_set);
    var_line_set = NULL;
    Py_XDECREF(var_horizontal_samples);
    var_horizontal_samples = NULL;
    Py_XDECREF(var_vertical_samples);
    var_vertical_samples = NULL;
    Py_XDECREF(var_line_sets);
    var_line_sets = NULL;
    Py_XDECREF(var_selected_line_set);
    var_selected_line_set = NULL;
    Py_XDECREF(var_selected_range);
    var_selected_range = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_min_x);
    var_min_x = NULL;
    Py_XDECREF(var_min_y);
    var_min_y = NULL;
    Py_XDECREF(var_max_x);
    var_max_x = NULL;
    Py_XDECREF(var_max_y);
    var_max_y = NULL;
    Py_XDECREF(var_point);
    var_point = NULL;
    Py_XDECREF(var_my_range);
    var_my_range = NULL;
    Py_XDECREF(var_hh);
    var_hh = NULL;
    Py_XDECREF(var_hw);
    var_hw = NULL;
    Py_XDECREF(var_points);
    var_points = NULL;
    Py_XDECREF(var_vec2);
    var_vec2 = NULL;
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
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    CHECK_OBJECT(par_hit_box_detail);
    Py_DECREF(par_hit_box_detail);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    CHECK_OBJECT(par_hit_box_detail);
    Py_DECREF(par_hit_box_detail);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed$$$function__1_sample_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_sample_point = python_pars[0];
    PyObject *var_point_tuple = NULL;
    PyObject *var_color = NULL;
    struct Nuitka_FrameObject *frame_c2985881e89913d7d88bb06db44b27d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c2985881e89913d7d88bb06db44b27d9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c2985881e89913d7d88bb06db44b27d9)) {
        Py_XDECREF(cache_frame_c2985881e89913d7d88bb06db44b27d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2985881e89913d7d88bb06db44b27d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2985881e89913d7d88bb06db44b27d9 = MAKE_FUNCTION_FRAME(tstate, codeobj_c2985881e89913d7d88bb06db44b27d9, module_arcade$hitbox, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2985881e89913d7d88bb06db44b27d9->m_type_description == NULL);
    frame_c2985881e89913d7d88bb06db44b27d9 = cache_frame_c2985881e89913d7d88bb06db44b27d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c2985881e89913d7d88bb06db44b27d9);
    assert(Py_REFCNT(frame_c2985881e89913d7d88bb06db44b27d9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_sample_point);
        tmp_expression_value_1 = par_sample_point;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_sample_point);
        tmp_expression_value_2 = par_sample_point;
        tmp_subscript_value_2 = mod_consts[11];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[3];
        tmp_or_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_sample_point);
        tmp_expression_value_3 = par_sample_point;
        tmp_subscript_value_3 = mod_consts[3];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 160;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 160;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(par_sample_point);
        tmp_expression_value_5 = par_sample_point;
        tmp_subscript_value_4 = mod_consts[11];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 161;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 161;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_sample_point);
        tmp_expression_value_7 = par_sample_point;
        tmp_subscript_value_5 = mod_consts[3];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_6;
            PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_sample_point);
            tmp_expression_value_8 = par_sample_point;
            tmp_subscript_value_6 = mod_consts[11];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_6, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "oooc";
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
        assert(var_point_tuple == NULL);
        var_point_tuple = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 165;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_point_tuple);
        tmp_args_element_value_1 = var_point_tuple;
        frame_c2985881e89913d7d88bb06db44b27d9->m_frame.f_lineno = 165;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_color == NULL);
        var_color = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_color);
        tmp_expression_value_9 = var_color;
        tmp_subscript_value_7 = mod_consts[10];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_7, 3);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[3];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[62];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c2985881e89913d7d88bb06db44b27d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2985881e89913d7d88bb06db44b27d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2985881e89913d7d88bb06db44b27d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2985881e89913d7d88bb06db44b27d9,
        type_description_1,
        par_sample_point,
        var_point_tuple,
        var_color,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c2985881e89913d7d88bb06db44b27d9 == cache_frame_c2985881e89913d7d88bb06db44b27d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2985881e89913d7d88bb06db44b27d9);
        cache_frame_c2985881e89913d7d88bb06db44b27d9 = NULL;
    }

    assertFrameObject(frame_c2985881e89913d7d88bb06db44b27d9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_point_tuple);
    var_point_tuple = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
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

    Py_XDECREF(var_point_tuple);
    var_point_tuple = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
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
    CHECK_OBJECT(par_sample_point);
    Py_DECREF(par_sample_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sample_point);
    Py_DECREF(par_sample_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_146c6dc997681eb1f16345993c440785,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$hitbox,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__1__check_corner_offset(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__1__check_corner_offset,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[17],
#endif
        codeobj_8445a2d873e92634e130604cd474c64c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$hitbox,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__2__r(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__2__r,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_c8fb7e12360309544250fae8a8cd28db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$hitbox,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1478648fe4b3728bae2cf148e26ee4d7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$hitbox,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed$$$function__1_sample_func(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed$$$function__1_sample_func,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_c2985881e89913d7d88bb06db44b27d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$hitbox,
        mod_consts[37],
        closure,
        1
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

function_impl_code functable_arcade$hitbox[] = {
    impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__1__check_corner_offset,
    impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple$$$function__2__r,
    impl_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed$$$function__1_sample_func,
    impl_arcade$hitbox$$$function__1_calculate_hit_box_points_simple,
    impl_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed,
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

    function_impl_code *current = functable_arcade$hitbox;
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

    if (offset > sizeof(functable_arcade$hitbox) || offset < 0) {
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
        functable_arcade$hitbox[offset],
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
        module_arcade$hitbox,
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
PyObject *modulecode_arcade$hitbox(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("arcade.hitbox");

    // Store the module for future use.
    module_arcade$hitbox = module;

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
        PRINT_STRING("arcade.hitbox: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("arcade.hitbox: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initarcade$hitbox\n");

    moduledict_arcade$hitbox = MODULE_DICT(module_arcade$hitbox);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_arcade$hitbox,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_arcade$hitbox,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[90]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_arcade$hitbox,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$hitbox,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$hitbox,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_arcade$hitbox);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_arcade$hitbox);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_148b1c5f069d59623881f1f5973e667e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_2);
    }
    frame_148b1c5f069d59623881f1f5973e667e = MAKE_MODULE_FRAME(codeobj_148b1c5f069d59623881f1f5973e667e, module_arcade$hitbox);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_148b1c5f069d59623881f1f5973e667e);
    assert(Py_REFCNT(frame_148b1c5f069d59623881f1f5973e667e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[67], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[68], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[41];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_arcade$hitbox;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_148b1c5f069d59623881f1f5973e667e->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[70];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_arcade$hitbox;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[71];
        tmp_level_value_2 = mod_consts[3];
        frame_148b1c5f069d59623881f1f5973e667e->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_arcade$hitbox,
                mod_consts[72],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[73];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_arcade$hitbox;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[74];
        tmp_level_value_3 = mod_consts[3];
        frame_148b1c5f069d59623881f1f5973e667e->m_frame.f_lineno = 7;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_arcade$hitbox,
                mod_consts[22],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_arcade$hitbox,
                mod_consts[75],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[75]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_arcade$hitbox,
                mod_consts[76],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[76]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_arcade$hitbox,
                mod_consts[19],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[19]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[41];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_arcade$hitbox;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[77];
        tmp_level_value_4 = mod_consts[3];
        frame_148b1c5f069d59623881f1f5973e667e->m_frame.f_lineno = 9;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_arcade$hitbox,
                mod_consts[43],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[6];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_subscript_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_12 = MAKE_FUNCTION_arcade$hitbox$$$function__1_calculate_hit_box_points_simple(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_defaults_1 = mod_consts[79];
        tmp_dict_key_2 = mod_consts[6];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[80];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[21];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_subscript_value_4 == NULL)) {
                tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_subscript_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_5;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_tuple_element_3;
                PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_2);
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[22]);

                if (unlikely(tmp_tuple_element_3 == NULL)) {
                    tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                }

                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_2;
                }
                tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = Py_Ellipsis;
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_3);
                tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_3);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_13 = MAKE_FUNCTION_arcade$hitbox$$$function__2_calculate_hit_box_points_detailed(tmp_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_arcade$hitbox, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_13);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_148b1c5f069d59623881f1f5973e667e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_148b1c5f069d59623881f1f5973e667e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_148b1c5f069d59623881f1f5973e667e, exception_lineno);
    }



    assertFrameObject(frame_148b1c5f069d59623881f1f5973e667e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("arcade.hitbox", false);

    Py_INCREF(module_arcade$hitbox);
    return module_arcade$hitbox;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$hitbox, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("arcade$hitbox", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
