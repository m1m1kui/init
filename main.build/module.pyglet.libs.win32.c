/* Generated code for Python module 'pyglet.libs.win32'
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

/* The "module_pyglet$libs$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$win32;
PyDictObject *moduledict_pyglet$libs$win32;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[274];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[274];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 274; i++) {
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
void checkModuleConstants_pyglet$libs$win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 274; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_77acd3862bc155ff415bb536e412ba4e;
static PyCodeObject *codeobj_f2f401b2c98c5c263a865b9b1c425977;
static PyCodeObject *codeobj_ec6d913ace2ee93376a674227408cf3a;
static PyCodeObject *codeobj_927a916939406d5d1c02ec2a9a27b2bf;
static PyCodeObject *codeobj_b0b41d4d3a4e55351e16bec446c32c8a;
static PyCodeObject *codeobj_3163de19aef8ebeaf18ae436cdf02a25;
static PyCodeObject *codeobj_15417c48efbb5b3caee44d1224a5d3c0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[266]); CHECK_OBJECT(module_filename_obj);
    codeobj_77acd3862bc155ff415bb536e412ba4e = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[267], NULL, 1, 0, 0);
    codeobj_f2f401b2c98c5c263a865b9b1c425977 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[268], mod_consts[268], NULL, NULL, 0, 0, 0);
    codeobj_ec6d913ace2ee93376a674227408cf3a = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[269], NULL, 2, 0, 0);
    codeobj_927a916939406d5d1c02ec2a9a27b2bf = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[270], NULL, 2, 0, 0);
    codeobj_b0b41d4d3a4e55351e16bec446c32c8a = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[264], mod_consts[264], NULL, NULL, 0, 0, 0);
    codeobj_3163de19aef8ebeaf18ae436cdf02a25 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[11], mod_consts[11], mod_consts[271], mod_consts[272], 0, 0, 0);
    codeobj_15417c48efbb5b3caee44d1224a5d3c0 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[273], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__1_format_error();


static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__2___init__();


static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__3___getattr__();


static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__3___getattr__$$$function__1_f(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__5__uninitialize();


// The module function definitions.
static PyObject *impl_pyglet$libs$win32$$$function__1_format_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_err = python_pars[0];
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_15417c48efbb5b3caee44d1224a5d3c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15417c48efbb5b3caee44d1224a5d3c0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_15417c48efbb5b3caee44d1224a5d3c0)) {
        Py_XDECREF(cache_frame_15417c48efbb5b3caee44d1224a5d3c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15417c48efbb5b3caee44d1224a5d3c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15417c48efbb5b3caee44d1224a5d3c0 = MAKE_FUNCTION_FRAME(tstate, codeobj_15417c48efbb5b3caee44d1224a5d3c0, module_pyglet$libs$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_15417c48efbb5b3caee44d1224a5d3c0->m_type_description == NULL);
    frame_15417c48efbb5b3caee44d1224a5d3c0 = cache_frame_15417c48efbb5b3caee44d1224a5d3c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_15417c48efbb5b3caee44d1224a5d3c0);
    assert(Py_REFCNT(frame_15417c48efbb5b3caee44d1224a5d3c0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15417c48efbb5b3caee44d1224a5d3c0->m_frame.f_lineno = 60;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[1]);

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15417c48efbb5b3caee44d1224a5d3c0->m_frame.f_lineno = 62;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_err);
        tmp_args_element_value_3 = par_err;
        tmp_args_element_value_4 = mod_consts[6];
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_5 = var_msg;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_7 = var_msg;
        frame_15417c48efbb5b3caee44d1224a5d3c0->m_frame.f_lineno = 66;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15417c48efbb5b3caee44d1224a5d3c0->m_frame.f_lineno = 67;
        tmp_args_element_value_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15417c48efbb5b3caee44d1224a5d3c0->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_8};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_msg);
        tmp_expression_value_2 = var_msg;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_15417c48efbb5b3caee44d1224a5d3c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15417c48efbb5b3caee44d1224a5d3c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15417c48efbb5b3caee44d1224a5d3c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15417c48efbb5b3caee44d1224a5d3c0,
        type_description_1,
        par_err,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_15417c48efbb5b3caee44d1224a5d3c0 == cache_frame_15417c48efbb5b3caee44d1224a5d3c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_15417c48efbb5b3caee44d1224a5d3c0);
        cache_frame_15417c48efbb5b3caee44d1224a5d3c0 = NULL;
    }

    assertFrameObject(frame_15417c48efbb5b3caee44d1224a5d3c0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_msg);
    Py_DECREF(var_msg);
    var_msg = NULL;
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

    Py_XDECREF(var_msg);
    var_msg = NULL;
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
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$win32$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lib = python_pars[1];
    struct Nuitka_FrameObject *frame_927a916939406d5d1c02ec2a9a27b2bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_927a916939406d5d1c02ec2a9a27b2bf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_927a916939406d5d1c02ec2a9a27b2bf)) {
        Py_XDECREF(cache_frame_927a916939406d5d1c02ec2a9a27b2bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_927a916939406d5d1c02ec2a9a27b2bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_927a916939406d5d1c02ec2a9a27b2bf = MAKE_FUNCTION_FRAME(tstate, codeobj_927a916939406d5d1c02ec2a9a27b2bf, module_pyglet$libs$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_927a916939406d5d1c02ec2a9a27b2bf->m_type_description == NULL);
    frame_927a916939406d5d1c02ec2a9a27b2bf = cache_frame_927a916939406d5d1c02ec2a9a27b2bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_927a916939406d5d1c02ec2a9a27b2bf);
    assert(Py_REFCNT(frame_927a916939406d5d1c02ec2a9a27b2bf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_lib);
        tmp_assattr_value_1 = par_lib;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_927a916939406d5d1c02ec2a9a27b2bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_927a916939406d5d1c02ec2a9a27b2bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_927a916939406d5d1c02ec2a9a27b2bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_927a916939406d5d1c02ec2a9a27b2bf,
        type_description_1,
        par_self,
        par_lib
    );


    // Release cached frame if used for exception.
    if (frame_927a916939406d5d1c02ec2a9a27b2bf == cache_frame_927a916939406d5d1c02ec2a9a27b2bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_927a916939406d5d1c02ec2a9a27b2bf);
        cache_frame_927a916939406d5d1c02ec2a9a27b2bf = NULL;
    }

    assertFrameObject(frame_927a916939406d5d1c02ec2a9a27b2bf);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lib);
    Py_DECREF(par_lib);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lib);
    Py_DECREF(par_lib);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$win32$$$function__3___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_CellObject *var_fn = Nuitka_Cell_Empty();
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_ec6d913ace2ee93376a674227408cf3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec6d913ace2ee93376a674227408cf3a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ec6d913ace2ee93376a674227408cf3a)) {
        Py_XDECREF(cache_frame_ec6d913ace2ee93376a674227408cf3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec6d913ace2ee93376a674227408cf3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec6d913ace2ee93376a674227408cf3a = MAKE_FUNCTION_FRAME(tstate, codeobj_ec6d913ace2ee93376a674227408cf3a, module_pyglet$libs$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec6d913ace2ee93376a674227408cf3a->m_type_description == NULL);
    frame_ec6d913ace2ee93376a674227408cf3a = cache_frame_ec6d913ace2ee93376a674227408cf3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ec6d913ace2ee93376a674227408cf3a);
    assert(Py_REFCNT(frame_ec6d913ace2ee93376a674227408cf3a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        frame_ec6d913ace2ee93376a674227408cf3a->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_fn) == NULL);
        PyCell_SET(var_fn, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec6d913ace2ee93376a674227408cf3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec6d913ace2ee93376a674227408cf3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec6d913ace2ee93376a674227408cf3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec6d913ace2ee93376a674227408cf3a,
        type_description_1,
        par_self,
        par_name,
        var_fn,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_ec6d913ace2ee93376a674227408cf3a == cache_frame_ec6d913ace2ee93376a674227408cf3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec6d913ace2ee93376a674227408cf3a);
        cache_frame_ec6d913ace2ee93376a674227408cf3a = NULL;
    }

    assertFrameObject(frame_ec6d913ace2ee93376a674227408cf3a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_fn;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_pyglet$libs$win32$$$function__3___getattr__$$$function__1_f(tmp_closure_1);

        assert(var_f == NULL);
        var_f = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_f);
    tmp_return_value = var_f;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fn);
    Py_DECREF(var_fn);
    var_fn = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$win32$$$function__3___getattr__$$$function__1_f(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var_err = NULL;
    PyObject *var_entry = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3163de19aef8ebeaf18ae436cdf02a25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3163de19aef8ebeaf18ae436cdf02a25 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3163de19aef8ebeaf18ae436cdf02a25)) {
        Py_XDECREF(cache_frame_3163de19aef8ebeaf18ae436cdf02a25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3163de19aef8ebeaf18ae436cdf02a25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3163de19aef8ebeaf18ae436cdf02a25 = MAKE_FUNCTION_FRAME(tstate, codeobj_3163de19aef8ebeaf18ae436cdf02a25, module_pyglet$libs$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3163de19aef8ebeaf18ae436cdf02a25->m_type_description == NULL);
    frame_3163de19aef8ebeaf18ae436cdf02a25 = cache_frame_3163de19aef8ebeaf18ae436cdf02a25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3163de19aef8ebeaf18ae436cdf02a25);
    assert(Py_REFCNT(frame_3163de19aef8ebeaf18ae436cdf02a25) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[14]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 80;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__5_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame.f_lineno = 81;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_err == NULL);
        var_err = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_err);
        tmp_cmp_expr_left_1 = var_err;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooc";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 83;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame.f_lineno = 83;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[19]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 83;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[20];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 83;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame.f_lineno = 83;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooc";
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
                type_description_1 = "ooooc";
                exception_lineno = 83;
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
            PyObject *old = var_entry;
            var_entry = tmp_assign_source_5;
            Py_INCREF(var_entry);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_entry);
        tmp_args_element_value_2 = var_entry;
        frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame.f_lineno = 84;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[22], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;
        type_description_1 = "ooooc";
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_err);
        tmp_args_element_value_3 = var_err;
        frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame.f_lineno = 85;
        tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 85;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame.f_lineno = 85;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[25]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3163de19aef8ebeaf18ae436cdf02a25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3163de19aef8ebeaf18ae436cdf02a25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3163de19aef8ebeaf18ae436cdf02a25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3163de19aef8ebeaf18ae436cdf02a25,
        type_description_1,
        par_args,
        var_result,
        var_err,
        var_entry,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3163de19aef8ebeaf18ae436cdf02a25 == cache_frame_3163de19aef8ebeaf18ae436cdf02a25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3163de19aef8ebeaf18ae436cdf02a25);
        cache_frame_3163de19aef8ebeaf18ae436cdf02a25 = NULL;
    }

    assertFrameObject(frame_3163de19aef8ebeaf18ae436cdf02a25);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_err);
    var_err = NULL;
    Py_XDECREF(var_entry);
    var_entry = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_err);
    var_err = NULL;
    Py_XDECREF(var_entry);
    var_entry = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$win32$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lib = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_lib);
    tmp_return_value = par_lib;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lib);
    Py_DECREF(par_lib);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$win32$$$function__5__uninitialize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b0b41d4d3a4e55351e16bec446c32c8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_b0b41d4d3a4e55351e16bec446c32c8a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0b41d4d3a4e55351e16bec446c32c8a)) {
        Py_XDECREF(cache_frame_b0b41d4d3a4e55351e16bec446c32c8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0b41d4d3a4e55351e16bec446c32c8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0b41d4d3a4e55351e16bec446c32c8a = MAKE_FUNCTION_FRAME(tstate, codeobj_b0b41d4d3a4e55351e16bec446c32c8a, module_pyglet$libs$win32, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0b41d4d3a4e55351e16bec446c32c8a->m_type_description == NULL);
    frame_b0b41d4d3a4e55351e16bec446c32c8a = cache_frame_b0b41d4d3a4e55351e16bec446c32c8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b0b41d4d3a4e55351e16bec446c32c8a);
    assert(Py_REFCNT(frame_b0b41d4d3a4e55351e16bec446c32c8a) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto try_except_handler_1;
        }
        frame_b0b41d4d3a4e55351e16bec446c32c8a->m_frame.f_lineno = 331;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[27]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b0b41d4d3a4e55351e16bec446c32c8a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b0b41d4d3a4e55351e16bec446c32c8a, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 330;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b0b41d4d3a4e55351e16bec446c32c8a->m_frame) frame_b0b41d4d3a4e55351e16bec446c32c8a->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_no_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0b41d4d3a4e55351e16bec446c32c8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0b41d4d3a4e55351e16bec446c32c8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0b41d4d3a4e55351e16bec446c32c8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0b41d4d3a4e55351e16bec446c32c8a,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b0b41d4d3a4e55351e16bec446c32c8a == cache_frame_b0b41d4d3a4e55351e16bec446c32c8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0b41d4d3a4e55351e16bec446c32c8a);
        cache_frame_b0b41d4d3a4e55351e16bec446c32c8a = NULL;
    }

    assertFrameObject(frame_b0b41d4d3a4e55351e16bec446c32c8a);

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



static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__1_format_error() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$win32$$$function__1_format_error,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_15417c48efbb5b3caee44d1224a5d3c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__2___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$win32$$$function__2___init__,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_927a916939406d5d1c02ec2a9a27b2bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__3___getattr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$win32$$$function__3___getattr__,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_ec6d913ace2ee93376a674227408cf3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__3___getattr__$$$function__1_f(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$win32$$$function__3___getattr__$$$function__1_f,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_3163de19aef8ebeaf18ae436cdf02a25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$win32,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$win32$$$function__4_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77acd3862bc155ff415bb536e412ba4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$win32$$$function__5__uninitialize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$win32$$$function__5__uninitialize,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b0b41d4d3a4e55351e16bec446c32c8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$win32,
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

function_impl_code functable_pyglet$libs$win32[] = {
    impl_pyglet$libs$win32$$$function__3___getattr__$$$function__1_f,
    impl_pyglet$libs$win32$$$function__1_format_error,
    impl_pyglet$libs$win32$$$function__2___init__,
    impl_pyglet$libs$win32$$$function__3___getattr__,
    impl_pyglet$libs$win32$$$function__4_lambda,
    impl_pyglet$libs$win32$$$function__5__uninitialize,
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

    function_impl_code *current = functable_pyglet$libs$win32;
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

    if (offset > sizeof(functable_pyglet$libs$win32) || offset < 0) {
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
        functable_pyglet$libs$win32[offset],
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
        module_pyglet$libs$win32,
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
PyObject *modulecode_pyglet$libs$win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.libs.win32");

    // Store the module for future use.
    module_pyglet$libs$win32 = module;

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
        PRINT_STRING("pyglet.libs.win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.libs.win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$win32\n");

    moduledict_pyglet$libs$win32 = MODULE_DICT(module_pyglet$libs$win32);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[51]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$win32);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_f2f401b2c98c5c263a865b9b1c425977;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *locals_pyglet$libs$win32$$$class__1_DebugLibrary_71 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_2);
    }
    frame_f2f401b2c98c5c263a865b9b1c425977 = MAKE_MODULE_FRAME(codeobj_f2f401b2c98c5c263a865b9b1c425977, module_pyglet$libs$win32);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f2f401b2c98c5c263a865b9b1c425977);
    assert(Py_REFCNT(frame_f2f401b2c98c5c263a865b9b1c425977) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[31]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_6;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[31]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[34]);
                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[36]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[37];
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[31]);
                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[33]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[34]);
                } else {
                    tmp_expression_value_5 = NULL;
                }
            }
            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[35]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_5, mod_consts[38]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_5 = mod_consts[39];
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[34]);
                } else {
                    tmp_expression_value_6 = NULL;
                }
            }
            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[35]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_6, mod_consts[40]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[45], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[47];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[6];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 36;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[48];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[6];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 37;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[49];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[6];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 38;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[50];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[6];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 40;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[51];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[52];
        tmp_level_value_5 = mod_consts[53];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 41;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$libs$win32,
                mod_consts[54],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[51];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[55];
        tmp_level_value_6 = mod_consts[53];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 42;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$libs$win32,
                mod_consts[3],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_10);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[56];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_7 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_fromlist_value_7 = mod_consts[57];
        tmp_level_value_7 = mod_consts[53];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 43;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$libs$win32, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 45;
        tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[58],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[60];
        tmp_assign_source_11 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[62]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[63];
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_12);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        assert(!(tmp_mvar_value_1 == NULL));
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[17];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pyglet$libs$win32;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[6];
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 50;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[66]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[67]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[66]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[68]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[66]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[69]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 56;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_7, mod_consts[71]);

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_pyglet$libs$win32$$$function__1_format_error();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$libs$win32$$$class__1_DebugLibrary_71 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_pyglet$libs$win32$$$class__1_DebugLibrary_71, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyDict_SetItem(locals_pyglet$libs$win32$$$class__1_DebugLibrary_71, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$libs$win32$$$function__2___init__();

        tmp_res = PyDict_SetItem(locals_pyglet$libs$win32$$$class__1_DebugLibrary_71, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$libs$win32$$$function__3___getattr__();

        tmp_res = PyDict_SetItem(locals_pyglet$libs$win32$$$class__1_DebugLibrary_71, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_8 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[74];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyglet$libs$win32$$$class__1_DebugLibrary_71;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 71;
            tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_21 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$libs$win32$$$class__1_DebugLibrary_71);
        locals_pyglet$libs$win32$$$class__1_DebugLibrary_71 = NULL;
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

        Py_DECREF(locals_pyglet$libs$win32$$$class__1_DebugLibrary_71);
        locals_pyglet$libs$win32$$$class__1_DebugLibrary_71 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 71;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_21);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_pyglet$libs$win32$$$function__4_lambda();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_23);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_15;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        assert(!(tmp_called_value_9 == NULL));
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[82]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 92;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_16;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[66]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 93;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_17;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[85]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 94;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_18;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[87]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 95;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_19;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[89]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 96;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_20;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[91]);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 97;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_21;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[92]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 98;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_22;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[95]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[96], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_23;
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_13;
            PyList_SET_ITEM0(tmp_assattr_value_5, 0, tmp_list_element_2);
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM0(tmp_assattr_value_5, 1, tmp_list_element_2);
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM0(tmp_assattr_value_5, 2, tmp_list_element_2);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_2;
            }
            tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_args_element_value_13 == NULL)) {
                tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_2;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 102;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_13);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 3, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[95]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[100], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_24;
        tmp_assattr_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_6 == NULL)) {
            tmp_assattr_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[102]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[96], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_25;
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_14;
            PyList_SET_ITEM0(tmp_assattr_value_7, 0, tmp_list_element_3);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_3;
            }
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_3;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 104;
            tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_14);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_7, 1, tmp_list_element_3);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[102]);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[100], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_26;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[106]);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[96], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_list_element_4;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_27;
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_9, 0, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_9, 1, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_9, 2, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_9, 3, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_9, 4, tmp_list_element_4);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[106]);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[100], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_28;
        tmp_assattr_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_assattr_value_10 == NULL)) {
            tmp_assattr_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[108]);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[96], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_list_element_5;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_29;
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_11, 0, tmp_list_element_5);
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[108]);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[100], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_30;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[109]);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[96], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_6;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_31;
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_16;
            PyList_SET_ITEM0(tmp_assattr_value_13, 0, tmp_list_element_6);
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_args_element_value_15 == NULL)) {
                tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 110;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_15);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 1, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_value_13, 2, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_value_13, 3, tmp_list_element_6);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_args_element_value_16 == NULL)) {
                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 110;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 4, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_value_13, 5, tmp_list_element_6);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[109]);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[100], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_32;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[112]);
        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[96], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_7;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_33;
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(6);
        PyList_SET_ITEM0(tmp_assattr_value_15, 0, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 1, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 2, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 3, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 4, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_15, 5, tmp_list_element_7);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[112]);
        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[100], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_34;
        tmp_assattr_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_assattr_value_16 == NULL)) {
            tmp_assattr_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[114]);
        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[96], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_list_element_8;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_35;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 114;
        tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_17, 0, tmp_list_element_8);
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[114]);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[100], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_36;
        tmp_assattr_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_assattr_value_18 == NULL)) {
            tmp_assattr_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[116]);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[96], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_37;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 116;
        tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_19, 0, tmp_list_element_9);
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[116]);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[100], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_38;
        tmp_assattr_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_20 == NULL)) {
            tmp_assattr_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[119]);
        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[96], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_list_element_10;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_39;
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_21 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_21, 0, tmp_list_element_10);
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[119]);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[100], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_40;
        tmp_assattr_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_22 == NULL)) {
            tmp_assattr_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[120]);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[96], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_list_element_11;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_41;
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_23 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_23, 0, tmp_list_element_11);
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[120]);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[100], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_expression_value_42;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[122]);
        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[96], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_target_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_expression_value_43;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_25 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_19;
            PyList_SET_ITEM0(tmp_assattr_value_25, 0, tmp_list_element_12);
            tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_list_element_12 == NULL)) {
                tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM0(tmp_assattr_value_25, 1, tmp_list_element_12);
            tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_12 == NULL)) {
                tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM0(tmp_assattr_value_25, 2, tmp_list_element_12);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto list_build_exception_7;
            }
            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_args_element_value_19 == NULL)) {
                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
            }

            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto list_build_exception_7;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 122;
            tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_19);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_25, 3, tmp_list_element_12);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_25);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[122]);
        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[100], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_target_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_44;
        tmp_assattr_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_26 == NULL)) {
            tmp_assattr_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[123]);
        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[96], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_45;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_27 = MAKE_LIST_EMPTY(8);
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_20;
            PyList_SET_ITEM0(tmp_assattr_value_27, 0, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_27, 1, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_27, 2, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_27, 3, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_27, 4, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_27, 5, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_assattr_value_27, 6, tmp_list_element_13);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_args_element_value_20 == NULL)) {
                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
            }

            if (tmp_args_element_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 124;
            tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_20);
            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_27, 7, tmp_list_element_13);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_27);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[123]);
        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[100], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_expression_value_46;
        tmp_assattr_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_28 == NULL)) {
            tmp_assattr_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[127]);
        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[96], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_target_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_assattr_target_29;
        PyObject *tmp_expression_value_47;
        tmp_assattr_value_29 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[127]);
        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[100], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_target_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_assattr_target_30;
        PyObject *tmp_expression_value_48;
        tmp_assattr_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_30 == NULL)) {
            tmp_assattr_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[128]);
        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[96], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_target_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_list_element_14;
        PyObject *tmp_assattr_target_31;
        PyObject *tmp_expression_value_49;
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_31 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_21;
            PyList_SET_ITEM0(tmp_assattr_value_31, 0, tmp_list_element_14);
            tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_14 == NULL)) {
                tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_31, 1, tmp_list_element_14);
            tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_14 == NULL)) {
                tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_31, 2, tmp_list_element_14);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_args_element_value_21 == NULL)) {
                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 128;
            tmp_list_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_21);
            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_31, 3, tmp_list_element_14);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_31);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[128]);
        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[100], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_target_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_assattr_target_32;
        PyObject *tmp_expression_value_50;
        tmp_assattr_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_32 == NULL)) {
            tmp_assattr_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[130]);
        if (tmp_assattr_target_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[96], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_target_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_list_element_15;
        PyObject *tmp_assattr_target_33;
        PyObject *tmp_expression_value_51;
        tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_15 == NULL)) {
            tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_33 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_22;
            PyList_SET_ITEM0(tmp_assattr_value_33, 0, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM0(tmp_assattr_value_33, 1, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM0(tmp_assattr_value_33, 2, tmp_list_element_15);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto list_build_exception_10;
            }
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto list_build_exception_10;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 130;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_22);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_33, 3, tmp_list_element_15);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_33);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_33);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[130]);
        if (tmp_assattr_target_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_33);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[100], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_target_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_assattr_target_34;
        PyObject *tmp_expression_value_52;
        tmp_assattr_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_value_34 == NULL)) {
            tmp_assattr_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_assattr_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[131]);
        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[96], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_target_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_list_element_16;
        PyObject *tmp_assattr_target_35;
        PyObject *tmp_expression_value_53;
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_35 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_35, 0, tmp_list_element_16);
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_35);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[131]);
        if (tmp_assattr_target_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_35);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[100], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_target_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_assattr_target_36;
        PyObject *tmp_expression_value_54;
        tmp_assattr_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_36 == NULL)) {
            tmp_assattr_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[132]);
        if (tmp_assattr_target_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[96], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_target_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_list_element_17;
        PyObject *tmp_assattr_target_37;
        PyObject *tmp_expression_value_55;
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_37 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_23;
            PyList_SET_ITEM0(tmp_assattr_value_37, 0, tmp_list_element_17);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto list_build_exception_11;
            }
            tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[133]);

            if (unlikely(tmp_args_element_value_23 == NULL)) {
                tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
            }

            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto list_build_exception_11;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 134;
            tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_23);
            if (tmp_list_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_assattr_value_37, 1, tmp_list_element_17);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_37);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_37);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[132]);
        if (tmp_assattr_target_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_37);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[100], tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_target_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_assattr_target_38;
        PyObject *tmp_expression_value_56;
        tmp_assattr_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_value_38 == NULL)) {
            tmp_assattr_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_assattr_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[134]);
        if (tmp_assattr_target_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[96], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_target_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_list_element_18;
        PyObject *tmp_assattr_target_39;
        PyObject *tmp_expression_value_57;
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_39 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_39, 0, tmp_list_element_18);
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_value_39, 1, tmp_list_element_18);
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_39);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_39);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[134]);
        if (tmp_assattr_target_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_39);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[100], tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_target_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_assattr_target_40;
        PyObject *tmp_expression_value_58;
        tmp_assattr_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_assattr_value_40 == NULL)) {
            tmp_assattr_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_assattr_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[136]);
        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[96], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_target_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_list_element_19;
        PyObject *tmp_assattr_target_41;
        PyObject *tmp_expression_value_59;
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_41 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_41, 0, tmp_list_element_19);
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_41, 1, tmp_list_element_19);
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_41);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_41);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[136]);
        if (tmp_assattr_target_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_41);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[100], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_target_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_assattr_target_42;
        PyObject *tmp_expression_value_60;
        tmp_assattr_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_42 == NULL)) {
            tmp_assattr_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[137]);
        if (tmp_assattr_target_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[96], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_target_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_list_element_20;
        PyObject *tmp_assattr_target_43;
        PyObject *tmp_expression_value_61;
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_43 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_43, 0, tmp_list_element_20);
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_43, 1, tmp_list_element_20);
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_assattr_value_43);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_43);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[137]);
        if (tmp_assattr_target_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_43);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[100], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_target_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_assattr_target_44;
        PyObject *tmp_expression_value_62;
        tmp_assattr_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_44 == NULL)) {
            tmp_assattr_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[138]);
        if (tmp_assattr_target_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[96], tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_target_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_list_element_21;
        PyObject *tmp_assattr_target_45;
        PyObject *tmp_expression_value_63;
        tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_21 == NULL)) {
            tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_45 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_24;
            PyList_SET_ITEM0(tmp_assattr_value_45, 0, tmp_list_element_21);
            tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

            if (unlikely(tmp_list_element_21 == NULL)) {
                tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
            }

            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_15;
            }
            PyList_SET_ITEM0(tmp_assattr_value_45, 1, tmp_list_element_21);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_15;
            }
            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_args_element_value_24 == NULL)) {
                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_15;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 142;
            tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_24);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_15;
            }
            PyList_SET_ITEM(tmp_assattr_value_45, 2, tmp_list_element_21);
        }
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_assattr_value_45);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_45);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[138]);
        if (tmp_assattr_target_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_45);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[100], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_target_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_assattr_target_46;
        PyObject *tmp_expression_value_64;
        tmp_assattr_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_assattr_value_46 == NULL)) {
            tmp_assattr_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_assattr_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[139]);
        if (tmp_assattr_target_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[96], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_target_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_list_element_22;
        PyObject *tmp_assattr_target_47;
        PyObject *tmp_expression_value_65;
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_47 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_47, 0, tmp_list_element_22);
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto list_build_exception_16;
        }
        PyList_SET_ITEM0(tmp_assattr_value_47, 1, tmp_list_element_22);
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_assattr_value_47);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_47);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[139]);
        if (tmp_assattr_target_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_47);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[100], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_target_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_assattr_target_48;
        PyObject *tmp_expression_value_66;
        tmp_assattr_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_48 == NULL)) {
            tmp_assattr_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[140]);
        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[96], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_target_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_list_element_23;
        PyObject *tmp_assattr_target_49;
        PyObject *tmp_expression_value_67;
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_49 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_49, 0, tmp_list_element_23);
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_49);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[140]);
        if (tmp_assattr_target_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_49);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[100], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_target_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_assattr_target_50;
        PyObject *tmp_expression_value_68;
        tmp_assattr_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_50 == NULL)) {
            tmp_assattr_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[141]);
        if (tmp_assattr_target_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[96], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_target_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_list_element_24;
        PyObject *tmp_assattr_target_51;
        PyObject *tmp_expression_value_69;
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_51 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_51, 0, tmp_list_element_24);
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_51);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[141]);
        if (tmp_assattr_target_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_51);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[100], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_target_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_assattr_target_52;
        PyObject *tmp_expression_value_70;
        tmp_assattr_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_value_52 == NULL)) {
            tmp_assattr_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assattr_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[142]);
        if (tmp_assattr_target_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[96], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_target_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_list_element_25;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_assattr_target_53;
        PyObject *tmp_expression_value_71;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 151;
        tmp_list_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_25);
        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_53 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM(tmp_assattr_value_53, 0, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_53, 1, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_53, 2, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_53, 3, tmp_list_element_25);
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_assattr_value_53);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_53);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[142]);
        if (tmp_assattr_target_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_53);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[100], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_target_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_assattr_target_54;
        PyObject *tmp_expression_value_72;
        tmp_assattr_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_value_54 == NULL)) {
            tmp_assattr_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assattr_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[145]);
        if (tmp_assattr_target_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[96], tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_target_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_list_element_26;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_assattr_target_55;
        PyObject *tmp_expression_value_73;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 153;
        tmp_list_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_26);
        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_55 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assattr_value_55, 0, tmp_list_element_26);
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_55, 1, tmp_list_element_26);
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_55, 2, tmp_list_element_26);
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_assattr_value_55);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_55);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[145]);
        if (tmp_assattr_target_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_55);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[100], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_target_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_assattr_target_56;
        PyObject *tmp_expression_value_74;
        tmp_assattr_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_value_56 == NULL)) {
            tmp_assattr_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_assattr_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[146]);
        if (tmp_assattr_target_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[96], tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_target_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_assattr_target_57;
        PyObject *tmp_expression_value_75;
        tmp_assattr_value_57 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_57);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[146]);
        if (tmp_assattr_target_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_57);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[100], tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_target_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_assattr_target_58;
        PyObject *tmp_expression_value_76;
        tmp_assattr_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_assattr_value_58 == NULL)) {
            tmp_assattr_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        if (tmp_assattr_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[148]);
        if (tmp_assattr_target_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[96], tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_target_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_list_element_27;
        PyObject *tmp_assattr_target_59;
        PyObject *tmp_expression_value_77;
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_59 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_59, 0, tmp_list_element_27);
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_59);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[148]);
        if (tmp_assattr_target_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_59);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[100], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_target_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_assattr_target_60;
        PyObject *tmp_expression_value_78;
        tmp_assattr_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_assattr_value_60 == NULL)) {
            tmp_assattr_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        if (tmp_assattr_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[150]);
        if (tmp_assattr_target_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[96], tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_target_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_list_element_28;
        PyObject *tmp_assattr_target_61;
        PyObject *tmp_expression_value_79;
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_61 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_61, 0, tmp_list_element_28);
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto list_build_exception_19;
        }
        PyList_SET_ITEM0(tmp_assattr_value_61, 1, tmp_list_element_28);
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_assattr_value_61);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_61);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[150]);
        if (tmp_assattr_target_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_61);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[100], tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_target_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_62;
        PyObject *tmp_assattr_target_62;
        PyObject *tmp_expression_value_80;
        tmp_assattr_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_assattr_value_62 == NULL)) {
            tmp_assattr_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_assattr_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[153]);
        if (tmp_assattr_target_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_62, mod_consts[96], tmp_assattr_value_62);
        Py_DECREF(tmp_assattr_target_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_63;
        PyObject *tmp_list_element_29;
        PyObject *tmp_assattr_target_63;
        PyObject *tmp_expression_value_81;
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_63 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_63, 0, tmp_list_element_29);
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_63);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[153]);
        if (tmp_assattr_target_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_63);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_63, mod_consts[100], tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_target_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_64;
        PyObject *tmp_assattr_target_64;
        PyObject *tmp_expression_value_82;
        tmp_assattr_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_64 == NULL)) {
            tmp_assattr_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[154]);
        if (tmp_assattr_target_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_64, mod_consts[96], tmp_assattr_value_64);
        Py_DECREF(tmp_assattr_target_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_65;
        PyObject *tmp_list_element_30;
        PyObject *tmp_assattr_target_65;
        PyObject *tmp_expression_value_83;
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_65 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_65, 0, tmp_list_element_30);
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_65);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[154]);
        if (tmp_assattr_target_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_65);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_65, mod_consts[100], tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_target_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_66;
        PyObject *tmp_assattr_target_66;
        PyObject *tmp_expression_value_84;
        tmp_assattr_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_value_66 == NULL)) {
            tmp_assattr_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_assattr_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[68]);
        if (tmp_assattr_target_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_66, mod_consts[96], tmp_assattr_value_66);
        Py_DECREF(tmp_assattr_target_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_67;
        PyObject *tmp_list_element_31;
        PyObject *tmp_assattr_target_67;
        PyObject *tmp_expression_value_85;
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_67 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_67, 0, tmp_list_element_31);
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_67);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[68]);
        if (tmp_assattr_target_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_67);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_67, mod_consts[100], tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_target_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_68;
        PyObject *tmp_assattr_target_68;
        PyObject *tmp_expression_value_86;
        tmp_assattr_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_68 == NULL)) {
            tmp_assattr_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[155]);
        if (tmp_assattr_target_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_68, mod_consts[96], tmp_assattr_value_68);
        Py_DECREF(tmp_assattr_target_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_69;
        PyObject *tmp_list_element_32;
        PyObject *tmp_assattr_target_69;
        PyObject *tmp_expression_value_87;
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_69 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_27;
            PyList_SET_ITEM0(tmp_assattr_value_69, 0, tmp_list_element_32);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_20;
            }
            tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_args_element_value_27 == NULL)) {
                tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_20;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 167;
            tmp_list_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_27);
            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM(tmp_assattr_value_69, 1, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[157]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM0(tmp_assattr_value_69, 2, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM0(tmp_assattr_value_69, 3, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM0(tmp_assattr_value_69, 4, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto list_build_exception_20;
            }
            PyList_SET_ITEM0(tmp_assattr_value_69, 5, tmp_list_element_32);
        }
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_assattr_value_69);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_69);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[155]);
        if (tmp_assattr_target_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_69);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_69, mod_consts[100], tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_target_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_70;
        PyObject *tmp_assattr_target_70;
        PyObject *tmp_expression_value_88;
        tmp_assattr_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_value_70 == NULL)) {
            tmp_assattr_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_assattr_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[158]);
        if (tmp_assattr_target_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_70, mod_consts[96], tmp_assattr_value_70);
        Py_DECREF(tmp_assattr_target_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_71;
        PyObject *tmp_list_element_33;
        PyObject *tmp_assattr_target_71;
        PyObject *tmp_expression_value_89;
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_71 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_71, 0, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto list_build_exception_21;
        }
        PyList_SET_ITEM0(tmp_assattr_value_71, 1, tmp_list_element_33);
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_assattr_value_71);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_71);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[158]);
        if (tmp_assattr_target_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_71);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_71, mod_consts[100], tmp_assattr_value_71);
        Py_DECREF(tmp_assattr_value_71);
        Py_DECREF(tmp_assattr_target_71);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_72;
        PyObject *tmp_assattr_target_72;
        PyObject *tmp_expression_value_90;
        tmp_assattr_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_72 == NULL)) {
            tmp_assattr_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[159]);
        if (tmp_assattr_target_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_72, mod_consts[96], tmp_assattr_value_72);
        Py_DECREF(tmp_assattr_target_72);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_73;
        PyObject *tmp_list_element_34;
        PyObject *tmp_assattr_target_73;
        PyObject *tmp_expression_value_91;
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_73 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_73, 0, tmp_list_element_34);
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_73, 1, tmp_list_element_34);
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_73, 2, tmp_list_element_34);
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_73, 3, tmp_list_element_34);
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_assattr_value_73);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_73);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[159]);
        if (tmp_assattr_target_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_73);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_73, mod_consts[100], tmp_assattr_value_73);
        Py_DECREF(tmp_assattr_value_73);
        Py_DECREF(tmp_assattr_target_73);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_74;
        PyObject *tmp_assattr_target_74;
        PyObject *tmp_expression_value_92;
        tmp_assattr_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_value_74 == NULL)) {
            tmp_assattr_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_assattr_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[160]);
        if (tmp_assattr_target_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_74, mod_consts[96], tmp_assattr_value_74);
        Py_DECREF(tmp_assattr_target_74);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_75;
        PyObject *tmp_list_element_35;
        PyObject *tmp_assattr_target_75;
        PyObject *tmp_expression_value_93;
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_75 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_28;
            PyList_SET_ITEM0(tmp_assattr_value_75, 0, tmp_list_element_35);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_23;
            }
            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_args_element_value_28 == NULL)) {
                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
            }

            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_23;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 174;
            tmp_list_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_28);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM(tmp_assattr_value_75, 1, tmp_list_element_35);
            tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_list_element_35 == NULL)) {
                tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
            }

            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM0(tmp_assattr_value_75, 2, tmp_list_element_35);
            tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_list_element_35 == NULL)) {
                tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM0(tmp_assattr_value_75, 3, tmp_list_element_35);
            tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

            if (unlikely(tmp_list_element_35 == NULL)) {
                tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
            }

            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM0(tmp_assattr_value_75, 4, tmp_list_element_35);
        }
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_assattr_value_75);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_75);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[160]);
        if (tmp_assattr_target_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_75);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_75, mod_consts[100], tmp_assattr_value_75);
        Py_DECREF(tmp_assattr_value_75);
        Py_DECREF(tmp_assattr_target_75);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_76;
        PyObject *tmp_assattr_target_76;
        PyObject *tmp_expression_value_94;
        tmp_assattr_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_76 == NULL)) {
            tmp_assattr_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[163]);
        if (tmp_assattr_target_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_76, mod_consts[96], tmp_assattr_value_76);
        Py_DECREF(tmp_assattr_target_76);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_77;
        PyObject *tmp_list_element_36;
        PyObject *tmp_assattr_target_77;
        PyObject *tmp_expression_value_95;
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_77 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_77, 0, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_77, 1, tmp_list_element_36);
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_assattr_value_77);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_77);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[163]);
        if (tmp_assattr_target_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_77);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_77, mod_consts[100], tmp_assattr_value_77);
        Py_DECREF(tmp_assattr_value_77);
        Py_DECREF(tmp_assattr_target_77);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_78;
        PyObject *tmp_assattr_target_78;
        PyObject *tmp_expression_value_96;
        tmp_assattr_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_78 == NULL)) {
            tmp_assattr_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[165]);
        if (tmp_assattr_target_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_78, mod_consts[96], tmp_assattr_value_78);
        Py_DECREF(tmp_assattr_target_78);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_79;
        PyObject *tmp_list_element_37;
        PyObject *tmp_assattr_target_79;
        PyObject *tmp_expression_value_97;
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_79 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_79, 0, tmp_list_element_37);
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_79);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[165]);
        if (tmp_assattr_target_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_79);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_79, mod_consts[100], tmp_assattr_value_79);
        Py_DECREF(tmp_assattr_value_79);
        Py_DECREF(tmp_assattr_target_79);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_80;
        PyObject *tmp_assattr_target_80;
        PyObject *tmp_expression_value_98;
        tmp_assattr_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_value_80 == NULL)) {
            tmp_assattr_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_assattr_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[167]);
        if (tmp_assattr_target_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_80, mod_consts[96], tmp_assattr_value_80);
        Py_DECREF(tmp_assattr_target_80);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_81;
        PyObject *tmp_list_element_38;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_assattr_target_81;
        PyObject *tmp_expression_value_99;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 180;
        tmp_list_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_29);
        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_81 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_81, 0, tmp_list_element_38);
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_81);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[167]);
        if (tmp_assattr_target_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_81);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_81, mod_consts[100], tmp_assattr_value_81);
        Py_DECREF(tmp_assattr_value_81);
        Py_DECREF(tmp_assattr_target_81);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_82;
        PyObject *tmp_assattr_target_82;
        PyObject *tmp_expression_value_100;
        tmp_assattr_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assattr_value_82 == NULL)) {
            tmp_assattr_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_assattr_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[169]);
        if (tmp_assattr_target_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_82, mod_consts[96], tmp_assattr_value_82);
        Py_DECREF(tmp_assattr_target_82);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_83;
        PyObject *tmp_list_element_39;
        PyObject *tmp_assattr_target_83;
        PyObject *tmp_expression_value_101;
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_83 = MAKE_LIST_EMPTY(12);
        PyList_SET_ITEM0(tmp_assattr_value_83, 0, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 1, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 2, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 3, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 4, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 5, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 6, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 7, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 8, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 9, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 10, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 11, tmp_list_element_39);
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_assattr_value_83);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_83);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[169]);
        if (tmp_assattr_target_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_83);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_83, mod_consts[100], tmp_assattr_value_83);
        Py_DECREF(tmp_assattr_value_83);
        Py_DECREF(tmp_assattr_target_83);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_84;
        PyObject *tmp_assattr_target_84;
        PyObject *tmp_expression_value_102;
        tmp_assattr_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_value_84 == NULL)) {
            tmp_assattr_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        if (tmp_assattr_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[173]);
        if (tmp_assattr_target_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_84, mod_consts[96], tmp_assattr_value_84);
        Py_DECREF(tmp_assattr_target_84);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_85;
        PyObject *tmp_list_element_40;
        PyObject *tmp_assattr_target_85;
        PyObject *tmp_expression_value_103;
        tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_40 == NULL)) {
            tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_85 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_85, 0, tmp_list_element_40);
        tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_40 == NULL)) {
            tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto list_build_exception_26;
        }
        PyList_SET_ITEM0(tmp_assattr_value_85, 1, tmp_list_element_40);
        tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_list_element_40 == NULL)) {
            tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[174]);
        }

        if (tmp_list_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto list_build_exception_26;
        }
        PyList_SET_ITEM0(tmp_assattr_value_85, 2, tmp_list_element_40);
        tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_40 == NULL)) {
            tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto list_build_exception_26;
        }
        PyList_SET_ITEM0(tmp_assattr_value_85, 3, tmp_list_element_40);
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_assattr_value_85);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_85);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[173]);
        if (tmp_assattr_target_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_85);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_85, mod_consts[100], tmp_assattr_value_85);
        Py_DECREF(tmp_assattr_value_85);
        Py_DECREF(tmp_assattr_target_85);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_86;
        PyObject *tmp_assattr_target_86;
        PyObject *tmp_expression_value_104;
        tmp_assattr_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_86 == NULL)) {
            tmp_assattr_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[176]);
        if (tmp_assattr_target_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_86, mod_consts[96], tmp_assattr_value_86);
        Py_DECREF(tmp_assattr_target_86);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_87;
        PyObject *tmp_list_element_41;
        PyObject *tmp_assattr_target_87;
        PyObject *tmp_expression_value_105;
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_87 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_87, 0, tmp_list_element_41);
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_87);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[176]);
        if (tmp_assattr_target_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_87);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_87, mod_consts[100], tmp_assattr_value_87);
        Py_DECREF(tmp_assattr_value_87);
        Py_DECREF(tmp_assattr_target_87);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_88;
        PyObject *tmp_assattr_target_88;
        PyObject *tmp_expression_value_106;
        tmp_assattr_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_value_88 == NULL)) {
            tmp_assattr_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        if (tmp_assattr_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[177]);
        if (tmp_assattr_target_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_88, mod_consts[96], tmp_assattr_value_88);
        Py_DECREF(tmp_assattr_target_88);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_89;
        PyObject *tmp_list_element_42;
        PyObject *tmp_assattr_target_89;
        PyObject *tmp_expression_value_107;
        tmp_list_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_list_element_42 == NULL)) {
            tmp_list_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_list_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_89 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_89, 0, tmp_list_element_42);
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_89);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[177]);
        if (tmp_assattr_target_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_89);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_89, mod_consts[100], tmp_assattr_value_89);
        Py_DECREF(tmp_assattr_value_89);
        Py_DECREF(tmp_assattr_target_89);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_90;
        PyObject *tmp_assattr_target_90;
        PyObject *tmp_expression_value_108;
        tmp_assattr_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_90 == NULL)) {
            tmp_assattr_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[179]);
        if (tmp_assattr_target_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_90, mod_consts[96], tmp_assattr_value_90);
        Py_DECREF(tmp_assattr_target_90);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_91;
        PyObject *tmp_list_element_43;
        PyObject *tmp_assattr_target_91;
        PyObject *tmp_expression_value_109;
        tmp_list_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_43 == NULL)) {
            tmp_list_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_91 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_91, 0, tmp_list_element_43);
        tmp_list_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_43 == NULL)) {
            tmp_list_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_list_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto list_build_exception_27;
        }
        PyList_SET_ITEM0(tmp_assattr_value_91, 1, tmp_list_element_43);
        tmp_list_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_list_element_43 == NULL)) {
            tmp_list_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        if (tmp_list_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto list_build_exception_27;
        }
        PyList_SET_ITEM0(tmp_assattr_value_91, 2, tmp_list_element_43);
        tmp_list_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_43 == NULL)) {
            tmp_list_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto list_build_exception_27;
        }
        PyList_SET_ITEM0(tmp_assattr_value_91, 3, tmp_list_element_43);
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_assattr_value_91);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_91);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[179]);
        if (tmp_assattr_target_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_91);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_91, mod_consts[100], tmp_assattr_value_91);
        Py_DECREF(tmp_assattr_value_91);
        Py_DECREF(tmp_assattr_target_91);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_92;
        PyObject *tmp_assattr_target_92;
        PyObject *tmp_expression_value_110;
        tmp_assattr_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_92 == NULL)) {
            tmp_assattr_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[181]);
        if (tmp_assattr_target_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_92, mod_consts[96], tmp_assattr_value_92);
        Py_DECREF(tmp_assattr_target_92);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_93;
        PyObject *tmp_list_element_44;
        PyObject *tmp_assattr_target_93;
        PyObject *tmp_expression_value_111;
        tmp_list_element_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_44 == NULL)) {
            tmp_list_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_93 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_30;
            PyList_SET_ITEM0(tmp_assattr_value_93, 0, tmp_list_element_44);
            tmp_list_element_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_list_element_44 == NULL)) {
                tmp_list_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_list_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM0(tmp_assattr_value_93, 1, tmp_list_element_44);
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto list_build_exception_28;
            }
            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[161]);

            if (unlikely(tmp_args_element_value_30 == NULL)) {
                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
            }

            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto list_build_exception_28;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 193;
            tmp_list_element_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_30);
            if (tmp_list_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM(tmp_assattr_value_93, 2, tmp_list_element_44);
        }
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_assattr_value_93);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_93);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[181]);
        if (tmp_assattr_target_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_93);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_93, mod_consts[100], tmp_assattr_value_93);
        Py_DECREF(tmp_assattr_value_93);
        Py_DECREF(tmp_assattr_target_93);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_94;
        PyObject *tmp_assattr_target_94;
        PyObject *tmp_expression_value_112;
        tmp_assattr_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_94 == NULL)) {
            tmp_assattr_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[182]);
        if (tmp_assattr_target_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_94, mod_consts[96], tmp_assattr_value_94);
        Py_DECREF(tmp_assattr_target_94);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_95;
        PyObject *tmp_list_element_45;
        PyObject *tmp_assattr_target_95;
        PyObject *tmp_expression_value_113;
        tmp_list_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_45 == NULL)) {
            tmp_list_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_95 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_95, 0, tmp_list_element_45);
        tmp_list_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_45 == NULL)) {
            tmp_list_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_list_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_95, 1, tmp_list_element_45);
        tmp_list_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_list_element_45 == NULL)) {
            tmp_list_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[183]);
        }

        if (tmp_list_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_95, 2, tmp_list_element_45);
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_assattr_value_95);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_95);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[182]);
        if (tmp_assattr_target_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_95);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_95, mod_consts[100], tmp_assattr_value_95);
        Py_DECREF(tmp_assattr_value_95);
        Py_DECREF(tmp_assattr_target_95);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_96;
        PyObject *tmp_assattr_target_96;
        PyObject *tmp_expression_value_114;
        tmp_assattr_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_96 == NULL)) {
            tmp_assattr_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[184]);
        if (tmp_assattr_target_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_96, mod_consts[96], tmp_assattr_value_96);
        Py_DECREF(tmp_assattr_target_96);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_97;
        PyObject *tmp_list_element_46;
        PyObject *tmp_assattr_target_97;
        PyObject *tmp_expression_value_115;
        tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_46 == NULL)) {
            tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_97 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_97, 0, tmp_list_element_46);
        tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_list_element_46 == NULL)) {
            tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_list_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto list_build_exception_30;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 1, tmp_list_element_46);
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_assattr_value_97);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_97);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[184]);
        if (tmp_assattr_target_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_97);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_97, mod_consts[100], tmp_assattr_value_97);
        Py_DECREF(tmp_assattr_value_97);
        Py_DECREF(tmp_assattr_target_97);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_98;
        PyObject *tmp_assattr_target_98;
        PyObject *tmp_expression_value_116;
        tmp_assattr_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_98 == NULL)) {
            tmp_assattr_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[185]);
        if (tmp_assattr_target_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_98, mod_consts[96], tmp_assattr_value_98);
        Py_DECREF(tmp_assattr_target_98);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_99;
        PyObject *tmp_list_element_47;
        PyObject *tmp_assattr_target_99;
        PyObject *tmp_expression_value_117;
        tmp_list_element_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_list_element_47 == NULL)) {
            tmp_list_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_list_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_99 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_99, 0, tmp_list_element_47);
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_99);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[185]);
        if (tmp_assattr_target_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_99);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_99, mod_consts[100], tmp_assattr_value_99);
        Py_DECREF(tmp_assattr_value_99);
        Py_DECREF(tmp_assattr_target_99);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_100;
        PyObject *tmp_assattr_target_100;
        PyObject *tmp_expression_value_118;
        tmp_assattr_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_value_100 == NULL)) {
            tmp_assattr_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_assattr_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[186]);
        if (tmp_assattr_target_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_100, mod_consts[96], tmp_assattr_value_100);
        Py_DECREF(tmp_assattr_target_100);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_101;
        PyObject *tmp_list_element_48;
        PyObject *tmp_assattr_target_101;
        PyObject *tmp_expression_value_119;
        tmp_list_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_48 == NULL)) {
            tmp_list_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_101 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_101, 0, tmp_list_element_48);
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_101);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[186]);
        if (tmp_assattr_target_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_101);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_101, mod_consts[100], tmp_assattr_value_101);
        Py_DECREF(tmp_assattr_value_101);
        Py_DECREF(tmp_assattr_target_101);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_102;
        PyObject *tmp_assattr_target_102;
        PyObject *tmp_expression_value_120;
        tmp_assattr_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assattr_value_102 == NULL)) {
            tmp_assattr_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_assattr_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[187]);
        if (tmp_assattr_target_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_102, mod_consts[96], tmp_assattr_value_102);
        Py_DECREF(tmp_assattr_target_102);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_103;
        PyObject *tmp_assattr_target_103;
        PyObject *tmp_expression_value_121;
        tmp_assattr_value_103 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_103);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[187]);
        if (tmp_assattr_target_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_103);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_103, mod_consts[100], tmp_assattr_value_103);
        Py_DECREF(tmp_assattr_value_103);
        Py_DECREF(tmp_assattr_target_103);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_104;
        PyObject *tmp_assattr_target_104;
        PyObject *tmp_expression_value_122;
        tmp_assattr_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_assattr_value_104 == NULL)) {
            tmp_assattr_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_assattr_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[189]);
        if (tmp_assattr_target_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_104, mod_consts[96], tmp_assattr_value_104);
        Py_DECREF(tmp_assattr_target_104);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_105;
        PyObject *tmp_list_element_49;
        PyObject *tmp_assattr_target_105;
        PyObject *tmp_expression_value_123;
        tmp_list_element_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_49 == NULL)) {
            tmp_list_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_105 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_105, 0, tmp_list_element_49);
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_105);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[189]);
        if (tmp_assattr_target_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_105);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_105, mod_consts[100], tmp_assattr_value_105);
        Py_DECREF(tmp_assattr_value_105);
        Py_DECREF(tmp_assattr_target_105);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_106;
        PyObject *tmp_assattr_target_106;
        PyObject *tmp_expression_value_124;
        tmp_assattr_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_106 == NULL)) {
            tmp_assattr_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[190]);
        if (tmp_assattr_target_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_106, mod_consts[96], tmp_assattr_value_106);
        Py_DECREF(tmp_assattr_target_106);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_107;
        PyObject *tmp_list_element_50;
        PyObject *tmp_assattr_target_107;
        PyObject *tmp_expression_value_125;
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_107 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_107, 0, tmp_list_element_50);
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_107, 1, tmp_list_element_50);
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_107, 2, tmp_list_element_50);
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_107, 3, tmp_list_element_50);
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_assattr_value_107);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_107);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[190]);
        if (tmp_assattr_target_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_107);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_107, mod_consts[100], tmp_assattr_value_107);
        Py_DECREF(tmp_assattr_value_107);
        Py_DECREF(tmp_assattr_target_107);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_108;
        PyObject *tmp_assattr_target_108;
        PyObject *tmp_expression_value_126;
        tmp_assattr_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_108 == NULL)) {
            tmp_assattr_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[191]);
        if (tmp_assattr_target_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_108, mod_consts[96], tmp_assattr_value_108);
        Py_DECREF(tmp_assattr_target_108);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_109;
        PyObject *tmp_list_element_51;
        PyObject *tmp_assattr_target_109;
        PyObject *tmp_expression_value_127;
        tmp_list_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_list_element_51 == NULL)) {
            tmp_list_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        if (tmp_list_element_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_109 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_31;
            PyList_SET_ITEM0(tmp_assattr_value_109, 0, tmp_list_element_51);
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto list_build_exception_32;
            }
            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[193]);

            if (unlikely(tmp_args_element_value_31 == NULL)) {
                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
            }

            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto list_build_exception_32;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 210;
            tmp_list_element_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_31);
            if (tmp_list_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto list_build_exception_32;
            }
            PyList_SET_ITEM(tmp_assattr_value_109, 1, tmp_list_element_51);
        }
        goto list_build_noexception_32;
        // Exception handling pass through code for list_build:
        list_build_exception_32:;
        Py_DECREF(tmp_assattr_value_109);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_32:;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_109);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[191]);
        if (tmp_assattr_target_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_109);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_109, mod_consts[100], tmp_assattr_value_109);
        Py_DECREF(tmp_assattr_value_109);
        Py_DECREF(tmp_assattr_target_109);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_110;
        PyObject *tmp_assattr_target_110;
        PyObject *tmp_expression_value_128;
        tmp_assattr_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_value_110 == NULL)) {
            tmp_assattr_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_assattr_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[194]);
        if (tmp_assattr_target_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_110, mod_consts[96], tmp_assattr_value_110);
        Py_DECREF(tmp_assattr_target_110);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_111;
        PyObject *tmp_list_element_52;
        PyObject *tmp_assattr_target_111;
        PyObject *tmp_expression_value_129;
        tmp_list_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_52 == NULL)) {
            tmp_list_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_111 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_111, 0, tmp_list_element_52);
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_111);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[194]);
        if (tmp_assattr_target_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_111);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_111, mod_consts[100], tmp_assattr_value_111);
        Py_DECREF(tmp_assattr_value_111);
        Py_DECREF(tmp_assattr_target_111);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_112;
        PyObject *tmp_assattr_target_112;
        PyObject *tmp_expression_value_130;
        tmp_assattr_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_112 == NULL)) {
            tmp_assattr_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[195]);
        if (tmp_assattr_target_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_112, mod_consts[96], tmp_assattr_value_112);
        Py_DECREF(tmp_assattr_target_112);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_113;
        PyObject *tmp_list_element_53;
        PyObject *tmp_assattr_target_113;
        PyObject *tmp_expression_value_131;
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_113 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_113, 0, tmp_list_element_53);
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_113);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[195]);
        if (tmp_assattr_target_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_113);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_113, mod_consts[100], tmp_assattr_value_113);
        Py_DECREF(tmp_assattr_value_113);
        Py_DECREF(tmp_assattr_target_113);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_114;
        PyObject *tmp_assattr_target_114;
        PyObject *tmp_expression_value_132;
        tmp_assattr_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_value_114 == NULL)) {
            tmp_assattr_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_assattr_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[197]);
        if (tmp_assattr_target_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_114, mod_consts[96], tmp_assattr_value_114);
        Py_DECREF(tmp_assattr_target_114);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_115;
        PyObject *tmp_list_element_54;
        PyObject *tmp_assattr_target_115;
        PyObject *tmp_expression_value_133;
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_115 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_115, 0, tmp_list_element_54);
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto list_build_exception_33;
        }
        PyList_SET_ITEM0(tmp_assattr_value_115, 1, tmp_list_element_54);
        goto list_build_noexception_33;
        // Exception handling pass through code for list_build:
        list_build_exception_33:;
        Py_DECREF(tmp_assattr_value_115);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_33:;
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_115);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[197]);
        if (tmp_assattr_target_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_115);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_115, mod_consts[100], tmp_assattr_value_115);
        Py_DECREF(tmp_assattr_value_115);
        Py_DECREF(tmp_assattr_target_115);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_116;
        PyObject *tmp_assattr_target_116;
        PyObject *tmp_expression_value_134;
        tmp_assattr_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_value_116 == NULL)) {
            tmp_assattr_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_assattr_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[198]);
        if (tmp_assattr_target_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_116, mod_consts[96], tmp_assattr_value_116);
        Py_DECREF(tmp_assattr_target_116);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_117;
        PyObject *tmp_list_element_55;
        PyObject *tmp_assattr_target_117;
        PyObject *tmp_expression_value_135;
        tmp_list_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_list_element_55 == NULL)) {
            tmp_list_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_list_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_117 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_117, 0, tmp_list_element_55);
        tmp_list_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_55 == NULL)) {
            tmp_list_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto list_build_exception_34;
        }
        PyList_SET_ITEM0(tmp_assattr_value_117, 1, tmp_list_element_55);
        goto list_build_noexception_34;
        // Exception handling pass through code for list_build:
        list_build_exception_34:;
        Py_DECREF(tmp_assattr_value_117);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_34:;
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_117);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[198]);
        if (tmp_assattr_target_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_117);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_117, mod_consts[100], tmp_assattr_value_117);
        Py_DECREF(tmp_assattr_value_117);
        Py_DECREF(tmp_assattr_target_117);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_118;
        PyObject *tmp_assattr_target_118;
        PyObject *tmp_expression_value_136;
        tmp_assattr_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_value_118 == NULL)) {
            tmp_assattr_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_assattr_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[199]);
        if (tmp_assattr_target_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_118, mod_consts[96], tmp_assattr_value_118);
        Py_DECREF(tmp_assattr_target_118);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_119;
        PyObject *tmp_list_element_56;
        PyObject *tmp_assattr_target_119;
        PyObject *tmp_expression_value_137;
        tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_56 == NULL)) {
            tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_119 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_119, 0, tmp_list_element_56);
        tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_56 == NULL)) {
            tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto list_build_exception_35;
        }
        PyList_SET_ITEM0(tmp_assattr_value_119, 1, tmp_list_element_56);
        goto list_build_noexception_35;
        // Exception handling pass through code for list_build:
        list_build_exception_35:;
        Py_DECREF(tmp_assattr_value_119);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_35:;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_119);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[199]);
        if (tmp_assattr_target_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_119);

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_119, mod_consts[100], tmp_assattr_value_119);
        Py_DECREF(tmp_assattr_value_119);
        Py_DECREF(tmp_assattr_target_119);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_120;
        PyObject *tmp_assattr_target_120;
        PyObject *tmp_expression_value_138;
        tmp_assattr_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_120 == NULL)) {
            tmp_assattr_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[200]);
        if (tmp_assattr_target_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_120, mod_consts[96], tmp_assattr_value_120);
        Py_DECREF(tmp_assattr_target_120);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_121;
        PyObject *tmp_list_element_57;
        PyObject *tmp_assattr_target_121;
        PyObject *tmp_expression_value_139;
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_121 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_121, 0, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_assattr_value_121, 1, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_assattr_value_121, 2, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_assattr_value_121, 3, tmp_list_element_57);
        goto list_build_noexception_36;
        // Exception handling pass through code for list_build:
        list_build_exception_36:;
        Py_DECREF(tmp_assattr_value_121);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_36:;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_121);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[200]);
        if (tmp_assattr_target_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_121);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_121, mod_consts[100], tmp_assattr_value_121);
        Py_DECREF(tmp_assattr_value_121);
        Py_DECREF(tmp_assattr_target_121);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_122;
        PyObject *tmp_assattr_target_122;
        PyObject *tmp_expression_value_140;
        tmp_assattr_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_value_122 == NULL)) {
            tmp_assattr_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_assattr_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[201]);
        if (tmp_assattr_target_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_122, mod_consts[96], tmp_assattr_value_122);
        Py_DECREF(tmp_assattr_target_122);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_123;
        PyObject *tmp_list_element_58;
        PyObject *tmp_assattr_target_123;
        PyObject *tmp_expression_value_141;
        tmp_list_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_58 == NULL)) {
            tmp_list_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_123 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_32;
            PyList_SET_ITEM0(tmp_assattr_value_123, 0, tmp_list_element_58);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_37;
            }
            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_args_element_value_32 == NULL)) {
                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_37;
            }
            frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 224;
            tmp_list_element_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_32);
            if (tmp_list_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_37;
            }
            PyList_SET_ITEM(tmp_assattr_value_123, 1, tmp_list_element_58);
            tmp_list_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_list_element_58 == NULL)) {
                tmp_list_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_list_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_37;
            }
            PyList_SET_ITEM0(tmp_assattr_value_123, 2, tmp_list_element_58);
            tmp_list_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_list_element_58 == NULL)) {
                tmp_list_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_list_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_37;
            }
            PyList_SET_ITEM0(tmp_assattr_value_123, 3, tmp_list_element_58);
            tmp_list_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_list_element_58 == NULL)) {
                tmp_list_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_list_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_37;
            }
            PyList_SET_ITEM0(tmp_assattr_value_123, 4, tmp_list_element_58);
        }
        goto list_build_noexception_37;
        // Exception handling pass through code for list_build:
        list_build_exception_37:;
        Py_DECREF(tmp_assattr_value_123);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_37:;
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_123);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[201]);
        if (tmp_assattr_target_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_123);

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_123, mod_consts[100], tmp_assattr_value_123);
        Py_DECREF(tmp_assattr_value_123);
        Py_DECREF(tmp_assattr_target_123);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_124;
        PyObject *tmp_assattr_target_124;
        PyObject *tmp_expression_value_142;
        tmp_assattr_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_124 == NULL)) {
            tmp_assattr_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[202]);
        if (tmp_assattr_target_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_124, mod_consts[96], tmp_assattr_value_124);
        Py_DECREF(tmp_assattr_target_124);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_125;
        PyObject *tmp_list_element_59;
        PyObject *tmp_assattr_target_125;
        PyObject *tmp_expression_value_143;
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_125 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_125, 0, tmp_list_element_59);
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_assattr_value_125, 1, tmp_list_element_59);
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_assattr_value_125, 2, tmp_list_element_59);
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_assattr_value_125, 3, tmp_list_element_59);
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_assattr_value_125, 4, tmp_list_element_59);
        goto list_build_noexception_38;
        // Exception handling pass through code for list_build:
        list_build_exception_38:;
        Py_DECREF(tmp_assattr_value_125);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_38:;
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_125);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[202]);
        if (tmp_assattr_target_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_125);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_125, mod_consts[100], tmp_assattr_value_125);
        Py_DECREF(tmp_assattr_value_125);
        Py_DECREF(tmp_assattr_target_125);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_126;
        PyObject *tmp_assattr_target_126;
        PyObject *tmp_expression_value_144;
        tmp_assattr_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_126 == NULL)) {
            tmp_assattr_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[203]);
        if (tmp_assattr_target_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_126, mod_consts[96], tmp_assattr_value_126);
        Py_DECREF(tmp_assattr_target_126);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_127;
        PyObject *tmp_list_element_60;
        PyObject *tmp_assattr_target_127;
        PyObject *tmp_expression_value_145;
        tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_60 == NULL)) {
            tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_127 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_127, 0, tmp_list_element_60);
        tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_60 == NULL)) {
            tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto list_build_exception_39;
        }
        PyList_SET_ITEM0(tmp_assattr_value_127, 1, tmp_list_element_60);
        tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_list_element_60 == NULL)) {
            tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[174]);
        }

        if (tmp_list_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto list_build_exception_39;
        }
        PyList_SET_ITEM0(tmp_assattr_value_127, 2, tmp_list_element_60);
        tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_60 == NULL)) {
            tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto list_build_exception_39;
        }
        PyList_SET_ITEM0(tmp_assattr_value_127, 3, tmp_list_element_60);
        goto list_build_noexception_39;
        // Exception handling pass through code for list_build:
        list_build_exception_39:;
        Py_DECREF(tmp_assattr_value_127);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_39:;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_127);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[203]);
        if (tmp_assattr_target_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_127);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_127, mod_consts[100], tmp_assattr_value_127);
        Py_DECREF(tmp_assattr_value_127);
        Py_DECREF(tmp_assattr_target_127);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_128;
        PyObject *tmp_assattr_target_128;
        PyObject *tmp_expression_value_146;
        tmp_assattr_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_value_128 == NULL)) {
            tmp_assattr_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[205]);
        if (tmp_assattr_target_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_128, mod_consts[96], tmp_assattr_value_128);
        Py_DECREF(tmp_assattr_target_128);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_129;
        PyObject *tmp_list_element_61;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_assattr_target_129;
        PyObject *tmp_expression_value_147;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[206]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 230;
        tmp_list_element_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_33);
        if (tmp_list_element_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_129 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_129, 0, tmp_list_element_61);
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_129);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[205]);
        if (tmp_assattr_target_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_129);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_129, mod_consts[100], tmp_assattr_value_129);
        Py_DECREF(tmp_assattr_value_129);
        Py_DECREF(tmp_assattr_target_129);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_130;
        PyObject *tmp_assattr_target_130;
        PyObject *tmp_expression_value_148;
        tmp_assattr_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_130 == NULL)) {
            tmp_assattr_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[207]);
        if (tmp_assattr_target_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_130, mod_consts[96], tmp_assattr_value_130);
        Py_DECREF(tmp_assattr_target_130);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_131;
        PyObject *tmp_list_element_62;
        PyObject *tmp_assattr_target_131;
        PyObject *tmp_expression_value_149;
        tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_62 == NULL)) {
            tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_131 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_131, 0, tmp_list_element_62);
        tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_62 == NULL)) {
            tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto list_build_exception_40;
        }
        PyList_SET_ITEM0(tmp_assattr_value_131, 1, tmp_list_element_62);
        tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_62 == NULL)) {
            tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto list_build_exception_40;
        }
        PyList_SET_ITEM0(tmp_assattr_value_131, 2, tmp_list_element_62);
        tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_62 == NULL)) {
            tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto list_build_exception_40;
        }
        PyList_SET_ITEM0(tmp_assattr_value_131, 3, tmp_list_element_62);
        goto list_build_noexception_40;
        // Exception handling pass through code for list_build:
        list_build_exception_40:;
        Py_DECREF(tmp_assattr_value_131);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_40:;
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_131);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[207]);
        if (tmp_assattr_target_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_131);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_131, mod_consts[100], tmp_assattr_value_131);
        Py_DECREF(tmp_assattr_value_131);
        Py_DECREF(tmp_assattr_target_131);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_132;
        PyObject *tmp_assattr_target_132;
        PyObject *tmp_expression_value_150;
        tmp_assattr_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_132 == NULL)) {
            tmp_assattr_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[208]);
        if (tmp_assattr_target_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_132, mod_consts[96], tmp_assattr_value_132);
        Py_DECREF(tmp_assattr_target_132);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_133;
        PyObject *tmp_assattr_target_133;
        PyObject *tmp_expression_value_151;
        tmp_assattr_value_133 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_133);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[208]);
        if (tmp_assattr_target_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_133);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_133, mod_consts[100], tmp_assattr_value_133);
        Py_DECREF(tmp_assattr_value_133);
        Py_DECREF(tmp_assattr_target_133);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_134;
        PyObject *tmp_assattr_target_134;
        PyObject *tmp_expression_value_152;
        tmp_assattr_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_assattr_value_134 == NULL)) {
            tmp_assattr_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[209]);
        }

        if (tmp_assattr_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[210]);
        if (tmp_assattr_target_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_134, mod_consts[96], tmp_assattr_value_134);
        Py_DECREF(tmp_assattr_target_134);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_135;
        PyObject *tmp_list_element_63;
        PyObject *tmp_assattr_target_135;
        PyObject *tmp_expression_value_153;
        tmp_list_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_63 == NULL)) {
            tmp_list_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_135 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_135, 0, tmp_list_element_63);
        tmp_list_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_63 == NULL)) {
            tmp_list_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto list_build_exception_41;
        }
        PyList_SET_ITEM0(tmp_assattr_value_135, 1, tmp_list_element_63);
        goto list_build_noexception_41;
        // Exception handling pass through code for list_build:
        list_build_exception_41:;
        Py_DECREF(tmp_assattr_value_135);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_41:;
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_135);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[210]);
        if (tmp_assattr_target_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_135);

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_135, mod_consts[100], tmp_assattr_value_135);
        Py_DECREF(tmp_assattr_value_135);
        Py_DECREF(tmp_assattr_target_135);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_136;
        PyObject *tmp_assattr_target_136;
        PyObject *tmp_expression_value_154;
        tmp_assattr_value_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_136 == NULL)) {
            tmp_assattr_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[211]);
        if (tmp_assattr_target_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_136, mod_consts[96], tmp_assattr_value_136);
        Py_DECREF(tmp_assattr_target_136);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_137;
        PyObject *tmp_list_element_64;
        PyObject *tmp_assattr_target_137;
        PyObject *tmp_expression_value_155;
        tmp_list_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_64 == NULL)) {
            tmp_list_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_137 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_137, 0, tmp_list_element_64);
        tmp_list_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_list_element_64 == NULL)) {
            tmp_list_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_list_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto list_build_exception_42;
        }
        PyList_SET_ITEM0(tmp_assattr_value_137, 1, tmp_list_element_64);
        goto list_build_noexception_42;
        // Exception handling pass through code for list_build:
        list_build_exception_42:;
        Py_DECREF(tmp_assattr_value_137);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_42:;
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_137);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[211]);
        if (tmp_assattr_target_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_137);

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_137, mod_consts[100], tmp_assattr_value_137);
        Py_DECREF(tmp_assattr_value_137);
        Py_DECREF(tmp_assattr_target_137);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_138;
        PyObject *tmp_assattr_target_138;
        PyObject *tmp_expression_value_156;
        tmp_assattr_value_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assattr_value_138 == NULL)) {
            tmp_assattr_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_assattr_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[212]);
        if (tmp_assattr_target_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_138, mod_consts[96], tmp_assattr_value_138);
        Py_DECREF(tmp_assattr_target_138);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_139;
        PyObject *tmp_list_element_65;
        PyObject *tmp_assattr_target_139;
        PyObject *tmp_expression_value_157;
        tmp_list_element_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_65 == NULL)) {
            tmp_list_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_139 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_139, 0, tmp_list_element_65);
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_139);

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[212]);
        if (tmp_assattr_target_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_139);

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_139, mod_consts[100], tmp_assattr_value_139);
        Py_DECREF(tmp_assattr_value_139);
        Py_DECREF(tmp_assattr_target_139);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_140;
        PyObject *tmp_assattr_target_140;
        PyObject *tmp_expression_value_158;
        tmp_assattr_value_140 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_value_140 == NULL)) {
            tmp_assattr_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_assattr_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[213]);
        if (tmp_assattr_target_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_140, mod_consts[96], tmp_assattr_value_140);
        Py_DECREF(tmp_assattr_target_140);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_141;
        PyObject *tmp_list_element_66;
        PyObject *tmp_assattr_target_141;
        PyObject *tmp_expression_value_159;
        tmp_list_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_66 == NULL)) {
            tmp_list_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_141 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_141, 0, tmp_list_element_66);
        tmp_list_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_66 == NULL)) {
            tmp_list_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto list_build_exception_43;
        }
        PyList_SET_ITEM0(tmp_assattr_value_141, 1, tmp_list_element_66);
        tmp_list_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_list_element_66 == NULL)) {
            tmp_list_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_list_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto list_build_exception_43;
        }
        PyList_SET_ITEM0(tmp_assattr_value_141, 2, tmp_list_element_66);
        goto list_build_noexception_43;
        // Exception handling pass through code for list_build:
        list_build_exception_43:;
        Py_DECREF(tmp_assattr_value_141);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_43:;
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_141);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[213]);
        if (tmp_assattr_target_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_141);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_141, mod_consts[100], tmp_assattr_value_141);
        Py_DECREF(tmp_assattr_value_141);
        Py_DECREF(tmp_assattr_target_141);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_142;
        PyObject *tmp_assattr_target_142;
        PyObject *tmp_expression_value_160;
        tmp_assattr_value_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_assattr_value_142 == NULL)) {
            tmp_assattr_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_assattr_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[215]);
        if (tmp_assattr_target_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_142, mod_consts[96], tmp_assattr_value_142);
        Py_DECREF(tmp_assattr_target_142);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_143;
        PyObject *tmp_list_element_67;
        PyObject *tmp_assattr_target_143;
        PyObject *tmp_expression_value_161;
        tmp_list_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_67 == NULL)) {
            tmp_list_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_143 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_143, 0, tmp_list_element_67);
        tmp_list_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_67 == NULL)) {
            tmp_list_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto list_build_exception_44;
        }
        PyList_SET_ITEM0(tmp_assattr_value_143, 1, tmp_list_element_67);
        tmp_list_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_list_element_67 == NULL)) {
            tmp_list_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        if (tmp_list_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto list_build_exception_44;
        }
        PyList_SET_ITEM0(tmp_assattr_value_143, 2, tmp_list_element_67);
        goto list_build_noexception_44;
        // Exception handling pass through code for list_build:
        list_build_exception_44:;
        Py_DECREF(tmp_assattr_value_143);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_44:;
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_143);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[215]);
        if (tmp_assattr_target_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_143);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_143, mod_consts[100], tmp_assattr_value_143);
        Py_DECREF(tmp_assattr_value_143);
        Py_DECREF(tmp_assattr_target_143);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_144;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_assattr_target_144;
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[213]);
        if (tmp_assattr_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_target_144 == NULL)) {
            tmp_assattr_target_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_assattr_target_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_144);

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_144, mod_consts[215], tmp_assattr_value_144);
        Py_DECREF(tmp_assattr_value_144);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    {
        PyObject *tmp_assattr_value_145;
        PyObject *tmp_assattr_target_145;
        PyObject *tmp_expression_value_163;
        tmp_assattr_value_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_value_145 == NULL)) {
            tmp_assattr_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_assattr_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[217]);
        if (tmp_assattr_target_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_145, mod_consts[96], tmp_assattr_value_145);
        Py_DECREF(tmp_assattr_target_145);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_146;
        PyObject *tmp_list_element_68;
        PyObject *tmp_assattr_target_146;
        PyObject *tmp_expression_value_164;
        tmp_list_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_list_element_68 == NULL)) {
            tmp_list_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_list_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_146 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_146, 0, tmp_list_element_68);
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_146);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[217]);
        if (tmp_assattr_target_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_146);

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_146, mod_consts[100], tmp_assattr_value_146);
        Py_DECREF(tmp_assattr_value_146);
        Py_DECREF(tmp_assattr_target_146);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_147;
        PyObject *tmp_assattr_target_147;
        PyObject *tmp_expression_value_165;
        tmp_assattr_value_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_147 == NULL)) {
            tmp_assattr_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[218]);
        if (tmp_assattr_target_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_147, mod_consts[96], tmp_assattr_value_147);
        Py_DECREF(tmp_assattr_target_147);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_148;
        PyObject *tmp_list_element_69;
        PyObject *tmp_assattr_target_148;
        PyObject *tmp_expression_value_166;
        tmp_list_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_69 == NULL)) {
            tmp_list_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_148 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_148, 0, tmp_list_element_69);
        tmp_list_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_69 == NULL)) {
            tmp_list_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto list_build_exception_45;
        }
        PyList_SET_ITEM0(tmp_assattr_value_148, 1, tmp_list_element_69);
        goto list_build_noexception_45;
        // Exception handling pass through code for list_build:
        list_build_exception_45:;
        Py_DECREF(tmp_assattr_value_148);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_45:;
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_148);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[218]);
        if (tmp_assattr_target_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_148);

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_148, mod_consts[100], tmp_assattr_value_148);
        Py_DECREF(tmp_assattr_value_148);
        Py_DECREF(tmp_assattr_target_148);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_149;
        PyObject *tmp_assattr_target_149;
        PyObject *tmp_expression_value_167;
        tmp_assattr_value_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assattr_value_149 == NULL)) {
            tmp_assattr_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_assattr_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[219]);
        if (tmp_assattr_target_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_149, mod_consts[96], tmp_assattr_value_149);
        Py_DECREF(tmp_assattr_target_149);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_150;
        PyObject *tmp_list_element_70;
        PyObject *tmp_assattr_target_150;
        PyObject *tmp_expression_value_168;
        tmp_list_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_70 == NULL)) {
            tmp_list_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_150 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_150, 0, tmp_list_element_70);
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_150);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[219]);
        if (tmp_assattr_target_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_150);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_150, mod_consts[100], tmp_assattr_value_150);
        Py_DECREF(tmp_assattr_value_150);
        Py_DECREF(tmp_assattr_target_150);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_151;
        PyObject *tmp_assattr_target_151;
        PyObject *tmp_expression_value_169;
        tmp_assattr_value_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_151 == NULL)) {
            tmp_assattr_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[220]);
        if (tmp_assattr_target_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_151, mod_consts[96], tmp_assattr_value_151);
        Py_DECREF(tmp_assattr_target_151);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_152;
        PyObject *tmp_list_element_71;
        PyObject *tmp_assattr_target_152;
        PyObject *tmp_expression_value_170;
        tmp_list_element_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_71 == NULL)) {
            tmp_list_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_152 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_152, 0, tmp_list_element_71);
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_152);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[220]);
        if (tmp_assattr_target_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_152);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_152, mod_consts[100], tmp_assattr_value_152);
        Py_DECREF(tmp_assattr_value_152);
        Py_DECREF(tmp_assattr_target_152);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_153;
        PyObject *tmp_assattr_target_153;
        PyObject *tmp_expression_value_171;
        tmp_assattr_value_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_assattr_value_153 == NULL)) {
            tmp_assattr_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_assattr_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[222]);
        if (tmp_assattr_target_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_153, mod_consts[96], tmp_assattr_value_153);
        Py_DECREF(tmp_assattr_target_153);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_154;
        PyObject *tmp_list_element_72;
        PyObject *tmp_assattr_target_154;
        PyObject *tmp_expression_value_172;
        tmp_list_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_72 == NULL)) {
            tmp_list_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_154 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_154, 0, tmp_list_element_72);
        tmp_list_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_list_element_72 == NULL)) {
            tmp_list_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_list_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto list_build_exception_46;
        }
        PyList_SET_ITEM0(tmp_assattr_value_154, 1, tmp_list_element_72);
        tmp_list_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_72 == NULL)) {
            tmp_list_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto list_build_exception_46;
        }
        PyList_SET_ITEM0(tmp_assattr_value_154, 2, tmp_list_element_72);
        tmp_list_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_list_element_72 == NULL)) {
            tmp_list_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[223]);
        }

        if (tmp_list_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto list_build_exception_46;
        }
        PyList_SET_ITEM0(tmp_assattr_value_154, 3, tmp_list_element_72);
        goto list_build_noexception_46;
        // Exception handling pass through code for list_build:
        list_build_exception_46:;
        Py_DECREF(tmp_assattr_value_154);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_46:;
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_154);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[222]);
        if (tmp_assattr_target_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_154);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_154, mod_consts[100], tmp_assattr_value_154);
        Py_DECREF(tmp_assattr_value_154);
        Py_DECREF(tmp_assattr_target_154);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_155;
        PyObject *tmp_assattr_target_155;
        PyObject *tmp_expression_value_173;
        tmp_assattr_value_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_value_155 == NULL)) {
            tmp_assattr_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_assattr_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[224]);
        if (tmp_assattr_target_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_155, mod_consts[96], tmp_assattr_value_155);
        Py_DECREF(tmp_assattr_target_155);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_156;
        PyObject *tmp_list_element_73;
        PyObject *tmp_assattr_target_156;
        PyObject *tmp_expression_value_174;
        tmp_list_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_73 == NULL)) {
            tmp_list_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_156 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_156, 0, tmp_list_element_73);
        tmp_list_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_73 == NULL)) {
            tmp_list_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto list_build_exception_47;
        }
        PyList_SET_ITEM0(tmp_assattr_value_156, 1, tmp_list_element_73);
        tmp_list_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_list_element_73 == NULL)) {
            tmp_list_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_list_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto list_build_exception_47;
        }
        PyList_SET_ITEM0(tmp_assattr_value_156, 2, tmp_list_element_73);
        goto list_build_noexception_47;
        // Exception handling pass through code for list_build:
        list_build_exception_47:;
        Py_DECREF(tmp_assattr_value_156);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_47:;
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_156);

            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[224]);
        if (tmp_assattr_target_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_156);

            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_156, mod_consts[100], tmp_assattr_value_156);
        Py_DECREF(tmp_assattr_value_156);
        Py_DECREF(tmp_assattr_target_156);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_157;
        PyObject *tmp_assattr_target_157;
        PyObject *tmp_expression_value_175;
        tmp_assattr_value_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_157 == NULL)) {
            tmp_assattr_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[225]);
        if (tmp_assattr_target_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_157, mod_consts[96], tmp_assattr_value_157);
        Py_DECREF(tmp_assattr_target_157);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_158;
        PyObject *tmp_list_element_74;
        PyObject *tmp_assattr_target_158;
        PyObject *tmp_expression_value_176;
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_158 = MAKE_LIST_EMPTY(7);
        PyList_SET_ITEM0(tmp_assattr_value_158, 0, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_48;
        }
        PyList_SET_ITEM0(tmp_assattr_value_158, 1, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_48;
        }
        PyList_SET_ITEM0(tmp_assattr_value_158, 2, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_48;
        }
        PyList_SET_ITEM0(tmp_assattr_value_158, 3, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_48;
        }
        PyList_SET_ITEM0(tmp_assattr_value_158, 4, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_48;
        }
        PyList_SET_ITEM0(tmp_assattr_value_158, 5, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_48;
        }
        PyList_SET_ITEM0(tmp_assattr_value_158, 6, tmp_list_element_74);
        goto list_build_noexception_48;
        // Exception handling pass through code for list_build:
        list_build_exception_48:;
        Py_DECREF(tmp_assattr_value_158);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_48:;
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_158);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[225]);
        if (tmp_assattr_target_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_158);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_158, mod_consts[100], tmp_assattr_value_158);
        Py_DECREF(tmp_assattr_value_158);
        Py_DECREF(tmp_assattr_target_158);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_159;
        PyObject *tmp_assattr_target_159;
        PyObject *tmp_expression_value_177;
        tmp_assattr_value_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_159 == NULL)) {
            tmp_assattr_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[226]);
        if (tmp_assattr_target_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_159, mod_consts[96], tmp_assattr_value_159);
        Py_DECREF(tmp_assattr_target_159);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_160;
        PyObject *tmp_list_element_75;
        PyObject *tmp_assattr_target_160;
        PyObject *tmp_expression_value_178;
        tmp_list_element_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_75 == NULL)) {
            tmp_list_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_160 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_160, 0, tmp_list_element_75);
        tmp_list_element_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_75 == NULL)) {
            tmp_list_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto list_build_exception_49;
        }
        PyList_SET_ITEM0(tmp_assattr_value_160, 1, tmp_list_element_75);
        goto list_build_noexception_49;
        // Exception handling pass through code for list_build:
        list_build_exception_49:;
        Py_DECREF(tmp_assattr_value_160);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_49:;
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_160);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[226]);
        if (tmp_assattr_target_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_160);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_160, mod_consts[100], tmp_assattr_value_160);
        Py_DECREF(tmp_assattr_value_160);
        Py_DECREF(tmp_assattr_target_160);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_161;
        PyObject *tmp_assattr_target_161;
        PyObject *tmp_expression_value_179;
        tmp_assattr_value_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_161 == NULL)) {
            tmp_assattr_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[227]);
        if (tmp_assattr_target_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_161, mod_consts[96], tmp_assattr_value_161);
        Py_DECREF(tmp_assattr_target_161);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_162;
        PyObject *tmp_list_element_76;
        PyObject *tmp_assattr_target_162;
        PyObject *tmp_expression_value_180;
        tmp_list_element_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_list_element_76 == NULL)) {
            tmp_list_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_list_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_162 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_162, 0, tmp_list_element_76);
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_162);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[227]);
        if (tmp_assattr_target_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_162);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_162, mod_consts[100], tmp_assattr_value_162);
        Py_DECREF(tmp_assattr_value_162);
        Py_DECREF(tmp_assattr_target_162);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_163;
        PyObject *tmp_assattr_target_163;
        PyObject *tmp_expression_value_181;
        tmp_assattr_value_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_163 == NULL)) {
            tmp_assattr_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[228]);
        if (tmp_assattr_target_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_163, mod_consts[96], tmp_assattr_value_163);
        Py_DECREF(tmp_assattr_target_163);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_164;
        PyObject *tmp_list_element_77;
        PyObject *tmp_assattr_target_164;
        PyObject *tmp_expression_value_182;
        tmp_list_element_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_77 == NULL)) {
            tmp_list_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_164 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_164, 0, tmp_list_element_77);
        tmp_list_element_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_77 == NULL)) {
            tmp_list_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto list_build_exception_50;
        }
        PyList_SET_ITEM0(tmp_assattr_value_164, 1, tmp_list_element_77);
        goto list_build_noexception_50;
        // Exception handling pass through code for list_build:
        list_build_exception_50:;
        Py_DECREF(tmp_assattr_value_164);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_50:;
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_164);

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts[228]);
        if (tmp_assattr_target_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_164);

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_164, mod_consts[100], tmp_assattr_value_164);
        Py_DECREF(tmp_assattr_value_164);
        Py_DECREF(tmp_assattr_target_164);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_165;
        PyObject *tmp_assattr_target_165;
        PyObject *tmp_expression_value_183;
        tmp_assattr_value_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_165 == NULL)) {
            tmp_assattr_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[229]);
        if (tmp_assattr_target_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_165, mod_consts[96], tmp_assattr_value_165);
        Py_DECREF(tmp_assattr_target_165);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_166;
        PyObject *tmp_list_element_78;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_assattr_target_166;
        PyObject *tmp_expression_value_184;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[230]);

        if (unlikely(tmp_args_element_value_34 == NULL)) {
            tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[230]);
        }

        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 270;
        tmp_list_element_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_34);
        if (tmp_list_element_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_166 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_166, 0, tmp_list_element_78);
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_166);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[229]);
        if (tmp_assattr_target_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_166);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_166, mod_consts[100], tmp_assattr_value_166);
        Py_DECREF(tmp_assattr_value_166);
        Py_DECREF(tmp_assattr_target_166);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_167;
        PyObject *tmp_assattr_target_167;
        PyObject *tmp_expression_value_185;
        tmp_assattr_value_167 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_167 == NULL)) {
            tmp_assattr_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts[231]);
        if (tmp_assattr_target_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_167, mod_consts[96], tmp_assattr_value_167);
        Py_DECREF(tmp_assattr_target_167);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_168;
        PyObject *tmp_list_element_79;
        PyObject *tmp_assattr_target_168;
        PyObject *tmp_expression_value_186;
        tmp_list_element_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_list_element_79 == NULL)) {
            tmp_list_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_list_element_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_168 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_168, 0, tmp_list_element_79);
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_168);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_168 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts[231]);
        if (tmp_assattr_target_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_168);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_168, mod_consts[100], tmp_assattr_value_168);
        Py_DECREF(tmp_assattr_value_168);
        Py_DECREF(tmp_assattr_target_168);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_169;
        PyObject *tmp_assattr_target_169;
        PyObject *tmp_expression_value_187;
        tmp_assattr_value_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_169 == NULL)) {
            tmp_assattr_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_169 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[232]);
        if (tmp_assattr_target_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_169, mod_consts[96], tmp_assattr_value_169);
        Py_DECREF(tmp_assattr_target_169);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_170;
        PyObject *tmp_list_element_80;
        PyObject *tmp_assattr_target_170;
        PyObject *tmp_expression_value_188;
        tmp_list_element_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_list_element_80 == NULL)) {
            tmp_list_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_list_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_170 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_170, 0, tmp_list_element_80);
        tmp_list_element_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_list_element_80 == NULL)) {
            tmp_list_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_list_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto list_build_exception_51;
        }
        PyList_SET_ITEM0(tmp_assattr_value_170, 1, tmp_list_element_80);
        goto list_build_noexception_51;
        // Exception handling pass through code for list_build:
        list_build_exception_51:;
        Py_DECREF(tmp_assattr_value_170);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_51:;
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_170);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_188, mod_consts[232]);
        if (tmp_assattr_target_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_170);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_170, mod_consts[100], tmp_assattr_value_170);
        Py_DECREF(tmp_assattr_value_170);
        Py_DECREF(tmp_assattr_target_170);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_171;
        PyObject *tmp_assattr_target_171;
        PyObject *tmp_expression_value_189;
        tmp_assattr_value_171 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_171 == NULL)) {
            tmp_assattr_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_171 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts[233]);
        if (tmp_assattr_target_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_171, mod_consts[96], tmp_assattr_value_171);
        Py_DECREF(tmp_assattr_target_171);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_172;
        PyObject *tmp_list_element_81;
        PyObject *tmp_assattr_target_172;
        PyObject *tmp_expression_value_190;
        tmp_list_element_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_81 == NULL)) {
            tmp_list_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_172 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_172, 0, tmp_list_element_81);
        tmp_list_element_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_81 == NULL)) {
            tmp_list_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto list_build_exception_52;
        }
        PyList_SET_ITEM0(tmp_assattr_value_172, 1, tmp_list_element_81);
        goto list_build_noexception_52;
        // Exception handling pass through code for list_build:
        list_build_exception_52:;
        Py_DECREF(tmp_assattr_value_172);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_52:;
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_172);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_172 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts[233]);
        if (tmp_assattr_target_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_172);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_172, mod_consts[100], tmp_assattr_value_172);
        Py_DECREF(tmp_assattr_value_172);
        Py_DECREF(tmp_assattr_target_172);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_173;
        PyObject *tmp_assattr_target_173;
        PyObject *tmp_expression_value_191;
        tmp_assattr_value_173 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_173 == NULL)) {
            tmp_assattr_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_173 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts[234]);
        if (tmp_assattr_target_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_173, mod_consts[96], tmp_assattr_value_173);
        Py_DECREF(tmp_assattr_target_173);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_174;
        PyObject *tmp_list_element_82;
        PyObject *tmp_assattr_target_174;
        PyObject *tmp_expression_value_192;
        tmp_list_element_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_list_element_82 == NULL)) {
            tmp_list_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[235]);
        }

        if (tmp_list_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_174 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_174, 0, tmp_list_element_82);
        tmp_list_element_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_82 == NULL)) {
            tmp_list_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto list_build_exception_53;
        }
        PyList_SET_ITEM0(tmp_assattr_value_174, 1, tmp_list_element_82);
        tmp_list_element_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_82 == NULL)) {
            tmp_list_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto list_build_exception_53;
        }
        PyList_SET_ITEM0(tmp_assattr_value_174, 2, tmp_list_element_82);
        goto list_build_noexception_53;
        // Exception handling pass through code for list_build:
        list_build_exception_53:;
        Py_DECREF(tmp_assattr_value_174);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_53:;
        tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_192 == NULL)) {
            tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_174);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_174 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts[234]);
        if (tmp_assattr_target_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_174);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_174, mod_consts[100], tmp_assattr_value_174);
        Py_DECREF(tmp_assattr_value_174);
        Py_DECREF(tmp_assattr_target_174);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_175;
        PyObject *tmp_assattr_target_175;
        PyObject *tmp_expression_value_193;
        tmp_assattr_value_175 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_value_175 == NULL)) {
            tmp_assattr_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_assattr_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_175 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts[236]);
        if (tmp_assattr_target_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_175, mod_consts[96], tmp_assattr_value_175);
        Py_DECREF(tmp_assattr_target_175);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_176;
        PyObject *tmp_list_element_83;
        PyObject *tmp_assattr_target_176;
        PyObject *tmp_expression_value_194;
        tmp_list_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_list_element_83 == NULL)) {
            tmp_list_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
        }

        if (tmp_list_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_176 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_176, 0, tmp_list_element_83);
        tmp_list_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_83 == NULL)) {
            tmp_list_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto list_build_exception_54;
        }
        PyList_SET_ITEM0(tmp_assattr_value_176, 1, tmp_list_element_83);
        tmp_list_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_83 == NULL)) {
            tmp_list_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_list_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto list_build_exception_54;
        }
        PyList_SET_ITEM0(tmp_assattr_value_176, 2, tmp_list_element_83);
        tmp_list_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_list_element_83 == NULL)) {
            tmp_list_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        if (tmp_list_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto list_build_exception_54;
        }
        PyList_SET_ITEM0(tmp_assattr_value_176, 3, tmp_list_element_83);
        tmp_list_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_83 == NULL)) {
            tmp_list_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto list_build_exception_54;
        }
        PyList_SET_ITEM0(tmp_assattr_value_176, 4, tmp_list_element_83);
        goto list_build_noexception_54;
        // Exception handling pass through code for list_build:
        list_build_exception_54:;
        Py_DECREF(tmp_assattr_value_176);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_54:;
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_176);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_176 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts[236]);
        if (tmp_assattr_target_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_176);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_176, mod_consts[100], tmp_assattr_value_176);
        Py_DECREF(tmp_assattr_value_176);
        Py_DECREF(tmp_assattr_target_176);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_177;
        PyObject *tmp_assattr_target_177;
        PyObject *tmp_expression_value_195;
        tmp_assattr_value_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_177 == NULL)) {
            tmp_assattr_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_177 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts[239]);
        if (tmp_assattr_target_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_177, mod_consts[96], tmp_assattr_value_177);
        Py_DECREF(tmp_assattr_target_177);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_178;
        PyObject *tmp_list_element_84;
        PyObject *tmp_assattr_target_178;
        PyObject *tmp_expression_value_196;
        tmp_list_element_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_84 == NULL)) {
            tmp_list_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_178 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_178, 0, tmp_list_element_84);
        tmp_list_element_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_84 == NULL)) {
            tmp_list_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto list_build_exception_55;
        }
        PyList_SET_ITEM0(tmp_assattr_value_178, 1, tmp_list_element_84);
        tmp_list_element_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_84 == NULL)) {
            tmp_list_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto list_build_exception_55;
        }
        PyList_SET_ITEM0(tmp_assattr_value_178, 2, tmp_list_element_84);
        tmp_list_element_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_84 == NULL)) {
            tmp_list_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto list_build_exception_55;
        }
        PyList_SET_ITEM0(tmp_assattr_value_178, 3, tmp_list_element_84);
        goto list_build_noexception_55;
        // Exception handling pass through code for list_build:
        list_build_exception_55:;
        Py_DECREF(tmp_assattr_value_178);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_55:;
        tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_196 == NULL)) {
            tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_expression_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_178);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts[239]);
        if (tmp_assattr_target_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_178);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_178, mod_consts[100], tmp_assattr_value_178);
        Py_DECREF(tmp_assattr_value_178);
        Py_DECREF(tmp_assattr_target_178);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_179;
        PyObject *tmp_assattr_target_179;
        PyObject *tmp_expression_value_197;
        tmp_assattr_value_179 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_179 == NULL)) {
            tmp_assattr_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_179 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts[240]);
        if (tmp_assattr_target_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_179, mod_consts[96], tmp_assattr_value_179);
        Py_DECREF(tmp_assattr_target_179);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_180;
        PyObject *tmp_list_element_85;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_assattr_target_180;
        PyObject *tmp_expression_value_198;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 287;
        tmp_list_element_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_35);
        if (tmp_list_element_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_180 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_180, 0, tmp_list_element_85);
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_180);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_180 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_198, mod_consts[240]);
        if (tmp_assattr_target_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_180);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_180, mod_consts[100], tmp_assattr_value_180);
        Py_DECREF(tmp_assattr_value_180);
        Py_DECREF(tmp_assattr_target_180);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_181;
        PyObject *tmp_assattr_target_181;
        PyObject *tmp_expression_value_199;
        tmp_assattr_value_181 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_181 == NULL)) {
            tmp_assattr_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assattr_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_181 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[241]);
        if (tmp_assattr_target_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_181, mod_consts[96], tmp_assattr_value_181);
        Py_DECREF(tmp_assattr_target_181);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_182;
        PyObject *tmp_assattr_target_182;
        PyObject *tmp_expression_value_200;
        tmp_assattr_value_182 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_200 == NULL)) {
            tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_expression_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_182);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_200, mod_consts[241]);
        if (tmp_assattr_target_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_182);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_182, mod_consts[100], tmp_assattr_value_182);
        Py_DECREF(tmp_assattr_value_182);
        Py_DECREF(tmp_assattr_target_182);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_183;
        PyObject *tmp_assattr_target_183;
        PyObject *tmp_expression_value_201;
        tmp_assattr_value_183 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_assattr_value_183 == NULL)) {
            tmp_assattr_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_assattr_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_183 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_201, mod_consts[243]);
        if (tmp_assattr_target_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_183, mod_consts[96], tmp_assattr_value_183);
        Py_DECREF(tmp_assattr_target_183);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_184;
        PyObject *tmp_list_element_86;
        PyObject *tmp_assattr_target_184;
        PyObject *tmp_expression_value_202;
        tmp_list_element_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_list_element_86 == NULL)) {
            tmp_list_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_list_element_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_184 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_184, 0, tmp_list_element_86);
        tmp_list_element_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_list_element_86 == NULL)) {
            tmp_list_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_list_element_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto list_build_exception_56;
        }
        PyList_SET_ITEM0(tmp_assattr_value_184, 1, tmp_list_element_86);
        goto list_build_noexception_56;
        // Exception handling pass through code for list_build:
        list_build_exception_56:;
        Py_DECREF(tmp_assattr_value_184);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_56:;
        tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_202 == NULL)) {
            tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_184);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_202, mod_consts[243]);
        if (tmp_assattr_target_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_184);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_184, mod_consts[100], tmp_assattr_value_184);
        Py_DECREF(tmp_assattr_value_184);
        Py_DECREF(tmp_assattr_target_184);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_185;
        PyObject *tmp_assattr_target_185;
        PyObject *tmp_expression_value_203;
        tmp_assattr_value_185 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_assattr_value_185 == NULL)) {
            tmp_assattr_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_assattr_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_185 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_203, mod_consts[244]);
        if (tmp_assattr_target_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_185, mod_consts[96], tmp_assattr_value_185);
        Py_DECREF(tmp_assattr_target_185);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_186;
        PyObject *tmp_list_element_87;
        PyObject *tmp_assattr_target_186;
        PyObject *tmp_expression_value_204;
        tmp_list_element_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_list_element_87 == NULL)) {
            tmp_list_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_list_element_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_186 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_186, 0, tmp_list_element_87);
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_186);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_186 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_204, mod_consts[244]);
        if (tmp_assattr_target_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_186);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_186, mod_consts[100], tmp_assattr_value_186);
        Py_DECREF(tmp_assattr_value_186);
        Py_DECREF(tmp_assattr_target_186);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_187;
        PyObject *tmp_assattr_target_187;
        PyObject *tmp_expression_value_205;
        tmp_assattr_value_187 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_value_187 == NULL)) {
            tmp_assattr_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_assattr_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_187 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_205, mod_consts[246]);
        if (tmp_assattr_target_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_187, mod_consts[96], tmp_assattr_value_187);
        Py_DECREF(tmp_assattr_target_187);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_188;
        PyObject *tmp_list_element_88;
        PyObject *tmp_assattr_target_188;
        PyObject *tmp_expression_value_206;
        tmp_list_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_list_element_88 == NULL)) {
            tmp_list_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_list_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_188 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_188, 0, tmp_list_element_88);
        tmp_list_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_88 == NULL)) {
            tmp_list_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto list_build_exception_57;
        }
        PyList_SET_ITEM0(tmp_assattr_value_188, 1, tmp_list_element_88);
        tmp_list_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_list_element_88 == NULL)) {
            tmp_list_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[247]);
        }

        if (tmp_list_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto list_build_exception_57;
        }
        PyList_SET_ITEM0(tmp_assattr_value_188, 2, tmp_list_element_88);
        tmp_list_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_88 == NULL)) {
            tmp_list_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto list_build_exception_57;
        }
        PyList_SET_ITEM0(tmp_assattr_value_188, 3, tmp_list_element_88);
        goto list_build_noexception_57;
        // Exception handling pass through code for list_build:
        list_build_exception_57:;
        Py_DECREF(tmp_assattr_value_188);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_57:;
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_188);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_206, mod_consts[246]);
        if (tmp_assattr_target_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_188);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_188, mod_consts[100], tmp_assattr_value_188);
        Py_DECREF(tmp_assattr_value_188);
        Py_DECREF(tmp_assattr_target_188);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_189;
        PyObject *tmp_assattr_target_189;
        PyObject *tmp_expression_value_207;
        tmp_assattr_value_189 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_189 == NULL)) {
            tmp_assattr_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_assattr_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_189 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_207, mod_consts[248]);
        if (tmp_assattr_target_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_189, mod_consts[96], tmp_assattr_value_189);
        Py_DECREF(tmp_assattr_target_189);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_190;
        PyObject *tmp_list_element_89;
        PyObject *tmp_assattr_target_190;
        PyObject *tmp_expression_value_208;
        tmp_list_element_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_list_element_89 == NULL)) {
            tmp_list_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_list_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_190 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_190, 0, tmp_list_element_89);
        tmp_list_element_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_list_element_89 == NULL)) {
            tmp_list_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_list_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto list_build_exception_58;
        }
        PyList_SET_ITEM0(tmp_assattr_value_190, 1, tmp_list_element_89);
        goto list_build_noexception_58;
        // Exception handling pass through code for list_build:
        list_build_exception_58:;
        Py_DECREF(tmp_assattr_value_190);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_58:;
        tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_208 == NULL)) {
            tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_190);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_190 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_208, mod_consts[248]);
        if (tmp_assattr_target_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_190);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_190, mod_consts[100], tmp_assattr_value_190);
        Py_DECREF(tmp_assattr_value_190);
        Py_DECREF(tmp_assattr_target_190);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_191;
        PyObject *tmp_list_element_90;
        PyObject *tmp_assattr_target_191;
        PyObject *tmp_expression_value_209;
        tmp_list_element_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_list_element_90 == NULL)) {
            tmp_list_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        if (tmp_list_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_191 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_191, 0, tmp_list_element_90);
        tmp_list_element_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_list_element_90 == NULL)) {
            tmp_list_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_list_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto list_build_exception_59;
        }
        PyList_SET_ITEM0(tmp_assattr_value_191, 1, tmp_list_element_90);
        tmp_list_element_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_list_element_90 == NULL)) {
            tmp_list_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[249]);
        }

        if (tmp_list_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto list_build_exception_59;
        }
        PyList_SET_ITEM0(tmp_assattr_value_191, 2, tmp_list_element_90);
        goto list_build_noexception_59;
        // Exception handling pass through code for list_build:
        list_build_exception_59:;
        Py_DECREF(tmp_assattr_value_191);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_59:;
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_191);

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_191 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_209, mod_consts[250]);
        if (tmp_assattr_target_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_191);

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_191, mod_consts[100], tmp_assattr_value_191);
        Py_DECREF(tmp_assattr_value_191);
        Py_DECREF(tmp_assattr_target_191);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_192;
        PyObject *tmp_assattr_target_192;
        PyObject *tmp_expression_value_210;
        tmp_assattr_value_192 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_value_192 == NULL)) {
            tmp_assattr_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_210, mod_consts[252]);
        if (tmp_assattr_target_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_192, mod_consts[96], tmp_assattr_value_192);
        Py_DECREF(tmp_assattr_target_192);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_193;
        PyObject *tmp_list_element_91;
        PyObject *tmp_assattr_target_193;
        PyObject *tmp_expression_value_211;
        tmp_list_element_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_91 == NULL)) {
            tmp_list_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_list_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_193 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_193, 0, tmp_list_element_91);
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_193);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_193 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_211, mod_consts[252]);
        if (tmp_assattr_target_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_193);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_193, mod_consts[100], tmp_assattr_value_193);
        Py_DECREF(tmp_assattr_value_193);
        Py_DECREF(tmp_assattr_target_193);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_194;
        PyObject *tmp_assattr_target_194;
        PyObject *tmp_expression_value_212;
        tmp_assattr_value_194 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_value_194 == NULL)) {
            tmp_assattr_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_212, mod_consts[253]);
        if (tmp_assattr_target_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_194, mod_consts[96], tmp_assattr_value_194);
        Py_DECREF(tmp_assattr_target_194);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_195;
        PyObject *tmp_list_element_92;
        PyObject *tmp_assattr_target_195;
        PyObject *tmp_expression_value_213;
        tmp_list_element_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_list_element_92 == NULL)) {
            tmp_list_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_list_element_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_195 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_195, 0, tmp_list_element_92);
        tmp_list_element_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_92 == NULL)) {
            tmp_list_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto list_build_exception_60;
        }
        PyList_SET_ITEM0(tmp_assattr_value_195, 1, tmp_list_element_92);
        goto list_build_noexception_60;
        // Exception handling pass through code for list_build:
        list_build_exception_60:;
        Py_DECREF(tmp_assattr_value_195);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_60:;
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_195);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_213, mod_consts[253]);
        if (tmp_assattr_target_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_195);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_195, mod_consts[100], tmp_assattr_value_195);
        Py_DECREF(tmp_assattr_value_195);
        Py_DECREF(tmp_assattr_target_195);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_196;
        PyObject *tmp_assattr_target_196;
        PyObject *tmp_expression_value_214;
        tmp_assattr_value_196 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_value_196 == NULL)) {
            tmp_assattr_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_214, mod_consts[27]);
        if (tmp_assattr_target_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_196, mod_consts[96], tmp_assattr_value_196);
        Py_DECREF(tmp_assattr_target_196);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_197;
        PyObject *tmp_assattr_target_197;
        PyObject *tmp_expression_value_215;
        tmp_assattr_value_197 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_197);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_197 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_215, mod_consts[27]);
        if (tmp_assattr_target_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_197);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_197, mod_consts[100], tmp_assattr_value_197);
        Py_DECREF(tmp_assattr_value_197);
        Py_DECREF(tmp_assattr_target_197);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_198;
        PyObject *tmp_assattr_target_198;
        PyObject *tmp_expression_value_216;
        tmp_assattr_value_198 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_value_198 == NULL)) {
            tmp_assattr_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_216 == NULL)) {
            tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_198 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_216, mod_consts[254]);
        if (tmp_assattr_target_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_198, mod_consts[96], tmp_assattr_value_198);
        Py_DECREF(tmp_assattr_target_198);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_199;
        PyObject *tmp_list_element_93;
        PyObject *tmp_assattr_target_199;
        PyObject *tmp_expression_value_217;
        tmp_list_element_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_93 == NULL)) {
            tmp_list_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_199 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_199, 0, tmp_list_element_93);
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_199);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_199 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_217, mod_consts[254]);
        if (tmp_assattr_target_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_199);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_199, mod_consts[100], tmp_assattr_value_199);
        Py_DECREF(tmp_assattr_value_199);
        Py_DECREF(tmp_assattr_target_199);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_200;
        PyObject *tmp_assattr_target_200;
        PyObject *tmp_expression_value_218;
        tmp_assattr_value_200 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_value_200 == NULL)) {
            tmp_assattr_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_218 == NULL)) {
            tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_200 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_218, mod_consts[255]);
        if (tmp_assattr_target_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_200, mod_consts[96], tmp_assattr_value_200);
        Py_DECREF(tmp_assattr_target_200);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_201;
        PyObject *tmp_list_element_94;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_assattr_target_201;
        PyObject *tmp_expression_value_221;
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_list_element_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_219, mod_consts[256]);
        if (tmp_list_element_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_201 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_expression_value_220;
            PyList_SET_ITEM(tmp_assattr_value_201, 0, tmp_list_element_94);
            tmp_list_element_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_list_element_94 == NULL)) {
                tmp_list_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_list_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_61;
            }
            PyList_SET_ITEM0(tmp_assattr_value_201, 1, tmp_list_element_94);
            tmp_list_element_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_list_element_94 == NULL)) {
                tmp_list_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_list_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_61;
            }
            PyList_SET_ITEM0(tmp_assattr_value_201, 2, tmp_list_element_94);
            tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_220 == NULL)) {
                tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_expression_value_220 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_61;
            }
            tmp_list_element_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_220, mod_consts[256]);
            if (tmp_list_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_61;
            }
            PyList_SET_ITEM(tmp_assattr_value_201, 3, tmp_list_element_94);
            tmp_list_element_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_list_element_94 == NULL)) {
                tmp_list_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_list_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_61;
            }
            PyList_SET_ITEM0(tmp_assattr_value_201, 4, tmp_list_element_94);
        }
        goto list_build_noexception_61;
        // Exception handling pass through code for list_build:
        list_build_exception_61:;
        Py_DECREF(tmp_assattr_value_201);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_61:;
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_201);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_201 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_221, mod_consts[255]);
        if (tmp_assattr_target_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_201);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_201, mod_consts[100], tmp_assattr_value_201);
        Py_DECREF(tmp_assattr_value_201);
        Py_DECREF(tmp_assattr_target_201);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_202;
        PyObject *tmp_assattr_target_202;
        PyObject *tmp_expression_value_222;
        tmp_assattr_value_202 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_value_202 == NULL)) {
            tmp_assattr_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_222 == NULL)) {
            tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_202 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_222, mod_consts[257]);
        if (tmp_assattr_target_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_202, mod_consts[96], tmp_assattr_value_202);
        Py_DECREF(tmp_assattr_target_202);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_203;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_assattr_target_203;
        PyObject *tmp_expression_value_223;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_203 = MAKE_TUPLE_EMPTY(8);
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 2, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 3, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 4, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 5, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 6, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assattr_value_203, 7, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assattr_value_203);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_223 == NULL)) {
            tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_203);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_203 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_223, mod_consts[257]);
        if (tmp_assattr_target_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_203);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_203, mod_consts[100], tmp_assattr_value_203);
        Py_DECREF(tmp_assattr_value_203);
        Py_DECREF(tmp_assattr_target_203);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_204;
        PyObject *tmp_assattr_target_204;
        PyObject *tmp_expression_value_224;
        tmp_assattr_value_204 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_value_204 == NULL)) {
            tmp_assattr_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_assattr_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_224 == NULL)) {
            tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_expression_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_204 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_224, mod_consts[258]);
        if (tmp_assattr_target_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_204, mod_consts[96], tmp_assattr_value_204);
        Py_DECREF(tmp_assattr_target_204);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_205;
        PyObject *tmp_list_element_95;
        PyObject *tmp_assattr_target_205;
        PyObject *tmp_expression_value_225;
        tmp_list_element_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_95 == NULL)) {
            tmp_list_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_205 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_205, 0, tmp_list_element_95);
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_205);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_205 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_225, mod_consts[258]);
        if (tmp_assattr_target_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_205);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_205, mod_consts[100], tmp_assattr_value_205);
        Py_DECREF(tmp_assattr_value_205);
        Py_DECREF(tmp_assattr_target_205);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_206;
        PyObject *tmp_assattr_target_206;
        PyObject *tmp_expression_value_226;
        tmp_assattr_value_206 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_value_206 == NULL)) {
            tmp_assattr_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_226 == NULL)) {
            tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_expression_value_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_206 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_226, mod_consts[259]);
        if (tmp_assattr_target_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_206, mod_consts[96], tmp_assattr_value_206);
        Py_DECREF(tmp_assattr_target_206);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_207;
        PyObject *tmp_list_element_96;
        PyObject *tmp_assattr_target_207;
        PyObject *tmp_expression_value_227;
        tmp_list_element_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_96 == NULL)) {
            tmp_list_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_list_element_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_207 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_207, 0, tmp_list_element_96);
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_207);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_207 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_227, mod_consts[259]);
        if (tmp_assattr_target_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_207);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_207, mod_consts[100], tmp_assattr_value_207);
        Py_DECREF(tmp_assattr_value_207);
        Py_DECREF(tmp_assattr_target_207);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_229;
        tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_228 == NULL)) {
            tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_expression_value_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_4;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_228, mod_consts[253]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_4;
        }
        tmp_args_element_value_36 = Py_None;
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 324;

            goto try_except_handler_4;
        }
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_229, mod_consts[260]);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 324;

            goto try_except_handler_4;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_2;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_f2f401b2c98c5c263a865b9b1c425977, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_f2f401b2c98c5c263a865b9b1c425977, exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_5;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = EXC_VALUE(PyThreadState_GET());
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_31);
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_6;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 326;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[262],
            PyTuple_GET_ITEM(mod_consts[263], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    if (DICT_REMOVE_ITEM((PyObject *)moduledict_pyglet$libs$win32, mod_consts[261]) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    if (DICT_REMOVE_ITEM((PyObject *)moduledict_pyglet$libs$win32, mod_consts[261]) == false) {
        CLEAR_ERROR_OCCURRED(tstate);
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 323;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f2f401b2c98c5c263a865b9b1c425977->m_frame) frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_pyglet$libs$win32$$$function__5__uninitialize();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_32);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_38;
        tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_expression_value_230 == NULL)) {
            tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_230, mod_consts[265]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)mod_consts[264]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[264]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        frame_f2f401b2c98c5c263a865b9b1c425977->m_frame.f_lineno = 335;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2f401b2c98c5c263a865b9b1c425977, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2f401b2c98c5c263a865b9b1c425977->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2f401b2c98c5c263a865b9b1c425977, exception_lineno);
    }



    assertFrameObject(frame_f2f401b2c98c5c263a865b9b1c425977);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.libs.win32", false);

    Py_INCREF(module_pyglet$libs$win32);
    return module_pyglet$libs$win32;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$win32", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
