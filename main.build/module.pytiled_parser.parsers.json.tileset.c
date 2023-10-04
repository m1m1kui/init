/* Generated code for Python module 'pytiled_parser.parsers.json.tileset'
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

/* The "module_pytiled_parser$parsers$json$tileset" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pytiled_parser$parsers$json$tileset;
PyDictObject *moduledict_pytiled_parser$parsers$json$tileset;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[179];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[179];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pytiled_parser.parsers.json.tileset"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 179; i++) {
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
void checkModuleConstants_pytiled_parser$parsers$json$tileset(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 179; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c64ffe60e46b23e48d58f6f77a6e957d;
static PyCodeObject *codeobj_b76750c35acb5025fa35e8664ac98b7b;
static PyCodeObject *codeobj_c101ed194f3ac63e9e535133bfd166e0;
static PyCodeObject *codeobj_703289341fcb14cd224376d28a4b4a68;
static PyCodeObject *codeobj_8923f5b036e852a2604912290005ad85;
static PyCodeObject *codeobj_da982e08cd8b5ae6762d0b10938e6540;
static PyCodeObject *codeobj_ba2cc171227c980538b863dd973115a6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[170]); CHECK_OBJECT(module_filename_obj);
    codeobj_c64ffe60e46b23e48d58f6f77a6e957d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[171], mod_consts[171], NULL, NULL, 0, 0, 0);
    codeobj_b76750c35acb5025fa35e8664ac98b7b = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[172], NULL, 1, 0, 0);
    codeobj_c101ed194f3ac63e9e535133bfd166e0 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[173], NULL, 1, 0, 0);
    codeobj_703289341fcb14cd224376d28a4b4a68 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[174], NULL, 2, 0, 0);
    codeobj_8923f5b036e852a2604912290005ad85 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[175], NULL, 1, 0, 0);
    codeobj_da982e08cd8b5ae6762d0b10938e6540 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[176], NULL, 1, 0, 0);
    codeobj_ba2cc171227c980538b863dd973115a6 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[177], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__1__parse_frame(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__2__parse_tile_offset(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__3__parse_transformations(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__4__parse_grid(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__5__parse_tile(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__6_parse(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pytiled_parser$parsers$json$tileset$$$function__1__parse_frame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_raw_frame = python_pars[0];
    struct Nuitka_FrameObject *frame_b76750c35acb5025fa35e8664ac98b7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b76750c35acb5025fa35e8664ac98b7b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b76750c35acb5025fa35e8664ac98b7b)) {
        Py_XDECREF(cache_frame_b76750c35acb5025fa35e8664ac98b7b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b76750c35acb5025fa35e8664ac98b7b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b76750c35acb5025fa35e8664ac98b7b = MAKE_FUNCTION_FRAME(tstate, codeobj_b76750c35acb5025fa35e8664ac98b7b, module_pytiled_parser$parsers$json$tileset, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b76750c35acb5025fa35e8664ac98b7b->m_type_description == NULL);
    frame_b76750c35acb5025fa35e8664ac98b7b = cache_frame_b76750c35acb5025fa35e8664ac98b7b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b76750c35acb5025fa35e8664ac98b7b);
    assert(Py_REFCNT(frame_b76750c35acb5025fa35e8664ac98b7b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_frame);
        tmp_expression_value_1 = par_raw_frame;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_frame);
        tmp_expression_value_2 = par_raw_frame;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b76750c35acb5025fa35e8664ac98b7b->m_frame.f_lineno = 113;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[3]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_b76750c35acb5025fa35e8664ac98b7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b76750c35acb5025fa35e8664ac98b7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b76750c35acb5025fa35e8664ac98b7b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b76750c35acb5025fa35e8664ac98b7b,
        type_description_1,
        par_raw_frame
    );


    // Release cached frame if used for exception.
    if (frame_b76750c35acb5025fa35e8664ac98b7b == cache_frame_b76750c35acb5025fa35e8664ac98b7b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b76750c35acb5025fa35e8664ac98b7b);
        cache_frame_b76750c35acb5025fa35e8664ac98b7b = NULL;
    }

    assertFrameObject(frame_b76750c35acb5025fa35e8664ac98b7b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_raw_frame);
    Py_DECREF(par_raw_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_raw_frame);
    Py_DECREF(par_raw_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pytiled_parser$parsers$json$tileset$$$function__2__parse_tile_offset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_raw_tile_offset = python_pars[0];
    struct Nuitka_FrameObject *frame_8923f5b036e852a2604912290005ad85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8923f5b036e852a2604912290005ad85 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8923f5b036e852a2604912290005ad85)) {
        Py_XDECREF(cache_frame_8923f5b036e852a2604912290005ad85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8923f5b036e852a2604912290005ad85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8923f5b036e852a2604912290005ad85 = MAKE_FUNCTION_FRAME(tstate, codeobj_8923f5b036e852a2604912290005ad85, module_pytiled_parser$parsers$json$tileset, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8923f5b036e852a2604912290005ad85->m_type_description == NULL);
    frame_8923f5b036e852a2604912290005ad85 = cache_frame_8923f5b036e852a2604912290005ad85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8923f5b036e852a2604912290005ad85);
    assert(Py_REFCNT(frame_8923f5b036e852a2604912290005ad85) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tile_offset);
        tmp_expression_value_1 = par_raw_tile_offset;
        tmp_subscript_value_1 = mod_consts[6];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tile_offset);
        tmp_expression_value_2 = par_raw_tile_offset;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8923f5b036e852a2604912290005ad85->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_8923f5b036e852a2604912290005ad85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8923f5b036e852a2604912290005ad85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8923f5b036e852a2604912290005ad85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8923f5b036e852a2604912290005ad85,
        type_description_1,
        par_raw_tile_offset
    );


    // Release cached frame if used for exception.
    if (frame_8923f5b036e852a2604912290005ad85 == cache_frame_8923f5b036e852a2604912290005ad85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8923f5b036e852a2604912290005ad85);
        cache_frame_8923f5b036e852a2604912290005ad85 = NULL;
    }

    assertFrameObject(frame_8923f5b036e852a2604912290005ad85);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_raw_tile_offset);
    Py_DECREF(par_raw_tile_offset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_raw_tile_offset);
    Py_DECREF(par_raw_tile_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pytiled_parser$parsers$json$tileset$$$function__3__parse_transformations(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_raw_transformations = python_pars[0];
    struct Nuitka_FrameObject *frame_da982e08cd8b5ae6762d0b10938e6540;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da982e08cd8b5ae6762d0b10938e6540 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da982e08cd8b5ae6762d0b10938e6540)) {
        Py_XDECREF(cache_frame_da982e08cd8b5ae6762d0b10938e6540);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da982e08cd8b5ae6762d0b10938e6540 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da982e08cd8b5ae6762d0b10938e6540 = MAKE_FUNCTION_FRAME(tstate, codeobj_da982e08cd8b5ae6762d0b10938e6540, module_pytiled_parser$parsers$json$tileset, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da982e08cd8b5ae6762d0b10938e6540->m_type_description == NULL);
    frame_da982e08cd8b5ae6762d0b10938e6540 = cache_frame_da982e08cd8b5ae6762d0b10938e6540;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_da982e08cd8b5ae6762d0b10938e6540);
    assert(Py_REFCNT(frame_da982e08cd8b5ae6762d0b10938e6540) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_transformations);
        tmp_expression_value_1 = par_raw_transformations;
        tmp_subscript_value_1 = mod_consts[10];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_transformations);
        tmp_expression_value_2 = par_raw_transformations;
        tmp_subscript_value_2 = mod_consts[11];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_transformations);
        tmp_expression_value_3 = par_raw_transformations;
        tmp_subscript_value_3 = mod_consts[12];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_transformations);
        tmp_expression_value_4 = par_raw_transformations;
        tmp_subscript_value_4 = mod_consts[13];
        tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_da982e08cd8b5ae6762d0b10938e6540->m_frame.f_lineno = 139;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
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
        exception_tb = MAKE_TRACEBACK(frame_da982e08cd8b5ae6762d0b10938e6540, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da982e08cd8b5ae6762d0b10938e6540->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da982e08cd8b5ae6762d0b10938e6540, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da982e08cd8b5ae6762d0b10938e6540,
        type_description_1,
        par_raw_transformations
    );


    // Release cached frame if used for exception.
    if (frame_da982e08cd8b5ae6762d0b10938e6540 == cache_frame_da982e08cd8b5ae6762d0b10938e6540) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da982e08cd8b5ae6762d0b10938e6540);
        cache_frame_da982e08cd8b5ae6762d0b10938e6540 = NULL;
    }

    assertFrameObject(frame_da982e08cd8b5ae6762d0b10938e6540);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_raw_transformations);
    Py_DECREF(par_raw_transformations);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_raw_transformations);
    Py_DECREF(par_raw_transformations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pytiled_parser$parsers$json$tileset$$$function__4__parse_grid(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_raw_grid = python_pars[0];
    struct Nuitka_FrameObject *frame_c101ed194f3ac63e9e535133bfd166e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c101ed194f3ac63e9e535133bfd166e0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c101ed194f3ac63e9e535133bfd166e0)) {
        Py_XDECREF(cache_frame_c101ed194f3ac63e9e535133bfd166e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c101ed194f3ac63e9e535133bfd166e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c101ed194f3ac63e9e535133bfd166e0 = MAKE_FUNCTION_FRAME(tstate, codeobj_c101ed194f3ac63e9e535133bfd166e0, module_pytiled_parser$parsers$json$tileset, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c101ed194f3ac63e9e535133bfd166e0->m_type_description == NULL);
    frame_c101ed194f3ac63e9e535133bfd166e0 = cache_frame_c101ed194f3ac63e9e535133bfd166e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c101ed194f3ac63e9e535133bfd166e0);
    assert(Py_REFCNT(frame_c101ed194f3ac63e9e535133bfd166e0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_grid);
        tmp_expression_value_1 = par_raw_grid;
        tmp_subscript_value_1 = mod_consts[17];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_grid);
        tmp_expression_value_2 = par_raw_grid;
        tmp_subscript_value_2 = mod_consts[18];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 159;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_grid);
        tmp_expression_value_3 = par_raw_grid;
        tmp_subscript_value_3 = mod_consts[19];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c101ed194f3ac63e9e535133bfd166e0->m_frame.f_lineno = 157;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_c101ed194f3ac63e9e535133bfd166e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c101ed194f3ac63e9e535133bfd166e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c101ed194f3ac63e9e535133bfd166e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c101ed194f3ac63e9e535133bfd166e0,
        type_description_1,
        par_raw_grid
    );


    // Release cached frame if used for exception.
    if (frame_c101ed194f3ac63e9e535133bfd166e0 == cache_frame_c101ed194f3ac63e9e535133bfd166e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c101ed194f3ac63e9e535133bfd166e0);
        cache_frame_c101ed194f3ac63e9e535133bfd166e0 = NULL;
    }

    assertFrameObject(frame_c101ed194f3ac63e9e535133bfd166e0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_raw_grid);
    Py_DECREF(par_raw_grid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_raw_grid);
    Py_DECREF(par_raw_grid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pytiled_parser$parsers$json$tileset$$$function__5__parse_tile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_raw_tile = python_pars[0];
    PyObject *par_external_path = python_pars[1];
    PyObject *var_id_ = NULL;
    PyObject *var_tile = NULL;
    PyObject *var_frame = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_703289341fcb14cd224376d28a4b4a68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_703289341fcb14cd224376d28a4b4a68 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_703289341fcb14cd224376d28a4b4a68)) {
        Py_XDECREF(cache_frame_703289341fcb14cd224376d28a4b4a68);

#if _DEBUG_REFCOUNTS
        if (cache_frame_703289341fcb14cd224376d28a4b4a68 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_703289341fcb14cd224376d28a4b4a68 = MAKE_FUNCTION_FRAME(tstate, codeobj_703289341fcb14cd224376d28a4b4a68, module_pytiled_parser$parsers$json$tileset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_703289341fcb14cd224376d28a4b4a68->m_type_description == NULL);
    frame_703289341fcb14cd224376d28a4b4a68 = cache_frame_703289341fcb14cd224376d28a4b4a68;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_703289341fcb14cd224376d28a4b4a68);
    assert(Py_REFCNT(frame_703289341fcb14cd224376d28a4b4a68) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_1 = par_raw_tile;
        tmp_subscript_value_1 = mod_consts[22];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_id_ == NULL);
        var_id_ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_id_);
        tmp_kw_call_value_0_1 = var_id_;
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 175;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[24]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tile == NULL);
        var_tile = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_2 = par_raw_tile;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 177;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[26]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(var_tile);
        tmp_assattr_target_1 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_3 = par_raw_tile;
        tmp_subscript_value_2 = mod_consts[27];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 179;
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
            PyObject *old = var_frame;
            var_frame = tmp_assign_source_5;
            Py_INCREF(var_frame);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        if (var_tile == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_tile;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[27]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[29]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_frame);
        tmp_args_element_value_2 = var_frame;
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 180;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 180;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 179;
        type_description_1 = "ooooo";
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
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_6 = par_raw_tile;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 182;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[31]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_7 = par_raw_tile;
        tmp_subscript_value_3 = mod_consts[33];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 183;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 183;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_8 = par_raw_tile;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[25]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 185;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[35]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_9 = par_raw_tile;
        tmp_subscript_value_4 = mod_consts[37];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 186;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[37], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_10 = par_raw_tile;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[25]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 188;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[38]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_external_path);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_external_path);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_external_path);
        tmp_truediv_expr_left_1 = par_external_path;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_11 = par_raw_tile;
        tmp_subscript_value_5 = mod_consts[40];
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 190;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 190;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[41]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 190;
        tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[42]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[40], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_12 = par_raw_tile;
        tmp_subscript_value_6 = mod_consts[40];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 192;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[40], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_5:;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_13 = par_raw_tile;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[25]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 202;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[43]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_14 = par_raw_tile;
        tmp_subscript_value_7 = mod_consts[44];
        tmp_assattr_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[45], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_assattr_target_7;
        if (var_tile == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = var_tile;
        tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[45]);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[18], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_16 = par_raw_tile;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[25]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 206;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[46]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_17 = par_raw_tile;
        tmp_subscript_value_8 = mod_consts[47];
        tmp_assattr_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_8);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[48], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_assattr_target_9;
        if (var_tile == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_tile;
        tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[48]);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[19], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_19 = par_raw_tile;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[25]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 210;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[49]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_20 = par_raw_tile;
        tmp_subscript_value_9 = mod_consts[50];
        tmp_assattr_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_9);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[51], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_21 = par_raw_tile;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[25]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 213;
        tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[52]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_22 = par_raw_tile;
        tmp_subscript_value_10 = mod_consts[53];
        tmp_assattr_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_10);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[51], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_23 = par_raw_tile;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[25]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 216;
        tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[54]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_24 = par_raw_tile;
        tmp_subscript_value_11 = mod_consts[6];
        tmp_assattr_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_11);
        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[6], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_10:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_25 = par_raw_tile;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[25]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 219;
        tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[55]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_26 = par_raw_tile;
        tmp_subscript_value_12 = mod_consts[7];
        tmp_assattr_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_12);
        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[7], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_27 = par_raw_tile;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[25]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 222;
        tmp_cmp_expr_left_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[56]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_28 = par_raw_tile;
        tmp_subscript_value_13 = mod_consts[18];
        tmp_assattr_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_13);
        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[18], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_12:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_29 = par_raw_tile;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[25]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_703289341fcb14cd224376d28a4b4a68->m_frame.f_lineno = 225;
        tmp_cmp_expr_left_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[57]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_12 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_raw_tile);
        tmp_expression_value_30 = par_raw_tile;
        tmp_subscript_value_14 = mod_consts[19];
        tmp_assattr_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_14);
        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_tile == NULL) {
            Py_DECREF(tmp_assattr_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_15 = var_tile;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[19], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_13:;
    if (var_tile == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 228;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_tile;
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
        exception_tb = MAKE_TRACEBACK(frame_703289341fcb14cd224376d28a4b4a68, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_703289341fcb14cd224376d28a4b4a68->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_703289341fcb14cd224376d28a4b4a68, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_703289341fcb14cd224376d28a4b4a68,
        type_description_1,
        par_raw_tile,
        par_external_path,
        var_id_,
        var_tile,
        var_frame
    );


    // Release cached frame if used for exception.
    if (frame_703289341fcb14cd224376d28a4b4a68 == cache_frame_703289341fcb14cd224376d28a4b4a68) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_703289341fcb14cd224376d28a4b4a68);
        cache_frame_703289341fcb14cd224376d28a4b4a68 = NULL;
    }

    assertFrameObject(frame_703289341fcb14cd224376d28a4b4a68);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_id_);
    Py_DECREF(var_id_);
    var_id_ = NULL;
    Py_XDECREF(var_tile);
    var_tile = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
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

    Py_XDECREF(var_id_);
    var_id_ = NULL;
    Py_XDECREF(var_tile);
    var_tile = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
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
    CHECK_OBJECT(par_raw_tile);
    Py_DECREF(par_raw_tile);
    CHECK_OBJECT(par_external_path);
    Py_DECREF(par_external_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_raw_tile);
    Py_DECREF(par_raw_tile);
    CHECK_OBJECT(par_external_path);
    Py_DECREF(par_external_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pytiled_parser$parsers$json$tileset$$$function__6_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_raw_tileset = python_pars[0];
    PyObject *par_firstgid = python_pars[1];
    PyObject *par_external_path = python_pars[2];
    PyObject *var_tileset = NULL;
    PyObject *var_tiles = NULL;
    PyObject *var_raw_tile = NULL;
    PyObject *var_wangsets = NULL;
    PyObject *var_raw_wangset = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ba2cc171227c980538b863dd973115a6;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba2cc171227c980538b863dd973115a6 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ba2cc171227c980538b863dd973115a6)) {
        Py_XDECREF(cache_frame_ba2cc171227c980538b863dd973115a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba2cc171227c980538b863dd973115a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba2cc171227c980538b863dd973115a6 = MAKE_FUNCTION_FRAME(tstate, codeobj_ba2cc171227c980538b863dd973115a6, module_pytiled_parser$parsers$json$tileset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba2cc171227c980538b863dd973115a6->m_type_description == NULL);
    frame_ba2cc171227c980538b863dd973115a6 = cache_frame_ba2cc171227c980538b863dd973115a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ba2cc171227c980538b863dd973115a6);
    assert(Py_REFCNT(frame_ba2cc171227c980538b863dd973115a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_kw_call_value_7_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_1 = par_raw_tileset;
        tmp_subscript_value_1 = mod_consts[60];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_2 = par_raw_tileset;
        tmp_subscript_value_2 = mod_consts[61];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 249;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_3 = par_raw_tileset;
        tmp_subscript_value_3 = mod_consts[62];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 250;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_4 = par_raw_tileset;
        tmp_subscript_value_4 = mod_consts[63];
        tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 251;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_5 = par_raw_tileset;
        tmp_subscript_value_5 = mod_consts[64];
        tmp_kw_call_value_4_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 252;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_6 = par_raw_tileset;
        tmp_subscript_value_6 = mod_consts[65];
        tmp_kw_call_value_5_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 253;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_7 = par_raw_tileset;
        tmp_subscript_value_7 = mod_consts[66];
        tmp_kw_call_value_6_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 254;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_firstgid);
        tmp_kw_call_value_7_1 = par_firstgid;
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 247;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tileset == NULL);
        var_tileset = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_8 = par_raw_tileset;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 258;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[68]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_9 = par_raw_tileset;
        tmp_subscript_value_8 = mod_consts[69];
        tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_8);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_10 = par_raw_tileset;
        tmp_subscript_value_9 = mod_consts[69];
        tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_9);
        if (tmp_unicode_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tileset);
        tmp_assattr_target_1 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_11 = par_raw_tileset;
        tmp_subscript_value_10 = mod_consts[69];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_10);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tileset);
        tmp_assattr_target_2 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[69], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_12 = par_raw_tileset;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 268;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[70]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_13 = par_raw_tileset;
        tmp_subscript_value_11 = mod_consts[71];
        tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_11);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[73], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_14 = par_raw_tileset;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[25]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 271;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[38]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_external_path);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_external_path);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_external_path);
        tmp_truediv_expr_left_1 = par_external_path;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_15 = par_raw_tileset;
        tmp_subscript_value_12 = mod_consts[40];
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_12);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 274;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 274;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[41]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 274;
        tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[42]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 273;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[40], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_16 = par_raw_tileset;
        tmp_subscript_value_13 = mod_consts[40];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_13);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 277;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[40], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_5:;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_17 = par_raw_tileset;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[25]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 281;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[43]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_18 = par_raw_tileset;
        tmp_subscript_value_14 = mod_consts[44];
        tmp_assattr_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_14);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 282;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[45], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_19 = par_raw_tileset;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[25]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 284;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[46]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_20 = par_raw_tileset;
        tmp_subscript_value_15 = mod_consts[47];
        tmp_assattr_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_15);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 285;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[48], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_21 = par_raw_tileset;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[25]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 287;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[74]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_22 = par_raw_tileset;
        tmp_subscript_value_16 = mod_consts[75];
        tmp_assattr_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_16);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 288;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[76], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_23 = par_raw_tileset;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[25]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 290;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[77]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_24 = par_raw_tileset;
        tmp_subscript_value_17 = mod_consts[79];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_17);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 291;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[80], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_25 = par_raw_tileset;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[25]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 293;
        tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[81]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_26 = par_raw_tileset;
        tmp_subscript_value_18 = mod_consts[83];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_18);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 294;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[84], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_10:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_27 = par_raw_tileset;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[25]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 296;
        tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[85]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_assattr_target_11;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_28 = par_raw_tileset;
        tmp_subscript_value_19 = mod_consts[86];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_19);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 297;
        tmp_assattr_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[87], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_29 = par_raw_tileset;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[25]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 299;
        tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[88]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_assattr_target_12;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_30 = par_raw_tileset;
        tmp_subscript_value_20 = mod_consts[90];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_20);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 300;
        tmp_assattr_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[90], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_12:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_31 = par_raw_tileset;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[25]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 302;
        tmp_cmp_expr_left_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[35]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_assattr_target_13;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_32 = par_raw_tileset;
        tmp_subscript_value_21 = mod_consts[37];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_21);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 303;
        tmp_assattr_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 303;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[37], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_13:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_33 = par_raw_tileset;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[25]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 305;
        tmp_cmp_expr_left_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[91]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_12 = Py_None;
        tmp_condition_result_14 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(var_tiles == NULL);
        var_tiles = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_22;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_34 = par_raw_tileset;
        tmp_subscript_value_22 = mod_consts[92];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_22);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
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
                exception_lineno = 307;
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
            PyObject *old = var_raw_tile;
            var_raw_tile = tmp_assign_source_5;
            Py_INCREF(var_raw_tile);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_21;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_23;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_raw_tile);
        tmp_kw_call_arg_value_0_1 = var_raw_tile;
        if (par_external_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_external_path;
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 308;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_21, args, kw_values, mod_consts[95]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (var_tiles == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_tiles;
        CHECK_OBJECT(var_raw_tile);
        tmp_expression_value_35 = var_raw_tile;
        tmp_subscript_value_23 = mod_consts[22];
        tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_23);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 307;
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
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        if (var_tiles == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_14 = var_tiles;
        if (var_tileset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[92], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_36 = par_raw_tileset;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[25]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 311;
        tmp_cmp_expr_left_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_22, mod_consts[96]);

        Py_DECREF(tmp_called_value_22);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_15 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_wangsets == NULL);
        var_wangsets = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_24;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_37 = par_raw_tileset;
        tmp_subscript_value_24 = mod_consts[97];
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_24);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 313;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_9 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_raw_wangset;
            var_raw_wangset = tmp_assign_source_9;
            Py_INCREF(var_raw_wangset);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_9;
        if (var_wangsets == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_38 = var_wangsets;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[29]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_raw_wangset);
        tmp_args_element_value_9 = var_raw_wangset;
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 314;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 314;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 313;
        type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        if (var_wangsets == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_15 = var_wangsets;
        if (var_tileset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_15 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[99], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_15:;
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_39 = par_raw_tileset;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[25]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 317;
        tmp_cmp_expr_left_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_25, mod_consts[100]);

        Py_DECREF(tmp_called_value_25);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = Py_None;
        tmp_condition_result_16 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_assattr_target_16;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_40 = par_raw_tileset;
        tmp_subscript_value_25 = mod_consts[102];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_25);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 318;
        tmp_assattr_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 318;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_16 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[102], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_16:;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_41 = par_raw_tileset;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[25]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 320;
        tmp_cmp_expr_left_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[52]);

        Py_DECREF(tmp_called_value_27);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = Py_None;
        tmp_condition_result_17 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_15);
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_42 = par_raw_tileset;
        tmp_subscript_value_26 = mod_consts[53];
        tmp_assattr_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_26);
        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_17 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[51], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_17:;
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_43 = par_raw_tileset;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[25]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 323;
        tmp_cmp_expr_left_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[103]);

        Py_DECREF(tmp_called_value_28);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_16 = Py_None;
        tmp_condition_result_18 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_44 = par_raw_tileset;
        tmp_subscript_value_27 = mod_consts[104];
        tmp_assattr_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_27);
        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 324;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_18 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[105], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_18:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_45 = par_raw_tileset;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[25]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba2cc171227c980538b863dd973115a6->m_frame.f_lineno = 326;
        tmp_cmp_expr_left_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[106]);

        Py_DECREF(tmp_called_value_29);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = Py_None;
        tmp_condition_result_19 = (tmp_cmp_expr_left_17 != tmp_cmp_expr_right_17) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT(par_raw_tileset);
        tmp_expression_value_46 = par_raw_tileset;
        tmp_subscript_value_28 = mod_consts[107];
        tmp_assattr_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_28);
        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_tileset == NULL) {
            Py_DECREF(tmp_assattr_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_19 = var_tileset;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[108], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_19:;
    if (var_tileset == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 329;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_tileset;
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
        exception_tb = MAKE_TRACEBACK(frame_ba2cc171227c980538b863dd973115a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba2cc171227c980538b863dd973115a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba2cc171227c980538b863dd973115a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba2cc171227c980538b863dd973115a6,
        type_description_1,
        par_raw_tileset,
        par_firstgid,
        par_external_path,
        var_tileset,
        var_tiles,
        var_raw_tile,
        var_wangsets,
        var_raw_wangset
    );


    // Release cached frame if used for exception.
    if (frame_ba2cc171227c980538b863dd973115a6 == cache_frame_ba2cc171227c980538b863dd973115a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba2cc171227c980538b863dd973115a6);
        cache_frame_ba2cc171227c980538b863dd973115a6 = NULL;
    }

    assertFrameObject(frame_ba2cc171227c980538b863dd973115a6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tileset);
    var_tileset = NULL;
    Py_XDECREF(var_tiles);
    var_tiles = NULL;
    Py_XDECREF(var_raw_tile);
    var_raw_tile = NULL;
    Py_XDECREF(var_wangsets);
    var_wangsets = NULL;
    Py_XDECREF(var_raw_wangset);
    var_raw_wangset = NULL;
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

    Py_XDECREF(var_tileset);
    var_tileset = NULL;
    Py_XDECREF(var_tiles);
    var_tiles = NULL;
    Py_XDECREF(var_raw_tile);
    var_raw_tile = NULL;
    Py_XDECREF(var_wangsets);
    var_wangsets = NULL;
    Py_XDECREF(var_raw_wangset);
    var_raw_wangset = NULL;
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
    CHECK_OBJECT(par_raw_tileset);
    Py_DECREF(par_raw_tileset);
    CHECK_OBJECT(par_firstgid);
    Py_DECREF(par_firstgid);
    CHECK_OBJECT(par_external_path);
    Py_DECREF(par_external_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_raw_tileset);
    Py_DECREF(par_raw_tileset);
    CHECK_OBJECT(par_firstgid);
    Py_DECREF(par_firstgid);
    CHECK_OBJECT(par_external_path);
    Py_DECREF(par_external_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__1__parse_frame(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytiled_parser$parsers$json$tileset$$$function__1__parse_frame,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b76750c35acb5025fa35e8664ac98b7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pytiled_parser$parsers$json$tileset,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__2__parse_tile_offset(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytiled_parser$parsers$json$tileset$$$function__2__parse_tile_offset,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8923f5b036e852a2604912290005ad85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pytiled_parser$parsers$json$tileset,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__3__parse_transformations(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytiled_parser$parsers$json$tileset$$$function__3__parse_transformations,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da982e08cd8b5ae6762d0b10938e6540,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pytiled_parser$parsers$json$tileset,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__4__parse_grid(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytiled_parser$parsers$json$tileset$$$function__4__parse_grid,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c101ed194f3ac63e9e535133bfd166e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pytiled_parser$parsers$json$tileset,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__5__parse_tile(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytiled_parser$parsers$json$tileset$$$function__5__parse_tile,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_703289341fcb14cd224376d28a4b4a68,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pytiled_parser$parsers$json$tileset,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__6_parse(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytiled_parser$parsers$json$tileset$$$function__6_parse,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba2cc171227c980538b863dd973115a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pytiled_parser$parsers$json$tileset,
        mod_consts[109],
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

function_impl_code functable_pytiled_parser$parsers$json$tileset[] = {
    impl_pytiled_parser$parsers$json$tileset$$$function__1__parse_frame,
    impl_pytiled_parser$parsers$json$tileset$$$function__2__parse_tile_offset,
    impl_pytiled_parser$parsers$json$tileset$$$function__3__parse_transformations,
    impl_pytiled_parser$parsers$json$tileset$$$function__4__parse_grid,
    impl_pytiled_parser$parsers$json$tileset$$$function__5__parse_tile,
    impl_pytiled_parser$parsers$json$tileset$$$function__6_parse,
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

    function_impl_code *current = functable_pytiled_parser$parsers$json$tileset;
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

    if (offset > sizeof(functable_pytiled_parser$parsers$json$tileset) || offset < 0) {
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
        functable_pytiled_parser$parsers$json$tileset[offset],
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
        module_pytiled_parser$parsers$json$tileset,
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
PyObject *modulecode_pytiled_parser$parsers$json$tileset(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pytiled_parser.parsers.json.tileset");

    // Store the module for future use.
    module_pytiled_parser$parsers$json$tileset = module;

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
        PRINT_STRING("pytiled_parser.parsers.json.tileset: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pytiled_parser.parsers.json.tileset: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpytiled_parser$parsers$json$tileset\n");

    moduledict_pytiled_parser$parsers$json$tileset = MODULE_DICT(module_pytiled_parser$parsers$json$tileset);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pytiled_parser$parsers$json$tileset,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pytiled_parser$parsers$json$tileset,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[178]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pytiled_parser$parsers$json$tileset,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pytiled_parser$parsers$json$tileset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pytiled_parser$parsers$json$tileset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pytiled_parser$parsers$json$tileset);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pytiled_parser$parsers$json$tileset);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_c64ffe60e46b23e48d58f6f77a6e957d;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_2);
    }
    frame_c64ffe60e46b23e48d58f6f77a6e957d = MAKE_MODULE_FRAME(codeobj_c64ffe60e46b23e48d58f6f77a6e957d, module_pytiled_parser$parsers$json$tileset);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c64ffe60e46b23e48d58f6f77a6e957d);
    assert(Py_REFCNT(frame_c64ffe60e46b23e48d58f6f77a6e957d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[113], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[114], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[116];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[117];
        tmp_level_value_1 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[39],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[119],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[119]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_6);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[120],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[120]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_7);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[121],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[121]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_8);
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
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[122];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[123];
        tmp_level_value_2 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 4;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[124],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[125];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[126];
        tmp_level_value_3 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[5],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[127];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[128];
        tmp_level_value_4 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[129],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[129]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[127];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[130];
        tmp_level_value_5 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[131],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[132];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[133];
        tmp_level_value_6 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[134],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[134]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[132];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[130];
        tmp_level_value_7 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
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
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[131],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[135];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[136];
        tmp_level_value_8 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 11;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[137],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[137]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[135];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[130];
        tmp_level_value_9 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 12;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[131],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[138];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[139];
        tmp_level_value_10 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 13;
        tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[0],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[0]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[16],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[16]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[23],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[23]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[59],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[59]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[9],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[9]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_22);
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[140];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pytiled_parser$parsers$json$tileset;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[141];
        tmp_level_value_11 = mod_consts[118];
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 14;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_pytiled_parser$parsers$json$tileset,
                mod_consts[78],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[142];
        tmp_call_arg_element_2 = DICT_COPY(mod_consts[143]);
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[144];
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[110], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = mod_consts[145];
        tmp_call_arg_element_4 = DICT_COPY(mod_consts[146]);
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[147];
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        assert(!(tmp_assattr_target_4 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[110], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_arg_element_5;
        PyObject *tmp_call_arg_element_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_5 = mod_consts[148];
        tmp_call_arg_element_6 = DICT_COPY(mod_consts[149]);
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_call_arg_element_5, tmp_call_arg_element_6};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[150];
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
        }

        assert(!(tmp_assattr_target_5 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[110], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[151];
        tmp_dict_key_1 = mod_consts[27];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[53];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[22];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[40];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[47];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[44];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[152];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[50];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[33];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[6];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[18];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[153];
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        assert(!(tmp_assattr_target_6 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[110], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_arg_element_7;
        PyObject *tmp_call_arg_element_8;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_7 = mod_consts[154];
        tmp_call_arg_element_8 = DICT_COPY(mod_consts[155]);
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_call_arg_element_7, tmp_call_arg_element_8};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_call_arg_element_8);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[156];
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        assert(!(tmp_assattr_target_7 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[110], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[157];
        tmp_dict_key_2 = mod_consts[79];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_4 = _PyDict_NewPresized( 26 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[53];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[64];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[158];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[90];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[40];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[47];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[44];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[66];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[60];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[37];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
            }

            if (tmp_subscript_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[107];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[75];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[159];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[65];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[61];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[71];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[63];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[83];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[145]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[104];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[92];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_subscript_value_4 == NULL)) {
                tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
            }

            if (tmp_subscript_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[62];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[86];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[102];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[69];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_5 = mod_consts[160];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[97];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = mod_consts[161];
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        assert(!(tmp_assattr_target_8 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[110], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[162];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[163];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_30 = MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__1__parse_frame(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[164];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[163];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_31 = MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__2__parse_tile_offset(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[165];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[163];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_32 = MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__3__parse_transformations(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[166];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[163];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto dict_build_exception_6;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_33 = MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__4__parse_grid(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_defaults_1 = mod_consts[167];
        tmp_dict_key_7 = mod_consts[168];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[94];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[163];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_34 = MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__5__parse_tile(tmp_defaults_1, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_defaults_2 = mod_consts[167];
        tmp_dict_key_8 = mod_consts[169];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[158];
            tmp_dict_value_8 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[94];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[163];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_35 = MAKE_FUNCTION_pytiled_parser$parsers$json$tileset$$$function__6_parse(tmp_defaults_2, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_35);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c64ffe60e46b23e48d58f6f77a6e957d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c64ffe60e46b23e48d58f6f77a6e957d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c64ffe60e46b23e48d58f6f77a6e957d, exception_lineno);
    }



    assertFrameObject(frame_c64ffe60e46b23e48d58f6f77a6e957d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pytiled_parser.parsers.json.tileset", false);

    Py_INCREF(module_pytiled_parser$parsers$json$tileset);
    return module_pytiled_parser$parsers$json$tileset;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$parsers$json$tileset, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pytiled_parser$parsers$json$tileset", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
