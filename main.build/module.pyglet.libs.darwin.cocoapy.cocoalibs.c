/* Generated code for Python module 'pyglet.libs.darwin.cocoapy.cocoalibs'
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

/* The "module_pyglet$libs$darwin$cocoapy$cocoalibs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$darwin$cocoapy$cocoalibs;
PyDictObject *moduledict_pyglet$libs$darwin$cocoapy$cocoalibs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[397];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[397];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.darwin.cocoapy.cocoalibs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 397; i++) {
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
void checkModuleConstants_pyglet$libs$darwin$cocoapy$cocoalibs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 397; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5a6a5a4b3045241f28a78d6007eb1fab;
static PyCodeObject *codeobj_a639c0fcda31a063b32d2d014d4022f2;
static PyCodeObject *codeobj_9735917bfd8da8b60989c4ead6f34378;
static PyCodeObject *codeobj_ba5fa44559a2516a27d57b9cdc5749ea;
static PyCodeObject *codeobj_1645da8a73d5360cc48799e6cbf52f8b;
static PyCodeObject *codeobj_10d72f72f4f79cf2f14f1124620bb117;
static PyCodeObject *codeobj_bb66bd46208c5772274aeb7f3bc90185;
static PyCodeObject *codeobj_05b8462e7ed59e9de9adf82c22e9aba2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[388]); CHECK_OBJECT(module_filename_obj);
    codeobj_5a6a5a4b3045241f28a78d6007eb1fab = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[389], mod_consts[389], NULL, NULL, 0, 0, 0);
    codeobj_a639c0fcda31a063b32d2d014d4022f2 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[390], NULL, 1, 0, 0);
    codeobj_9735917bfd8da8b60989c4ead6f34378 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[391], NULL, 1, 0, 0);
    codeobj_ba5fa44559a2516a27d57b9cdc5749ea = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[392], NULL, 1, 0, 0);
    codeobj_1645da8a73d5360cc48799e6cbf52f8b = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[393], NULL, 1, 0, 0);
    codeobj_10d72f72f4f79cf2f14f1124620bb117 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[394], NULL, 1, 0, 0);
    codeobj_bb66bd46208c5772274aeb7f3bc90185 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[395], NULL, 1, 0, 0);
    codeobj_05b8462e7ed59e9de9adf82c22e9aba2 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[390], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__1_CFSTR();


static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__2_get_NSString();


static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__3_cfstring_to_string();


static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__4_cfnumber_to_number();


static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__5_cftype_to_value();


static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__6_cfset_to_set();


static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__7_cfarray_to_list();


// The module function definitions.
static PyObject *impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__1_CFSTR(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[0];
    struct Nuitka_FrameObject *frame_a639c0fcda31a063b32d2d014d4022f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a639c0fcda31a063b32d2d014d4022f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a639c0fcda31a063b32d2d014d4022f2)) {
        Py_XDECREF(cache_frame_a639c0fcda31a063b32d2d014d4022f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a639c0fcda31a063b32d2d014d4022f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a639c0fcda31a063b32d2d014d4022f2 = MAKE_FUNCTION_FRAME(tstate, codeobj_a639c0fcda31a063b32d2d014d4022f2, module_pyglet$libs$darwin$cocoapy$cocoalibs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a639c0fcda31a063b32d2d014d4022f2->m_type_description == NULL);
    frame_a639c0fcda31a063b32d2d014d4022f2 = cache_frame_a639c0fcda31a063b32d2d014d4022f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a639c0fcda31a063b32d2d014d4022f2);
    assert(Py_REFCNT(frame_a639c0fcda31a063b32d2d014d4022f2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = Py_None;
        CHECK_OBJECT(par_string);
        tmp_expression_value_2 = par_string;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a639c0fcda31a063b32d2d014d4022f2->m_frame.f_lineno = 48;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[5]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a639c0fcda31a063b32d2d014d4022f2->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a639c0fcda31a063b32d2d014d4022f2->m_frame.f_lineno = 47;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a639c0fcda31a063b32d2d014d4022f2->m_frame.f_lineno = 47;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_a639c0fcda31a063b32d2d014d4022f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a639c0fcda31a063b32d2d014d4022f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a639c0fcda31a063b32d2d014d4022f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a639c0fcda31a063b32d2d014d4022f2,
        type_description_1,
        par_string
    );


    // Release cached frame if used for exception.
    if (frame_a639c0fcda31a063b32d2d014d4022f2 == cache_frame_a639c0fcda31a063b32d2d014d4022f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a639c0fcda31a063b32d2d014d4022f2);
        cache_frame_a639c0fcda31a063b32d2d014d4022f2 = NULL;
    }

    assertFrameObject(frame_a639c0fcda31a063b32d2d014d4022f2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__2_get_NSString(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[0];
    struct Nuitka_FrameObject *frame_05b8462e7ed59e9de9adf82c22e9aba2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05b8462e7ed59e9de9adf82c22e9aba2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05b8462e7ed59e9de9adf82c22e9aba2)) {
        Py_XDECREF(cache_frame_05b8462e7ed59e9de9adf82c22e9aba2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05b8462e7ed59e9de9adf82c22e9aba2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05b8462e7ed59e9de9adf82c22e9aba2 = MAKE_FUNCTION_FRAME(tstate, codeobj_05b8462e7ed59e9de9adf82c22e9aba2, module_pyglet$libs$darwin$cocoapy$cocoalibs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05b8462e7ed59e9de9adf82c22e9aba2->m_type_description == NULL);
    frame_05b8462e7ed59e9de9adf82c22e9aba2 = cache_frame_05b8462e7ed59e9de9adf82c22e9aba2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_05b8462e7ed59e9de9adf82c22e9aba2);
    assert(Py_REFCNT(frame_05b8462e7ed59e9de9adf82c22e9aba2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_string);
        tmp_args_element_value_1 = par_string;
        frame_05b8462e7ed59e9de9adf82c22e9aba2->m_frame.f_lineno = 57;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_05b8462e7ed59e9de9adf82c22e9aba2->m_frame.f_lineno = 57;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[8]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_05b8462e7ed59e9de9adf82c22e9aba2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05b8462e7ed59e9de9adf82c22e9aba2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05b8462e7ed59e9de9adf82c22e9aba2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05b8462e7ed59e9de9adf82c22e9aba2,
        type_description_1,
        par_string
    );


    // Release cached frame if used for exception.
    if (frame_05b8462e7ed59e9de9adf82c22e9aba2 == cache_frame_05b8462e7ed59e9de9adf82c22e9aba2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05b8462e7ed59e9de9adf82c22e9aba2);
        cache_frame_05b8462e7ed59e9de9adf82c22e9aba2 = NULL;
    }

    assertFrameObject(frame_05b8462e7ed59e9de9adf82c22e9aba2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__3_cfstring_to_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cfstring = python_pars[0];
    PyObject *var_length = NULL;
    PyObject *var_size = NULL;
    PyObject *var_buffer = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_10d72f72f4f79cf2f14f1124620bb117;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_10d72f72f4f79cf2f14f1124620bb117 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_10d72f72f4f79cf2f14f1124620bb117)) {
        Py_XDECREF(cache_frame_10d72f72f4f79cf2f14f1124620bb117);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10d72f72f4f79cf2f14f1124620bb117 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10d72f72f4f79cf2f14f1124620bb117 = MAKE_FUNCTION_FRAME(tstate, codeobj_10d72f72f4f79cf2f14f1124620bb117, module_pyglet$libs$darwin$cocoapy$cocoalibs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10d72f72f4f79cf2f14f1124620bb117->m_type_description == NULL);
    frame_10d72f72f4f79cf2f14f1124620bb117 = cache_frame_10d72f72f4f79cf2f14f1124620bb117;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_10d72f72f4f79cf2f14f1124620bb117);
    assert(Py_REFCNT(frame_10d72f72f4f79cf2f14f1124620bb117) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfstring);
        tmp_args_element_value_1 = par_cfstring;
        frame_10d72f72f4f79cf2f14f1124620bb117->m_frame.f_lineno = 60;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[10], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_length);
        tmp_args_element_value_2 = var_length;
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_10d72f72f4f79cf2f14f1124620bb117->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_size == NULL);
        var_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_size);
        tmp_add_expr_left_1 = var_size;
        tmp_add_expr_right_1 = mod_consts[13];
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_10d72f72f4f79cf2f14f1124620bb117->m_frame.f_lineno = 62;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfstring);
        tmp_args_element_value_5 = par_cfstring;
        CHECK_OBJECT(var_buffer);
        tmp_args_element_value_6 = var_buffer;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_args_element_value_8 = var_buffer;
        frame_10d72f72f4f79cf2f14f1124620bb117->m_frame.f_lineno = 63;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_10d72f72f4f79cf2f14f1124620bb117->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_9};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_result);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_result);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_expression_value_3 = var_buffer;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[17]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[18];
        frame_10d72f72f4f79cf2f14f1124620bb117->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10d72f72f4f79cf2f14f1124620bb117, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10d72f72f4f79cf2f14f1124620bb117->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10d72f72f4f79cf2f14f1124620bb117, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10d72f72f4f79cf2f14f1124620bb117,
        type_description_1,
        par_cfstring,
        var_length,
        var_size,
        var_buffer,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_10d72f72f4f79cf2f14f1124620bb117 == cache_frame_10d72f72f4f79cf2f14f1124620bb117) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10d72f72f4f79cf2f14f1124620bb117);
        cache_frame_10d72f72f4f79cf2f14f1124620bb117 = NULL;
    }

    assertFrameObject(frame_10d72f72f4f79cf2f14f1124620bb117);

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
    CHECK_OBJECT(var_length);
    Py_DECREF(var_length);
    var_length = NULL;
    CHECK_OBJECT(var_size);
    Py_DECREF(var_size);
    var_size = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_cfstring);
    Py_DECREF(par_cfstring);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cfstring);
    Py_DECREF(par_cfstring);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__4_cfnumber_to_number(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cfnumber = python_pars[0];
    PyObject *var_numeric_type = NULL;
    PyObject *var_cfnum_to_ctype = NULL;
    PyObject *var_t = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_ba5fa44559a2516a27d57b9cdc5749ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba5fa44559a2516a27d57b9cdc5749ea = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ba5fa44559a2516a27d57b9cdc5749ea)) {
        Py_XDECREF(cache_frame_ba5fa44559a2516a27d57b9cdc5749ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba5fa44559a2516a27d57b9cdc5749ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba5fa44559a2516a27d57b9cdc5749ea = MAKE_FUNCTION_FRAME(tstate, codeobj_ba5fa44559a2516a27d57b9cdc5749ea, module_pyglet$libs$darwin$cocoapy$cocoalibs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba5fa44559a2516a27d57b9cdc5749ea->m_type_description == NULL);
    frame_ba5fa44559a2516a27d57b9cdc5749ea = cache_frame_ba5fa44559a2516a27d57b9cdc5749ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ba5fa44559a2516a27d57b9cdc5749ea);
    assert(Py_REFCNT(frame_ba5fa44559a2516a27d57b9cdc5749ea) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfnumber);
        tmp_args_element_value_1 = par_cfnumber;
        frame_ba5fa44559a2516a27d57b9cdc5749ea->m_frame.f_lineno = 121;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numeric_type == NULL);
        var_numeric_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_cfnum_to_ctype == NULL);
        var_cfnum_to_ctype = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        CHECK_OBJECT(var_numeric_type);
        tmp_key_value_1 = var_numeric_type;
        CHECK_OBJECT(var_cfnum_to_ctype);
        tmp_dict_arg_value_1 = var_cfnum_to_ctype;
        tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        CHECK_OBJECT(var_cfnum_to_ctype);
        tmp_dict_arg_value_2 = var_cfnum_to_ctype;
        CHECK_OBJECT(var_numeric_type);
        tmp_key_value_2 = var_numeric_type;
        tmp_assign_source_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_t);
        tmp_called_value_1 = var_t;
        frame_ba5fa44559a2516a27d57b9cdc5749ea->m_frame.f_lineno = 133;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfnumber);
        tmp_args_element_value_2 = par_cfnumber;
        CHECK_OBJECT(var_numeric_type);
        tmp_args_element_value_3 = var_numeric_type;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_args_element_value_5 = var_result;
        frame_ba5fa44559a2516a27d57b9cdc5749ea->m_frame.f_lineno = 134;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ba5fa44559a2516a27d57b9cdc5749ea->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_result);
        tmp_expression_value_2 = var_result;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[51];
        CHECK_OBJECT(var_numeric_type);
        tmp_mod_expr_right_1 = var_numeric_type;
        tmp_args_element_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ba5fa44559a2516a27d57b9cdc5749ea->m_frame.f_lineno = 137;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 137;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba5fa44559a2516a27d57b9cdc5749ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba5fa44559a2516a27d57b9cdc5749ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba5fa44559a2516a27d57b9cdc5749ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba5fa44559a2516a27d57b9cdc5749ea,
        type_description_1,
        par_cfnumber,
        var_numeric_type,
        var_cfnum_to_ctype,
        var_t,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_ba5fa44559a2516a27d57b9cdc5749ea == cache_frame_ba5fa44559a2516a27d57b9cdc5749ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba5fa44559a2516a27d57b9cdc5749ea);
        cache_frame_ba5fa44559a2516a27d57b9cdc5749ea = NULL;
    }

    assertFrameObject(frame_ba5fa44559a2516a27d57b9cdc5749ea);

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
    CHECK_OBJECT(var_numeric_type);
    Py_DECREF(var_numeric_type);
    var_numeric_type = NULL;
    CHECK_OBJECT(var_cfnum_to_ctype);
    Py_DECREF(var_cfnum_to_ctype);
    var_cfnum_to_ctype = NULL;
    CHECK_OBJECT(var_t);
    Py_DECREF(var_t);
    var_t = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_numeric_type);
    var_numeric_type = NULL;
    Py_XDECREF(var_cfnum_to_ctype);
    var_cfnum_to_ctype = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_cfnumber);
    Py_DECREF(par_cfnumber);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cfnumber);
    Py_DECREF(par_cfnumber);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__5_cftype_to_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cftype = python_pars[0];
    PyObject *var_typeID = NULL;
    PyObject *var_convert_function = NULL;
    struct Nuitka_FrameObject *frame_bb66bd46208c5772274aeb7f3bc90185;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bb66bd46208c5772274aeb7f3bc90185 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bb66bd46208c5772274aeb7f3bc90185)) {
        Py_XDECREF(cache_frame_bb66bd46208c5772274aeb7f3bc90185);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb66bd46208c5772274aeb7f3bc90185 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb66bd46208c5772274aeb7f3bc90185 = MAKE_FUNCTION_FRAME(tstate, codeobj_bb66bd46208c5772274aeb7f3bc90185, module_pyglet$libs$darwin$cocoapy$cocoalibs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb66bd46208c5772274aeb7f3bc90185->m_type_description == NULL);
    frame_bb66bd46208c5772274aeb7f3bc90185 = cache_frame_bb66bd46208c5772274aeb7f3bc90185;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bb66bd46208c5772274aeb7f3bc90185);
    assert(Py_REFCNT(frame_bb66bd46208c5772274aeb7f3bc90185) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_cftype);
        tmp_operand_value_1 = par_cftype;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cftype);
        tmp_args_element_value_1 = par_cftype;
        frame_bb66bd46208c5772274aeb7f3bc90185->m_frame.f_lineno = 151;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[53], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_typeID == NULL);
        var_typeID = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_typeID);
        tmp_cmp_expr_left_1 = var_typeID;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_typeID);
        tmp_subscript_value_1 = var_typeID;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_convert_function == NULL);
        var_convert_function = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_convert_function);
        tmp_called_value_1 = var_convert_function;
        CHECK_OBJECT(par_cftype);
        tmp_args_element_value_2 = par_cftype;
        frame_bb66bd46208c5772274aeb7f3bc90185->m_frame.f_lineno = 154;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    CHECK_OBJECT(par_cftype);
    tmp_return_value = par_cftype;
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
        exception_tb = MAKE_TRACEBACK(frame_bb66bd46208c5772274aeb7f3bc90185, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb66bd46208c5772274aeb7f3bc90185->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb66bd46208c5772274aeb7f3bc90185, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb66bd46208c5772274aeb7f3bc90185,
        type_description_1,
        par_cftype,
        var_typeID,
        var_convert_function
    );


    // Release cached frame if used for exception.
    if (frame_bb66bd46208c5772274aeb7f3bc90185 == cache_frame_bb66bd46208c5772274aeb7f3bc90185) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb66bd46208c5772274aeb7f3bc90185);
        cache_frame_bb66bd46208c5772274aeb7f3bc90185 = NULL;
    }

    assertFrameObject(frame_bb66bd46208c5772274aeb7f3bc90185);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_typeID);
    var_typeID = NULL;
    Py_XDECREF(var_convert_function);
    var_convert_function = NULL;
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

    Py_XDECREF(var_typeID);
    var_typeID = NULL;
    Py_XDECREF(var_convert_function);
    var_convert_function = NULL;
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
    CHECK_OBJECT(par_cftype);
    Py_DECREF(par_cftype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cftype);
    Py_DECREF(par_cftype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__6_cfset_to_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cfset = python_pars[0];
    PyObject *var_count = NULL;
    PyObject *var_buffer = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_1645da8a73d5360cc48799e6cbf52f8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1645da8a73d5360cc48799e6cbf52f8b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1645da8a73d5360cc48799e6cbf52f8b)) {
        Py_XDECREF(cache_frame_1645da8a73d5360cc48799e6cbf52f8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1645da8a73d5360cc48799e6cbf52f8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1645da8a73d5360cc48799e6cbf52f8b = MAKE_FUNCTION_FRAME(tstate, codeobj_1645da8a73d5360cc48799e6cbf52f8b, module_pyglet$libs$darwin$cocoapy$cocoalibs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1645da8a73d5360cc48799e6cbf52f8b->m_type_description == NULL);
    frame_1645da8a73d5360cc48799e6cbf52f8b = cache_frame_1645da8a73d5360cc48799e6cbf52f8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1645da8a73d5360cc48799e6cbf52f8b);
    assert(Py_REFCNT(frame_1645da8a73d5360cc48799e6cbf52f8b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfset);
        tmp_args_element_value_1 = par_cfset;
        frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 168;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[56], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_count == NULL);
        var_count = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_mult_expr_left_1 == NULL)) {
            tmp_mult_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_count);
        tmp_mult_expr_right_1 = var_count;
        tmp_called_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 169;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfset);
        tmp_args_element_value_2 = par_cfset;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_args_element_value_4 = var_buffer;
        frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 170;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_count);
            tmp_args_element_value_6 = var_count;
            frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 171;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
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
                    type_description_1 = "ooo";
                    exception_lineno = 171;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_6;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(var_buffer);
            tmp_expression_value_2 = var_buffer;
            CHECK_OBJECT(outline_0_var_i);
            tmp_subscript_value_1 = outline_0_var_i;
            tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 171;
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 171;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_5);
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
        exception_lineno = 171;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame.f_lineno = 171;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_1645da8a73d5360cc48799e6cbf52f8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1645da8a73d5360cc48799e6cbf52f8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1645da8a73d5360cc48799e6cbf52f8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1645da8a73d5360cc48799e6cbf52f8b,
        type_description_1,
        par_cfset,
        var_count,
        var_buffer
    );


    // Release cached frame if used for exception.
    if (frame_1645da8a73d5360cc48799e6cbf52f8b == cache_frame_1645da8a73d5360cc48799e6cbf52f8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1645da8a73d5360cc48799e6cbf52f8b);
        cache_frame_1645da8a73d5360cc48799e6cbf52f8b = NULL;
    }

    assertFrameObject(frame_1645da8a73d5360cc48799e6cbf52f8b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_count);
    Py_DECREF(var_count);
    var_count = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
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

    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
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
    CHECK_OBJECT(par_cfset);
    Py_DECREF(par_cfset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cfset);
    Py_DECREF(par_cfset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__7_cfarray_to_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cfarray = python_pars[0];
    PyObject *var_count = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_9735917bfd8da8b60989c4ead6f34378;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9735917bfd8da8b60989c4ead6f34378 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9735917bfd8da8b60989c4ead6f34378)) {
        Py_XDECREF(cache_frame_9735917bfd8da8b60989c4ead6f34378);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9735917bfd8da8b60989c4ead6f34378 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9735917bfd8da8b60989c4ead6f34378 = MAKE_FUNCTION_FRAME(tstate, codeobj_9735917bfd8da8b60989c4ead6f34378, module_pyglet$libs$darwin$cocoapy$cocoalibs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9735917bfd8da8b60989c4ead6f34378->m_type_description == NULL);
    frame_9735917bfd8da8b60989c4ead6f34378 = cache_frame_9735917bfd8da8b60989c4ead6f34378;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9735917bfd8da8b60989c4ead6f34378);
    assert(Py_REFCNT(frame_9735917bfd8da8b60989c4ead6f34378) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cfarray);
        tmp_args_element_value_1 = par_cfarray;
        frame_9735917bfd8da8b60989c4ead6f34378->m_frame.f_lineno = 181;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[62], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_count == NULL);
        var_count = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_count);
        tmp_args_element_value_2 = var_count;
        frame_9735917bfd8da8b60989c4ead6f34378->m_frame.f_lineno = 183;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
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
                type_description_1 = "oo";
                exception_lineno = 182;
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
            PyObject *old = outline_0_var_i;
            outline_0_var_i = tmp_assign_source_5;
            Py_INCREF(outline_0_var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[63]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        if (par_cfarray == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_5 = par_cfarray;
        CHECK_OBJECT(outline_0_var_i);
        tmp_args_element_value_6 = outline_0_var_i;
        frame_9735917bfd8da8b60989c4ead6f34378->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        frame_9735917bfd8da8b60989c4ead6f34378->m_frame.f_lineno = 182;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        frame_9735917bfd8da8b60989c4ead6f34378->m_frame.f_lineno = 182;
        tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_append_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 182;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
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
    exception_lineno = 182;
    goto frame_exception_exit_1;
    outline_result_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_9735917bfd8da8b60989c4ead6f34378, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9735917bfd8da8b60989c4ead6f34378->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9735917bfd8da8b60989c4ead6f34378, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9735917bfd8da8b60989c4ead6f34378,
        type_description_1,
        par_cfarray,
        var_count
    );


    // Release cached frame if used for exception.
    if (frame_9735917bfd8da8b60989c4ead6f34378 == cache_frame_9735917bfd8da8b60989c4ead6f34378) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9735917bfd8da8b60989c4ead6f34378);
        cache_frame_9735917bfd8da8b60989c4ead6f34378 = NULL;
    }

    assertFrameObject(frame_9735917bfd8da8b60989c4ead6f34378);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_count);
    Py_DECREF(var_count);
    var_count = NULL;
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

    Py_XDECREF(var_count);
    var_count = NULL;
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
    CHECK_OBJECT(par_cfarray);
    Py_DECREF(par_cfarray);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cfarray);
    Py_DECREF(par_cfarray);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__1_CFSTR() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__1_CFSTR,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a639c0fcda31a063b32d2d014d4022f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__2_get_NSString() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__2_get_NSString,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05b8462e7ed59e9de9adf82c22e9aba2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__3_cfstring_to_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__3_cfstring_to_string,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_10d72f72f4f79cf2f14f1124620bb117,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__4_cfnumber_to_number() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__4_cfnumber_to_number,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba5fa44559a2516a27d57b9cdc5749ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__5_cftype_to_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__5_cftype_to_value,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb66bd46208c5772274aeb7f3bc90185,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__6_cfset_to_set() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__6_cfset_to_set,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1645da8a73d5360cc48799e6cbf52f8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__7_cfarray_to_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__7_cfarray_to_list,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9735917bfd8da8b60989c4ead6f34378,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
        mod_consts[65],
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

function_impl_code functable_pyglet$libs$darwin$cocoapy$cocoalibs[] = {
    impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__1_CFSTR,
    impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__2_get_NSString,
    impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__3_cfstring_to_string,
    impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__4_cfnumber_to_number,
    impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__5_cftype_to_value,
    impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__6_cfset_to_set,
    impl_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__7_cfarray_to_list,
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

    function_impl_code *current = functable_pyglet$libs$darwin$cocoapy$cocoalibs;
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

    if (offset > sizeof(functable_pyglet$libs$darwin$cocoapy$cocoalibs) || offset < 0) {
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
        functable_pyglet$libs$darwin$cocoapy$cocoalibs[offset],
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
        module_pyglet$libs$darwin$cocoapy$cocoalibs,
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
PyObject *modulecode_pyglet$libs$darwin$cocoapy$cocoalibs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.libs.darwin.cocoapy.cocoalibs");

    // Store the module for future use.
    module_pyglet$libs$darwin$cocoapy$cocoalibs = module;

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
        PRINT_STRING("pyglet.libs.darwin.cocoapy.cocoalibs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.libs.darwin.cocoapy.cocoalibs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$darwin$cocoapy$cocoalibs\n");

    moduledict_pyglet$libs$darwin$cocoapy$cocoalibs = MODULE_DICT(module_pyglet$libs$darwin$cocoapy$cocoalibs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[396]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$darwin$cocoapy$cocoalibs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$darwin$cocoapy$cocoalibs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_5a6a5a4b3045241f28a78d6007eb1fab;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_2);
    }
    frame_5a6a5a4b3045241f28a78d6007eb1fab = MAKE_MODULE_FRAME(codeobj_5a6a5a4b3045241f28a78d6007eb1fab, module_pyglet$libs$darwin$cocoapy$cocoalibs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5a6a5a4b3045241f28a78d6007eb1fab);
    assert(Py_REFCNT(frame_5a6a5a4b3045241f28a78d6007eb1fab) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[70], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$libs$darwin$cocoapy$cocoalibs, true, tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
                mod_consts[72],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[72]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[74];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$darwin$cocoapy$cocoalibs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[75];
        tmp_level_value_1 = mod_consts[13];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
                mod_consts[76],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[76]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyglet$libs$darwin$cocoapy$cocoalibs,
                mod_consts[0],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[0]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
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
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[77];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$libs$darwin$cocoapy$cocoalibs;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_pyglet$libs$darwin$cocoapy$cocoalibs;
        tmp_fromlist_value_2 = mod_consts[78];
        tmp_level_value_2 = mod_consts[13];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 5;
        tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$libs$darwin$cocoapy$cocoalibs, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 10;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_8);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_cmp_expr_left_1 == NULL));
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
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_9);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 16;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assign_source_13 == NULL)) {
            tmp_assign_source_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_2;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[89], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_list_element_1;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_3;
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_4, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assattr_value_4, 1, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assattr_value_4, 2, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[91], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_4;
        tmp_assattr_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_5 == NULL)) {
            tmp_assattr_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[92]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[89], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_list_element_2;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_5;
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_6, 0, tmp_list_element_2);
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[92]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[91], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_6;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[10]);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[89], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_list_element_3;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_7;
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_8, 0, tmp_list_element_3);
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[91], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_8;
        tmp_assattr_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_9 == NULL)) {
            tmp_assattr_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[11]);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[89], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_list_element_4;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_9;
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_10, 0, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_assattr_value_10, 1, tmp_list_element_4);
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[11]);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[91], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_10;
        tmp_assattr_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_value_11 == NULL)) {
            tmp_assattr_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[14]);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[89], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_list_element_5;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_11;
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_12, 0, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_assattr_value_12, 1, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_assattr_value_12, 2, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_assattr_value_12, 3, tmp_list_element_5);
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[14]);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[91], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_12;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[95]);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[89], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_13;
        tmp_assattr_value_14 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[95]);
        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[91], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_14;
        tmp_assattr_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_15 == NULL)) {
            tmp_assattr_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[96]);
        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[89], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_list_element_6;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_15;
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_16, 0, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_16, 1, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_value_16, 2, tmp_list_element_6);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_16);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[96]);
        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[91], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__1_CFSTR();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__2_get_NSString();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__3_cfstring_to_string();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_16;
        tmp_assattr_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_17 == NULL)) {
            tmp_assattr_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[99]);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[89], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_list_element_7;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_17;
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_18 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_18, 0, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_assattr_value_18, 1, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_assattr_value_18, 2, tmp_list_element_7);
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[99]);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[91], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_18;
        tmp_assattr_value_19 = Py_None;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[100]);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[89], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_19;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_20, 0, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_20, 1, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_20, 2, tmp_list_element_8);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[100]);
        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[91], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_20;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[102]);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[89], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_21;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_22, 0, tmp_list_element_9);
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[102]);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[91], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_22;
        tmp_assattr_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_23 == NULL)) {
            tmp_assattr_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[103]);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[89], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_list_element_10;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_expression_value_23;
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_24 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_24, 0, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_value_24, 1, tmp_list_element_10);
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_24);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_24);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[103]);
        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_24);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[91], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_target_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_expression_value_24;
        tmp_assattr_value_25 = Py_None;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[104]);
        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[89], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_target_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_list_element_11;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_25;
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_26 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_26, 0, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_value_26, 1, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_value_26, 2, tmp_list_element_11);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_26);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[104]);
        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_26);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[91], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_26;
        tmp_assattr_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_27 == NULL)) {
            tmp_assattr_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[105]);
        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[89], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_expression_value_27;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_28 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_28, 0, tmp_list_element_12);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_value_28, 1, tmp_list_element_12);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_value_28, 2, tmp_list_element_12);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto list_build_exception_9;
        }
        PyList_SET_ITEM0(tmp_assattr_value_28, 3, tmp_list_element_12);
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_28);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[105]);
        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[91], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_target_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_assattr_target_29;
        PyObject *tmp_expression_value_28;
        tmp_assattr_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_29 == NULL)) {
            tmp_assattr_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[106]);
        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[89], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_target_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_30;
        PyObject *tmp_expression_value_29;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_30 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_30, 0, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_30, 1, tmp_list_element_13);
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_30, 2, tmp_list_element_13);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_30);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[106]);
        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_30);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[91], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_target_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_assattr_target_31;
        PyObject *tmp_expression_value_30;
        tmp_assattr_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_value_31 == NULL)) {
            tmp_assattr_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[19]);
        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[89], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_target_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_list_element_14;
        PyObject *tmp_assattr_target_32;
        PyObject *tmp_expression_value_31;
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_32 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_32, 0, tmp_list_element_14);
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_32);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[19]);
        if (tmp_assattr_target_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_32);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[91], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_target_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_assattr_target_33;
        PyObject *tmp_expression_value_32;
        tmp_assattr_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_assattr_value_33 == NULL)) {
            tmp_assattr_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_assattr_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[48]);
        if (tmp_assattr_target_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[89], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_target_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_list_element_15;
        PyObject *tmp_assattr_target_34;
        PyObject *tmp_expression_value_33;
        tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_15 == NULL)) {
            tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_34 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_34, 0, tmp_list_element_15);
        tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_list_element_15 == NULL)) {
            tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_34, 1, tmp_list_element_15);
        tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_15 == NULL)) {
            tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_34, 2, tmp_list_element_15);
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[48]);
        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[91], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_target_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_assattr_target_35;
        PyObject *tmp_expression_value_34;
        tmp_assattr_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_value_35 == NULL)) {
            tmp_assattr_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assattr_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[109]);
        if (tmp_assattr_target_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[89], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_target_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_assattr_target_36;
        PyObject *tmp_expression_value_35;
        tmp_assattr_value_36 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_36);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[109]);
        if (tmp_assattr_target_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_36);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[91], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_target_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_assattr_target_37;
        PyObject *tmp_expression_value_36;
        tmp_assattr_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_value_37 == NULL)) {
            tmp_assattr_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assattr_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[53]);
        if (tmp_assattr_target_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[89], tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_target_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_list_element_16;
        PyObject *tmp_assattr_target_38;
        PyObject *tmp_expression_value_37;
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_38 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_38, 0, tmp_list_element_16);
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_38);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[53]);
        if (tmp_assattr_target_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_38);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[91], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_target_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__4_cfnumber_to_number();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 140;
        tmp_dict_key_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[95]);
        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_called_instance_3;
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 141;
            tmp_dict_key_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[109]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[127]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_35);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__5_cftype_to_value();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_assattr_target_39;
        PyObject *tmp_expression_value_38;
        tmp_assattr_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_39 == NULL)) {
            tmp_assattr_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[56]);
        if (tmp_assattr_target_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[89], tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_target_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_list_element_17;
        PyObject *tmp_assattr_target_40;
        PyObject *tmp_expression_value_39;
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_40 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_40, 0, tmp_list_element_17);
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[56]);
        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[91], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_target_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_assattr_target_41;
        PyObject *tmp_expression_value_40;
        tmp_assattr_value_41 = Py_None;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[57]);
        if (tmp_assattr_target_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[89], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_target_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_list_element_18;
        PyObject *tmp_assattr_target_42;
        PyObject *tmp_expression_value_41;
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_42 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_42, 0, tmp_list_element_18);
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_value_42, 1, tmp_list_element_18);
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_42);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[57]);
        if (tmp_assattr_target_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_42);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[91], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_target_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__6_cfset_to_set();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_assattr_target_43;
        PyObject *tmp_expression_value_42;
        tmp_assattr_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_43 == NULL)) {
            tmp_assattr_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[62]);
        if (tmp_assattr_target_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[89], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_target_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_list_element_19;
        PyObject *tmp_assattr_target_44;
        PyObject *tmp_expression_value_43;
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_44 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_44, 0, tmp_list_element_19);
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_44);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[62]);
        if (tmp_assattr_target_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_44);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[91], tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_target_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_assattr_target_45;
        PyObject *tmp_expression_value_44;
        tmp_assattr_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_45 == NULL)) {
            tmp_assattr_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[63]);
        if (tmp_assattr_target_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[89], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_target_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_list_element_20;
        PyObject *tmp_assattr_target_46;
        PyObject *tmp_expression_value_45;
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_46 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_46, 0, tmp_list_element_20);
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_46, 1, tmp_list_element_20);
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_46);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[63]);
        if (tmp_assattr_target_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_46);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[91], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_target_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_pyglet$libs$darwin$cocoapy$cocoalibs$$$function__7_cfarray_to_list();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[130]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[131];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_assattr_target_47;
        PyObject *tmp_expression_value_47;
        tmp_assattr_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_47 == NULL)) {
            tmp_assattr_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[132]);
        if (tmp_assattr_target_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[89], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_target_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_assattr_target_48;
        PyObject *tmp_expression_value_48;
        tmp_assattr_value_48 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[132]);
        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[91], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_target_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_assattr_target_49;
        PyObject *tmp_expression_value_49;
        tmp_assattr_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_49 == NULL)) {
            tmp_assattr_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[133]);
        if (tmp_assattr_target_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[89], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_target_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_assattr_target_50;
        PyObject *tmp_expression_value_50;
        tmp_assattr_value_50 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[133]);
        if (tmp_assattr_target_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[91], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_target_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 200;
        tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[134], 0)
        );

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_40);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
            tmp_cmp_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_cmp_expr_left_2 == NULL));
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
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_41);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[84]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 206;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[130]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[137];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[130]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[138];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[130]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[139];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[130]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = mod_consts[140];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[220];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[224];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[226];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[260];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[274];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[278];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[282];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[284];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[286];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 344;
        tmp_assign_source_147 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[297], 0)
        );

        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_147);
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_cmp_expr_left_3 == NULL)) {
            tmp_cmp_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_cmp_expr_left_3 == NULL));
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_148);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[84]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 350;
        tmp_assign_source_149 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assign_source_150 == NULL)) {
            tmp_assign_source_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assign_source_151 == NULL)) {
            tmp_assign_source_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assign_source_152 == NULL)) {
            tmp_assign_source_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[130]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[303];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_153 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[130]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[304];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_154 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_assattr_target_51;
        PyObject *tmp_expression_value_59;
        tmp_assattr_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assattr_value_51 == NULL)) {
            tmp_assattr_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_assattr_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[306]);
        if (tmp_assattr_target_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[89], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_target_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_list_element_21;
        PyObject *tmp_assattr_target_52;
        PyObject *tmp_expression_value_60;
        tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_list_element_21 == NULL)) {
            tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_52 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_52, 0, tmp_list_element_21);
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[306]);
        if (tmp_assattr_target_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[91], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_target_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_assattr_target_53;
        PyObject *tmp_expression_value_61;
        tmp_assattr_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_assattr_value_53 == NULL)) {
            tmp_assattr_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_assattr_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[307]);
        if (tmp_assattr_target_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[89], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_target_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_assattr_target_54;
        PyObject *tmp_expression_value_62;
        tmp_assattr_value_54 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[307]);
        if (tmp_assattr_target_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[91], tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_target_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_assattr_target_55;
        PyObject *tmp_expression_value_63;
        tmp_assattr_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_value_55 == NULL)) {
            tmp_assattr_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_assattr_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[308]);
        if (tmp_assattr_target_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[89], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_target_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_assattr_target_56;
        PyObject *tmp_expression_value_64;
        tmp_assattr_value_56 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[308]);
        if (tmp_assattr_target_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[91], tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_target_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_assattr_target_57;
        PyObject *tmp_expression_value_65;
        tmp_assattr_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_value_57 == NULL)) {
            tmp_assattr_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_assattr_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[309]);
        if (tmp_assattr_target_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[89], tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_target_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_assattr_target_58;
        PyObject *tmp_expression_value_66;
        tmp_assattr_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_58 == NULL)) {
            tmp_assattr_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[310]);
        if (tmp_assattr_target_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[89], tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_target_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_list_element_22;
        PyObject *tmp_assattr_target_59;
        PyObject *tmp_expression_value_67;
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_59 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_59, 0, tmp_list_element_22);
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_59, 1, tmp_list_element_22);
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_assattr_value_59);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_59);

            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[310]);
        if (tmp_assattr_target_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_59);

            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[91], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_target_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_assattr_target_60;
        PyObject *tmp_expression_value_68;
        tmp_assattr_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assattr_value_60 == NULL)) {
            tmp_assattr_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[301]);
        }

        if (tmp_assattr_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[311]);
        if (tmp_assattr_target_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[89], tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_target_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_list_element_23;
        PyObject *tmp_assattr_target_61;
        PyObject *tmp_expression_value_69;
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_61 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_61, 0, tmp_list_element_23);
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_assattr_value_61, 1, tmp_list_element_23);
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_assattr_value_61, 2, tmp_list_element_23);
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_assattr_value_61);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_61);

            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[311]);
        if (tmp_assattr_target_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_61);

            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[91], tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_target_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_62;
        PyObject *tmp_assattr_target_62;
        PyObject *tmp_expression_value_70;
        tmp_assattr_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assattr_value_62 == NULL)) {
            tmp_assattr_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[301]);
        }

        if (tmp_assattr_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[312]);
        if (tmp_assattr_target_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_62, mod_consts[89], tmp_assattr_value_62);
        Py_DECREF(tmp_assattr_target_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_63;
        PyObject *tmp_list_element_24;
        PyObject *tmp_assattr_target_63;
        PyObject *tmp_expression_value_71;
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_63 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_63, 0, tmp_list_element_24);
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_63);

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[312]);
        if (tmp_assattr_target_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_63);

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_63, mod_consts[91], tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_target_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_64;
        PyObject *tmp_assattr_target_64;
        PyObject *tmp_expression_value_72;
        tmp_assattr_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assattr_value_64 == NULL)) {
            tmp_assattr_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[301]);
        }

        if (tmp_assattr_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[313]);
        if (tmp_assattr_target_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_64, mod_consts[89], tmp_assattr_value_64);
        Py_DECREF(tmp_assattr_target_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_65;
        PyObject *tmp_list_element_25;
        PyObject *tmp_assattr_target_65;
        PyObject *tmp_expression_value_73;
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_65 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_65, 0, tmp_list_element_25);
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_65);

            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[313]);
        if (tmp_assattr_target_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_65);

            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_65, mod_consts[91], tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_target_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_66;
        PyObject *tmp_assattr_target_66;
        PyObject *tmp_expression_value_74;
        tmp_assattr_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_66 == NULL)) {
            tmp_assattr_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[314]);
        if (tmp_assattr_target_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_66, mod_consts[89], tmp_assattr_value_66);
        Py_DECREF(tmp_assattr_target_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_67;
        PyObject *tmp_list_element_26;
        PyObject *tmp_assattr_target_67;
        PyObject *tmp_expression_value_75;
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_67 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_67, 0, tmp_list_element_26);
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_67);

            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[314]);
        if (tmp_assattr_target_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_67);

            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_67, mod_consts[91], tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_target_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_68;
        PyObject *tmp_assattr_target_68;
        PyObject *tmp_expression_value_76;
        tmp_assattr_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_assattr_value_68 == NULL)) {
            tmp_assattr_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_assattr_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[315]);
        if (tmp_assattr_target_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_68, mod_consts[89], tmp_assattr_value_68);
        Py_DECREF(tmp_assattr_target_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_69;
        PyObject *tmp_list_element_27;
        PyObject *tmp_assattr_target_69;
        PyObject *tmp_expression_value_77;
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_69 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_69, 0, tmp_list_element_27);
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_69);

            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[315]);
        if (tmp_assattr_target_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_69);

            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_69, mod_consts[91], tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_target_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_70;
        PyObject *tmp_assattr_target_70;
        PyObject *tmp_expression_value_78;
        tmp_assattr_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_70 == NULL)) {
            tmp_assattr_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[316]);
        if (tmp_assattr_target_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_70, mod_consts[89], tmp_assattr_value_70);
        Py_DECREF(tmp_assattr_target_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_71;
        PyObject *tmp_list_element_28;
        PyObject *tmp_assattr_target_71;
        PyObject *tmp_expression_value_79;
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_71 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_71, 0, tmp_list_element_28);
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_71);

            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[316]);
        if (tmp_assattr_target_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_71);

            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_71, mod_consts[91], tmp_assattr_value_71);
        Py_DECREF(tmp_assattr_value_71);
        Py_DECREF(tmp_assattr_target_71);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_72;
        PyObject *tmp_assattr_target_72;
        PyObject *tmp_expression_value_80;
        tmp_assattr_value_72 = Py_None;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[317]);
        if (tmp_assattr_target_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_72, mod_consts[89], tmp_assattr_value_72);
        Py_DECREF(tmp_assattr_target_72);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_73;
        PyObject *tmp_list_element_29;
        PyObject *tmp_assattr_target_73;
        PyObject *tmp_expression_value_81;
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_73 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_73, 0, tmp_list_element_29);
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_73);

            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[317]);
        if (tmp_assattr_target_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_73);

            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_73, mod_consts[91], tmp_assattr_value_73);
        Py_DECREF(tmp_assattr_value_73);
        Py_DECREF(tmp_assattr_target_73);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_74;
        PyObject *tmp_assattr_target_74;
        PyObject *tmp_expression_value_82;
        tmp_assattr_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_assattr_value_74 == NULL)) {
            tmp_assattr_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_assattr_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[319]);
        if (tmp_assattr_target_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_74, mod_consts[89], tmp_assattr_value_74);
        Py_DECREF(tmp_assattr_target_74);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_75;
        PyObject *tmp_list_element_30;
        PyObject *tmp_assattr_target_75;
        PyObject *tmp_expression_value_83;
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_75 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_75, 0, tmp_list_element_30);
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_75);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[319]);
        if (tmp_assattr_target_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_75);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_75, mod_consts[91], tmp_assattr_value_75);
        Py_DECREF(tmp_assattr_value_75);
        Py_DECREF(tmp_assattr_target_75);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_76;
        PyObject *tmp_assattr_target_76;
        PyObject *tmp_expression_value_84;
        tmp_assattr_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_assattr_value_76 == NULL)) {
            tmp_assattr_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_assattr_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[320]);
        if (tmp_assattr_target_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_76, mod_consts[89], tmp_assattr_value_76);
        Py_DECREF(tmp_assattr_target_76);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_77;
        PyObject *tmp_list_element_31;
        PyObject *tmp_assattr_target_77;
        PyObject *tmp_expression_value_85;
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_77 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_77, 0, tmp_list_element_31);
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_77);

            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[320]);
        if (tmp_assattr_target_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_77);

            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_77, mod_consts[91], tmp_assattr_value_77);
        Py_DECREF(tmp_assattr_value_77);
        Py_DECREF(tmp_assattr_target_77);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_78;
        PyObject *tmp_assattr_target_78;
        PyObject *tmp_expression_value_86;
        tmp_assattr_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_78 == NULL)) {
            tmp_assattr_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[321]);
        if (tmp_assattr_target_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_78, mod_consts[89], tmp_assattr_value_78);
        Py_DECREF(tmp_assattr_target_78);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_79;
        PyObject *tmp_list_element_32;
        PyObject *tmp_assattr_target_79;
        PyObject *tmp_expression_value_87;
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_79 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_79, 0, tmp_list_element_32);
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_79);

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[321]);
        if (tmp_assattr_target_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_79);

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_79, mod_consts[91], tmp_assattr_value_79);
        Py_DECREF(tmp_assattr_value_79);
        Py_DECREF(tmp_assattr_target_79);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_80;
        PyObject *tmp_assattr_target_80;
        PyObject *tmp_expression_value_88;
        tmp_assattr_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assattr_value_80 == NULL)) {
            tmp_assattr_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[301]);
        }

        if (tmp_assattr_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[322]);
        if (tmp_assattr_target_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_80, mod_consts[89], tmp_assattr_value_80);
        Py_DECREF(tmp_assattr_target_80);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_81;
        PyObject *tmp_list_element_33;
        PyObject *tmp_assattr_target_81;
        PyObject *tmp_expression_value_89;
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_81 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_19;
            PyList_SET_ITEM0(tmp_assattr_value_81, 0, tmp_list_element_33);
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;

                goto list_build_exception_16;
            }
            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

            if (unlikely(tmp_args_element_value_18 == NULL)) {
                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;

                goto list_build_exception_16;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 410;
            tmp_list_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_18);
            if (tmp_list_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;

                goto list_build_exception_16;
            }
            PyList_SET_ITEM(tmp_assattr_value_81, 1, tmp_list_element_33);
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;

                goto list_build_exception_16;
            }
            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_args_element_value_19 == NULL)) {
                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
            }

            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;

                goto list_build_exception_16;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 410;
            tmp_list_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_19);
            if (tmp_list_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;

                goto list_build_exception_16;
            }
            PyList_SET_ITEM(tmp_assattr_value_81, 2, tmp_list_element_33);
        }
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_assattr_value_81);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_81);

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[322]);
        if (tmp_assattr_target_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_81);

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_81, mod_consts[91], tmp_assattr_value_81);
        Py_DECREF(tmp_assattr_value_81);
        Py_DECREF(tmp_assattr_target_81);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_82;
        PyObject *tmp_assattr_target_82;
        PyObject *tmp_expression_value_90;
        tmp_assattr_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[324]);

        if (unlikely(tmp_assattr_value_82 == NULL)) {
            tmp_assattr_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[324]);
        }

        if (tmp_assattr_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[325]);
        if (tmp_assattr_target_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_82, mod_consts[89], tmp_assattr_value_82);
        Py_DECREF(tmp_assattr_target_82);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_83;
        PyObject *tmp_list_element_34;
        PyObject *tmp_assattr_target_83;
        PyObject *tmp_expression_value_91;
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_83 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_83, 0, tmp_list_element_34);
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_83);

            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[325]);
        if (tmp_assattr_target_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_83);

            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_83, mod_consts[91], tmp_assattr_value_83);
        Py_DECREF(tmp_assattr_value_83);
        Py_DECREF(tmp_assattr_target_83);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_84;
        PyObject *tmp_assattr_target_84;
        PyObject *tmp_expression_value_92;
        tmp_assattr_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_84 == NULL)) {
            tmp_assattr_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[326]);
        if (tmp_assattr_target_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_84, mod_consts[89], tmp_assattr_value_84);
        Py_DECREF(tmp_assattr_target_84);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_85;
        PyObject *tmp_list_element_35;
        PyObject *tmp_assattr_target_85;
        PyObject *tmp_expression_value_93;
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_85 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_85, 0, tmp_list_element_35);
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_85, 1, tmp_list_element_35);
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_assattr_value_85);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_85);

            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[326]);
        if (tmp_assattr_target_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_85);

            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_85, mod_consts[91], tmp_assattr_value_85);
        Py_DECREF(tmp_assattr_value_85);
        Py_DECREF(tmp_assattr_target_85);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_86;
        PyObject *tmp_assattr_target_86;
        PyObject *tmp_expression_value_94;
        tmp_assattr_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_86 == NULL)) {
            tmp_assattr_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[327]);
        if (tmp_assattr_target_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_86, mod_consts[89], tmp_assattr_value_86);
        Py_DECREF(tmp_assattr_target_86);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_87;
        PyObject *tmp_list_element_36;
        PyObject *tmp_assattr_target_87;
        PyObject *tmp_expression_value_95;
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_87 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_87, 0, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_87, 1, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_87, 2, tmp_list_element_36);
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_assattr_value_87);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_87);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[327]);
        if (tmp_assattr_target_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_87);

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_87, mod_consts[91], tmp_assattr_value_87);
        Py_DECREF(tmp_assattr_value_87);
        Py_DECREF(tmp_assattr_target_87);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_88;
        PyObject *tmp_assattr_target_88;
        PyObject *tmp_expression_value_96;
        tmp_assattr_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_88 == NULL)) {
            tmp_assattr_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[328]);
        if (tmp_assattr_target_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_88, mod_consts[89], tmp_assattr_value_88);
        Py_DECREF(tmp_assattr_target_88);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_89;
        PyObject *tmp_list_element_37;
        PyObject *tmp_assattr_target_89;
        PyObject *tmp_expression_value_97;
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_89 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_89, 0, tmp_list_element_37);
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto list_build_exception_19;
        }
        PyList_SET_ITEM0(tmp_assattr_value_89, 1, tmp_list_element_37);
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto list_build_exception_19;
        }
        PyList_SET_ITEM0(tmp_assattr_value_89, 2, tmp_list_element_37);
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_assattr_value_89);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_89);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[328]);
        if (tmp_assattr_target_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_89);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_89, mod_consts[91], tmp_assattr_value_89);
        Py_DECREF(tmp_assattr_value_89);
        Py_DECREF(tmp_assattr_target_89);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_90;
        PyObject *tmp_assattr_target_90;
        PyObject *tmp_expression_value_98;
        tmp_assattr_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_90 == NULL)) {
            tmp_assattr_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[329]);
        if (tmp_assattr_target_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_90, mod_consts[89], tmp_assattr_value_90);
        Py_DECREF(tmp_assattr_target_90);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_91;
        PyObject *tmp_list_element_38;
        PyObject *tmp_assattr_target_91;
        PyObject *tmp_expression_value_99;
        tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_38 == NULL)) {
            tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_91 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_91, 0, tmp_list_element_38);
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_91);

            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[329]);
        if (tmp_assattr_target_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_91);

            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_91, mod_consts[91], tmp_assattr_value_91);
        Py_DECREF(tmp_assattr_value_91);
        Py_DECREF(tmp_assattr_target_91);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_92;
        PyObject *tmp_assattr_target_92;
        PyObject *tmp_expression_value_100;
        tmp_assattr_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_92 == NULL)) {
            tmp_assattr_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[330]);
        if (tmp_assattr_target_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_92, mod_consts[89], tmp_assattr_value_92);
        Py_DECREF(tmp_assattr_target_92);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_93;
        PyObject *tmp_list_element_39;
        PyObject *tmp_assattr_target_93;
        PyObject *tmp_expression_value_101;
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_93 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_93, 0, tmp_list_element_39);
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_93);

            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[330]);
        if (tmp_assattr_target_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_93);

            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_93, mod_consts[91], tmp_assattr_value_93);
        Py_DECREF(tmp_assattr_value_93);
        Py_DECREF(tmp_assattr_target_93);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_94;
        PyObject *tmp_assattr_target_94;
        PyObject *tmp_expression_value_102;
        tmp_assattr_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_94 == NULL)) {
            tmp_assattr_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[331]);
        if (tmp_assattr_target_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_94, mod_consts[89], tmp_assattr_value_94);
        Py_DECREF(tmp_assattr_target_94);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_95;
        PyObject *tmp_list_element_40;
        PyObject *tmp_assattr_target_95;
        PyObject *tmp_expression_value_103;
        tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_40 == NULL)) {
            tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_95 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_95, 0, tmp_list_element_40);
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_95);

            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[331]);
        if (tmp_assattr_target_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_95);

            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_95, mod_consts[91], tmp_assattr_value_95);
        Py_DECREF(tmp_assattr_value_95);
        Py_DECREF(tmp_assattr_target_95);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_96;
        PyObject *tmp_assattr_target_96;
        PyObject *tmp_expression_value_104;
        tmp_assattr_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_96 == NULL)) {
            tmp_assattr_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[332]);
        if (tmp_assattr_target_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_96, mod_consts[89], tmp_assattr_value_96);
        Py_DECREF(tmp_assattr_target_96);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_97;
        PyObject *tmp_list_element_41;
        PyObject *tmp_assattr_target_97;
        PyObject *tmp_expression_value_105;
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_97 = MAKE_LIST_EMPTY(11);
        PyList_SET_ITEM0(tmp_assattr_value_97, 0, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 1, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 2, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 3, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 4, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 5, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 6, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 7, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 8, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 9, tmp_list_element_41);
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_97, 10, tmp_list_element_41);
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_assattr_value_97);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_97);

            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[332]);
        if (tmp_assattr_target_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_97);

            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_97, mod_consts[91], tmp_assattr_value_97);
        Py_DECREF(tmp_assattr_value_97);
        Py_DECREF(tmp_assattr_target_97);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_98;
        PyObject *tmp_assattr_target_98;
        PyObject *tmp_expression_value_106;
        tmp_assattr_value_98 = Py_None;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[333]);
        if (tmp_assattr_target_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_98, mod_consts[89], tmp_assattr_value_98);
        Py_DECREF(tmp_assattr_target_98);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_99;
        PyObject *tmp_list_element_42;
        PyObject *tmp_assattr_target_99;
        PyObject *tmp_expression_value_107;
        tmp_list_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_42 == NULL)) {
            tmp_list_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_99 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_99, 0, tmp_list_element_42);
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_99);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[333]);
        if (tmp_assattr_target_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_99);

            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_99, mod_consts[91], tmp_assattr_value_99);
        Py_DECREF(tmp_assattr_value_99);
        Py_DECREF(tmp_assattr_target_99);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_100;
        PyObject *tmp_assattr_target_100;
        PyObject *tmp_expression_value_108;
        tmp_assattr_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_assattr_value_100 == NULL)) {
            tmp_assattr_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_assattr_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[334]);
        if (tmp_assattr_target_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_100, mod_consts[89], tmp_assattr_value_100);
        Py_DECREF(tmp_assattr_target_100);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_101;
        PyObject *tmp_list_element_43;
        PyObject *tmp_assattr_target_101;
        PyObject *tmp_expression_value_109;
        tmp_list_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_43 == NULL)) {
            tmp_list_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_101 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_101, 0, tmp_list_element_43);
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_101);

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[334]);
        if (tmp_assattr_target_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_101);

            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_101, mod_consts[91], tmp_assattr_value_101);
        Py_DECREF(tmp_assattr_value_101);
        Py_DECREF(tmp_assattr_target_101);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_102;
        PyObject *tmp_assattr_target_102;
        PyObject *tmp_expression_value_110;
        tmp_assattr_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_assattr_value_102 == NULL)) {
            tmp_assattr_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_assattr_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[335]);
        if (tmp_assattr_target_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_102, mod_consts[89], tmp_assattr_value_102);
        Py_DECREF(tmp_assattr_target_102);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_103;
        PyObject *tmp_list_element_44;
        PyObject *tmp_assattr_target_103;
        PyObject *tmp_expression_value_111;
        tmp_list_element_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_44 == NULL)) {
            tmp_list_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_103 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_103, 0, tmp_list_element_44);
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_103);

            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[335]);
        if (tmp_assattr_target_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_103);

            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_103, mod_consts[91], tmp_assattr_value_103);
        Py_DECREF(tmp_assattr_value_103);
        Py_DECREF(tmp_assattr_target_103);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_104;
        PyObject *tmp_assattr_target_104;
        PyObject *tmp_expression_value_112;
        tmp_assattr_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_assattr_value_104 == NULL)) {
            tmp_assattr_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_assattr_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[336]);
        if (tmp_assattr_target_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_104, mod_consts[89], tmp_assattr_value_104);
        Py_DECREF(tmp_assattr_target_104);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_105;
        PyObject *tmp_list_element_45;
        PyObject *tmp_assattr_target_105;
        PyObject *tmp_expression_value_113;
        tmp_list_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_45 == NULL)) {
            tmp_list_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_105 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_105, 0, tmp_list_element_45);
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_105);

            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[336]);
        if (tmp_assattr_target_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_105);

            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_105, mod_consts[91], tmp_assattr_value_105);
        Py_DECREF(tmp_assattr_value_105);
        Py_DECREF(tmp_assattr_target_105);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_106;
        PyObject *tmp_assattr_target_106;
        PyObject *tmp_expression_value_114;
        tmp_assattr_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_assattr_value_106 == NULL)) {
            tmp_assattr_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_assattr_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[337]);
        if (tmp_assattr_target_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_106, mod_consts[89], tmp_assattr_value_106);
        Py_DECREF(tmp_assattr_target_106);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_107;
        PyObject *tmp_list_element_46;
        PyObject *tmp_assattr_target_107;
        PyObject *tmp_expression_value_115;
        tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_46 == NULL)) {
            tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_107 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_107, 0, tmp_list_element_46);
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_107);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[337]);
        if (tmp_assattr_target_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_107);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_107, mod_consts[91], tmp_assattr_value_107);
        Py_DECREF(tmp_assattr_value_107);
        Py_DECREF(tmp_assattr_target_107);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_108;
        PyObject *tmp_assattr_target_108;
        PyObject *tmp_expression_value_116;
        tmp_assattr_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_assattr_value_108 == NULL)) {
            tmp_assattr_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
        }

        if (tmp_assattr_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[338]);
        if (tmp_assattr_target_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_108, mod_consts[89], tmp_assattr_value_108);
        Py_DECREF(tmp_assattr_target_108);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_109;
        PyObject *tmp_list_element_47;
        PyObject *tmp_assattr_target_109;
        PyObject *tmp_expression_value_117;
        tmp_list_element_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_47 == NULL)) {
            tmp_list_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_109 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_109, 0, tmp_list_element_47);
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_109);

            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[338]);
        if (tmp_assattr_target_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_109);

            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_109, mod_consts[91], tmp_assattr_value_109);
        Py_DECREF(tmp_assattr_value_109);
        Py_DECREF(tmp_assattr_target_109);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_110;
        PyObject *tmp_assattr_target_110;
        PyObject *tmp_expression_value_118;
        tmp_assattr_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_110 == NULL)) {
            tmp_assattr_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[339]);
        if (tmp_assattr_target_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_110, mod_consts[89], tmp_assattr_value_110);
        Py_DECREF(tmp_assattr_target_110);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_111;
        PyObject *tmp_assattr_target_111;
        PyObject *tmp_expression_value_119;
        tmp_assattr_value_111 = MAKE_LIST_EMPTY(0);
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_111);

            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[339]);
        if (tmp_assattr_target_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_111);

            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_111, mod_consts[91], tmp_assattr_value_111);
        Py_DECREF(tmp_assattr_value_111);
        Py_DECREF(tmp_assattr_target_111);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_112;
        PyObject *tmp_assattr_target_112;
        PyObject *tmp_expression_value_120;
        tmp_assattr_value_112 = Py_None;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[340]);
        if (tmp_assattr_target_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_112, mod_consts[89], tmp_assattr_value_112);
        Py_DECREF(tmp_assattr_target_112);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_113;
        PyObject *tmp_list_element_48;
        PyObject *tmp_assattr_target_113;
        PyObject *tmp_expression_value_121;
        tmp_list_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_48 == NULL)) {
            tmp_list_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_113 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_113, 0, tmp_list_element_48);
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_113);

            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[340]);
        if (tmp_assattr_target_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_113);

            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_113, mod_consts[91], tmp_assattr_value_113);
        Py_DECREF(tmp_assattr_value_113);
        Py_DECREF(tmp_assattr_target_113);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_114;
        PyObject *tmp_assattr_target_114;
        PyObject *tmp_expression_value_122;
        tmp_assattr_value_114 = Py_None;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[341]);
        if (tmp_assattr_target_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_114, mod_consts[89], tmp_assattr_value_114);
        Py_DECREF(tmp_assattr_target_114);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_115;
        PyObject *tmp_list_element_49;
        PyObject *tmp_assattr_target_115;
        PyObject *tmp_expression_value_123;
        tmp_list_element_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_49 == NULL)) {
            tmp_list_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_115 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_115, 0, tmp_list_element_49);
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_115);

            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[341]);
        if (tmp_assattr_target_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_115);

            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_115, mod_consts[91], tmp_assattr_value_115);
        Py_DECREF(tmp_assattr_value_115);
        Py_DECREF(tmp_assattr_target_115);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_116;
        PyObject *tmp_assattr_target_116;
        PyObject *tmp_expression_value_124;
        tmp_assattr_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assattr_value_116 == NULL)) {
            tmp_assattr_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[301]);
        }

        if (tmp_assattr_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[342]);
        if (tmp_assattr_target_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_116, mod_consts[89], tmp_assattr_value_116);
        Py_DECREF(tmp_assattr_target_116);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_117;
        PyObject *tmp_list_element_50;
        PyObject *tmp_assattr_target_117;
        PyObject *tmp_expression_value_125;
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[343]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_117 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_117, 0, tmp_list_element_50);
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_117);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[342]);
        if (tmp_assattr_target_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_117);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_117, mod_consts[91], tmp_assattr_value_117);
        Py_DECREF(tmp_assattr_value_117);
        Py_DECREF(tmp_assattr_target_117);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_118;
        PyObject *tmp_assattr_target_118;
        PyObject *tmp_expression_value_126;
        tmp_assattr_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assattr_value_118 == NULL)) {
            tmp_assattr_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[301]);
        }

        if (tmp_assattr_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[344]);
        if (tmp_assattr_target_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_118, mod_consts[89], tmp_assattr_value_118);
        Py_DECREF(tmp_assattr_target_118);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_119;
        PyObject *tmp_list_element_51;
        PyObject *tmp_assattr_target_119;
        PyObject *tmp_expression_value_127;
        tmp_list_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_list_element_51 == NULL)) {
            tmp_list_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[300]);
        }

        if (tmp_list_element_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_119 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_119, 0, tmp_list_element_51);
        tmp_list_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_list_element_51 == NULL)) {
            tmp_list_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[343]);
        }

        if (tmp_list_element_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto list_build_exception_21;
        }
        PyList_SET_ITEM0(tmp_assattr_value_119, 1, tmp_list_element_51);
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_assattr_value_119);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_119);

            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[344]);
        if (tmp_assattr_target_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_119);

            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_119, mod_consts[91], tmp_assattr_value_119);
        Py_DECREF(tmp_assattr_value_119);
        Py_DECREF(tmp_assattr_target_119);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_120;
        PyObject *tmp_assattr_target_120;
        PyObject *tmp_expression_value_128;
        tmp_assattr_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assattr_value_120 == NULL)) {
            tmp_assattr_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[301]);
        }

        if (tmp_assattr_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[345]);
        if (tmp_assattr_target_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_120, mod_consts[89], tmp_assattr_value_120);
        Py_DECREF(tmp_assattr_target_120);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_121;
        PyObject *tmp_list_element_52;
        PyObject *tmp_assattr_target_121;
        PyObject *tmp_expression_value_129;
        tmp_list_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_list_element_52 == NULL)) {
            tmp_list_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_list_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_121 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_121, 0, tmp_list_element_52);
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_121);

            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[345]);
        if (tmp_assattr_target_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_121);

            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_121, mod_consts[91], tmp_assattr_value_121);
        Py_DECREF(tmp_assattr_value_121);
        Py_DECREF(tmp_assattr_target_121);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_122;
        PyObject *tmp_assattr_target_122;
        PyObject *tmp_expression_value_130;
        tmp_assattr_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_122 == NULL)) {
            tmp_assattr_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[346]);
        if (tmp_assattr_target_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_122, mod_consts[89], tmp_assattr_value_122);
        Py_DECREF(tmp_assattr_target_122);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_123;
        PyObject *tmp_list_element_53;
        PyObject *tmp_assattr_target_123;
        PyObject *tmp_expression_value_131;
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_123 = MAKE_LIST_EMPTY(7);
        PyList_SET_ITEM0(tmp_assattr_value_123, 0, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_123, 1, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_123, 2, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_123, 3, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[318]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_123, 4, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_123, 5, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[302]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_123, 6, tmp_list_element_53);
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_assattr_value_123);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_123);

            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[346]);
        if (tmp_assattr_target_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_123);

            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_123, mod_consts[91], tmp_assattr_value_123);
        Py_DECREF(tmp_assattr_value_123);
        Py_DECREF(tmp_assattr_target_123);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_124;
        PyObject *tmp_assattr_target_124;
        PyObject *tmp_expression_value_132;
        tmp_assattr_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_124 == NULL)) {
            tmp_assattr_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[347]);
        if (tmp_assattr_target_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_124, mod_consts[89], tmp_assattr_value_124);
        Py_DECREF(tmp_assattr_target_124);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_125;
        PyObject *tmp_list_element_54;
        PyObject *tmp_assattr_target_125;
        PyObject *tmp_expression_value_133;
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_125 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_125, 0, tmp_list_element_54);
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_125);

            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[347]);
        if (tmp_assattr_target_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_125);

            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_125, mod_consts[91], tmp_assattr_value_125);
        Py_DECREF(tmp_assattr_value_125);
        Py_DECREF(tmp_assattr_target_125);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_126;
        PyObject *tmp_assattr_target_126;
        PyObject *tmp_expression_value_134;
        tmp_assattr_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_126 == NULL)) {
            tmp_assattr_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[348]);
        if (tmp_assattr_target_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_126, mod_consts[89], tmp_assattr_value_126);
        Py_DECREF(tmp_assattr_target_126);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_127;
        PyObject *tmp_list_element_55;
        PyObject *tmp_assattr_target_127;
        PyObject *tmp_expression_value_135;
        tmp_list_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_55 == NULL)) {
            tmp_list_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_127 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_127, 0, tmp_list_element_55);
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_127);

            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[348]);
        if (tmp_assattr_target_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_127);

            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_127, mod_consts[91], tmp_assattr_value_127);
        Py_DECREF(tmp_assattr_value_127);
        Py_DECREF(tmp_assattr_target_127);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_128;
        PyObject *tmp_assattr_target_128;
        PyObject *tmp_expression_value_136;
        tmp_assattr_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_128 == NULL)) {
            tmp_assattr_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[349]);
        if (tmp_assattr_target_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_128, mod_consts[89], tmp_assattr_value_128);
        Py_DECREF(tmp_assattr_target_128);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_129;
        PyObject *tmp_list_element_56;
        PyObject *tmp_assattr_target_129;
        PyObject *tmp_expression_value_137;
        tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_56 == NULL)) {
            tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_129 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_129, 0, tmp_list_element_56);
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_129);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[349]);
        if (tmp_assattr_target_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_129);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_129, mod_consts[91], tmp_assattr_value_129);
        Py_DECREF(tmp_assattr_value_129);
        Py_DECREF(tmp_assattr_target_129);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_130;
        PyObject *tmp_assattr_target_130;
        PyObject *tmp_expression_value_138;
        tmp_assattr_value_130 = Py_None;
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[350]);
        if (tmp_assattr_target_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_130, mod_consts[89], tmp_assattr_value_130);
        Py_DECREF(tmp_assattr_target_130);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_131;
        PyObject *tmp_list_element_57;
        PyObject *tmp_assattr_target_131;
        PyObject *tmp_expression_value_139;
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_131 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_131, 0, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[324]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[324]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_assattr_value_131, 1, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_assattr_value_131, 2, tmp_list_element_57);
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_assattr_value_131);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_131);

            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[350]);
        if (tmp_assattr_target_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_131);

            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_131, mod_consts[91], tmp_assattr_value_131);
        Py_DECREF(tmp_assattr_value_131);
        Py_DECREF(tmp_assattr_target_131);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_132;
        PyObject *tmp_assattr_target_132;
        PyObject *tmp_expression_value_140;
        tmp_assattr_value_132 = Py_None;
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[351]);
        if (tmp_assattr_target_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_132, mod_consts[89], tmp_assattr_value_132);
        Py_DECREF(tmp_assattr_target_132);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_133;
        PyObject *tmp_list_element_58;
        PyObject *tmp_assattr_target_133;
        PyObject *tmp_expression_value_141;
        tmp_list_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_58 == NULL)) {
            tmp_list_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_133 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_133, 0, tmp_list_element_58);
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_133);

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[351]);
        if (tmp_assattr_target_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_133);

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_133, mod_consts[91], tmp_assattr_value_133);
        Py_DECREF(tmp_assattr_value_133);
        Py_DECREF(tmp_assattr_target_133);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_134;
        PyObject *tmp_assattr_target_134;
        PyObject *tmp_expression_value_142;
        tmp_assattr_value_134 = Py_None;
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[352]);
        if (tmp_assattr_target_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_134, mod_consts[89], tmp_assattr_value_134);
        Py_DECREF(tmp_assattr_target_134);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_135;
        PyObject *tmp_list_element_59;
        PyObject *tmp_assattr_target_135;
        PyObject *tmp_expression_value_143;
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_135 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_135, 0, tmp_list_element_59);
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_135, 1, tmp_list_element_59);
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_135, 2, tmp_list_element_59);
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_assattr_value_135);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_135);

            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[352]);
        if (tmp_assattr_target_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_135);

            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_135, mod_consts[91], tmp_assattr_value_135);
        Py_DECREF(tmp_assattr_value_135);
        Py_DECREF(tmp_assattr_target_135);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_136;
        PyObject *tmp_assattr_target_136;
        PyObject *tmp_expression_value_144;
        tmp_assattr_value_136 = Py_None;
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[353]);
        if (tmp_assattr_target_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_136, mod_consts[89], tmp_assattr_value_136);
        Py_DECREF(tmp_assattr_target_136);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_137;
        PyObject *tmp_list_element_60;
        PyObject *tmp_assattr_target_137;
        PyObject *tmp_expression_value_145;
        tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_60 == NULL)) {
            tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_137 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_137, 0, tmp_list_element_60);
        tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_list_element_60 == NULL)) {
            tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_list_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_137, 1, tmp_list_element_60);
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_assattr_value_137);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[299]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_137);

            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[353]);
        if (tmp_assattr_target_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_137);

            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_137, mod_consts[91], tmp_assattr_value_137);
        Py_DECREF(tmp_assattr_value_137);
        Py_DECREF(tmp_assattr_target_137);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 499;
        tmp_assign_source_156 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[354], 0)
        );

        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_156);
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_cmp_expr_left_4 == NULL)) {
            tmp_cmp_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_cmp_expr_left_4 == NULL));
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_157);
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_element_value_20;
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[84]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 505;
        tmp_assign_source_158 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assign_source_159 == NULL)) {
            tmp_assign_source_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assign_source_160 == NULL)) {
            tmp_assign_source_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[130]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[359];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 512;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_161 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[130]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[360];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_162 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[130]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[361];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 514;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_163 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[130]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[362];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_164 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[130]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 516;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = mod_consts[363];
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_165 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_assign_source_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assattr_value_138;
        PyObject *tmp_assattr_target_138;
        PyObject *tmp_expression_value_152;
        tmp_assattr_value_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_138 == NULL)) {
            tmp_assattr_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[366]);
        if (tmp_assattr_target_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_138, mod_consts[89], tmp_assattr_value_138);
        Py_DECREF(tmp_assattr_target_138);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_139;
        PyObject *tmp_list_element_61;
        PyObject *tmp_assattr_target_139;
        PyObject *tmp_expression_value_153;
        tmp_list_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_61 == NULL)) {
            tmp_list_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_139 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_139, 0, tmp_list_element_61);
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_139);

            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[366]);
        if (tmp_assattr_target_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_139);

            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_139, mod_consts[91], tmp_assattr_value_139);
        Py_DECREF(tmp_assattr_value_139);
        Py_DECREF(tmp_assattr_target_139);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_140;
        PyObject *tmp_assattr_target_140;
        PyObject *tmp_expression_value_154;
        tmp_assattr_value_140 = Py_None;
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[367]);
        if (tmp_assattr_target_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_140, mod_consts[89], tmp_assattr_value_140);
        Py_DECREF(tmp_assattr_target_140);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_141;
        PyObject *tmp_list_element_62;
        PyObject *tmp_assattr_target_141;
        PyObject *tmp_expression_value_155;
        tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_62 == NULL)) {
            tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_141 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_141, 0, tmp_list_element_62);
        tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_62 == NULL)) {
            tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto list_build_exception_26;
        }
        PyList_SET_ITEM0(tmp_assattr_value_141, 1, tmp_list_element_62);
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_assattr_value_141);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_141);

            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[367]);
        if (tmp_assattr_target_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_141);

            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_141, mod_consts[91], tmp_assattr_value_141);
        Py_DECREF(tmp_assattr_value_141);
        Py_DECREF(tmp_assattr_target_141);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_142;
        PyObject *tmp_assattr_target_142;
        PyObject *tmp_expression_value_156;
        tmp_assattr_value_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[324]);

        if (unlikely(tmp_assattr_value_142 == NULL)) {
            tmp_assattr_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[324]);
        }

        if (tmp_assattr_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_156 == NULL)) {
            tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[368]);
        if (tmp_assattr_target_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_142, mod_consts[89], tmp_assattr_value_142);
        Py_DECREF(tmp_assattr_target_142);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_143;
        PyObject *tmp_list_element_63;
        PyObject *tmp_assattr_target_143;
        PyObject *tmp_expression_value_157;
        tmp_list_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_63 == NULL)) {
            tmp_list_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_143 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_32;
            PyList_SET_ITEM0(tmp_assattr_value_143, 0, tmp_list_element_63);
            tmp_list_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[357]);

            if (unlikely(tmp_list_element_63 == NULL)) {
                tmp_list_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[357]);
            }

            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM0(tmp_assattr_value_143, 1, tmp_list_element_63);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[369]);

            if (unlikely(tmp_args_element_value_31 == NULL)) {
                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[369]);
            }

            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 529;
            tmp_list_element_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_31);
            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_assattr_value_143, 2, tmp_list_element_63);
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[324]);

            if (unlikely(tmp_args_element_value_32 == NULL)) {
                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[324]);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 529;
            tmp_list_element_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_32);
            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_assattr_value_143, 3, tmp_list_element_63);
            tmp_list_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_63 == NULL)) {
                tmp_list_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM0(tmp_assattr_value_143, 4, tmp_list_element_63);
        }
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_assattr_value_143);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_143);

            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[368]);
        if (tmp_assattr_target_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_143);

            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_143, mod_consts[91], tmp_assattr_value_143);
        Py_DECREF(tmp_assattr_value_143);
        Py_DECREF(tmp_assattr_target_143);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_144;
        PyObject *tmp_assattr_target_144;
        PyObject *tmp_expression_value_158;
        tmp_assattr_value_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_assattr_value_144 == NULL)) {
            tmp_assattr_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_assattr_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[370]);
        if (tmp_assattr_target_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_144, mod_consts[89], tmp_assattr_value_144);
        Py_DECREF(tmp_assattr_target_144);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_145;
        PyObject *tmp_list_element_64;
        PyObject *tmp_assattr_target_145;
        PyObject *tmp_expression_value_159;
        tmp_list_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_64 == NULL)) {
            tmp_list_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_145 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_34;
            PyList_SET_ITEM0(tmp_assattr_value_145, 0, tmp_list_element_64);
            tmp_list_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[357]);

            if (unlikely(tmp_list_element_64 == NULL)) {
                tmp_list_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[357]);
            }

            if (tmp_list_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM0(tmp_assattr_value_145, 1, tmp_list_element_64);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[369]);

            if (unlikely(tmp_args_element_value_33 == NULL)) {
                tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[369]);
            }

            if (tmp_args_element_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 532;
            tmp_list_element_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_33);
            if (tmp_list_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM(tmp_assattr_value_145, 2, tmp_list_element_64);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[371]);

            if (unlikely(tmp_args_element_value_34 == NULL)) {
                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[371]);
            }

            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 532;
            tmp_list_element_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_34);
            if (tmp_list_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM(tmp_assattr_value_145, 3, tmp_list_element_64);
            tmp_list_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_64 == NULL)) {
                tmp_list_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_list_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM0(tmp_assattr_value_145, 4, tmp_list_element_64);
        }
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_assattr_value_145);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_145);

            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[370]);
        if (tmp_assattr_target_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_145);

            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_145, mod_consts[91], tmp_assattr_value_145);
        Py_DECREF(tmp_assattr_value_145);
        Py_DECREF(tmp_assattr_target_145);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_146;
        PyObject *tmp_assattr_target_146;
        PyObject *tmp_expression_value_160;
        tmp_assattr_value_146 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_value_146 == NULL)) {
            tmp_assattr_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_assattr_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[372]);
        if (tmp_assattr_target_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_146, mod_consts[89], tmp_assattr_value_146);
        Py_DECREF(tmp_assattr_target_146);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_147;
        PyObject *tmp_list_element_65;
        PyObject *tmp_assattr_target_147;
        PyObject *tmp_expression_value_161;
        tmp_list_element_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_65 == NULL)) {
            tmp_list_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_147 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_147, 0, tmp_list_element_65);
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_147);

            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[372]);
        if (tmp_assattr_target_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_147);

            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_147, mod_consts[91], tmp_assattr_value_147);
        Py_DECREF(tmp_assattr_value_147);
        Py_DECREF(tmp_assattr_target_147);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_148;
        PyObject *tmp_assattr_target_148;
        PyObject *tmp_expression_value_162;
        tmp_assattr_value_148 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_value_148 == NULL)) {
            tmp_assattr_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_assattr_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[373]);
        if (tmp_assattr_target_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_148, mod_consts[89], tmp_assattr_value_148);
        Py_DECREF(tmp_assattr_target_148);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_149;
        PyObject *tmp_list_element_66;
        PyObject *tmp_assattr_target_149;
        PyObject *tmp_expression_value_163;
        tmp_list_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_66 == NULL)) {
            tmp_list_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_149 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_149, 0, tmp_list_element_66);
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_149);

            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[373]);
        if (tmp_assattr_target_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_149);

            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_149, mod_consts[91], tmp_assattr_value_149);
        Py_DECREF(tmp_assattr_value_149);
        Py_DECREF(tmp_assattr_target_149);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_150;
        PyObject *tmp_assattr_target_150;
        PyObject *tmp_expression_value_164;
        tmp_assattr_value_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[358]);

        if (unlikely(tmp_assattr_value_150 == NULL)) {
            tmp_assattr_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[358]);
        }

        if (tmp_assattr_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_164 == NULL)) {
            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[374]);
        if (tmp_assattr_target_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_150, mod_consts[89], tmp_assattr_value_150);
        Py_DECREF(tmp_assattr_target_150);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_151;
        PyObject *tmp_list_element_67;
        PyObject *tmp_assattr_target_151;
        PyObject *tmp_expression_value_165;
        tmp_list_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_67 == NULL)) {
            tmp_list_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_151 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_151, 0, tmp_list_element_67);
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_151);

            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[374]);
        if (tmp_assattr_target_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_151);

            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_151, mod_consts[91], tmp_assattr_value_151);
        Py_DECREF(tmp_assattr_value_151);
        Py_DECREF(tmp_assattr_target_151);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_152;
        PyObject *tmp_assattr_target_152;
        PyObject *tmp_expression_value_166;
        tmp_assattr_value_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_value_152 == NULL)) {
            tmp_assattr_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_assattr_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_166 == NULL)) {
            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[375]);
        if (tmp_assattr_target_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_152, mod_consts[89], tmp_assattr_value_152);
        Py_DECREF(tmp_assattr_target_152);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_153;
        PyObject *tmp_list_element_68;
        PyObject *tmp_assattr_target_153;
        PyObject *tmp_expression_value_167;
        tmp_list_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_68 == NULL)) {
            tmp_list_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_153 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_36;
            PyList_SET_ITEM0(tmp_assattr_value_153, 0, tmp_list_element_68);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto list_build_exception_29;
            }
            tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[376]);

            if (unlikely(tmp_args_element_value_35 == NULL)) {
                tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[376]);
            }

            if (tmp_args_element_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto list_build_exception_29;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 544;
            tmp_list_element_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_35);
            if (tmp_list_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM(tmp_assattr_value_153, 1, tmp_list_element_68);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[323]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[323]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto list_build_exception_29;
            }
            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[369]);

            if (unlikely(tmp_args_element_value_36 == NULL)) {
                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[369]);
            }

            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto list_build_exception_29;
            }
            frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 544;
            tmp_list_element_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_36);
            if (tmp_list_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM(tmp_assattr_value_153, 2, tmp_list_element_68);
            tmp_list_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_list_element_68 == NULL)) {
                tmp_list_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_list_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM0(tmp_assattr_value_153, 3, tmp_list_element_68);
        }
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_assattr_value_153);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_153);

            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[375]);
        if (tmp_assattr_target_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_153);

            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_153, mod_consts[91], tmp_assattr_value_153);
        Py_DECREF(tmp_assattr_value_153);
        Py_DECREF(tmp_assattr_target_153);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_154;
        PyObject *tmp_assattr_target_154;
        PyObject *tmp_expression_value_168;
        tmp_assattr_value_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_154 == NULL)) {
            tmp_assattr_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[377]);
        if (tmp_assattr_target_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_154, mod_consts[89], tmp_assattr_value_154);
        Py_DECREF(tmp_assattr_target_154);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_155;
        PyObject *tmp_list_element_69;
        PyObject *tmp_assattr_target_155;
        PyObject *tmp_expression_value_169;
        tmp_list_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_69 == NULL)) {
            tmp_list_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_155 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_155, 0, tmp_list_element_69);
        tmp_list_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_list_element_69 == NULL)) {
            tmp_list_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_list_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto list_build_exception_30;
        }
        PyList_SET_ITEM0(tmp_assattr_value_155, 1, tmp_list_element_69);
        tmp_list_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_69 == NULL)) {
            tmp_list_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto list_build_exception_30;
        }
        PyList_SET_ITEM0(tmp_assattr_value_155, 2, tmp_list_element_69);
        tmp_list_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_69 == NULL)) {
            tmp_list_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto list_build_exception_30;
        }
        PyList_SET_ITEM0(tmp_assattr_value_155, 3, tmp_list_element_69);
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_assattr_value_155);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_155);

            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[377]);
        if (tmp_assattr_target_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_155);

            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_155, mod_consts[91], tmp_assattr_value_155);
        Py_DECREF(tmp_assattr_value_155);
        Py_DECREF(tmp_assattr_target_155);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_156;
        PyObject *tmp_assattr_target_156;
        PyObject *tmp_expression_value_170;
        tmp_assattr_value_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_156 == NULL)) {
            tmp_assattr_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_170 == NULL)) {
            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[378]);
        if (tmp_assattr_target_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_156, mod_consts[89], tmp_assattr_value_156);
        Py_DECREF(tmp_assattr_target_156);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_157;
        PyObject *tmp_list_element_70;
        PyObject *tmp_assattr_target_157;
        PyObject *tmp_expression_value_171;
        tmp_list_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_70 == NULL)) {
            tmp_list_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_157 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_157, 0, tmp_list_element_70);
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_157);

            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[378]);
        if (tmp_assattr_target_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_157);

            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_157, mod_consts[91], tmp_assattr_value_157);
        Py_DECREF(tmp_assattr_value_157);
        Py_DECREF(tmp_assattr_target_157);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_158;
        PyObject *tmp_assattr_target_158;
        PyObject *tmp_expression_value_172;
        tmp_assattr_value_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_158 == NULL)) {
            tmp_assattr_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_172 == NULL)) {
            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[379]);
        if (tmp_assattr_target_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_158, mod_consts[89], tmp_assattr_value_158);
        Py_DECREF(tmp_assattr_target_158);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_159;
        PyObject *tmp_list_element_71;
        PyObject *tmp_assattr_target_159;
        PyObject *tmp_expression_value_173;
        tmp_list_element_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_71 == NULL)) {
            tmp_list_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_159 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_159, 0, tmp_list_element_71);
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_159);

            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[379]);
        if (tmp_assattr_target_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_159);

            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_159, mod_consts[91], tmp_assattr_value_159);
        Py_DECREF(tmp_assattr_value_159);
        Py_DECREF(tmp_assattr_target_159);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_160;
        PyObject *tmp_assattr_target_160;
        PyObject *tmp_expression_value_174;
        tmp_assattr_value_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_160 == NULL)) {
            tmp_assattr_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_174 == NULL)) {
            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[380]);
        if (tmp_assattr_target_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_160, mod_consts[89], tmp_assattr_value_160);
        Py_DECREF(tmp_assattr_target_160);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_161;
        PyObject *tmp_list_element_72;
        PyObject *tmp_assattr_target_161;
        PyObject *tmp_expression_value_175;
        tmp_list_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_72 == NULL)) {
            tmp_list_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_161 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_161, 0, tmp_list_element_72);
        tmp_list_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_list_element_72 == NULL)) {
            tmp_list_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_list_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_161, 1, tmp_list_element_72);
        tmp_list_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_72 == NULL)) {
            tmp_list_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_161, 2, tmp_list_element_72);
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_assattr_value_161);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_161);

            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[380]);
        if (tmp_assattr_target_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_161);

            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_161, mod_consts[91], tmp_assattr_value_161);
        Py_DECREF(tmp_assattr_value_161);
        Py_DECREF(tmp_assattr_target_161);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_162;
        PyObject *tmp_assattr_target_162;
        PyObject *tmp_expression_value_176;
        tmp_assattr_value_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_value_162 == NULL)) {
            tmp_assattr_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_assattr_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[381]);
        if (tmp_assattr_target_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_162, mod_consts[89], tmp_assattr_value_162);
        Py_DECREF(tmp_assattr_target_162);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_163;
        PyObject *tmp_list_element_73;
        PyObject *tmp_assattr_target_163;
        PyObject *tmp_expression_value_177;
        tmp_list_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_list_element_73 == NULL)) {
            tmp_list_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_list_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_163 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_163, 0, tmp_list_element_73);
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_163);

            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[381]);
        if (tmp_assattr_target_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_163);

            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_163, mod_consts[91], tmp_assattr_value_163);
        Py_DECREF(tmp_assattr_value_163);
        Py_DECREF(tmp_assattr_target_163);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 564;
        tmp_assign_source_168 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[382], 0)
        );

        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_168);
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_cmp_expr_left_5 == NULL)) {
            tmp_cmp_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_cmp_expr_left_5 == NULL));
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_169);
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_args_element_value_37;
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[84]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame.f_lineno = 570;
        tmp_assign_source_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_25);
        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assattr_value_164;
        PyObject *tmp_assattr_target_164;
        PyObject *tmp_expression_value_179;
        tmp_assattr_value_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_value_164 == NULL)) {
            tmp_assattr_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_assattr_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[384]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[384]);
        }

        assert(!(tmp_expression_value_179 == NULL));
        tmp_assattr_target_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[385]);
        if (tmp_assattr_target_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_164, mod_consts[89], tmp_assattr_value_164);
        Py_DECREF(tmp_assattr_target_164);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_165;
        PyObject *tmp_list_element_74;
        PyObject *tmp_assattr_target_165;
        PyObject *tmp_expression_value_180;
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[386]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[386]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_165 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_165, 0, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[387]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[387]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto list_build_exception_32;
        }
        PyList_SET_ITEM0(tmp_assattr_value_165, 1, tmp_list_element_74);
        tmp_list_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_list_element_74 == NULL)) {
            tmp_list_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_list_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto list_build_exception_32;
        }
        PyList_SET_ITEM0(tmp_assattr_value_165, 2, tmp_list_element_74);
        goto list_build_noexception_32;
        // Exception handling pass through code for list_build:
        list_build_exception_32:;
        Py_DECREF(tmp_assattr_value_165);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_32:;
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)mod_consts[384]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[384]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_165);

            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[385]);
        if (tmp_assattr_target_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_165);

            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_165, mod_consts[91], tmp_assattr_value_165);
        Py_DECREF(tmp_assattr_value_165);
        Py_DECREF(tmp_assattr_target_165);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5a6a5a4b3045241f28a78d6007eb1fab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a6a5a4b3045241f28a78d6007eb1fab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a6a5a4b3045241f28a78d6007eb1fab, exception_lineno);
    }



    assertFrameObject(frame_5a6a5a4b3045241f28a78d6007eb1fab);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.libs.darwin.cocoapy.cocoalibs", false);

    Py_INCREF(module_pyglet$libs$darwin$cocoapy$cocoalibs);
    return module_pyglet$libs$darwin$cocoapy$cocoalibs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$darwin$cocoapy$cocoalibs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$darwin$cocoapy$cocoalibs", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
