/* Generated code for Python module 'arcade.gl.geometry'
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

/* The "module_arcade$gl$geometry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_arcade$gl$geometry;
PyDictObject *moduledict_arcade$gl$geometry;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[72];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[72];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("arcade.gl.geometry"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 72; i++) {
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
void checkModuleConstants_arcade$gl$geometry(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 72; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c9caf080b947f79c21df23f3f2dd0834;
static PyCodeObject *codeobj_ad322cc9674635c696c75cadc0b2839d;
static PyCodeObject *codeobj_aa0144e7d31e383c4e65494d3c4c6026;
static PyCodeObject *codeobj_718be56fa222da7e6572212aa305dd42;
static PyCodeObject *codeobj_18c37a46dd1c93f213fb5468ac0a89f0;
static PyCodeObject *codeobj_41cbd48620e9706b440c744e17374def;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[65]); CHECK_OBJECT(module_filename_obj);
    codeobj_c9caf080b947f79c21df23f3f2dd0834 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[66], mod_consts[66], NULL, NULL, 0, 0, 0);
    codeobj_ad322cc9674635c696c75cadc0b2839d = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[67], NULL, 0, 0, 0);
    codeobj_aa0144e7d31e383c4e65494d3c4c6026 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[68], NULL, 2, 0, 0);
    codeobj_718be56fa222da7e6572212aa305dd42 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[69], NULL, 2, 0, 0);
    codeobj_18c37a46dd1c93f213fb5468ac0a89f0 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], NULL, NULL, 0, 0, 0);
    codeobj_41cbd48620e9706b440c744e17374def = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[70], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__1__get_active_context(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__2_quad_2d_fs(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__3_quad_2d(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__4_screen_rectangle(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__5_cube(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_arcade$gl$geometry$$$function__1__get_active_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_ctx = NULL;
    struct Nuitka_FrameObject *frame_ad322cc9674635c696c75cadc0b2839d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ad322cc9674635c696c75cadc0b2839d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad322cc9674635c696c75cadc0b2839d)) {
        Py_XDECREF(cache_frame_ad322cc9674635c696c75cadc0b2839d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad322cc9674635c696c75cadc0b2839d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad322cc9674635c696c75cadc0b2839d = MAKE_FUNCTION_FRAME(tstate, codeobj_ad322cc9674635c696c75cadc0b2839d, module_arcade$gl$geometry, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad322cc9674635c696c75cadc0b2839d->m_type_description == NULL);
    frame_ad322cc9674635c696c75cadc0b2839d = cache_frame_ad322cc9674635c696c75cadc0b2839d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ad322cc9674635c696c75cadc0b2839d);
    assert(Py_REFCNT(frame_ad322cc9674635c696c75cadc0b2839d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_ctx);
        tmp_operand_value_1 = var_ctx;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "o";
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[2];
        frame_ad322cc9674635c696c75cadc0b2839d->m_frame.f_lineno = 14;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad322cc9674635c696c75cadc0b2839d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad322cc9674635c696c75cadc0b2839d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad322cc9674635c696c75cadc0b2839d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad322cc9674635c696c75cadc0b2839d,
        type_description_1,
        var_ctx
    );


    // Release cached frame if used for exception.
    if (frame_ad322cc9674635c696c75cadc0b2839d == cache_frame_ad322cc9674635c696c75cadc0b2839d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad322cc9674635c696c75cadc0b2839d);
        cache_frame_ad322cc9674635c696c75cadc0b2839d = NULL;
    }

    assertFrameObject(frame_ad322cc9674635c696c75cadc0b2839d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ctx);
    tmp_return_value = var_ctx;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
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


static PyObject *impl_arcade$gl$geometry$$$function__2_quad_2d_fs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_18c37a46dd1c93f213fb5468ac0a89f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18c37a46dd1c93f213fb5468ac0a89f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18c37a46dd1c93f213fb5468ac0a89f0)) {
        Py_XDECREF(cache_frame_18c37a46dd1c93f213fb5468ac0a89f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18c37a46dd1c93f213fb5468ac0a89f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18c37a46dd1c93f213fb5468ac0a89f0 = MAKE_FUNCTION_FRAME(tstate, codeobj_18c37a46dd1c93f213fb5468ac0a89f0, module_arcade$gl$geometry, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18c37a46dd1c93f213fb5468ac0a89f0->m_type_description == NULL);
    frame_18c37a46dd1c93f213fb5468ac0a89f0 = cache_frame_18c37a46dd1c93f213fb5468ac0a89f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_18c37a46dd1c93f213fb5468ac0a89f0);
    assert(Py_REFCNT(frame_18c37a46dd1c93f213fb5468ac0a89f0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_18c37a46dd1c93f213fb5468ac0a89f0->m_frame.f_lineno = 20;
        tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[4], 0), mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18c37a46dd1c93f213fb5468ac0a89f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18c37a46dd1c93f213fb5468ac0a89f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18c37a46dd1c93f213fb5468ac0a89f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18c37a46dd1c93f213fb5468ac0a89f0,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_18c37a46dd1c93f213fb5468ac0a89f0 == cache_frame_18c37a46dd1c93f213fb5468ac0a89f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18c37a46dd1c93f213fb5468ac0a89f0);
        cache_frame_18c37a46dd1c93f213fb5468ac0a89f0 = NULL;
    }

    assertFrameObject(frame_18c37a46dd1c93f213fb5468ac0a89f0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_arcade$gl$geometry$$$function__3_quad_2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_size = python_pars[0];
    PyObject *par_pos = python_pars[1];
    PyObject *var_ctx = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *var_x_pos = NULL;
    PyObject *var_y_pos = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_718be56fa222da7e6572212aa305dd42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_718be56fa222da7e6572212aa305dd42 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_718be56fa222da7e6572212aa305dd42)) {
        Py_XDECREF(cache_frame_718be56fa222da7e6572212aa305dd42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_718be56fa222da7e6572212aa305dd42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_718be56fa222da7e6572212aa305dd42 = MAKE_FUNCTION_FRAME(tstate, codeobj_718be56fa222da7e6572212aa305dd42, module_arcade$gl$geometry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_718be56fa222da7e6572212aa305dd42->m_type_description == NULL);
    frame_718be56fa222da7e6572212aa305dd42 = cache_frame_718be56fa222da7e6572212aa305dd42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_718be56fa222da7e6572212aa305dd42);
    assert(Py_REFCNT(frame_718be56fa222da7e6572212aa305dd42) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_718be56fa222da7e6572212aa305dd42->m_frame.f_lineno = 31;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_size);
        tmp_iter_arg_1 = par_size;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 32;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_width == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_width = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_height == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_height = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_pos);
        tmp_iter_arg_2 = par_pos;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 33;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 33;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 33;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 33;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
        assert(var_x_pos == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_x_pos = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
        assert(var_y_pos == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_y_pos = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[10];
        CHECK_OBJECT(var_x_pos);
        tmp_sub_expr_left_1 = var_x_pos;
        CHECK_OBJECT(var_width);
        tmp_truediv_expr_left_1 = var_width;
        tmp_truediv_expr_right_1 = mod_consts[11];
        tmp_sub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(16);
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_truediv_expr_left_4;
            PyObject *tmp_truediv_expr_right_4;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_truediv_expr_left_6;
            PyObject *tmp_truediv_expr_right_6;
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyObject *tmp_truediv_expr_left_7;
            PyObject *tmp_truediv_expr_right_7;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_truediv_expr_left_8;
            PyObject *tmp_truediv_expr_right_8;
            PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
            CHECK_OBJECT(var_y_pos);
            tmp_add_expr_left_1 = var_y_pos;
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_2 = var_height;
            tmp_truediv_expr_right_2 = mod_consts[11];
            tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            if (tmp_add_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 3, tmp_list_element_1);
            CHECK_OBJECT(var_x_pos);
            tmp_sub_expr_left_2 = var_x_pos;
            CHECK_OBJECT(var_width);
            tmp_truediv_expr_left_3 = var_width;
            tmp_truediv_expr_right_3 = mod_consts[11];
            tmp_sub_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            if (tmp_sub_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_right_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 4, tmp_list_element_1);
            CHECK_OBJECT(var_y_pos);
            tmp_sub_expr_left_3 = var_y_pos;
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_4 = var_height;
            tmp_truediv_expr_right_4 = mod_consts[11];
            tmp_sub_expr_right_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 6, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 7, tmp_list_element_1);
            CHECK_OBJECT(var_x_pos);
            tmp_add_expr_left_2 = var_x_pos;
            CHECK_OBJECT(var_width);
            tmp_truediv_expr_left_5 = var_width;
            tmp_truediv_expr_right_5 = mod_consts[11];
            tmp_add_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            if (tmp_add_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_right_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 8, tmp_list_element_1);
            CHECK_OBJECT(var_y_pos);
            tmp_add_expr_left_3 = var_y_pos;
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_6 = var_height;
            tmp_truediv_expr_right_6 = mod_consts[11];
            tmp_add_expr_right_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
            if (tmp_add_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_right_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 9, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 10, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 11, tmp_list_element_1);
            CHECK_OBJECT(var_x_pos);
            tmp_add_expr_left_4 = var_x_pos;
            CHECK_OBJECT(var_width);
            tmp_truediv_expr_left_7 = var_width;
            tmp_truediv_expr_right_7 = mod_consts[11];
            tmp_add_expr_right_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
            if (tmp_add_expr_right_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            Py_DECREF(tmp_add_expr_right_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 12, tmp_list_element_1);
            CHECK_OBJECT(var_y_pos);
            tmp_sub_expr_left_4 = var_y_pos;
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_8 = var_height;
            tmp_truediv_expr_right_8 = mod_consts[11];
            tmp_sub_expr_right_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
            if (tmp_sub_expr_right_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_right_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 13, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 14, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 15, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_718be56fa222da7e6572212aa305dd42->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_1 = var_ctx;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 43;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_0_1 = var_data;
        frame_718be56fa222da7e6572212aa305dd42->m_frame.f_lineno = 43;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 43;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[18];
        tmp_args_element_value_5 = MAKE_LIST2(mod_consts[19],mod_consts[20]);
        frame_718be56fa222da7e6572212aa305dd42->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_list_element_2);
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[21]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_718be56fa222da7e6572212aa305dd42->m_frame.f_lineno = 42;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[22]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_718be56fa222da7e6572212aa305dd42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_718be56fa222da7e6572212aa305dd42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_718be56fa222da7e6572212aa305dd42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_718be56fa222da7e6572212aa305dd42,
        type_description_1,
        par_size,
        par_pos,
        var_ctx,
        var_width,
        var_height,
        var_x_pos,
        var_y_pos,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_718be56fa222da7e6572212aa305dd42 == cache_frame_718be56fa222da7e6572212aa305dd42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_718be56fa222da7e6572212aa305dd42);
        cache_frame_718be56fa222da7e6572212aa305dd42 = NULL;
    }

    assertFrameObject(frame_718be56fa222da7e6572212aa305dd42);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    CHECK_OBJECT(var_x_pos);
    Py_DECREF(var_x_pos);
    var_x_pos = NULL;
    CHECK_OBJECT(var_y_pos);
    Py_DECREF(var_y_pos);
    var_y_pos = NULL;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_x_pos);
    var_x_pos = NULL;
    Py_XDECREF(var_y_pos);
    var_y_pos = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$geometry$$$function__4_screen_rectangle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bottom_left_x = python_pars[0];
    PyObject *par_bottom_left_y = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *var_ctx = NULL;
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_41cbd48620e9706b440c744e17374def;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_41cbd48620e9706b440c744e17374def = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_41cbd48620e9706b440c744e17374def)) {
        Py_XDECREF(cache_frame_41cbd48620e9706b440c744e17374def);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41cbd48620e9706b440c744e17374def == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41cbd48620e9706b440c744e17374def = MAKE_FUNCTION_FRAME(tstate, codeobj_41cbd48620e9706b440c744e17374def, module_arcade$gl$geometry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41cbd48620e9706b440c744e17374def->m_type_description == NULL);
    frame_41cbd48620e9706b440c744e17374def = cache_frame_41cbd48620e9706b440c744e17374def;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_41cbd48620e9706b440c744e17374def);
    assert(Py_REFCNT(frame_41cbd48620e9706b440c744e17374def) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_41cbd48620e9706b440c744e17374def->m_frame.f_lineno = 58;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[10];
        CHECK_OBJECT(par_bottom_left_x);
        tmp_list_element_1 = par_bottom_left_x;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(16);
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
            CHECK_OBJECT(par_bottom_left_y);
            tmp_add_expr_left_1 = par_bottom_left_y;
            CHECK_OBJECT(par_height);
            tmp_add_expr_right_1 = par_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 3, tmp_list_element_1);
            CHECK_OBJECT(par_bottom_left_x);
            tmp_list_element_1 = par_bottom_left_x;
            PyList_SET_ITEM0(tmp_args_element_value_2, 4, tmp_list_element_1);
            CHECK_OBJECT(par_bottom_left_y);
            tmp_list_element_1 = par_bottom_left_y;
            PyList_SET_ITEM0(tmp_args_element_value_2, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 6, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 7, tmp_list_element_1);
            CHECK_OBJECT(par_bottom_left_x);
            tmp_add_expr_left_2 = par_bottom_left_x;
            CHECK_OBJECT(par_width);
            tmp_add_expr_right_2 = par_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 8, tmp_list_element_1);
            CHECK_OBJECT(par_bottom_left_y);
            tmp_add_expr_left_3 = par_bottom_left_y;
            CHECK_OBJECT(par_height);
            tmp_add_expr_right_3 = par_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 9, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 10, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 11, tmp_list_element_1);
            CHECK_OBJECT(par_bottom_left_x);
            tmp_add_expr_left_4 = par_bottom_left_x;
            CHECK_OBJECT(par_width);
            tmp_add_expr_right_4 = par_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 12, tmp_list_element_1);
            CHECK_OBJECT(par_bottom_left_y);
            tmp_list_element_1 = par_bottom_left_y;
            PyList_SET_ITEM0(tmp_args_element_value_2, 13, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[13];
            PyList_SET_ITEM0(tmp_args_element_value_2, 14, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[12];
            PyList_SET_ITEM0(tmp_args_element_value_2, 15, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_41cbd48620e9706b440c744e17374def->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_1 = var_ctx;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_0_1 = var_data;
        frame_41cbd48620e9706b440c744e17374def->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[18];
        tmp_args_element_value_5 = MAKE_LIST2(mod_consts[19],mod_consts[20]);
        frame_41cbd48620e9706b440c744e17374def->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_list_element_2);
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[21]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_41cbd48620e9706b440c744e17374def->m_frame.f_lineno = 65;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[22]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_41cbd48620e9706b440c744e17374def, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41cbd48620e9706b440c744e17374def->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41cbd48620e9706b440c744e17374def, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41cbd48620e9706b440c744e17374def,
        type_description_1,
        par_bottom_left_x,
        par_bottom_left_y,
        par_width,
        par_height,
        var_ctx,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_41cbd48620e9706b440c744e17374def == cache_frame_41cbd48620e9706b440c744e17374def) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41cbd48620e9706b440c744e17374def);
        cache_frame_41cbd48620e9706b440c744e17374def = NULL;
    }

    assertFrameObject(frame_41cbd48620e9706b440c744e17374def);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$geometry$$$function__5_cube(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_size = python_pars[0];
    PyObject *par_center = python_pars[1];
    PyObject *var_ctx = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *var_depth = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_normal = NULL;
    PyObject *var_uv = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_aa0144e7d31e383c4e65494d3c4c6026;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aa0144e7d31e383c4e65494d3c4c6026 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa0144e7d31e383c4e65494d3c4c6026)) {
        Py_XDECREF(cache_frame_aa0144e7d31e383c4e65494d3c4c6026);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa0144e7d31e383c4e65494d3c4c6026 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa0144e7d31e383c4e65494d3c4c6026 = MAKE_FUNCTION_FRAME(tstate, codeobj_aa0144e7d31e383c4e65494d3c4c6026, module_arcade$gl$geometry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa0144e7d31e383c4e65494d3c4c6026->m_type_description == NULL);
    frame_aa0144e7d31e383c4e65494d3c4c6026 = cache_frame_aa0144e7d31e383c4e65494d3c4c6026;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa0144e7d31e383c4e65494d3c4c6026);
    assert(Py_REFCNT(frame_aa0144e7d31e383c4e65494d3c4c6026) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 83;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_size);
        tmp_iter_arg_1 = par_size;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 84;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 84;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 84;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 84;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[25];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 84;
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_width == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_width = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_height == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_height = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_depth == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_depth = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_width);
        tmp_truediv_expr_left_1 = var_width;
        tmp_truediv_expr_right_1 = mod_consts[11];
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_height);
            tmp_truediv_expr_left_2 = var_height;
            tmp_truediv_expr_right_2 = mod_consts[11];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_depth);
            tmp_truediv_expr_left_3 = var_depth;
            tmp_truediv_expr_right_3 = mod_consts[11];
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_2, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_9 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_4, 0, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 85;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_5, 1, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 85;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_6, 2, 3);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 85;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 85;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[25];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 85;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_13;
            Py_INCREF(var_width);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_14;
            Py_INCREF(var_height);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_depth;
            assert(old != NULL);
            var_depth = tmp_assign_source_15;
            Py_INCREF(var_depth);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[10];
        CHECK_OBJECT(par_center);
        tmp_expression_value_1 = par_center;
        tmp_subscript_value_1 = mod_consts[26];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_add_expr_right_1 = var_width;
        tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(108);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_add_expr_left_9;
            PyObject *tmp_add_expr_right_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_add_expr_left_10;
            PyObject *tmp_add_expr_right_10;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_add_expr_left_11;
            PyObject *tmp_add_expr_right_11;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_sub_expr_left_5;
            PyObject *tmp_sub_expr_right_5;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_sub_expr_left_6;
            PyObject *tmp_sub_expr_right_6;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_add_expr_left_12;
            PyObject *tmp_add_expr_right_12;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_add_expr_left_13;
            PyObject *tmp_add_expr_right_13;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_sub_expr_left_7;
            PyObject *tmp_sub_expr_right_7;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_sub_expr_left_8;
            PyObject *tmp_sub_expr_right_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_add_expr_left_14;
            PyObject *tmp_add_expr_right_14;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_add_expr_left_15;
            PyObject *tmp_add_expr_right_15;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_sub_expr_left_9;
            PyObject *tmp_sub_expr_right_9;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_add_expr_left_16;
            PyObject *tmp_add_expr_right_16;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_sub_expr_left_10;
            PyObject *tmp_sub_expr_right_10;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_add_expr_left_17;
            PyObject *tmp_add_expr_right_17;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_add_expr_left_18;
            PyObject *tmp_add_expr_right_18;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_add_expr_left_19;
            PyObject *tmp_add_expr_right_19;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_sub_expr_left_11;
            PyObject *tmp_sub_expr_right_11;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_add_expr_left_20;
            PyObject *tmp_add_expr_right_20;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_add_expr_left_21;
            PyObject *tmp_add_expr_right_21;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_add_expr_left_22;
            PyObject *tmp_add_expr_right_22;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_add_expr_left_23;
            PyObject *tmp_add_expr_right_23;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_sub_expr_left_12;
            PyObject *tmp_sub_expr_right_12;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_add_expr_left_24;
            PyObject *tmp_add_expr_right_24;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_add_expr_left_25;
            PyObject *tmp_add_expr_right_25;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_sub_expr_left_13;
            PyObject *tmp_sub_expr_right_13;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_sub_expr_left_14;
            PyObject *tmp_sub_expr_right_14;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_add_expr_left_26;
            PyObject *tmp_add_expr_right_26;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_sub_expr_left_15;
            PyObject *tmp_sub_expr_right_15;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_add_expr_left_27;
            PyObject *tmp_add_expr_right_27;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_sub_expr_left_16;
            PyObject *tmp_sub_expr_right_16;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_sub_expr_left_17;
            PyObject *tmp_sub_expr_right_17;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_add_expr_left_28;
            PyObject *tmp_add_expr_right_28;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_add_expr_left_29;
            PyObject *tmp_add_expr_right_29;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_sub_expr_left_18;
            PyObject *tmp_sub_expr_right_18;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_sub_expr_left_19;
            PyObject *tmp_sub_expr_right_19;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_sub_expr_left_20;
            PyObject *tmp_sub_expr_right_20;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_sub_expr_left_21;
            PyObject *tmp_sub_expr_right_21;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_add_expr_left_30;
            PyObject *tmp_add_expr_right_30;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_sub_expr_left_22;
            PyObject *tmp_sub_expr_right_22;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_sub_expr_left_23;
            PyObject *tmp_sub_expr_right_23;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_sub_expr_left_24;
            PyObject *tmp_sub_expr_right_24;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_54;
            PyObject *tmp_sub_expr_left_25;
            PyObject *tmp_sub_expr_right_25;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_55;
            PyObject *tmp_sub_expr_left_26;
            PyObject *tmp_sub_expr_right_26;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_56;
            PyObject *tmp_add_expr_left_31;
            PyObject *tmp_add_expr_right_31;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_sub_expr_left_27;
            PyObject *tmp_sub_expr_right_27;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_add_expr_left_32;
            PyObject *tmp_add_expr_right_32;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_59;
            PyObject *tmp_add_expr_left_33;
            PyObject *tmp_add_expr_right_33;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_60;
            PyObject *tmp_sub_expr_left_28;
            PyObject *tmp_sub_expr_right_28;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_61;
            PyObject *tmp_add_expr_left_34;
            PyObject *tmp_add_expr_right_34;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_62;
            PyObject *tmp_sub_expr_left_29;
            PyObject *tmp_sub_expr_right_29;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_63;
            PyObject *tmp_sub_expr_left_30;
            PyObject *tmp_sub_expr_right_30;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_64;
            PyObject *tmp_sub_expr_left_31;
            PyObject *tmp_sub_expr_right_31;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_65;
            PyObject *tmp_add_expr_left_35;
            PyObject *tmp_add_expr_right_35;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_66;
            PyObject *tmp_sub_expr_left_32;
            PyObject *tmp_sub_expr_right_32;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_67;
            PyObject *tmp_add_expr_left_36;
            PyObject *tmp_add_expr_right_36;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_68;
            PyObject *tmp_sub_expr_left_33;
            PyObject *tmp_sub_expr_right_33;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_69;
            PyObject *tmp_sub_expr_left_34;
            PyObject *tmp_sub_expr_right_34;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_70;
            PyObject *tmp_sub_expr_left_35;
            PyObject *tmp_sub_expr_right_35;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_71;
            PyObject *tmp_sub_expr_left_36;
            PyObject *tmp_sub_expr_right_36;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_72;
            PyObject *tmp_add_expr_left_37;
            PyObject *tmp_add_expr_right_37;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_73;
            PyObject *tmp_add_expr_left_38;
            PyObject *tmp_add_expr_right_38;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_74;
            PyObject *tmp_sub_expr_left_37;
            PyObject *tmp_sub_expr_right_37;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_75;
            PyObject *tmp_add_expr_left_39;
            PyObject *tmp_add_expr_right_39;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_76;
            PyObject *tmp_sub_expr_left_38;
            PyObject *tmp_sub_expr_right_38;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_77;
            PyObject *tmp_sub_expr_left_39;
            PyObject *tmp_sub_expr_right_39;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_78;
            PyObject *tmp_sub_expr_left_40;
            PyObject *tmp_sub_expr_right_40;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_79;
            PyObject *tmp_sub_expr_left_41;
            PyObject *tmp_sub_expr_right_41;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_80;
            PyObject *tmp_sub_expr_left_42;
            PyObject *tmp_sub_expr_right_42;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_81;
            PyObject *tmp_add_expr_left_40;
            PyObject *tmp_add_expr_right_40;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_82;
            PyObject *tmp_add_expr_left_41;
            PyObject *tmp_add_expr_right_41;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_83;
            PyObject *tmp_sub_expr_left_43;
            PyObject *tmp_sub_expr_right_43;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_84;
            PyObject *tmp_sub_expr_left_44;
            PyObject *tmp_sub_expr_right_44;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_85;
            PyObject *tmp_sub_expr_left_45;
            PyObject *tmp_sub_expr_right_45;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_86;
            PyObject *tmp_sub_expr_left_46;
            PyObject *tmp_sub_expr_right_46;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_87;
            PyObject *tmp_sub_expr_left_47;
            PyObject *tmp_sub_expr_right_47;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_88;
            PyObject *tmp_add_expr_left_42;
            PyObject *tmp_add_expr_right_42;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_subscript_value_89;
            PyObject *tmp_sub_expr_left_48;
            PyObject *tmp_sub_expr_right_48;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_subscript_value_90;
            PyObject *tmp_add_expr_left_43;
            PyObject *tmp_add_expr_right_43;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_91;
            PyObject *tmp_add_expr_left_44;
            PyObject *tmp_add_expr_right_44;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_92;
            PyObject *tmp_sub_expr_left_49;
            PyObject *tmp_sub_expr_right_49;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_93;
            PyObject *tmp_sub_expr_left_50;
            PyObject *tmp_sub_expr_right_50;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_subscript_value_94;
            PyObject *tmp_add_expr_left_45;
            PyObject *tmp_add_expr_right_45;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_subscript_value_95;
            PyObject *tmp_sub_expr_left_51;
            PyObject *tmp_sub_expr_right_51;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_subscript_value_96;
            PyObject *tmp_add_expr_left_46;
            PyObject *tmp_add_expr_right_46;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_subscript_value_97;
            PyObject *tmp_add_expr_left_47;
            PyObject *tmp_add_expr_right_47;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_subscript_value_98;
            PyObject *tmp_add_expr_left_48;
            PyObject *tmp_add_expr_right_48;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_99;
            PyObject *tmp_sub_expr_left_52;
            PyObject *tmp_sub_expr_right_52;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_subscript_value_100;
            PyObject *tmp_add_expr_left_49;
            PyObject *tmp_add_expr_right_49;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_101;
            PyObject *tmp_sub_expr_left_53;
            PyObject *tmp_sub_expr_right_53;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_subscript_value_102;
            PyObject *tmp_sub_expr_left_54;
            PyObject *tmp_sub_expr_right_54;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_103;
            PyObject *tmp_add_expr_left_50;
            PyObject *tmp_add_expr_right_50;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_subscript_value_104;
            PyObject *tmp_add_expr_left_51;
            PyObject *tmp_add_expr_right_51;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_105;
            PyObject *tmp_add_expr_left_52;
            PyObject *tmp_add_expr_right_52;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_subscript_value_106;
            PyObject *tmp_add_expr_left_53;
            PyObject *tmp_add_expr_right_53;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_subscript_value_107;
            PyObject *tmp_add_expr_left_54;
            PyObject *tmp_add_expr_right_54;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_subscript_value_108;
            PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_2 = par_center;
            tmp_subscript_value_2 = mod_consts[27];
            tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_1 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_3 = par_center;
            tmp_subscript_value_3 = mod_consts[28];
            tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 2);
            if (tmp_add_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_2 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_4 = par_center;
            tmp_subscript_value_4 = mod_consts[26];
            tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 0);
            if (tmp_add_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_3 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_left_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 3, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_5 = par_center;
            tmp_subscript_value_5 = mod_consts[27];
            tmp_add_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_5, 1);
            if (tmp_add_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_4 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            Py_DECREF(tmp_add_expr_left_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 4, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_6 = par_center;
            tmp_subscript_value_6 = mod_consts[28];
            tmp_add_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_6, 2);
            if (tmp_add_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_5 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
            Py_DECREF(tmp_add_expr_left_5);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 5, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_7 = par_center;
            tmp_subscript_value_7 = mod_consts[26];
            tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_7, 0);
            if (tmp_sub_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_2 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_left_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 6, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_8 = par_center;
            tmp_subscript_value_8 = mod_consts[27];
            tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_8, 1);
            if (tmp_sub_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_3 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_left_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 7, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_9 = par_center;
            tmp_subscript_value_9 = mod_consts[28];
            tmp_add_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_9, 2);
            if (tmp_add_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_6 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
            Py_DECREF(tmp_add_expr_left_6);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 8, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_10 = par_center;
            tmp_subscript_value_10 = mod_consts[26];
            tmp_add_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_10, 0);
            if (tmp_add_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_7 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
            Py_DECREF(tmp_add_expr_left_7);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 9, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_11 = par_center;
            tmp_subscript_value_11 = mod_consts[27];
            tmp_add_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_11, 1);
            if (tmp_add_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_8 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
            Py_DECREF(tmp_add_expr_left_8);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 10, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_12 = par_center;
            tmp_subscript_value_12 = mod_consts[28];
            tmp_add_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_12, 2);
            if (tmp_add_expr_left_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_9 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
            Py_DECREF(tmp_add_expr_left_9);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 11, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_13 = par_center;
            tmp_subscript_value_13 = mod_consts[26];
            tmp_sub_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_13, 0);
            if (tmp_sub_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_4 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_left_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 12, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_14 = par_center;
            tmp_subscript_value_14 = mod_consts[27];
            tmp_add_expr_left_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_14, 1);
            if (tmp_add_expr_left_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_10 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
            Py_DECREF(tmp_add_expr_left_10);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 13, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_15 = par_center;
            tmp_subscript_value_15 = mod_consts[28];
            tmp_add_expr_left_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_15, 2);
            if (tmp_add_expr_left_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_11 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
            Py_DECREF(tmp_add_expr_left_11);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 14, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_16 = par_center;
            tmp_subscript_value_16 = mod_consts[26];
            tmp_sub_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_16, 0);
            if (tmp_sub_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_5 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
            Py_DECREF(tmp_sub_expr_left_5);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 15, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_17 = par_center;
            tmp_subscript_value_17 = mod_consts[27];
            tmp_sub_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_17, 1);
            if (tmp_sub_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_6 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
            Py_DECREF(tmp_sub_expr_left_6);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 16, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_18 = par_center;
            tmp_subscript_value_18 = mod_consts[28];
            tmp_add_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_18, 2);
            if (tmp_add_expr_left_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_12 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
            Py_DECREF(tmp_add_expr_left_12);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 17, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_19 = par_center;
            tmp_subscript_value_19 = mod_consts[26];
            tmp_add_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_19, 0);
            if (tmp_add_expr_left_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_13 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
            Py_DECREF(tmp_add_expr_left_13);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 18, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_20 = par_center;
            tmp_subscript_value_20 = mod_consts[27];
            tmp_sub_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_20, 1);
            if (tmp_sub_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_7 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
            Py_DECREF(tmp_sub_expr_left_7);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 19, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_21 = par_center;
            tmp_subscript_value_21 = mod_consts[28];
            tmp_sub_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_21, 2);
            if (tmp_sub_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_8 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
            Py_DECREF(tmp_sub_expr_left_8);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 20, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_22 = par_center;
            tmp_subscript_value_22 = mod_consts[26];
            tmp_add_expr_left_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_22, 0);
            if (tmp_add_expr_left_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_14 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
            Py_DECREF(tmp_add_expr_left_14);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 21, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_23 = par_center;
            tmp_subscript_value_23 = mod_consts[27];
            tmp_add_expr_left_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_23, 1);
            if (tmp_add_expr_left_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_15 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
            Py_DECREF(tmp_add_expr_left_15);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 22, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_24 = par_center;
            tmp_subscript_value_24 = mod_consts[28];
            tmp_sub_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_24, 2);
            if (tmp_sub_expr_left_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_9 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
            Py_DECREF(tmp_sub_expr_left_9);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 23, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_25 = par_center;
            tmp_subscript_value_25 = mod_consts[26];
            tmp_add_expr_left_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_25, 0);
            if (tmp_add_expr_left_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_16 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
            Py_DECREF(tmp_add_expr_left_16);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 24, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_26 = par_center;
            tmp_subscript_value_26 = mod_consts[27];
            tmp_sub_expr_left_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_26, 1);
            if (tmp_sub_expr_left_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_10 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
            Py_DECREF(tmp_sub_expr_left_10);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 25, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_27 = par_center;
            tmp_subscript_value_27 = mod_consts[28];
            tmp_add_expr_left_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_27, 2);
            if (tmp_add_expr_left_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_17 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
            Py_DECREF(tmp_add_expr_left_17);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 26, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_28 = par_center;
            tmp_subscript_value_28 = mod_consts[26];
            tmp_add_expr_left_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_28, 0);
            if (tmp_add_expr_left_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_18 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
            Py_DECREF(tmp_add_expr_left_18);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 27, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_29 = par_center;
            tmp_subscript_value_29 = mod_consts[27];
            tmp_add_expr_left_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_29, 1);
            if (tmp_add_expr_left_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_19 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
            Py_DECREF(tmp_add_expr_left_19);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 28, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_30 = par_center;
            tmp_subscript_value_30 = mod_consts[28];
            tmp_sub_expr_left_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_30, 2);
            if (tmp_sub_expr_left_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_11 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
            Py_DECREF(tmp_sub_expr_left_11);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 29, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_31 = par_center;
            tmp_subscript_value_31 = mod_consts[26];
            tmp_add_expr_left_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_31, 0);
            if (tmp_add_expr_left_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_20 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
            Py_DECREF(tmp_add_expr_left_20);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 30, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_32 = par_center;
            tmp_subscript_value_32 = mod_consts[27];
            tmp_add_expr_left_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_32, 1);
            if (tmp_add_expr_left_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_21 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_21, tmp_add_expr_right_21);
            Py_DECREF(tmp_add_expr_left_21);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 31, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_33 = par_center;
            tmp_subscript_value_33 = mod_consts[28];
            tmp_add_expr_left_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_33, 2);
            if (tmp_add_expr_left_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_22 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
            Py_DECREF(tmp_add_expr_left_22);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 32, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_34 = par_center;
            tmp_subscript_value_34 = mod_consts[26];
            tmp_add_expr_left_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_34, 0);
            if (tmp_add_expr_left_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_23 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_23, tmp_add_expr_right_23);
            Py_DECREF(tmp_add_expr_left_23);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 33, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_35 = par_center;
            tmp_subscript_value_35 = mod_consts[27];
            tmp_sub_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_35, 1);
            if (tmp_sub_expr_left_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_12 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
            Py_DECREF(tmp_sub_expr_left_12);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 34, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_36 = par_center;
            tmp_subscript_value_36 = mod_consts[28];
            tmp_add_expr_left_24 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_36, 2);
            if (tmp_add_expr_left_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_24 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_24, tmp_add_expr_right_24);
            Py_DECREF(tmp_add_expr_left_24);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 35, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_37 = par_center;
            tmp_subscript_value_37 = mod_consts[26];
            tmp_add_expr_left_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_37, 0);
            if (tmp_add_expr_left_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_25 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_25, tmp_add_expr_right_25);
            Py_DECREF(tmp_add_expr_left_25);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 36, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_38 = par_center;
            tmp_subscript_value_38 = mod_consts[27];
            tmp_sub_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_38, 1);
            if (tmp_sub_expr_left_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_13 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
            Py_DECREF(tmp_sub_expr_left_13);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 37, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_39 = par_center;
            tmp_subscript_value_39 = mod_consts[28];
            tmp_sub_expr_left_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_39, 2);
            if (tmp_sub_expr_left_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_14 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_14, tmp_sub_expr_right_14);
            Py_DECREF(tmp_sub_expr_left_14);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 38, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_40 = par_center;
            tmp_subscript_value_40 = mod_consts[26];
            tmp_add_expr_left_26 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_40, 0);
            if (tmp_add_expr_left_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_26 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_26, tmp_add_expr_right_26);
            Py_DECREF(tmp_add_expr_left_26);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 39, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_41 = par_center;
            tmp_subscript_value_41 = mod_consts[27];
            tmp_sub_expr_left_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_41, 1);
            if (tmp_sub_expr_left_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_15 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_15, tmp_sub_expr_right_15);
            Py_DECREF(tmp_sub_expr_left_15);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 40, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_42 = par_center;
            tmp_subscript_value_42 = mod_consts[28];
            tmp_add_expr_left_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_42, 2);
            if (tmp_add_expr_left_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_27 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_27, tmp_add_expr_right_27);
            Py_DECREF(tmp_add_expr_left_27);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 41, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_43 = par_center;
            tmp_subscript_value_43 = mod_consts[26];
            tmp_sub_expr_left_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_43, 0);
            if (tmp_sub_expr_left_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_16 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_16, tmp_sub_expr_right_16);
            Py_DECREF(tmp_sub_expr_left_16);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 42, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_44 = par_center;
            tmp_subscript_value_44 = mod_consts[27];
            tmp_sub_expr_left_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_44, 1);
            if (tmp_sub_expr_left_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_17 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_17, tmp_sub_expr_right_17);
            Py_DECREF(tmp_sub_expr_left_17);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 43, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_45 = par_center;
            tmp_subscript_value_45 = mod_consts[28];
            tmp_add_expr_left_28 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_45, tmp_subscript_value_45, 2);
            if (tmp_add_expr_left_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_28 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_28, tmp_add_expr_right_28);
            Py_DECREF(tmp_add_expr_left_28);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 44, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_46 = par_center;
            tmp_subscript_value_46 = mod_consts[26];
            tmp_add_expr_left_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_46, 0);
            if (tmp_add_expr_left_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_29 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_29, tmp_add_expr_right_29);
            Py_DECREF(tmp_add_expr_left_29);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 45, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_47 = par_center;
            tmp_subscript_value_47 = mod_consts[27];
            tmp_sub_expr_left_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_47, 1);
            if (tmp_sub_expr_left_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_18 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_18, tmp_sub_expr_right_18);
            Py_DECREF(tmp_sub_expr_left_18);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 46, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_48 = par_center;
            tmp_subscript_value_48 = mod_consts[28];
            tmp_sub_expr_left_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_48, tmp_subscript_value_48, 2);
            if (tmp_sub_expr_left_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_19 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_19, tmp_sub_expr_right_19);
            Py_DECREF(tmp_sub_expr_left_19);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 47, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_49 = par_center;
            tmp_subscript_value_49 = mod_consts[26];
            tmp_sub_expr_left_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_49, 0);
            if (tmp_sub_expr_left_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_20 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_20, tmp_sub_expr_right_20);
            Py_DECREF(tmp_sub_expr_left_20);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 48, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_50 = par_center;
            tmp_subscript_value_50 = mod_consts[27];
            tmp_sub_expr_left_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_50, 1);
            if (tmp_sub_expr_left_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_21 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_21, tmp_sub_expr_right_21);
            Py_DECREF(tmp_sub_expr_left_21);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 49, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_51 = par_center;
            tmp_subscript_value_51 = mod_consts[28];
            tmp_add_expr_left_30 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_51, 2);
            if (tmp_add_expr_left_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_30 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_30, tmp_add_expr_right_30);
            Py_DECREF(tmp_add_expr_left_30);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 50, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_52 = par_center;
            tmp_subscript_value_52 = mod_consts[26];
            tmp_sub_expr_left_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_52, 0);
            if (tmp_sub_expr_left_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_22 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_22, tmp_sub_expr_right_22);
            Py_DECREF(tmp_sub_expr_left_22);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 51, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_53 = par_center;
            tmp_subscript_value_53 = mod_consts[27];
            tmp_sub_expr_left_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_53, 1);
            if (tmp_sub_expr_left_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_23 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_23, tmp_sub_expr_right_23);
            Py_DECREF(tmp_sub_expr_left_23);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 52, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_54 = par_center;
            tmp_subscript_value_54 = mod_consts[28];
            tmp_sub_expr_left_24 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_54, tmp_subscript_value_54, 2);
            if (tmp_sub_expr_left_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_24 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_24, tmp_sub_expr_right_24);
            Py_DECREF(tmp_sub_expr_left_24);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 53, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_55 = par_center;
            tmp_subscript_value_55 = mod_consts[26];
            tmp_sub_expr_left_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_55, 0);
            if (tmp_sub_expr_left_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_25 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_25, tmp_sub_expr_right_25);
            Py_DECREF(tmp_sub_expr_left_25);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 54, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_56 = par_center;
            tmp_subscript_value_56 = mod_consts[27];
            tmp_sub_expr_left_26 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_56, tmp_subscript_value_56, 1);
            if (tmp_sub_expr_left_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_26 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_26, tmp_sub_expr_right_26);
            Py_DECREF(tmp_sub_expr_left_26);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 55, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_57 = par_center;
            tmp_subscript_value_57 = mod_consts[28];
            tmp_add_expr_left_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_57, 2);
            if (tmp_add_expr_left_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_31 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_31, tmp_add_expr_right_31);
            Py_DECREF(tmp_add_expr_left_31);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 56, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_58 = par_center;
            tmp_subscript_value_58 = mod_consts[26];
            tmp_sub_expr_left_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_58, 0);
            if (tmp_sub_expr_left_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_27 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_27, tmp_sub_expr_right_27);
            Py_DECREF(tmp_sub_expr_left_27);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 57, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_59 = par_center;
            tmp_subscript_value_59 = mod_consts[27];
            tmp_add_expr_left_32 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_59, tmp_subscript_value_59, 1);
            if (tmp_add_expr_left_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_32 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_32, tmp_add_expr_right_32);
            Py_DECREF(tmp_add_expr_left_32);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 58, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_60 = par_center;
            tmp_subscript_value_60 = mod_consts[28];
            tmp_add_expr_left_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_60, 2);
            if (tmp_add_expr_left_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_33 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_33, tmp_add_expr_right_33);
            Py_DECREF(tmp_add_expr_left_33);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 59, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_61 = par_center;
            tmp_subscript_value_61 = mod_consts[26];
            tmp_sub_expr_left_28 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_61, 0);
            if (tmp_sub_expr_left_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_28 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_28, tmp_sub_expr_right_28);
            Py_DECREF(tmp_sub_expr_left_28);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 60, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_62 = par_center;
            tmp_subscript_value_62 = mod_consts[27];
            tmp_add_expr_left_34 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_62, tmp_subscript_value_62, 1);
            if (tmp_add_expr_left_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_34 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_34, tmp_add_expr_right_34);
            Py_DECREF(tmp_add_expr_left_34);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 61, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_63 = par_center;
            tmp_subscript_value_63 = mod_consts[28];
            tmp_sub_expr_left_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_63, tmp_subscript_value_63, 2);
            if (tmp_sub_expr_left_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_29 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_29, tmp_sub_expr_right_29);
            Py_DECREF(tmp_sub_expr_left_29);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 62, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_64 = par_center;
            tmp_subscript_value_64 = mod_consts[26];
            tmp_sub_expr_left_30 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_64, tmp_subscript_value_64, 0);
            if (tmp_sub_expr_left_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_30 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_30, tmp_sub_expr_right_30);
            Py_DECREF(tmp_sub_expr_left_30);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 63, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_65 = par_center;
            tmp_subscript_value_65 = mod_consts[27];
            tmp_sub_expr_left_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_65, tmp_subscript_value_65, 1);
            if (tmp_sub_expr_left_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_31 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_31, tmp_sub_expr_right_31);
            Py_DECREF(tmp_sub_expr_left_31);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 64, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_66 = par_center;
            tmp_subscript_value_66 = mod_consts[28];
            tmp_add_expr_left_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_66, tmp_subscript_value_66, 2);
            if (tmp_add_expr_left_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_35 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_35, tmp_add_expr_right_35);
            Py_DECREF(tmp_add_expr_left_35);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 65, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_67 = par_center;
            tmp_subscript_value_67 = mod_consts[26];
            tmp_sub_expr_left_32 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_67, 0);
            if (tmp_sub_expr_left_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_32 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_32, tmp_sub_expr_right_32);
            Py_DECREF(tmp_sub_expr_left_32);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 66, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_68 = par_center;
            tmp_subscript_value_68 = mod_consts[27];
            tmp_add_expr_left_36 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_68, 1);
            if (tmp_add_expr_left_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_36 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_36, tmp_add_expr_right_36);
            Py_DECREF(tmp_add_expr_left_36);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 67, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_69 = par_center;
            tmp_subscript_value_69 = mod_consts[28];
            tmp_sub_expr_left_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_69, tmp_subscript_value_69, 2);
            if (tmp_sub_expr_left_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_33 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_33, tmp_sub_expr_right_33);
            Py_DECREF(tmp_sub_expr_left_33);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 68, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_70 = par_center;
            tmp_subscript_value_70 = mod_consts[26];
            tmp_sub_expr_left_34 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_70, 0);
            if (tmp_sub_expr_left_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_34 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_34, tmp_sub_expr_right_34);
            Py_DECREF(tmp_sub_expr_left_34);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 69, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_71 = par_center;
            tmp_subscript_value_71 = mod_consts[27];
            tmp_sub_expr_left_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_71, tmp_subscript_value_71, 1);
            if (tmp_sub_expr_left_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_35 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_35, tmp_sub_expr_right_35);
            Py_DECREF(tmp_sub_expr_left_35);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 70, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_72 = par_center;
            tmp_subscript_value_72 = mod_consts[28];
            tmp_sub_expr_left_36 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_72, 2);
            if (tmp_sub_expr_left_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_36 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_36, tmp_sub_expr_right_36);
            Py_DECREF(tmp_sub_expr_left_36);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 71, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_73 = par_center;
            tmp_subscript_value_73 = mod_consts[26];
            tmp_add_expr_left_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_73, 0);
            if (tmp_add_expr_left_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_37 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_37, tmp_add_expr_right_37);
            Py_DECREF(tmp_add_expr_left_37);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 72, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_74 = par_center;
            tmp_subscript_value_74 = mod_consts[27];
            tmp_add_expr_left_38 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_74, tmp_subscript_value_74, 1);
            if (tmp_add_expr_left_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_38 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_38, tmp_add_expr_right_38);
            Py_DECREF(tmp_add_expr_left_38);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 73, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_75 = par_center;
            tmp_subscript_value_75 = mod_consts[28];
            tmp_sub_expr_left_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_75, 2);
            if (tmp_sub_expr_left_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_37 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_37, tmp_sub_expr_right_37);
            Py_DECREF(tmp_sub_expr_left_37);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 74, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_76 = par_center;
            tmp_subscript_value_76 = mod_consts[26];
            tmp_add_expr_left_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_76, tmp_subscript_value_76, 0);
            if (tmp_add_expr_left_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_39 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_39, tmp_add_expr_right_39);
            Py_DECREF(tmp_add_expr_left_39);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 75, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_77 = par_center;
            tmp_subscript_value_77 = mod_consts[27];
            tmp_sub_expr_left_38 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_77, tmp_subscript_value_77, 1);
            if (tmp_sub_expr_left_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_38 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_38, tmp_sub_expr_right_38);
            Py_DECREF(tmp_sub_expr_left_38);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 76, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_78 = par_center;
            tmp_subscript_value_78 = mod_consts[28];
            tmp_sub_expr_left_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_78, tmp_subscript_value_78, 2);
            if (tmp_sub_expr_left_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_39 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_39, tmp_sub_expr_right_39);
            Py_DECREF(tmp_sub_expr_left_39);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 77, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_79 = par_center;
            tmp_subscript_value_79 = mod_consts[26];
            tmp_sub_expr_left_40 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_79, 0);
            if (tmp_sub_expr_left_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_40 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_40, tmp_sub_expr_right_40);
            Py_DECREF(tmp_sub_expr_left_40);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 78, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_80 = par_center;
            tmp_subscript_value_80 = mod_consts[27];
            tmp_sub_expr_left_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_80, tmp_subscript_value_80, 1);
            if (tmp_sub_expr_left_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_41 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_41, tmp_sub_expr_right_41);
            Py_DECREF(tmp_sub_expr_left_41);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 79, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_81 = par_center;
            tmp_subscript_value_81 = mod_consts[28];
            tmp_sub_expr_left_42 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_81, tmp_subscript_value_81, 2);
            if (tmp_sub_expr_left_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_42 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_42, tmp_sub_expr_right_42);
            Py_DECREF(tmp_sub_expr_left_42);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 80, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_82 = par_center;
            tmp_subscript_value_82 = mod_consts[26];
            tmp_add_expr_left_40 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_82, tmp_subscript_value_82, 0);
            if (tmp_add_expr_left_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_40 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_40, tmp_add_expr_right_40);
            Py_DECREF(tmp_add_expr_left_40);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 81, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_83 = par_center;
            tmp_subscript_value_83 = mod_consts[27];
            tmp_add_expr_left_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_83, tmp_subscript_value_83, 1);
            if (tmp_add_expr_left_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_41 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_41, tmp_add_expr_right_41);
            Py_DECREF(tmp_add_expr_left_41);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 82, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_84 = par_center;
            tmp_subscript_value_84 = mod_consts[28];
            tmp_sub_expr_left_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_84, tmp_subscript_value_84, 2);
            if (tmp_sub_expr_left_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_43 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_43, tmp_sub_expr_right_43);
            Py_DECREF(tmp_sub_expr_left_43);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 83, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_85 = par_center;
            tmp_subscript_value_85 = mod_consts[26];
            tmp_sub_expr_left_44 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_85, 0);
            if (tmp_sub_expr_left_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_44 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_44, tmp_sub_expr_right_44);
            Py_DECREF(tmp_sub_expr_left_44);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 84, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_86 = par_center;
            tmp_subscript_value_86 = mod_consts[27];
            tmp_sub_expr_left_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_86, tmp_subscript_value_86, 1);
            if (tmp_sub_expr_left_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_sub_expr_right_45 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_45, tmp_sub_expr_right_45);
            Py_DECREF(tmp_sub_expr_left_45);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 85, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_87 = par_center;
            tmp_subscript_value_87 = mod_consts[28];
            tmp_sub_expr_left_46 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_87, tmp_subscript_value_87, 2);
            if (tmp_sub_expr_left_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_46 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_46, tmp_sub_expr_right_46);
            Py_DECREF(tmp_sub_expr_left_46);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 86, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_88 = par_center;
            tmp_subscript_value_88 = mod_consts[26];
            tmp_sub_expr_left_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_88, tmp_subscript_value_88, 0);
            if (tmp_sub_expr_left_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_47 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_47, tmp_sub_expr_right_47);
            Py_DECREF(tmp_sub_expr_left_47);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 87, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_89 = par_center;
            tmp_subscript_value_89 = mod_consts[27];
            tmp_add_expr_left_42 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_89, tmp_subscript_value_89, 1);
            if (tmp_add_expr_left_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_42 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_42, tmp_add_expr_right_42);
            Py_DECREF(tmp_add_expr_left_42);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 88, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_90 = par_center;
            tmp_subscript_value_90 = mod_consts[28];
            tmp_sub_expr_left_48 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_90, tmp_subscript_value_90, 2);
            if (tmp_sub_expr_left_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_48 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_48, tmp_sub_expr_right_48);
            Py_DECREF(tmp_sub_expr_left_48);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 89, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_91 = par_center;
            tmp_subscript_value_91 = mod_consts[26];
            tmp_add_expr_left_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_91, 0);
            if (tmp_add_expr_left_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_43 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_43, tmp_add_expr_right_43);
            Py_DECREF(tmp_add_expr_left_43);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 90, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_92 = par_center;
            tmp_subscript_value_92 = mod_consts[27];
            tmp_add_expr_left_44 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_92, tmp_subscript_value_92, 1);
            if (tmp_add_expr_left_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_44 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_44, tmp_add_expr_right_44);
            Py_DECREF(tmp_add_expr_left_44);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 91, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_93 = par_center;
            tmp_subscript_value_93 = mod_consts[28];
            tmp_sub_expr_left_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_93, tmp_subscript_value_93, 2);
            if (tmp_sub_expr_left_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_49 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_49, tmp_sub_expr_right_49);
            Py_DECREF(tmp_sub_expr_left_49);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 92, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_94 = par_center;
            tmp_subscript_value_94 = mod_consts[26];
            tmp_sub_expr_left_50 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_94, tmp_subscript_value_94, 0);
            if (tmp_sub_expr_left_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_50 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_50, tmp_sub_expr_right_50);
            Py_DECREF(tmp_sub_expr_left_50);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 93, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_95 = par_center;
            tmp_subscript_value_95 = mod_consts[27];
            tmp_add_expr_left_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_95, tmp_subscript_value_95, 1);
            if (tmp_add_expr_left_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_45 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_45, tmp_add_expr_right_45);
            Py_DECREF(tmp_add_expr_left_45);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 94, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_96 = par_center;
            tmp_subscript_value_96 = mod_consts[28];
            tmp_sub_expr_left_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_96, tmp_subscript_value_96, 2);
            if (tmp_sub_expr_left_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_51 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_51, tmp_sub_expr_right_51);
            Py_DECREF(tmp_sub_expr_left_51);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 95, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_97 = par_center;
            tmp_subscript_value_97 = mod_consts[26];
            tmp_add_expr_left_46 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_97, 0);
            if (tmp_add_expr_left_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_46 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_46, tmp_add_expr_right_46);
            Py_DECREF(tmp_add_expr_left_46);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 96, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_98 = par_center;
            tmp_subscript_value_98 = mod_consts[27];
            tmp_add_expr_left_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_98, tmp_subscript_value_98, 1);
            if (tmp_add_expr_left_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_47 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_47, tmp_add_expr_right_47);
            Py_DECREF(tmp_add_expr_left_47);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 97, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_99 = par_center;
            tmp_subscript_value_99 = mod_consts[28];
            tmp_add_expr_left_48 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_99, tmp_subscript_value_99, 2);
            if (tmp_add_expr_left_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_48 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_48, tmp_add_expr_right_48);
            Py_DECREF(tmp_add_expr_left_48);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 98, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_100 = par_center;
            tmp_subscript_value_100 = mod_consts[26];
            tmp_sub_expr_left_52 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_100, tmp_subscript_value_100, 0);
            if (tmp_sub_expr_left_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_52 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_52, tmp_sub_expr_right_52);
            Py_DECREF(tmp_sub_expr_left_52);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 99, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_101 = par_center;
            tmp_subscript_value_101 = mod_consts[27];
            tmp_add_expr_left_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_101, tmp_subscript_value_101, 1);
            if (tmp_add_expr_left_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_49 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_49, tmp_add_expr_right_49);
            Py_DECREF(tmp_add_expr_left_49);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 100, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_102 = par_center;
            tmp_subscript_value_102 = mod_consts[28];
            tmp_sub_expr_left_53 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_102, tmp_subscript_value_102, 2);
            if (tmp_sub_expr_left_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_sub_expr_right_53 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_53, tmp_sub_expr_right_53);
            Py_DECREF(tmp_sub_expr_left_53);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 101, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_103 = par_center;
            tmp_subscript_value_103 = mod_consts[26];
            tmp_sub_expr_left_54 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_103, 0);
            if (tmp_sub_expr_left_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_sub_expr_right_54 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_54, tmp_sub_expr_right_54);
            Py_DECREF(tmp_sub_expr_left_54);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 102, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_104 = par_center;
            tmp_subscript_value_104 = mod_consts[27];
            tmp_add_expr_left_50 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_104, tmp_subscript_value_104, 1);
            if (tmp_add_expr_left_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_50 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_50, tmp_add_expr_right_50);
            Py_DECREF(tmp_add_expr_left_50);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 103, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_105 = par_center;
            tmp_subscript_value_105 = mod_consts[28];
            tmp_add_expr_left_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_105, tmp_subscript_value_105, 2);
            if (tmp_add_expr_left_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_51 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_51, tmp_add_expr_right_51);
            Py_DECREF(tmp_add_expr_left_51);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 104, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_106 = par_center;
            tmp_subscript_value_106 = mod_consts[26];
            tmp_add_expr_left_52 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_106, tmp_subscript_value_106, 0);
            if (tmp_add_expr_left_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_width);
            tmp_add_expr_right_52 = var_width;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_52, tmp_add_expr_right_52);
            Py_DECREF(tmp_add_expr_left_52);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 105, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_107 = par_center;
            tmp_subscript_value_107 = mod_consts[27];
            tmp_add_expr_left_53 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_107, tmp_subscript_value_107, 1);
            if (tmp_add_expr_left_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_height);
            tmp_add_expr_right_53 = var_height;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_53, tmp_add_expr_right_53);
            Py_DECREF(tmp_add_expr_left_53);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 106, tmp_list_element_1);
            CHECK_OBJECT(par_center);
            tmp_expression_value_108 = par_center;
            tmp_subscript_value_108 = mod_consts[28];
            tmp_add_expr_left_54 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_108, tmp_subscript_value_108, 2);
            if (tmp_add_expr_left_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_depth);
            tmp_add_expr_right_54 = var_depth;
            tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_54, tmp_add_expr_right_54);
            Py_DECREF(tmp_add_expr_left_54);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 107, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pos == NULL);
        var_pos = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[10];
        tmp_call_arg_element_2 = LIST_COPY(mod_consts[29]);
        frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_normal == NULL);
        var_normal = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = mod_consts[10];
        tmp_call_arg_element_4 = LIST_COPY(mod_consts[30]);
        frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_uv == NULL);
        var_uv = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_109 = var_ctx;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[14]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_110 = var_ctx;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[16]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pos);
        tmp_kw_call_value_0_1 = var_pos;
        frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 205;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_args_element_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[31];
        tmp_args_element_value_6 = MAKE_LIST1(mod_consts[32]);
        frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_args_element_value_12;
            PyList_SET_ITEM(tmp_args_element_value_3, 0, tmp_list_element_2);
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_ctx);
            tmp_expression_value_111 = var_ctx;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[16]);
            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_normal);
            tmp_kw_call_value_0_2 = var_normal;
            frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 206;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

                tmp_args_element_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, kw_values, mod_consts[17]);
            }

            Py_DECREF(tmp_called_value_9);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            tmp_args_element_value_8 = mod_consts[31];
            tmp_args_element_value_9 = MAKE_LIST1(mod_consts[33]);
            frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 206;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_3, 1, tmp_list_element_2);
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_ctx);
            tmp_expression_value_112 = var_ctx;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[16]);
            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_uv);
            tmp_kw_call_value_0_3 = var_uv;
            frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 207;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

                tmp_args_element_value_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, kw_values, mod_consts[17]);
            }

            Py_DECREF(tmp_called_value_11);
            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            tmp_args_element_value_11 = mod_consts[34];
            tmp_args_element_value_12 = MAKE_LIST1(mod_consts[20]);
            frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 207;
            {
                PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_3, 2, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame.f_lineno = 204;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_aa0144e7d31e383c4e65494d3c4c6026, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa0144e7d31e383c4e65494d3c4c6026->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa0144e7d31e383c4e65494d3c4c6026, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa0144e7d31e383c4e65494d3c4c6026,
        type_description_1,
        par_size,
        par_center,
        var_ctx,
        var_width,
        var_height,
        var_depth,
        var_pos,
        var_normal,
        var_uv
    );


    // Release cached frame if used for exception.
    if (frame_aa0144e7d31e383c4e65494d3c4c6026 == cache_frame_aa0144e7d31e383c4e65494d3c4c6026) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa0144e7d31e383c4e65494d3c4c6026);
        cache_frame_aa0144e7d31e383c4e65494d3c4c6026 = NULL;
    }

    assertFrameObject(frame_aa0144e7d31e383c4e65494d3c4c6026);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    CHECK_OBJECT(var_depth);
    Py_DECREF(var_depth);
    var_depth = NULL;
    CHECK_OBJECT(var_pos);
    Py_DECREF(var_pos);
    var_pos = NULL;
    CHECK_OBJECT(var_normal);
    Py_DECREF(var_normal);
    var_normal = NULL;
    CHECK_OBJECT(var_uv);
    Py_DECREF(var_uv);
    var_uv = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_depth);
    var_depth = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_normal);
    var_normal = NULL;
    Py_XDECREF(var_uv);
    var_uv = NULL;
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
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_center);
    Py_DECREF(par_center);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_center);
    Py_DECREF(par_center);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__1__get_active_context(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$geometry$$$function__1__get_active_context,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad322cc9674635c696c75cadc0b2839d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$geometry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__2_quad_2d_fs(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$geometry$$$function__2_quad_2d_fs,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18c37a46dd1c93f213fb5468ac0a89f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$geometry,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__3_quad_2d(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$geometry$$$function__3_quad_2d,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_718be56fa222da7e6572212aa305dd42,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$geometry,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__4_screen_rectangle(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$geometry$$$function__4_screen_rectangle,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_41cbd48620e9706b440c744e17374def,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$geometry,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$geometry$$$function__5_cube(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$geometry$$$function__5_cube,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa0144e7d31e383c4e65494d3c4c6026,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$geometry,
        mod_consts[35],
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

function_impl_code functable_arcade$gl$geometry[] = {
    impl_arcade$gl$geometry$$$function__1__get_active_context,
    impl_arcade$gl$geometry$$$function__2_quad_2d_fs,
    impl_arcade$gl$geometry$$$function__3_quad_2d,
    impl_arcade$gl$geometry$$$function__4_screen_rectangle,
    impl_arcade$gl$geometry$$$function__5_cube,
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

    function_impl_code *current = functable_arcade$gl$geometry;
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

    if (offset > sizeof(functable_arcade$gl$geometry) || offset < 0) {
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
        functable_arcade$gl$geometry[offset],
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
        module_arcade$gl$geometry,
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
PyObject *modulecode_arcade$gl$geometry(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("arcade.gl.geometry");

    // Store the module for future use.
    module_arcade$gl$geometry = module;

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
        PRINT_STRING("arcade.gl.geometry: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("arcade.gl.geometry: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initarcade$gl$geometry\n");

    moduledict_arcade$gl$geometry = MODULE_DICT(module_arcade$gl$geometry);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_arcade$gl$geometry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_arcade$gl$geometry,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[71]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_arcade$gl$geometry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$gl$geometry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$gl$geometry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_arcade$gl$geometry);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_arcade$gl$geometry);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_c9caf080b947f79c21df23f3f2dd0834;
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
        tmp_assign_source_1 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_2);
    }
    frame_c9caf080b947f79c21df23f3f2dd0834 = MAKE_MODULE_FRAME(codeobj_c9caf080b947f79c21df23f3f2dd0834, module_arcade$gl$geometry);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c9caf080b947f79c21df23f3f2dd0834);
    assert(Py_REFCNT(frame_c9caf080b947f79c21df23f3f2dd0834) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[41], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_arcade$gl$geometry;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[43];
        tmp_level_value_1 = mod_consts[26];
        frame_c9caf080b947f79c21df23f3f2dd0834->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_arcade$gl$geometry,
                mod_consts[9],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_arcade$gl$geometry,
                mod_consts[44],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[44]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[45];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_arcade$gl$geometry;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[46];
        tmp_level_value_2 = mod_consts[26];
        frame_c9caf080b947f79c21df23f3f2dd0834->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_arcade$gl$geometry,
                mod_consts[0],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[0]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_arcade$gl$geometry,
                mod_consts[15],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[15]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[47];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_arcade$gl$geometry;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[48];
        tmp_level_value_3 = mod_consts[26];
        frame_c9caf080b947f79c21df23f3f2dd0834->m_frame.f_lineno = 8;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_arcade$gl$geometry,
                mod_consts[49],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[50];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_10 = MAKE_FUNCTION_arcade$gl$geometry$$$function__1__get_active_context(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[50];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_11 = MAKE_FUNCTION_arcade$gl$geometry$$$function__2_quad_2d_fs(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_defaults_1 = mod_consts[52];
        tmp_dict_key_3 = mod_consts[53];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[54];
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[55];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[54];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[50];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_12 = MAKE_FUNCTION_arcade$gl$geometry$$$function__3_quad_2d(tmp_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[56];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[57];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[58];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[59];
        tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[50];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_13 = MAKE_FUNCTION_arcade$gl$geometry$$$function__4_screen_rectangle(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_defaults_2 = mod_consts[61];
        tmp_dict_key_5 = mod_consts[53];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[62];
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[63];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_4 = mod_consts[62];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[50];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_14 = MAKE_FUNCTION_arcade$gl$geometry$$$function__5_cube(tmp_defaults_2, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_14);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9caf080b947f79c21df23f3f2dd0834, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9caf080b947f79c21df23f3f2dd0834->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9caf080b947f79c21df23f3f2dd0834, exception_lineno);
    }



    assertFrameObject(frame_c9caf080b947f79c21df23f3f2dd0834);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("arcade.gl.geometry", false);

    Py_INCREF(module_arcade$gl$geometry);
    return module_arcade$gl$geometry;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$geometry, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("arcade$gl$geometry", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
