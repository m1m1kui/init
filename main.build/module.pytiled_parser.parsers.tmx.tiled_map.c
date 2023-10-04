/* Generated code for Python module 'pytiled_parser.parsers.tmx.tiled_map'
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

/* The "module_pytiled_parser$parsers$tmx$tiled_map" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pytiled_parser$parsers$tmx$tiled_map;
PyDictObject *moduledict_pytiled_parser$parsers$tmx$tiled_map;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[120];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[120];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pytiled_parser.parsers.tmx.tiled_map"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 120; i++) {
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
void checkModuleConstants_pytiled_parser$parsers$tmx$tiled_map(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 120; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_20d3b5deb8fb93189bffa6757b4ffd10;
static PyCodeObject *codeobj_343bb1bec3103b6ccc14946e3b2d5db0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[116]); CHECK_OBJECT(module_filename_obj);
    codeobj_20d3b5deb8fb93189bffa6757b4ffd10 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_343bb1bec3103b6ccc14946e3b2d5db0 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[118], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$tmx$tiled_map$$$function__1_parse(PyObject *annotations);


// The module function definitions.
static PyObject *impl_pytiled_parser$parsers$tmx$tiled_map$$$function__1_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_file = python_pars[0];
    PyObject *var_tilesets = NULL;
    PyObject *var_map_file = NULL;
    PyObject *var_raw_map = NULL;
    PyObject *var_parent_dir = NULL;
    PyObject *var_raw_tilesets = NULL;
    PyObject *var_raw_tileset = NULL;
    PyObject *var_tileset_path = NULL;
    PyObject *var_parser = NULL;
    PyObject *var_tileset_file = NULL;
    PyObject *var_raw_tileset_external = NULL;
    PyObject *var_layers = NULL;
    PyObject *var_element = NULL;
    PyObject *var_map_ = NULL;
    PyObject *var_my_layer = NULL;
    PyObject *var_tiled_object = NULL;
    PyObject *var_already_loaded = NULL;
    PyObject *var_val = NULL;
    PyObject *var_highest_firstgid = NULL;
    PyObject *var_last_tileset_count = NULL;
    PyObject *var_new_firstgid = NULL;
    PyObject *var_properties_element = NULL;
    PyObject *var__parallax_origin_x = NULL;
    PyObject *var__parallax_origin_y = NULL;
    PyObject *outline_0_var_layer = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_343bb1bec3103b6ccc14946e3b2d5db0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_343bb1bec3103b6ccc14946e3b2d5db0 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_343bb1bec3103b6ccc14946e3b2d5db0)) {
        Py_XDECREF(cache_frame_343bb1bec3103b6ccc14946e3b2d5db0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_343bb1bec3103b6ccc14946e3b2d5db0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_343bb1bec3103b6ccc14946e3b2d5db0 = MAKE_FUNCTION_FRAME(tstate, codeobj_343bb1bec3103b6ccc14946e3b2d5db0, module_pytiled_parser$parsers$tmx$tiled_map, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_343bb1bec3103b6ccc14946e3b2d5db0->m_type_description == NULL);
    frame_343bb1bec3103b6ccc14946e3b2d5db0 = cache_frame_343bb1bec3103b6ccc14946e3b2d5db0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_343bb1bec3103b6ccc14946e3b2d5db0);
    assert(Py_REFCNT(frame_343bb1bec3103b6ccc14946e3b2d5db0) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        CHECK_OBJECT(par_file);
        tmp_open_filename_1 = par_file;
        tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 24;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_map_file == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_map_file = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_map_file);
        tmp_args_element_value_1 = var_map_file;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 25;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[3], tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 25;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_raw_map == NULL);
        var_raw_map = tmp_assign_source_6;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_343bb1bec3103b6ccc14946e3b2d5db0, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_343bb1bec3103b6ccc14946e3b2d5db0, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_2 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 24;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame) frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 24;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame) frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 24;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_3, mod_consts[5]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 24;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_4, mod_consts[5]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_file);
        tmp_expression_value_3 = par_file;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[6]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parent_dir == NULL);
        var_parent_dir = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 29;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_raw_map;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 29;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_raw_tilesets == NULL);
        var_raw_tilesets = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(var_tilesets == NULL);
        var_tilesets = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_raw_tilesets);
        tmp_iter_arg_1 = var_raw_tilesets;
        tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 32;
                goto try_except_handler_6;
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
            PyObject *old = var_raw_tileset;
            var_raw_tileset = tmp_assign_source_13;
            Py_INCREF(var_raw_tileset);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_5 = var_raw_tileset;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 33;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[12]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_parent_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_truediv_expr_left_1 = var_parent_dir;
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_7 = var_raw_tileset;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_1 = mod_consts[15];
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 35;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_tileset_path;
            var_tileset_path = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_tileset_path);
        tmp_args_element_value_6 = var_tileset_path;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 36;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_parser;
            var_parser = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_open_filename_2;
        CHECK_OBJECT(var_tileset_path);
        tmp_open_filename_2 = var_tileset_path;
        tmp_assign_source_16 = BUILTIN_OPEN(tstate, tmp_open_filename_2, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_with_2__source;
            tmp_with_2__source = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_8 = tmp_with_2__source;
        tmp_called_value_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, mod_consts[0]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 37;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_with_2__enter;
            tmp_with_2__enter = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_9 = tmp_with_2__source;
        tmp_assign_source_18 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, mod_consts[1]);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_with_2__exit;
            tmp_with_2__exit = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_20 = tmp_with_2__enter;
        {
            PyObject *old = var_tileset_file;
            var_tileset_file = tmp_assign_source_20;
            Py_INCREF(var_tileset_file);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_parser);
        tmp_cmp_expr_left_5 = var_parser;
        tmp_cmp_expr_right_5 = mod_consts[17];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_tileset_file);
        tmp_args_element_value_7 = var_tileset_file;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 39;
        tmp_called_instance_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[3], tmp_args_element_value_7);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 39;
        tmp_assign_source_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[4]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_raw_tileset_external;
            var_raw_tileset_external = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_raw_tileset_external);
        tmp_kw_call_arg_value_0_1 = var_raw_tileset_external;
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_11 = var_raw_tileset;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[10]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_value_2 = mod_consts[19];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_kw_call_arg_value_1_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_tileset_path);
        tmp_expression_value_12 = var_tileset_path;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[6]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 40;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_tilesets == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_ass_subscribed_1 = var_tilesets;
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_14 = var_raw_tileset;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[10]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_value_3 = mod_consts[19];
        tmp_int_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_ass_subscript_1 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_parser);
        tmp_cmp_expr_left_6 = var_parser;
        tmp_cmp_expr_right_6 = mod_consts[22];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_tileset_file);
        tmp_args_element_value_8 = var_tileset_file;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 47;
        tmp_kw_call_arg_value_0_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[24], tmp_args_element_value_8);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_16 = var_raw_tileset;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[10]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_value_4 = mod_consts[19];
        tmp_int_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_int_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_kw_call_arg_value_1_2 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_tileset_path);
        tmp_expression_value_17 = var_tileset_path;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[6]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 46;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_tilesets == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_ass_subscribed_2 = var_tilesets;
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_19 = var_raw_tileset;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[10]);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_value_5 = mod_consts[19];
        tmp_int_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_int_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_ass_subscript_2 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 52;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[26]);

        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 52;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    branch_end_7:;
    branch_end_6:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_343bb1bec3103b6ccc14946e3b2d5db0, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_343bb1bec3103b6ccc14946e3b2d5db0, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_assign_source_22;
        tmp_assign_source_22 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_12 = tmp_with_2__exit;
        tmp_args_element_value_9 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_10 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_11 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 37;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame) frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_10;
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 37;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame) frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_with_2__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_13 = tmp_with_2__exit;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 37;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_13, mod_consts[5]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);

            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_2__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_14 = tmp_with_2__exit;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 37;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_14, mod_consts[5]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_11:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_int_arg_6;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_7;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_raw_tileset);
        tmp_args_element_value_12 = var_raw_tileset;
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_21 = var_raw_tileset;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[10]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_6 = mod_consts[19];
        tmp_int_arg_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_int_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_13 = PyNumber_Int(tmp_int_arg_5);
        Py_DECREF(tmp_int_arg_5);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_tilesets == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_3 = var_tilesets;
        CHECK_OBJECT(var_raw_tileset);
        tmp_expression_value_23 = var_raw_tileset;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[10]);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_7 = mod_consts[19];
        tmp_int_arg_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_int_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_ass_subscript_3 = PyNumber_Int(tmp_int_arg_6);
        Py_DECREF(tmp_int_arg_6);
        if (tmp_ass_subscript_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    branch_end_5:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 32;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_LIST_EMPTY(0);
        assert(var_layers == NULL);
        var_layers = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_7;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = var_raw_map;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 63;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[27]);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_25 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 63;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_26 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_element;
            var_element = tmp_assign_source_26;
            Py_INCREF(var_element);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_element);
        tmp_expression_value_24 = var_element;
        tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[28]);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_cmp_expr_right_10 = MAKE_LIST4(mod_consts[29]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_12 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_25 = var_layers;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[31]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_element);
        tmp_args_element_value_15 = var_element;
        if (var_parent_dir == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_16 = var_parent_dir;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 65;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_12:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_18;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_int_arg_7;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_int_arg_8;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_int_arg_9;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_int_arg_10;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_int_arg_11;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_int_arg_12;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_int_arg_13;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_kw_call_value_0_1 = par_file;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = var_raw_map;
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[10]);
        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[34];
        tmp_int_arg_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_int_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_value_value_1 = PyNumber_Int(tmp_int_arg_7);
        Py_DECREF(tmp_int_arg_7);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = (tmp_res != 0) ? Py_True : Py_False;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_2_1 = var_layers;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = var_raw_map;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[10]);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = mod_consts[36];
        tmp_int_arg_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_int_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = PyNumber_Int(tmp_int_arg_8);
        Py_DECREF(tmp_int_arg_8);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_args_element_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_31 = var_raw_map;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[10]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[37];
        tmp_int_arg_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_int_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = PyNumber_Int(tmp_int_arg_9);
        Py_DECREF(tmp_int_arg_9);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_kw_call_value_3_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = var_raw_map;
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[10]);
        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[38];
        tmp_int_arg_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_int_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = PyNumber_Int(tmp_int_arg_10);
        Py_DECREF(tmp_int_arg_10);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = var_raw_map;
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[10]);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = mod_consts[39];
        tmp_int_arg_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_int_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_1 = PyNumber_Int(tmp_int_arg_11);
        Py_DECREF(tmp_int_arg_11);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = var_raw_map;
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[10]);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[40];
        tmp_kw_call_value_6_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = var_raw_map;
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[10]);
        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[41];
        tmp_kw_call_value_7_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = var_raw_map;
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[10]);
        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[42];
        tmp_kw_call_value_8_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_kw_call_value_8_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = var_raw_map;
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[10]);
        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[43];
        tmp_int_arg_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_int_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = PyNumber_Int(tmp_int_arg_12);
        Py_DECREF(tmp_int_arg_12);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_args_element_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_45 = var_raw_map;
        tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[10]);
        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[44];
        tmp_int_arg_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_int_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = PyNumber_Int(tmp_int_arg_13);
        Py_DECREF(tmp_int_arg_13);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_kw_call_value_9_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_kw_call_value_9_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tilesets == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_10_1 = var_tilesets;
        if (var_raw_map == NULL) {
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_47 = var_raw_map;
        tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[10]);
        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = mod_consts[45];
        tmp_kw_call_value_11_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_46);
        if (tmp_kw_call_value_11_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 67;
        {
            PyObject *kw_values[12] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1};

            tmp_assign_source_27 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_18, kw_values, mod_consts[46]);
        }

        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        Py_DECREF(tmp_kw_call_value_8_1);
        Py_DECREF(tmp_kw_call_value_9_1);
        Py_DECREF(tmp_kw_call_value_11_1);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_map_ == NULL);
        var_map_ = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_value_48;
            CHECK_OBJECT(var_map_);
            tmp_expression_value_48 = var_map_;
            tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[30]);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_29 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_30;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_3 = tmp_listcomp_1__$0;
            tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_31 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooo";
                    exception_lineno = 84;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_32 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_layer;
                outline_0_var_layer = tmp_assign_source_32;
                Py_INCREF(outline_0_var_layer);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_13;
            PyObject *tmp_expression_value_49;
            CHECK_OBJECT(outline_0_var_layer);
            tmp_expression_value_49 = outline_0_var_layer;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts[47]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_condition_result_13 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_13 != false) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_layer);
            tmp_append_value_1 = outline_0_var_layer;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
        }
        branch_no_13:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_28 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
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
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_0_var_layer);
        outline_0_var_layer = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_layer);
        outline_0_var_layer = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 84;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_layers;
            var_layers = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(var_layers);
        tmp_iter_arg_4 = var_layers;
        tmp_assign_source_33 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_33;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_34 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 86;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_35 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_my_layer;
            var_my_layer = tmp_assign_source_35;
            Py_INCREF(var_my_layer);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(var_my_layer);
        tmp_expression_value_50 = var_my_layer;
        tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[47]);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_36 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_5 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_37 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 100;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_38 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_tiled_object;
            var_tiled_object = tmp_assign_source_38;
            Py_INCREF(var_tiled_object);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(var_tiled_object);
        tmp_expression_value_51 = var_tiled_object;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(var_tiled_object);
        tmp_expression_value_52 = var_tiled_object;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[48]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_15 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = Py_None;
        {
            PyObject *old = var_already_loaded;
            var_already_loaded = tmp_assign_source_39;
            Py_INCREF(var_already_loaded);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        if (var_map_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_54 = var_map_;
        tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[21]);
        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[50]);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 104;
        tmp_iter_arg_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
        Py_DECREF(tmp_called_value_21);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_40 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_6 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_41 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 104;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_42 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_42;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_19;
        CHECK_OBJECT(var_val);
        tmp_expression_value_55 = var_val;
        tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[51]);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (var_tiled_object == NULL) {
            Py_DECREF(tmp_cmp_expr_left_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_58 = var_tiled_object;
        tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[48]);
        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_12);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[10]);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_12);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_subscript_value_19 = mod_consts[51];
        tmp_cmp_expr_right_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_cmp_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_12);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        Py_DECREF(tmp_cmp_expr_right_12);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(var_val);
        tmp_assign_source_43 = var_val;
        {
            PyObject *old = var_already_loaded;
            assert(old != NULL);
            var_already_loaded = tmp_assign_source_43;
            Py_INCREF(var_already_loaded);
            Py_DECREF(old);
        }

    }
    goto loop_end_6;
    branch_no_16:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 104;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_15;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_already_loaded);
        tmp_operand_value_3 = var_already_loaded;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_6;
        tmp_called_value_22 = LOOKUP_BUILTIN(mod_consts[53]);
        assert(tmp_called_value_22 != NULL);
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 110;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_22, mod_consts[54]);

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        tmp_called_value_23 = LOOKUP_BUILTIN(mod_consts[55]);
        assert(tmp_called_value_23 != NULL);
        if (var_map_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_60 = var_map_;
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[21]);
        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[56]);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 111;
        tmp_args_element_value_21 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_24);
        Py_DECREF(tmp_called_value_24);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 111;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_highest_firstgid;
            var_highest_firstgid = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_20;
        if (var_map_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_63 = var_map_;
        tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[21]);
        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_highest_firstgid);
        tmp_subscript_value_20 = var_highest_firstgid;
        tmp_expression_value_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[57]);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_last_tileset_count;
            var_last_tileset_count = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_highest_firstgid);
        tmp_add_expr_left_1 = var_highest_firstgid;
        CHECK_OBJECT(var_last_tileset_count);
        tmp_add_expr_right_1 = var_last_tileset_count;
        tmp_assign_source_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_new_firstgid;
            var_new_firstgid = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_ass_subscript_4;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_tiled_object == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_64 = var_tiled_object;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[48]);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_new_firstgid);
        tmp_args_element_value_23 = var_new_firstgid;
        if (var_tiled_object == NULL) {
            Py_DECREF(tmp_args_element_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_65 = var_tiled_object;
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[58]);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_66 = var_map_;
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[21]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_new_firstgid);
        tmp_ass_subscript_4 = var_new_firstgid;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_assattr_target_1;
        if (var_tiled_object == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_67 = var_tiled_object;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[59]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_new_firstgid);
        tmp_sub_expr_left_1 = var_new_firstgid;
        tmp_sub_expr_right_1 = mod_consts[60];
        tmp_add_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_tiled_object == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_assattr_target_1 = var_tiled_object;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[59], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_assattr_target_2;
        if (var_tiled_object == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_68 = var_tiled_object;
        tmp_add_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[59]);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_already_loaded);
        tmp_expression_value_69 = var_already_loaded;
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[19]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_sub_expr_right_2 = mod_consts[60];
        tmp_add_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_tiled_object == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_assattr_target_2 = var_tiled_object;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[59], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    branch_end_17:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        if (var_tiled_object == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_assattr_target_3 = var_tiled_object;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[48], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        if (var_tiled_object == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_assattr_target_4 = var_tiled_object;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[58], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    branch_no_15:;
    branch_no_14:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_14;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 86;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_expression_value_71;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_71 = var_raw_map;
        tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[10]);
        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[11]);
        Py_DECREF(tmp_expression_value_70);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 129;
        tmp_cmp_expr_left_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[61]);

        Py_DECREF(tmp_called_value_26);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_18 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_73 = var_raw_map;
        tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[10]);
        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = mod_consts[63];
        tmp_args_element_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 130;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_assattr_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = var_map_;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[64], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_18:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_expression_value_75;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_75 = var_raw_map;
        tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[10]);
        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[11]);
        Py_DECREF(tmp_expression_value_74);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 132;
        tmp_cmp_expr_left_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[65]);

        Py_DECREF(tmp_called_value_28);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = Py_None;
        tmp_condition_result_19 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_int_arg_14;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_assattr_target_6;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_77 = var_raw_map;
        tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[10]);
        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = mod_consts[66];
        tmp_int_arg_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_76);
        if (tmp_int_arg_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = PyNumber_Int(tmp_int_arg_14);
        Py_DECREF(tmp_int_arg_14);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_assattr_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = var_map_;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[67], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_19:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_78;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_78 = var_raw_map;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[68]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 135;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[69]);

        Py_DECREF(tmp_called_value_29);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_properties_element == NULL);
        var_properties_element = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_properties_element);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_properties_element);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_assattr_target_7;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_properties_element);
        tmp_args_element_value_26 = var_properties_element;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 137;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_26);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_assattr_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = var_map_;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[71], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_20:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_expression_value_80;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_80 = var_raw_map;
        tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[10]);
        if (tmp_expression_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[11]);
        Py_DECREF(tmp_expression_value_79);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 139;
        tmp_cmp_expr_left_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_31, mod_consts[72]);

        Py_DECREF(tmp_called_value_31);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = Py_None;
        tmp_condition_result_21 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_15);
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_assattr_target_8;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_82 = var_raw_map;
        tmp_expression_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[10]);
        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[73];
        tmp_assattr_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_81);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_assattr_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = var_map_;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[74], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_21:;
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_expression_value_84;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_84 = var_raw_map;
        tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[10]);
        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[11]);
        Py_DECREF(tmp_expression_value_83);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 142;
        tmp_cmp_expr_left_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_32, mod_consts[75]);

        Py_DECREF(tmp_called_value_32);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_16 = Py_None;
        tmp_condition_result_22 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_assattr_target_9;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_86 = var_raw_map;
        tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[10]);
        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = mod_consts[76];
        tmp_assattr_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_85);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_assattr_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = var_map_;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[77], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_22:;
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_expression_value_88;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_88 = var_raw_map;
        tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[10]);
        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[11]);
        Py_DECREF(tmp_expression_value_87);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 145;
        tmp_cmp_expr_left_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[78]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = Py_None;
        tmp_condition_result_23 = (tmp_cmp_expr_left_17 != tmp_cmp_expr_right_17) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_assattr_target_10;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_90 = var_raw_map;
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[10]);
        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = mod_consts[79];
        tmp_assattr_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_assattr_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = var_map_;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[80], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_23:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[81];
        assert(var__parallax_origin_x == NULL);
        Py_INCREF(tmp_assign_source_48);
        var__parallax_origin_x = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[81];
        assert(var__parallax_origin_y == NULL);
        Py_INCREF(tmp_assign_source_49);
        var__parallax_origin_y = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_92 = var_raw_map;
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[10]);
        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[11]);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 151;
        tmp_cmp_expr_left_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_34, mod_consts[82]);

        Py_DECREF(tmp_called_value_34);
        if (tmp_cmp_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_18 = Py_None;
        tmp_condition_result_24 = (tmp_cmp_expr_left_18 != tmp_cmp_expr_right_18) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_18);
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_26;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_94 = var_raw_map;
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[10]);
        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = mod_consts[83];
        tmp_float_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_float_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__parallax_origin_x;
            assert(old != NULL);
            var__parallax_origin_x = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    branch_no_24:;
    {
        bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_95;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_95 = var_raw_map;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[11]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 154;
        tmp_cmp_expr_left_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_35, mod_consts[84]);

        Py_DECREF(tmp_called_value_35);
        if (tmp_cmp_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_19 = Py_None;
        tmp_condition_result_25 = (tmp_cmp_expr_left_19 != tmp_cmp_expr_right_19) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_19);
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_27;
        if (var_raw_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_97 = var_raw_map;
        tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[10]);
        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_27 = mod_consts[85];
        tmp_float_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_96);
        if (tmp_float_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_51 = TO_FLOAT(tmp_float_arg_2);
        Py_DECREF(tmp_float_arg_2);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__parallax_origin_y;
            assert(old != NULL);
            var__parallax_origin_y = tmp_assign_source_51;
            Py_DECREF(old);
        }

    }
    branch_no_25:;
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_assattr_target_11;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__parallax_origin_x);
        tmp_args_element_value_27 = var__parallax_origin_x;
        CHECK_OBJECT(var__parallax_origin_y);
        tmp_args_element_value_28 = var__parallax_origin_y;
        frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assattr_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_36, call_args);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_map_ == NULL) {
            Py_DECREF(tmp_assattr_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = var_map_;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[87], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    if (var_map_ == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 159;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_map_;
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
        exception_tb = MAKE_TRACEBACK(frame_343bb1bec3103b6ccc14946e3b2d5db0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_343bb1bec3103b6ccc14946e3b2d5db0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_343bb1bec3103b6ccc14946e3b2d5db0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_343bb1bec3103b6ccc14946e3b2d5db0,
        type_description_1,
        par_file,
        var_tilesets,
        var_map_file,
        var_raw_map,
        var_parent_dir,
        var_raw_tilesets,
        var_raw_tileset,
        var_tileset_path,
        var_parser,
        var_tileset_file,
        var_raw_tileset_external,
        var_layers,
        var_element,
        var_map_,
        var_my_layer,
        var_tiled_object,
        var_already_loaded,
        var_val,
        var_highest_firstgid,
        var_last_tileset_count,
        var_new_firstgid,
        var_properties_element,
        var__parallax_origin_x,
        var__parallax_origin_y
    );


    // Release cached frame if used for exception.
    if (frame_343bb1bec3103b6ccc14946e3b2d5db0 == cache_frame_343bb1bec3103b6ccc14946e3b2d5db0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_343bb1bec3103b6ccc14946e3b2d5db0);
        cache_frame_343bb1bec3103b6ccc14946e3b2d5db0 = NULL;
    }

    assertFrameObject(frame_343bb1bec3103b6ccc14946e3b2d5db0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tilesets);
    var_tilesets = NULL;
    CHECK_OBJECT(var_map_file);
    Py_DECREF(var_map_file);
    var_map_file = NULL;
    Py_XDECREF(var_raw_map);
    var_raw_map = NULL;
    Py_XDECREF(var_parent_dir);
    var_parent_dir = NULL;
    CHECK_OBJECT(var_raw_tilesets);
    Py_DECREF(var_raw_tilesets);
    var_raw_tilesets = NULL;
    Py_XDECREF(var_raw_tileset);
    var_raw_tileset = NULL;
    Py_XDECREF(var_tileset_path);
    var_tileset_path = NULL;
    Py_XDECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_tileset_file);
    var_tileset_file = NULL;
    Py_XDECREF(var_raw_tileset_external);
    var_raw_tileset_external = NULL;
    CHECK_OBJECT(var_layers);
    Py_DECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_element);
    var_element = NULL;
    Py_XDECREF(var_map_);
    var_map_ = NULL;
    Py_XDECREF(var_my_layer);
    var_my_layer = NULL;
    Py_XDECREF(var_tiled_object);
    var_tiled_object = NULL;
    Py_XDECREF(var_already_loaded);
    var_already_loaded = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_highest_firstgid);
    var_highest_firstgid = NULL;
    Py_XDECREF(var_last_tileset_count);
    var_last_tileset_count = NULL;
    Py_XDECREF(var_new_firstgid);
    var_new_firstgid = NULL;
    Py_XDECREF(var_properties_element);
    var_properties_element = NULL;
    CHECK_OBJECT(var__parallax_origin_x);
    Py_DECREF(var__parallax_origin_x);
    var__parallax_origin_x = NULL;
    CHECK_OBJECT(var__parallax_origin_y);
    Py_DECREF(var__parallax_origin_y);
    var__parallax_origin_y = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_tilesets);
    var_tilesets = NULL;
    Py_XDECREF(var_map_file);
    var_map_file = NULL;
    Py_XDECREF(var_raw_map);
    var_raw_map = NULL;
    Py_XDECREF(var_parent_dir);
    var_parent_dir = NULL;
    Py_XDECREF(var_raw_tilesets);
    var_raw_tilesets = NULL;
    Py_XDECREF(var_raw_tileset);
    var_raw_tileset = NULL;
    Py_XDECREF(var_tileset_path);
    var_tileset_path = NULL;
    Py_XDECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_tileset_file);
    var_tileset_file = NULL;
    Py_XDECREF(var_raw_tileset_external);
    var_raw_tileset_external = NULL;
    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_element);
    var_element = NULL;
    Py_XDECREF(var_map_);
    var_map_ = NULL;
    Py_XDECREF(var_my_layer);
    var_my_layer = NULL;
    Py_XDECREF(var_tiled_object);
    var_tiled_object = NULL;
    Py_XDECREF(var_already_loaded);
    var_already_loaded = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_highest_firstgid);
    var_highest_firstgid = NULL;
    Py_XDECREF(var_last_tileset_count);
    var_last_tileset_count = NULL;
    Py_XDECREF(var_new_firstgid);
    var_new_firstgid = NULL;
    Py_XDECREF(var_properties_element);
    var_properties_element = NULL;
    Py_XDECREF(var__parallax_origin_x);
    var__parallax_origin_x = NULL;
    Py_XDECREF(var__parallax_origin_y);
    var__parallax_origin_y = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$tmx$tiled_map$$$function__1_parse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytiled_parser$parsers$tmx$tiled_map$$$function__1_parse,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_343bb1bec3103b6ccc14946e3b2d5db0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pytiled_parser$parsers$tmx$tiled_map,
        mod_consts[88],
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

function_impl_code functable_pytiled_parser$parsers$tmx$tiled_map[] = {
    impl_pytiled_parser$parsers$tmx$tiled_map$$$function__1_parse,
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

    function_impl_code *current = functable_pytiled_parser$parsers$tmx$tiled_map;
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

    if (offset > sizeof(functable_pytiled_parser$parsers$tmx$tiled_map) || offset < 0) {
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
        functable_pytiled_parser$parsers$tmx$tiled_map[offset],
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
        module_pytiled_parser$parsers$tmx$tiled_map,
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
PyObject *modulecode_pytiled_parser$parsers$tmx$tiled_map(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pytiled_parser.parsers.tmx.tiled_map");

    // Store the module for future use.
    module_pytiled_parser$parsers$tmx$tiled_map = module;

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
        PRINT_STRING("pytiled_parser.parsers.tmx.tiled_map: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pytiled_parser.parsers.tmx.tiled_map: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpytiled_parser$parsers$tmx$tiled_map\n");

    moduledict_pytiled_parser$parsers$tmx$tiled_map = MODULE_DICT(module_pytiled_parser$parsers$tmx$tiled_map);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pytiled_parser$parsers$tmx$tiled_map,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pytiled_parser$parsers$tmx$tiled_map,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[119]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pytiled_parser$parsers$tmx$tiled_map,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pytiled_parser$parsers$tmx$tiled_map,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pytiled_parser$parsers$tmx$tiled_map,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pytiled_parser$parsers$tmx$tiled_map);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pytiled_parser$parsers$tmx$tiled_map);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_20d3b5deb8fb93189bffa6757b4ffd10;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_2);
    }
    frame_20d3b5deb8fb93189bffa6757b4ffd10 = MAKE_MODULE_FRAME(codeobj_20d3b5deb8fb93189bffa6757b4ffd10, module_pytiled_parser$parsers$tmx$tiled_map);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_20d3b5deb8fb93189bffa6757b4ffd10);
    assert(Py_REFCNT(frame_20d3b5deb8fb93189bffa6757b4ffd10) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[92], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[93], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[22];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[96];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[2],
                mod_consts[95]
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[97],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[98];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[99];
        tmp_level_value_3 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 3;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[13],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[100];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[101];
        tmp_level_value_4 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[86],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[86]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[35],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[35]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[102];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[103];
        tmp_level_value_5 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[25],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[104];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[105];
        tmp_level_value_6 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[3],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[106];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[105];
        tmp_level_value_7 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[3],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[107];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[105];
        tmp_level_value_8 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[3],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[108];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[105];
        tmp_level_value_9 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[3],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[109];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[110];
        tmp_level_value_10 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 11;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[33],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[33]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[111],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[111]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_17);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[112];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[113];
        tmp_level_value_11 = mod_consts[95];
        frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame.f_lineno = 12;
        tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[16],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[16]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pytiled_parser$parsers$tmx$tiled_map,
                mod_consts[62],
                mod_consts[95]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[62]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_20);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[114];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[115];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_21 = MAKE_FUNCTION_pytiled_parser$parsers$tmx$tiled_map$$$function__1_parse(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_21);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20d3b5deb8fb93189bffa6757b4ffd10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20d3b5deb8fb93189bffa6757b4ffd10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20d3b5deb8fb93189bffa6757b4ffd10, exception_lineno);
    }



    assertFrameObject(frame_20d3b5deb8fb93189bffa6757b4ffd10);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pytiled_parser.parsers.tmx.tiled_map", false);

    Py_INCREF(module_pytiled_parser$parsers$tmx$tiled_map);
    return module_pytiled_parser$parsers$tmx$tiled_map;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$tmx$tiled_map, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pytiled_parser$parsers$tmx$tiled_map", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
