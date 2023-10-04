/* Generated code for Python module 'pyglet.media.drivers.directsound.lib_dsound'
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

/* The "module_pyglet$media$drivers$directsound$lib_dsound" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$media$drivers$directsound$lib_dsound;
PyDictObject *moduledict_pyglet$media$drivers$directsound$lib_dsound;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[359];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[359];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.media.drivers.directsound.lib_dsound"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 359; i++) {
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
void checkModuleConstants_pyglet$media$drivers$directsound$lib_dsound(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 359; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b54010c5b44c6727e305c84725ef8fde;
static PyCodeObject *codeobj_bc937036226592b4a9c7097bbf97be6a;
static PyCodeObject *codeobj_2c0ab07baae4fbe6bf76ec2c440e51f0;
static PyCodeObject *codeobj_7bd74ff50260b9e83a54f2c8b7c379ce;
static PyCodeObject *codeobj_32a66a13a0cccc1eb90ed15b6764e169;
static PyCodeObject *codeobj_193a95e5eb1b50d7d2c0093092d85eb1;
static PyCodeObject *codeobj_4a104d1d0f2e83b4f328f7d8af7ddbfd;
static PyCodeObject *codeobj_0f53aff36cb3a8e9331d6b6973842ecb;
static PyCodeObject *codeobj_7049b5bc8a65bf63d3f9ae4d856b2824;
static PyCodeObject *codeobj_12c7eb55f8721002fb6141b1668f2e41;
static PyCodeObject *codeobj_a1c5f9bc0dcfca028119003c28a47c6e;
static PyCodeObject *codeobj_8132c1f66d901c07a9f131514fdb0fc5;
static PyCodeObject *codeobj_c77eee3c31479c3cbf5d862d45c9834b;
static PyCodeObject *codeobj_0d3e56c6adc3c363b9c6e10ad4472822;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[354]); CHECK_OBJECT(module_filename_obj);
    codeobj_b54010c5b44c6727e305c84725ef8fde = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[355], mod_consts[355], NULL, NULL, 0, 0, 0);
    codeobj_bc937036226592b4a9c7097bbf97be6a = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[356], NULL, 0, 0, 0);
    codeobj_2c0ab07baae4fbe6bf76ec2c440e51f0 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[356], NULL, 0, 0, 0);
    codeobj_7bd74ff50260b9e83a54f2c8b7c379ce = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[356], NULL, 0, 0, 0);
    codeobj_32a66a13a0cccc1eb90ed15b6764e169 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[356], NULL, 0, 0, 0);
    codeobj_193a95e5eb1b50d7d2c0093092d85eb1 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[356], NULL, 0, 0, 0);
    codeobj_4a104d1d0f2e83b4f328f7d8af7ddbfd = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[356], NULL, 0, 0, 0);
    codeobj_0f53aff36cb3a8e9331d6b6973842ecb = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_NOFREE, mod_consts[171], mod_consts[171], mod_consts[356], NULL, 0, 0, 0);
    codeobj_7049b5bc8a65bf63d3f9ae4d856b2824 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[356], NULL, 0, 0, 0);
    codeobj_12c7eb55f8721002fb6141b1668f2e41 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[356], NULL, 0, 0, 0);
    codeobj_a1c5f9bc0dcfca028119003c28a47c6e = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[356], NULL, 0, 0, 0);
    codeobj_8132c1f66d901c07a9f131514fdb0fc5 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[356], NULL, 0, 0, 0);
    codeobj_c77eee3c31479c3cbf5d862d45c9834b = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[357], NULL, 1, 0, 0);
    codeobj_0d3e56c6adc3c363b9c6e10ad4472822 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[357], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$media$drivers$directsound$lib_dsound$$$function__1___repr__();


static PyObject *MAKE_FUNCTION_pyglet$media$drivers$directsound$lib_dsound$$$function__2___repr__();


// The module function definitions.
static PyObject *impl_pyglet$media$drivers$directsound$lib_dsound$$$function__1___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c77eee3c31479c3cbf5d862d45c9834b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c77eee3c31479c3cbf5d862d45c9834b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c77eee3c31479c3cbf5d862d45c9834b)) {
        Py_XDECREF(cache_frame_c77eee3c31479c3cbf5d862d45c9834b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c77eee3c31479c3cbf5d862d45c9834b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c77eee3c31479c3cbf5d862d45c9834b = MAKE_FUNCTION_FRAME(tstate, codeobj_c77eee3c31479c3cbf5d862d45c9834b, module_pyglet$media$drivers$directsound$lib_dsound, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c77eee3c31479c3cbf5d862d45c9834b->m_type_description == NULL);
    frame_c77eee3c31479c3cbf5d862d45c9834b = cache_frame_c77eee3c31479c3cbf5d862d45c9834b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c77eee3c31479c3cbf5d862d45c9834b);
    assert(Py_REFCNT(frame_c77eee3c31479c3cbf5d862d45c9834b) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_expression_value_7;
        tmp_kw_call_arg_value_0_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[4]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_arg_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[5]);
        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_arg_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[6]);
        if (tmp_kw_call_arg_value_6_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_arg_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[7]);
        if (tmp_kw_call_arg_value_7_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c77eee3c31479c3cbf5d862d45c9834b->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS8(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        Py_DECREF(tmp_kw_call_arg_value_6_1);
        Py_DECREF(tmp_kw_call_arg_value_7_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_c77eee3c31479c3cbf5d862d45c9834b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c77eee3c31479c3cbf5d862d45c9834b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c77eee3c31479c3cbf5d862d45c9834b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c77eee3c31479c3cbf5d862d45c9834b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c77eee3c31479c3cbf5d862d45c9834b == cache_frame_c77eee3c31479c3cbf5d862d45c9834b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c77eee3c31479c3cbf5d862d45c9834b);
        cache_frame_c77eee3c31479c3cbf5d862d45c9834b = NULL;
    }

    assertFrameObject(frame_c77eee3c31479c3cbf5d862d45c9834b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$drivers$directsound$lib_dsound$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0d3e56c6adc3c363b9c6e10ad4472822;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d3e56c6adc3c363b9c6e10ad4472822 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d3e56c6adc3c363b9c6e10ad4472822)) {
        Py_XDECREF(cache_frame_0d3e56c6adc3c363b9c6e10ad4472822);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d3e56c6adc3c363b9c6e10ad4472822 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d3e56c6adc3c363b9c6e10ad4472822 = MAKE_FUNCTION_FRAME(tstate, codeobj_0d3e56c6adc3c363b9c6e10ad4472822, module_pyglet$media$drivers$directsound$lib_dsound, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d3e56c6adc3c363b9c6e10ad4472822->m_type_description == NULL);
    frame_0d3e56c6adc3c363b9c6e10ad4472822 = cache_frame_0d3e56c6adc3c363b9c6e10ad4472822;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0d3e56c6adc3c363b9c6e10ad4472822);
    assert(Py_REFCNT(frame_0d3e56c6adc3c363b9c6e10ad4472822) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_kw_call_arg_value_0_1 = mod_consts[8];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[12]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[13]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_kw_call_arg_value_4_1 = Py_None;
        Py_INCREF(tmp_kw_call_arg_value_4_1);
        condexpr_end_1:;
        frame_0d3e56c6adc3c363b9c6e10ad4472822->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_0d3e56c6adc3c363b9c6e10ad4472822, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d3e56c6adc3c363b9c6e10ad4472822->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d3e56c6adc3c363b9c6e10ad4472822, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d3e56c6adc3c363b9c6e10ad4472822,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0d3e56c6adc3c363b9c6e10ad4472822 == cache_frame_0d3e56c6adc3c363b9c6e10ad4472822) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d3e56c6adc3c363b9c6e10ad4472822);
        cache_frame_0d3e56c6adc3c363b9c6e10ad4472822 = NULL;
    }

    assertFrameObject(frame_0d3e56c6adc3c363b9c6e10ad4472822);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$media$drivers$directsound$lib_dsound$$$function__1___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$drivers$directsound$lib_dsound$$$function__1___repr__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_c77eee3c31479c3cbf5d862d45c9834b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$drivers$directsound$lib_dsound,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$drivers$directsound$lib_dsound$$$function__2___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$drivers$directsound$lib_dsound$$$function__2___repr__,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_0d3e56c6adc3c363b9c6e10ad4472822,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$drivers$directsound$lib_dsound,
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

function_impl_code functable_pyglet$media$drivers$directsound$lib_dsound[] = {
    impl_pyglet$media$drivers$directsound$lib_dsound$$$function__1___repr__,
    impl_pyglet$media$drivers$directsound$lib_dsound$$$function__2___repr__,
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

    function_impl_code *current = functable_pyglet$media$drivers$directsound$lib_dsound;
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

    if (offset > sizeof(functable_pyglet$media$drivers$directsound$lib_dsound) || offset < 0) {
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
        functable_pyglet$media$drivers$directsound$lib_dsound[offset],
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
        module_pyglet$media$drivers$directsound$lib_dsound,
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
PyObject *modulecode_pyglet$media$drivers$directsound$lib_dsound(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.media.drivers.directsound.lib_dsound");

    // Store the module for future use.
    module_pyglet$media$drivers$directsound$lib_dsound = module;

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
        PRINT_STRING("pyglet.media.drivers.directsound.lib_dsound: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.media.drivers.directsound.lib_dsound: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$media$drivers$directsound$lib_dsound\n");

    moduledict_pyglet$media$drivers$directsound$lib_dsound = MODULE_DICT(module_pyglet$media$drivers$directsound$lib_dsound);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$media$drivers$directsound$lib_dsound,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$drivers$directsound$lib_dsound,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[358]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$drivers$directsound$lib_dsound,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$drivers$directsound$lib_dsound,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$drivers$directsound$lib_dsound,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$media$drivers$directsound$lib_dsound);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$media$drivers$directsound$lib_dsound);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_b54010c5b44c6727e305c84725ef8fde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bc937036226592b4a9c7097bbf97be6a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60 = NULL;
    struct Nuitka_FrameObject *frame_8132c1f66d901c07a9f131514fdb0fc5_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80 = NULL;
    struct Nuitka_FrameObject *frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109 = NULL;
    struct Nuitka_FrameObject *frame_32a66a13a0cccc1eb90ed15b6764e169_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119 = NULL;
    struct Nuitka_FrameObject *frame_193a95e5eb1b50d7d2c0093092d85eb1_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134 = NULL;
    struct Nuitka_FrameObject *frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149 = NULL;
    struct Nuitka_FrameObject *frame_7bd74ff50260b9e83a54f2c8b7c379ce_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162 = NULL;
    struct Nuitka_FrameObject *frame_a1c5f9bc0dcfca028119003c28a47c6e_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208 = NULL;
    struct Nuitka_FrameObject *frame_12c7eb55f8721002fb6141b1668f2e41_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246 = NULL;
    struct Nuitka_FrameObject *frame_7049b5bc8a65bf63d3f9ae4d856b2824_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286 = NULL;
    struct Nuitka_FrameObject *frame_0f53aff36cb3a8e9331d6b6973842ecb_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_2);
    }
    frame_b54010c5b44c6727e305c84725ef8fde = MAKE_MODULE_FRAME(codeobj_b54010c5b44c6727e305c84725ef8fde, module_pyglet$media$drivers$directsound$lib_dsound);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b54010c5b44c6727e305c84725ef8fde);
    assert(Py_REFCNT(frame_b54010c5b44c6727e305c84725ef8fde) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$media$drivers$directsound$lib_dsound;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[22];
        tmp_level_value_1 = mod_consts[23];
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 37;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$media$drivers$directsound$lib_dsound,
                mod_consts[24],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[26]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[28]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 42;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[30], tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[32]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        assert(!(tmp_args_element_value_2 == NULL));
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 44;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[30], tmp_args_element_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[35]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[38]);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[40]);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_called_instance_3 == NULL));
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 50;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[30], tmp_args_element_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_15);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[43]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_assign_source_16 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_9 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[23];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_10 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_11 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[45];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 52;
        tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_12 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_13 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[48];
        tmp_default_value_1 = mod_consts[49];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[48]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 52;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        frame_bc937036226592b4a9c7097bbf97be6a_2 = MAKE_CLASS_FRAME(tstate, codeobj_bc937036226592b4a9c7097bbf97be6a, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bc937036226592b4a9c7097bbf97be6a_2);
        assert(Py_REFCNT(frame_bc937036226592b4a9c7097bbf97be6a_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[53];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_15;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                }

                assert(!(tmp_expression_value_15 == NULL));
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[40]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[54];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_16;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_16 == NULL));
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[40]);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[55];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_17;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_17 == NULL));
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[40]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bc937036226592b4a9c7097bbf97be6a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bc937036226592b4a9c7097bbf97be6a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bc937036226592b4a9c7097bbf97be6a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bc937036226592b4a9c7097bbf97be6a_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bc937036226592b4a9c7097bbf97be6a_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_7 = mod_consts[45];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_7 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 52;
            tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52 = NULL;
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

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__1_D3DVECTOR_52 = NULL;
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
        exception_lineno = 52;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_22);
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_18 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[30]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 58;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_24);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_19 == NULL));
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[43]);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_26 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_20 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[23];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_21 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_22 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[44]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_tuple_element_9 = mod_consts[59];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_9 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 60;
        tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_23 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_24 = tmp_class_creation_2__metaclass;
        tmp_name_value_3 = mod_consts[48];
        tmp_default_value_2 = mod_consts[49];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_3, tmp_default_value_2);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[48]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 60;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_6;
        }
        frame_8132c1f66d901c07a9f131514fdb0fc5_3 = MAKE_CLASS_FRAME(tstate, codeobj_8132c1f66d901c07a9f131514fdb0fc5, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8132c1f66d901c07a9f131514fdb0fc5_3);
        assert(Py_REFCNT(frame_8132c1f66d901c07a9f131514fdb0fc5_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_11;
            tmp_tuple_element_11 = mod_consts[1];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[36]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[36]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dictset_value = MAKE_LIST_EMPTY(7);
            {
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_tuple_element_17;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_12 = mod_consts[2];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[36]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 63;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_13 = mod_consts[3];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[29]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 64;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_13);
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_14 = mod_consts[4];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[29]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "o";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_15 = mod_consts[5];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[36]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
                tmp_tuple_element_16 = mod_consts[6];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[36]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_16);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_2);
                tmp_tuple_element_17 = mod_consts[7];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[36]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_17);
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$drivers$directsound$lib_dsound$$$function__1___repr__();

        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8132c1f66d901c07a9f131514fdb0fc5_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8132c1f66d901c07a9f131514fdb0fc5_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8132c1f66d901c07a9f131514fdb0fc5_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8132c1f66d901c07a9f131514fdb0fc5_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_8132c1f66d901c07a9f131514fdb0fc5_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_18 = mod_consts[59];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_18 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 60;
            tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_31 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__2_WAVEFORMATEX_60 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 60;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_31);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_26 == NULL));
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[30]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 77;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_34);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_27 == NULL));
        tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[43]);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_35, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_36 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_28 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[23];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_29 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_30 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[44]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        tmp_tuple_element_20 = mod_consts[65];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_20 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 80;
        tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_31 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_32 = tmp_class_creation_3__metaclass;
        tmp_name_value_4 = mod_consts[48];
        tmp_default_value_3 = mod_consts[49];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_4, tmp_default_value_3);
        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_33;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_33 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[48]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 80;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_9;
        }
        frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4 = MAKE_CLASS_FRAME(tstate, codeobj_4a104d1d0f2e83b4f328f7d8af7ddbfd, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4);
        assert(Py_REFCNT(frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_22;
            tmp_tuple_element_22 = mod_consts[9];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

            if (tmp_tuple_element_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_tuple_element_22 == NULL)) {
                        tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                    }

                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    Py_INCREF(tmp_tuple_element_22);
                } else {
                    goto tuple_build_exception_14;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_dictset_value = MAKE_LIST_EMPTY(24);
            {
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_tuple_element_39;
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_23 = mod_consts[10];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_23 == NULL)) {
                            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_23);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_24 = mod_consts[66];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_24 == NULL)) {
                            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_24);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_25 = mod_consts[67];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_25 == NULL)) {
                            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_25);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_26 = mod_consts[68];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 86;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_26);
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_3);
                tmp_tuple_element_27 = mod_consts[69];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_27);
                tmp_tuple_element_27 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_27 == NULL)) {
                            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 87;
                            type_description_2 = "o";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_tuple_element_27);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_27);
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_3);
                tmp_tuple_element_28 = mod_consts[70];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_28 == NULL)) {
                            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 88;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_28);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_28);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_3);
                tmp_tuple_element_29 = mod_consts[71];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_29 == NULL)) {
                            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 89;
                            type_description_2 = "o";
                            goto tuple_build_exception_21;
                        }
                        Py_INCREF(tmp_tuple_element_29);
                    } else {
                        goto tuple_build_exception_21;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_29);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_3);
                tmp_tuple_element_30 = mod_consts[72];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 90;
                            type_description_2 = "o";
                            goto tuple_build_exception_22;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_22;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_30);
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_3);
                tmp_tuple_element_31 = mod_consts[73];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_31 == NULL)) {
                            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_tuple_element_31);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_31);
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_3);
                tmp_tuple_element_32 = mod_consts[74];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_32);
                tmp_tuple_element_32 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_32 == NULL)) {
                            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_24;
                        }
                        Py_INCREF(tmp_tuple_element_32);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_32);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_3);
                tmp_tuple_element_33 = mod_consts[75];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_33);
                tmp_tuple_element_33 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_33 == NULL)) {
                            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_tuple_element_33);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_33);
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_3);
                tmp_tuple_element_34 = mod_consts[76];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_34);
                tmp_tuple_element_34 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_34 == NULL)) {
                            tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_34 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_tuple_element_34);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_34);
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_3);
                tmp_tuple_element_35 = mod_consts[77];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_35);
                tmp_tuple_element_35 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_35 == NULL)) {
                            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
                            type_description_2 = "o";
                            goto tuple_build_exception_27;
                        }
                        Py_INCREF(tmp_tuple_element_35);
                    } else {
                        goto tuple_build_exception_27;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_35);
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_3);
                tmp_tuple_element_36 = mod_consts[78];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_36);
                tmp_tuple_element_36 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_36 == NULL)) {
                            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto tuple_build_exception_28;
                        }
                        Py_INCREF(tmp_tuple_element_36);
                    } else {
                        goto tuple_build_exception_28;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_36);
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_3);
                tmp_tuple_element_37 = mod_consts[79];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_37);
                tmp_tuple_element_37 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_37 == NULL)) {
                            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto tuple_build_exception_29;
                        }
                        Py_INCREF(tmp_tuple_element_37);
                    } else {
                        goto tuple_build_exception_29;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_37);
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_3);
                tmp_tuple_element_38 = mod_consts[80];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_38 == NULL)) {
                            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "o";
                            goto tuple_build_exception_30;
                        }
                        Py_INCREF(tmp_tuple_element_38);
                    } else {
                        goto tuple_build_exception_30;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_38);
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_3);
                tmp_tuple_element_39 = mod_consts[81];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_39);
                tmp_tuple_element_39 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_39 == NULL)) {
                            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "o";
                            goto tuple_build_exception_31;
                        }
                        Py_INCREF(tmp_tuple_element_39);
                    } else {
                        goto tuple_build_exception_31;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_39);
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_3);
                tmp_tuple_element_40 = mod_consts[82];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_40);
                tmp_tuple_element_40 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_40 == NULL)) {
                            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "o";
                            goto tuple_build_exception_32;
                        }
                        Py_INCREF(tmp_tuple_element_40);
                    } else {
                        goto tuple_build_exception_32;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_40);
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_3);
                tmp_tuple_element_41 = mod_consts[83];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_41);
                tmp_tuple_element_41 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_41 == NULL)) {
                            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "o";
                            goto tuple_build_exception_33;
                        }
                        Py_INCREF(tmp_tuple_element_41);
                    } else {
                        goto tuple_build_exception_33;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_41);
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_3);
                tmp_tuple_element_42 = mod_consts[84];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_42);
                tmp_tuple_element_42 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_42 == NULL)) {
                            tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_tuple_element_42);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_42);
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_3);
                tmp_tuple_element_43 = mod_consts[85];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_43);
                tmp_tuple_element_43 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_43 == NULL)) {
                            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "o";
                            goto tuple_build_exception_35;
                        }
                        Py_INCREF(tmp_tuple_element_43);
                    } else {
                        goto tuple_build_exception_35;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_43);
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_3);
                tmp_tuple_element_44 = mod_consts[86];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_44);
                tmp_tuple_element_44 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_44 == NULL)) {
                            tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
                            type_description_2 = "o";
                            goto tuple_build_exception_36;
                        }
                        Py_INCREF(tmp_tuple_element_44);
                    } else {
                        goto tuple_build_exception_36;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_44);
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_3);
                tmp_tuple_element_45 = mod_consts[87];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_45);
                tmp_tuple_element_45 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[29]);

                if (tmp_tuple_element_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_45 == NULL)) {
                            tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto tuple_build_exception_37;
                        }
                        Py_INCREF(tmp_tuple_element_45);
                    } else {
                        goto tuple_build_exception_37;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_45);
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_4a104d1d0f2e83b4f328f7d8af7ddbfd_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_46 = mod_consts[65];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_46 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 80;
            tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_41 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__3_DSCAPS_80 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 80;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_41);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[30]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 107;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_43);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_35 == NULL));
        tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[43]);
        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_44, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_45 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_36 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[23];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_37 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_38 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[44]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        tmp_tuple_element_48 = mod_consts[89];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_48 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 109;
        tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_39 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_40 = tmp_class_creation_4__metaclass;
        tmp_name_value_5 = mod_consts[48];
        tmp_default_value_4 = mod_consts[49];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_40, tmp_name_value_5, tmp_default_value_4);
        if (tmp_tuple_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_41;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_41 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_41 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[48]);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_38;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_38:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_38:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 109;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_49;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_12;
        }
        frame_32a66a13a0cccc1eb90ed15b6764e169_5 = MAKE_CLASS_FRAME(tstate, codeobj_32a66a13a0cccc1eb90ed15b6764e169, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_32a66a13a0cccc1eb90ed15b6764e169_5);
        assert(Py_REFCNT(frame_32a66a13a0cccc1eb90ed15b6764e169_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_50;
            tmp_tuple_element_50 = mod_consts[9];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_50);
            tmp_tuple_element_50 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[29]);

            if (tmp_tuple_element_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_tuple_element_50 == NULL)) {
                        tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                    }

                    if (tmp_tuple_element_50 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 111;
                        type_description_2 = "o";
                        goto tuple_build_exception_39;
                    }
                    Py_INCREF(tmp_tuple_element_50);
                } else {
                    goto tuple_build_exception_39;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_50);
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_tuple_element_51;
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_tuple_element_53;
                PyObject *tmp_tuple_element_54;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_51 = mod_consts[10];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_51);
                tmp_tuple_element_51 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[29]);

                if (tmp_tuple_element_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_51 == NULL)) {
                            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
                            type_description_2 = "o";
                            goto tuple_build_exception_40;
                        }
                        Py_INCREF(tmp_tuple_element_51);
                    } else {
                        goto tuple_build_exception_40;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_51);
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
                tmp_tuple_element_52 = mod_consts[11];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_52);
                tmp_tuple_element_52 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[29]);

                if (tmp_tuple_element_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_52 == NULL)) {
                            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "o";
                            goto tuple_build_exception_41;
                        }
                        Py_INCREF(tmp_tuple_element_52);
                    } else {
                        goto tuple_build_exception_41;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_52);
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
                tmp_tuple_element_53 = mod_consts[90];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_53);
                tmp_tuple_element_53 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[29]);

                if (tmp_tuple_element_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_53 == NULL)) {
                            tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto tuple_build_exception_42;
                        }
                        Py_INCREF(tmp_tuple_element_53);
                    } else {
                        goto tuple_build_exception_42;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_53);
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_4);
                tmp_tuple_element_54 = mod_consts[91];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_54);
                tmp_tuple_element_54 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[29]);

                if (tmp_tuple_element_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_54 == NULL)) {
                            tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto tuple_build_exception_43;
                        }
                        Py_INCREF(tmp_tuple_element_54);
                    } else {
                        goto tuple_build_exception_43;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_54);
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_32a66a13a0cccc1eb90ed15b6764e169_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_32a66a13a0cccc1eb90ed15b6764e169_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_32a66a13a0cccc1eb90ed15b6764e169_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_32a66a13a0cccc1eb90ed15b6764e169_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_32a66a13a0cccc1eb90ed15b6764e169_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_55 = mod_consts[89];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_55 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 109;
            tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_50 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__4_DSBCAPS_109 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 109;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_50);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_42 == NULL));
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[30]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 117;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_52);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_expression_value_43;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_43 == NULL));
        tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[43]);
        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        tmp_assign_source_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_53, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_54 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_44 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[23];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_45 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_46 = tmp_class_creation_5__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[44]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        tmp_tuple_element_57 = mod_consts[93];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_57 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 119;
        tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_47 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_48 = tmp_class_creation_5__metaclass;
        tmp_name_value_6 = mod_consts[48];
        tmp_default_value_5 = mod_consts[49];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_6, tmp_default_value_5);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[48]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_44;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_44:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_44:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 119;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_58;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_15;
        }
        frame_193a95e5eb1b50d7d2c0093092d85eb1_6 = MAKE_CLASS_FRAME(tstate, codeobj_193a95e5eb1b50d7d2c0093092d85eb1, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_193a95e5eb1b50d7d2c0093092d85eb1_6);
        assert(Py_REFCNT(frame_193a95e5eb1b50d7d2c0093092d85eb1_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_59;
            tmp_tuple_element_59 = mod_consts[9];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[29]);

            if (tmp_tuple_element_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_tuple_element_59 == NULL)) {
                        tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                    }

                    if (tmp_tuple_element_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 121;
                        type_description_2 = "o";
                        goto tuple_build_exception_45;
                    }
                    Py_INCREF(tmp_tuple_element_59);
                } else {
                    goto tuple_build_exception_45;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_59);
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_tuple_element_63;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_60 = mod_consts[10];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_60);
                tmp_tuple_element_60 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[29]);

                if (tmp_tuple_element_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_60 == NULL)) {
                            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_tuple_element_60);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_60);
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_tuple_element_61 = mod_consts[11];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_61);
                tmp_tuple_element_61 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[29]);

                if (tmp_tuple_element_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_61 == NULL)) {
                            tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto tuple_build_exception_47;
                        }
                        Py_INCREF(tmp_tuple_element_61);
                    } else {
                        goto tuple_build_exception_47;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_61);
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_47:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
                tmp_tuple_element_62 = mod_consts[94];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_62);
                tmp_tuple_element_62 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[29]);

                if (tmp_tuple_element_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_62 == NULL)) {
                            tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto tuple_build_exception_48;
                        }
                        Py_INCREF(tmp_tuple_element_62);
                    } else {
                        goto tuple_build_exception_48;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_62);
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
                tmp_tuple_element_63 = mod_consts[12];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_63);
                tmp_tuple_element_63 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[62]);

                if (tmp_tuple_element_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_63 == NULL)) {
                            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto tuple_build_exception_49;
                        }
                        Py_INCREF(tmp_tuple_element_63);
                    } else {
                        goto tuple_build_exception_49;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_63);
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$drivers$directsound$lib_dsound$$$function__2___repr__();

        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_193a95e5eb1b50d7d2c0093092d85eb1_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_193a95e5eb1b50d7d2c0093092d85eb1_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_193a95e5eb1b50d7d2c0093092d85eb1_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_193a95e5eb1b50d7d2c0093092d85eb1_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_193a95e5eb1b50d7d2c0093092d85eb1_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_64 = mod_consts[93];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_64);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_64 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_64);
            tmp_tuple_element_64 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_64);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 119;
            tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_59 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__5_DSBUFFERDESC_119 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 119;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_59);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_50 == NULL));
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[30]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 132;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_15);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_61);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_expression_value_51;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_51 == NULL));
        tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[43]);
        if (tmp_tuple_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        tmp_assign_source_62 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_62, 0, tmp_tuple_element_65);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_63 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_52 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[23];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_65 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_53 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_54 = tmp_class_creation_6__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[44]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        tmp_tuple_element_66 = mod_consts[97];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_66 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 134;
        tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_55 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_56 = tmp_class_creation_6__metaclass;
        tmp_name_value_7 = mod_consts[48];
        tmp_default_value_6 = mod_consts[49];
        tmp_tuple_element_67 = BUILTIN_GETATTR(tstate, tmp_expression_value_56, tmp_name_value_7, tmp_default_value_6);
        if (tmp_tuple_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_57;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_57 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_57 == NULL));
            tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[48]);
            Py_DECREF(tmp_expression_value_57);
            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_67);
        }
        goto tuple_build_noexception_50;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_50:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_50:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 134;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_67;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_18;
        }
        frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7 = MAKE_CLASS_FRAME(tstate, codeobj_2c0ab07baae4fbe6bf76ec2c440e51f0, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7);
        assert(Py_REFCNT(frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_tuple_element_68;
            tmp_tuple_element_68 = mod_consts[9];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[29]);

            if (tmp_tuple_element_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_tuple_element_68 == NULL)) {
                        tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                    }

                    if (tmp_tuple_element_68 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto tuple_build_exception_51;
                    }
                    Py_INCREF(tmp_tuple_element_68);
                } else {
                    goto tuple_build_exception_51;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_68);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_list_element_6);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            tmp_dictset_value = MAKE_LIST_EMPTY(10);
            {
                PyObject *tmp_tuple_element_69;
                PyObject *tmp_tuple_element_70;
                PyObject *tmp_tuple_element_71;
                PyObject *tmp_tuple_element_72;
                PyObject *tmp_tuple_element_73;
                PyObject *tmp_tuple_element_74;
                PyObject *tmp_tuple_element_75;
                PyObject *tmp_tuple_element_76;
                PyObject *tmp_tuple_element_77;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_tuple_element_69 = mod_consts[98];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_69);
                tmp_tuple_element_69 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[45]);

                if (tmp_tuple_element_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_tuple_element_69 == NULL)) {
                            tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_tuple_element_69 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto tuple_build_exception_52;
                        }
                        Py_INCREF(tmp_tuple_element_69);
                    } else {
                        goto tuple_build_exception_52;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_69);
                goto tuple_build_noexception_52;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_52:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_52:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
                tmp_tuple_element_70 = mod_consts[99];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_70);
                tmp_tuple_element_70 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[45]);

                if (tmp_tuple_element_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_tuple_element_70 == NULL)) {
                            tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_tuple_element_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto tuple_build_exception_53;
                        }
                        Py_INCREF(tmp_tuple_element_70);
                    } else {
                        goto tuple_build_exception_53;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_70);
                goto tuple_build_noexception_53;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_53:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_53:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_6);
                tmp_tuple_element_71 = mod_consts[100];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_71);
                tmp_tuple_element_71 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[29]);

                if (tmp_tuple_element_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_71 == NULL)) {
                            tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_71 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_54;
                        }
                        Py_INCREF(tmp_tuple_element_71);
                    } else {
                        goto tuple_build_exception_54;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_71);
                goto tuple_build_noexception_54;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_54:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_54:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_6);
                tmp_tuple_element_72 = mod_consts[101];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_72);
                tmp_tuple_element_72 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[29]);

                if (tmp_tuple_element_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_72 == NULL)) {
                            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_72 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto tuple_build_exception_55;
                        }
                        Py_INCREF(tmp_tuple_element_72);
                    } else {
                        goto tuple_build_exception_55;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_72);
                goto tuple_build_noexception_55;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_55:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_55:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_6);
                tmp_tuple_element_73 = mod_consts[102];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_73);
                tmp_tuple_element_73 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[45]);

                if (tmp_tuple_element_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_tuple_element_73 == NULL)) {
                            tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_tuple_element_73 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 141;
                            type_description_2 = "o";
                            goto tuple_build_exception_56;
                        }
                        Py_INCREF(tmp_tuple_element_73);
                    } else {
                        goto tuple_build_exception_56;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_73);
                goto tuple_build_noexception_56;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_56:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_56:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_6);
                tmp_tuple_element_74 = mod_consts[103];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_74);
                tmp_tuple_element_74 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[33]);

                if (tmp_tuple_element_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[33]);

                        if (unlikely(tmp_tuple_element_74 == NULL)) {
                            tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                        }

                        if (tmp_tuple_element_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 142;
                            type_description_2 = "o";
                            goto tuple_build_exception_57;
                        }
                        Py_INCREF(tmp_tuple_element_74);
                    } else {
                        goto tuple_build_exception_57;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_74);
                goto tuple_build_noexception_57;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_57:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_57:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_6);
                tmp_tuple_element_75 = mod_consts[104];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_75);
                tmp_tuple_element_75 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[41]);

                if (tmp_tuple_element_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_75 == NULL)) {
                            tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_75 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "o";
                            goto tuple_build_exception_58;
                        }
                        Py_INCREF(tmp_tuple_element_75);
                    } else {
                        goto tuple_build_exception_58;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_75);
                goto tuple_build_noexception_58;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_58:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_58:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_6);
                tmp_tuple_element_76 = mod_consts[105];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_76);
                tmp_tuple_element_76 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[41]);

                if (tmp_tuple_element_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_76 == NULL)) {
                            tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_tuple_element_76);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_76);
                goto tuple_build_noexception_59;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_59:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_59:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_6);
                tmp_tuple_element_77 = mod_consts[106];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_77);
                tmp_tuple_element_77 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[29]);

                if (tmp_tuple_element_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_tuple_element_77 == NULL)) {
                            tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                        }

                        if (tmp_tuple_element_77 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_tuple_element_77);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_77);
                goto tuple_build_noexception_60;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_60:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_60:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_6);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_2c0ab07baae4fbe6bf76ec2c440e51f0_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_17 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_78 = mod_consts[97];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_78 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_78);
            tmp_tuple_element_78 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 134;
            tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_69;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_68 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__6_DS3DBUFFER_134 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 134;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_68);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_58 == NULL));
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[30]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 147;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_18);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_70);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_tuple_element_79;
        PyObject *tmp_expression_value_59;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_59 == NULL));
        tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[43]);
        if (tmp_tuple_element_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_assign_source_71 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_71, 0, tmp_tuple_element_79);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_72 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_60 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[23];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_61 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_62 = tmp_class_creation_7__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[44]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_tuple_element_80 = mod_consts[108];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_80 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 149;
        tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_75;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_63 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_63, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_64 = tmp_class_creation_7__metaclass;
        tmp_name_value_8 = mod_consts[48];
        tmp_default_value_7 = mod_consts[49];
        tmp_tuple_element_81 = BUILTIN_GETATTR(tstate, tmp_expression_value_64, tmp_name_value_8, tmp_default_value_7);
        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_65;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_81);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_65 == NULL));
            tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[48]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_61;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_61:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_61:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 149;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_76;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_77;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_21;
        }
        frame_7bd74ff50260b9e83a54f2c8b7c379ce_8 = MAKE_CLASS_FRAME(tstate, codeobj_7bd74ff50260b9e83a54f2c8b7c379ce, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7bd74ff50260b9e83a54f2c8b7c379ce_8);
        assert(Py_REFCNT(frame_7bd74ff50260b9e83a54f2c8b7c379ce_8) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_7;
            PyObject *tmp_tuple_element_82;
            tmp_tuple_element_82 = mod_consts[9];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_82);
            tmp_tuple_element_82 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[29]);

            if (tmp_tuple_element_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_tuple_element_82 == NULL)) {
                        tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                    }

                    if (tmp_tuple_element_82 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 151;
                        type_description_2 = "o";
                        goto tuple_build_exception_62;
                    }
                    Py_INCREF(tmp_tuple_element_82);
                } else {
                    goto tuple_build_exception_62;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_82);
            goto tuple_build_noexception_62;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_62:;
            Py_DECREF(tmp_list_element_7);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_62:;
            tmp_dictset_value = MAKE_LIST_EMPTY(8);
            {
                PyObject *tmp_tuple_element_83;
                PyObject *tmp_tuple_element_84;
                PyObject *tmp_tuple_element_85;
                PyObject *tmp_tuple_element_86;
                PyObject *tmp_tuple_element_87;
                PyObject *tmp_tuple_element_88;
                PyObject *tmp_tuple_element_89;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_7);
                tmp_tuple_element_83 = mod_consts[98];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_83);
                tmp_tuple_element_83 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[45]);

                if (tmp_tuple_element_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_tuple_element_83 == NULL)) {
                            tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_tuple_element_83 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 152;
                            type_description_2 = "o";
                            goto tuple_build_exception_63;
                        }
                        Py_INCREF(tmp_tuple_element_83);
                    } else {
                        goto tuple_build_exception_63;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_83);
                goto tuple_build_noexception_63;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_63:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_63:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_7);
                tmp_tuple_element_84 = mod_consts[99];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_84);
                tmp_tuple_element_84 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[45]);

                if (tmp_tuple_element_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_tuple_element_84 == NULL)) {
                            tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_tuple_element_84 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 153;
                            type_description_2 = "o";
                            goto tuple_build_exception_64;
                        }
                        Py_INCREF(tmp_tuple_element_84);
                    } else {
                        goto tuple_build_exception_64;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_84);
                goto tuple_build_noexception_64;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_64:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_64:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_7);
                tmp_tuple_element_85 = mod_consts[109];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_85);
                tmp_tuple_element_85 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[45]);

                if (tmp_tuple_element_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_tuple_element_85 == NULL)) {
                            tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_tuple_element_85 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "o";
                            goto tuple_build_exception_65;
                        }
                        Py_INCREF(tmp_tuple_element_85);
                    } else {
                        goto tuple_build_exception_65;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_85);
                goto tuple_build_noexception_65;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_65:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_65:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_7);
                tmp_tuple_element_86 = mod_consts[110];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_86);
                tmp_tuple_element_86 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[45]);

                if (tmp_tuple_element_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_tuple_element_86 == NULL)) {
                            tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_tuple_element_86 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "o";
                            goto tuple_build_exception_66;
                        }
                        Py_INCREF(tmp_tuple_element_86);
                    } else {
                        goto tuple_build_exception_66;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_86);
                goto tuple_build_noexception_66;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_66:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_66:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_7);
                tmp_tuple_element_87 = mod_consts[111];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_87);
                tmp_tuple_element_87 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[41]);

                if (tmp_tuple_element_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_87 == NULL)) {
                            tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_87 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto tuple_build_exception_67;
                        }
                        Py_INCREF(tmp_tuple_element_87);
                    } else {
                        goto tuple_build_exception_67;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_87);
                goto tuple_build_noexception_67;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_67:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_67:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_7);
                tmp_tuple_element_88 = mod_consts[112];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_88);
                tmp_tuple_element_88 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[41]);

                if (tmp_tuple_element_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_88 == NULL)) {
                            tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_88 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto tuple_build_exception_68;
                        }
                        Py_INCREF(tmp_tuple_element_88);
                    } else {
                        goto tuple_build_exception_68;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_88);
                goto tuple_build_noexception_68;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_68:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_68:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_7);
                tmp_tuple_element_89 = mod_consts[113];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_89);
                tmp_tuple_element_89 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[41]);

                if (tmp_tuple_element_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_tuple_element_89 == NULL)) {
                            tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_tuple_element_89 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto tuple_build_exception_69;
                        }
                        Py_INCREF(tmp_tuple_element_89);
                    } else {
                        goto tuple_build_exception_69;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_89);
                goto tuple_build_noexception_69;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_69:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_69:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_7);
            }
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7bd74ff50260b9e83a54f2c8b7c379ce_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7bd74ff50260b9e83a54f2c8b7c379ce_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7bd74ff50260b9e83a54f2c8b7c379ce_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7bd74ff50260b9e83a54f2c8b7c379ce_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_7bd74ff50260b9e83a54f2c8b7c379ce_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_21;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_20 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_90 = mod_consts[108];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_90 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_90);
            tmp_tuple_element_90 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 149;
            tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_77 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__7_DS3DLISTENER_149 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 149;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_77);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_66 == NULL));
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[30]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 160;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_21);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_79);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_tuple_element_91;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[115]);
        if (tmp_tuple_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_assign_source_80 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_80, 0, tmp_tuple_element_91);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_81 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_68 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[23];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_83 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_69 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_92;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_70 = tmp_class_creation_8__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[44]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_tuple_element_92 = mod_consts[116];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_92 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 162;
        tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_84;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_71 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_93;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_72 = tmp_class_creation_8__metaclass;
        tmp_name_value_9 = mod_consts[48];
        tmp_default_value_8 = mod_consts[49];
        tmp_tuple_element_93 = BUILTIN_GETATTR(tstate, tmp_expression_value_72, tmp_name_value_9, tmp_default_value_8);
        if (tmp_tuple_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_93);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[48]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_93);
        }
        goto tuple_build_noexception_70;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_70:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_70:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 162;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_85;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_86;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_24;
        }
        frame_a1c5f9bc0dcfca028119003c28a47c6e_9 = MAKE_CLASS_FRAME(tstate, codeobj_a1c5f9bc0dcfca028119003c28a47c6e, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a1c5f9bc0dcfca028119003c28a47c6e_9);
        assert(Py_REFCNT(frame_a1c5f9bc0dcfca028119003c28a47c6e_9) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_8;
            PyObject *tmp_tuple_element_94;
            tmp_tuple_element_94 = mod_consts[117];
            tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_23;
                PyObject *tmp_expression_value_74;
                PyObject *tmp_args_element_value_11;
                PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_94);
                tmp_expression_value_74 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                if (tmp_expression_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_74 == NULL)) {
                            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_expression_value_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto tuple_build_exception_71;
                        }
                        Py_INCREF(tmp_expression_value_74);
                    } else {
                        goto tuple_build_exception_71;
                    }
                }

                tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[118]);
                Py_DECREF(tmp_expression_value_74);
                if (tmp_called_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto tuple_build_exception_71;
                }
                tmp_args_element_value_11 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[92]);

                if (tmp_args_element_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[92]);

                        if (unlikely(tmp_args_element_value_11 == NULL)) {
                            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
                        }

                        if (tmp_args_element_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_23);

                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto tuple_build_exception_71;
                        }
                        Py_INCREF(tmp_args_element_value_11);
                    } else {
                        goto tuple_build_exception_71;
                    }
                }

                frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 165;
                tmp_tuple_element_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_11);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_11);
                if (tmp_tuple_element_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto tuple_build_exception_71;
                }
                PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_94);
            }
            goto tuple_build_noexception_71;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_71:;
            Py_DECREF(tmp_list_element_8);
            goto frame_exception_exit_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_71:;
            tmp_dictset_value = MAKE_LIST_EMPTY(18);
            {
                PyObject *tmp_tuple_element_95;
                PyObject *tmp_tuple_element_96;
                PyObject *tmp_tuple_element_97;
                PyObject *tmp_tuple_element_98;
                PyObject *tmp_tuple_element_99;
                PyObject *tmp_tuple_element_100;
                PyObject *tmp_tuple_element_101;
                PyObject *tmp_tuple_element_102;
                PyObject *tmp_tuple_element_103;
                PyObject *tmp_tuple_element_104;
                PyObject *tmp_tuple_element_105;
                PyObject *tmp_tuple_element_106;
                PyObject *tmp_tuple_element_107;
                PyObject *tmp_tuple_element_108;
                PyObject *tmp_tuple_element_109;
                PyObject *tmp_tuple_element_110;
                PyObject *tmp_tuple_element_111;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_8);
                tmp_tuple_element_95 = mod_consts[119];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_24;
                    PyObject *tmp_expression_value_75;
                    PyObject *tmp_args_element_value_12;
                    PyObject *tmp_args_element_value_13;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_95);
                    tmp_expression_value_75 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_75 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_75 == NULL)) {
                                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_75 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_72;
                            }
                            Py_INCREF(tmp_expression_value_75);
                        } else {
                            goto tuple_build_exception_72;
                        }
                    }

                    tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_75);
                    if (tmp_called_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto tuple_build_exception_72;
                    }
                    tmp_args_element_value_12 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[31]);

                    if (tmp_args_element_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_12 == NULL)) {
                                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_12 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_24);

                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_72;
                            }
                            Py_INCREF(tmp_args_element_value_12);
                        } else {
                            goto tuple_build_exception_72;
                        }
                    }

                    tmp_args_element_value_13 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[31]);

                    if (tmp_args_element_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_13 == NULL)) {
                                tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_13 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_24);
                                Py_DECREF(tmp_args_element_value_12);

                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_72;
                            }
                            Py_INCREF(tmp_args_element_value_13);
                        } else {
                            goto tuple_build_exception_72;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 167;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
                        tmp_tuple_element_95 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
                    }

                    Py_DECREF(tmp_called_value_24);
                    Py_DECREF(tmp_args_element_value_12);
                    Py_DECREF(tmp_args_element_value_13);
                    if (tmp_tuple_element_95 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto tuple_build_exception_72;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_95);
                }
                goto tuple_build_noexception_72;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_72:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_72:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_8);
                tmp_tuple_element_96 = mod_consts[120];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_25;
                    PyObject *tmp_expression_value_76;
                    PyObject *tmp_args_element_value_14;
                    PyObject *tmp_args_element_value_15;
                    PyObject *tmp_args_element_value_16;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_96);
                    tmp_expression_value_76 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_76 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_76 == NULL)) {
                                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_76 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 169;
                                type_description_2 = "o";
                                goto tuple_build_exception_73;
                            }
                            Py_INCREF(tmp_expression_value_76);
                        } else {
                            goto tuple_build_exception_73;
                        }
                    }

                    tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_76);
                    if (tmp_called_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto tuple_build_exception_73;
                    }
                    tmp_args_element_value_14 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[62]);

                    if (tmp_args_element_value_14 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[62]);

                            if (unlikely(tmp_args_element_value_14 == NULL)) {
                                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                            }

                            if (tmp_args_element_value_14 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_25);

                                exception_lineno = 169;
                                type_description_2 = "o";
                                goto tuple_build_exception_73;
                            }
                            Py_INCREF(tmp_args_element_value_14);
                        } else {
                            goto tuple_build_exception_73;
                        }
                    }

                    tmp_args_element_value_15 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_15 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_15 == NULL)) {
                                tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_15 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_25);
                                Py_DECREF(tmp_args_element_value_14);

                                exception_lineno = 169;
                                type_description_2 = "o";
                                goto tuple_build_exception_73;
                            }
                            Py_INCREF(tmp_args_element_value_15);
                        } else {
                            goto tuple_build_exception_73;
                        }
                    }

                    tmp_args_element_value_16 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[31]);

                    if (tmp_args_element_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_16 == NULL)) {
                                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_16 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_25);
                                Py_DECREF(tmp_args_element_value_14);
                                Py_DECREF(tmp_args_element_value_15);

                                exception_lineno = 169;
                                type_description_2 = "o";
                                goto tuple_build_exception_73;
                            }
                            Py_INCREF(tmp_args_element_value_16);
                        } else {
                            goto tuple_build_exception_73;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 169;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
                        tmp_tuple_element_96 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_25, call_args);
                    }

                    Py_DECREF(tmp_called_value_25);
                    Py_DECREF(tmp_args_element_value_14);
                    Py_DECREF(tmp_args_element_value_15);
                    Py_DECREF(tmp_args_element_value_16);
                    if (tmp_tuple_element_96 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto tuple_build_exception_73;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_96);
                }
                goto tuple_build_noexception_73;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_73:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_73:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_8);
                tmp_tuple_element_97 = mod_consts[121];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_26;
                    PyObject *tmp_expression_value_77;
                    PyObject *tmp_args_element_value_17;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_97);
                    tmp_expression_value_77 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_77 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_77 == NULL)) {
                                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_77 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 171;
                                type_description_2 = "o";
                                goto tuple_build_exception_74;
                            }
                            Py_INCREF(tmp_expression_value_77);
                        } else {
                            goto tuple_build_exception_74;
                        }
                    }

                    tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_77);
                    if (tmp_called_value_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 171;
                        type_description_2 = "o";
                        goto tuple_build_exception_74;
                    }
                    tmp_args_element_value_17 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[34]);

                    if (tmp_args_element_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[34]);

                            if (unlikely(tmp_args_element_value_17 == NULL)) {
                                tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
                            }

                            if (tmp_args_element_value_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_26);

                                exception_lineno = 171;
                                type_description_2 = "o";
                                goto tuple_build_exception_74;
                            }
                            Py_INCREF(tmp_args_element_value_17);
                        } else {
                            goto tuple_build_exception_74;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 171;
                    tmp_tuple_element_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_17);
                    Py_DECREF(tmp_called_value_26);
                    Py_DECREF(tmp_args_element_value_17);
                    if (tmp_tuple_element_97 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 171;
                        type_description_2 = "o";
                        goto tuple_build_exception_74;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_97);
                }
                goto tuple_build_noexception_74;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_74:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_74:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_8);
                tmp_tuple_element_98 = mod_consts[122];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_27;
                    PyObject *tmp_expression_value_78;
                    PyObject *tmp_args_element_value_18;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_98);
                    tmp_expression_value_78 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_78 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_78 == NULL)) {
                                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_78 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 173;
                                type_description_2 = "o";
                                goto tuple_build_exception_75;
                            }
                            Py_INCREF(tmp_expression_value_78);
                        } else {
                            goto tuple_build_exception_75;
                        }
                    }

                    tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_78);
                    if (tmp_called_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto tuple_build_exception_75;
                    }
                    tmp_args_element_value_18 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[34]);

                    if (tmp_args_element_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[34]);

                            if (unlikely(tmp_args_element_value_18 == NULL)) {
                                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
                            }

                            if (tmp_args_element_value_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_27);

                                exception_lineno = 173;
                                type_description_2 = "o";
                                goto tuple_build_exception_75;
                            }
                            Py_INCREF(tmp_args_element_value_18);
                        } else {
                            goto tuple_build_exception_75;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 173;
                    tmp_tuple_element_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_18);
                    Py_DECREF(tmp_called_value_27);
                    Py_DECREF(tmp_args_element_value_18);
                    if (tmp_tuple_element_98 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto tuple_build_exception_75;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_98);
                }
                goto tuple_build_noexception_75;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_75:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_75:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_8);
                tmp_tuple_element_99 = mod_consts[123];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_expression_value_79;
                    PyObject *tmp_args_element_value_19;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_99);
                    tmp_expression_value_79 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_79 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_79 == NULL)) {
                                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_79 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 175;
                                type_description_2 = "o";
                                goto tuple_build_exception_76;
                            }
                            Py_INCREF(tmp_expression_value_79);
                        } else {
                            goto tuple_build_exception_76;
                        }
                    }

                    tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_79);
                    if (tmp_called_value_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto tuple_build_exception_76;
                    }
                    tmp_args_element_value_19 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[31]);

                    if (tmp_args_element_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_19 == NULL)) {
                                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_19 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 175;
                                type_description_2 = "o";
                                goto tuple_build_exception_76;
                            }
                            Py_INCREF(tmp_args_element_value_19);
                        } else {
                            goto tuple_build_exception_76;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 175;
                    tmp_tuple_element_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_19);
                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_19);
                    if (tmp_tuple_element_99 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto tuple_build_exception_76;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_99);
                }
                goto tuple_build_noexception_76;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_76:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_76:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_8);
                tmp_tuple_element_100 = mod_consts[124];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_29;
                    PyObject *tmp_expression_value_80;
                    PyObject *tmp_args_element_value_20;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_100);
                    tmp_expression_value_80 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_80 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_80 == NULL)) {
                                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_80 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 177;
                                type_description_2 = "o";
                                goto tuple_build_exception_77;
                            }
                            Py_INCREF(tmp_expression_value_80);
                        } else {
                            goto tuple_build_exception_77;
                        }
                    }

                    tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_80);
                    if (tmp_called_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 177;
                        type_description_2 = "o";
                        goto tuple_build_exception_77;
                    }
                    tmp_args_element_value_20 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[31]);

                    if (tmp_args_element_value_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_20 == NULL)) {
                                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_20 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_29);

                                exception_lineno = 177;
                                type_description_2 = "o";
                                goto tuple_build_exception_77;
                            }
                            Py_INCREF(tmp_args_element_value_20);
                        } else {
                            goto tuple_build_exception_77;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 177;
                    tmp_tuple_element_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_20);
                    Py_DECREF(tmp_called_value_29);
                    Py_DECREF(tmp_args_element_value_20);
                    if (tmp_tuple_element_100 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 177;
                        type_description_2 = "o";
                        goto tuple_build_exception_77;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_100);
                }
                goto tuple_build_noexception_77;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_77:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_77:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_8);
                tmp_tuple_element_101 = mod_consts[125];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_expression_value_81;
                    PyObject *tmp_args_element_value_21;
                    PyObject *tmp_expression_value_82;
                    PyObject *tmp_args_element_value_22;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_101);
                    tmp_expression_value_81 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_81 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_81 == NULL)) {
                                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_81 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 179;
                                type_description_2 = "o";
                                goto tuple_build_exception_78;
                            }
                            Py_INCREF(tmp_expression_value_81);
                        } else {
                            goto tuple_build_exception_78;
                        }
                    }

                    tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_81);
                    if (tmp_called_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto tuple_build_exception_78;
                    }
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_82 == NULL));
                    tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[38]);
                    if (tmp_args_element_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto tuple_build_exception_78;
                    }
                    tmp_args_element_value_22 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[96]);

                    if (tmp_args_element_value_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[96]);

                            if (unlikely(tmp_args_element_value_22 == NULL)) {
                                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
                            }

                            if (tmp_args_element_value_22 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_30);
                                Py_DECREF(tmp_args_element_value_21);

                                exception_lineno = 179;
                                type_description_2 = "o";
                                goto tuple_build_exception_78;
                            }
                            Py_INCREF(tmp_args_element_value_22);
                        } else {
                            goto tuple_build_exception_78;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 179;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
                        tmp_tuple_element_101 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
                    }

                    Py_DECREF(tmp_called_value_30);
                    Py_DECREF(tmp_args_element_value_21);
                    Py_DECREF(tmp_args_element_value_22);
                    if (tmp_tuple_element_101 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto tuple_build_exception_78;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_101);
                }
                goto tuple_build_noexception_78;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_78:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_78:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_8);
                tmp_tuple_element_102 = mod_consts[126];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_31;
                    PyObject *tmp_expression_value_83;
                    PyObject *tmp_args_element_value_23;
                    PyObject *tmp_args_element_value_24;
                    PyObject *tmp_args_element_value_25;
                    PyObject *tmp_called_value_32;
                    PyObject *tmp_expression_value_84;
                    PyObject *tmp_args_element_value_26;
                    PyObject *tmp_expression_value_85;
                    PyObject *tmp_args_element_value_27;
                    PyObject *tmp_args_element_value_28;
                    PyObject *tmp_called_value_33;
                    PyObject *tmp_expression_value_86;
                    PyObject *tmp_args_element_value_29;
                    PyObject *tmp_expression_value_87;
                    PyObject *tmp_args_element_value_30;
                    PyObject *tmp_args_element_value_31;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_102);
                    tmp_expression_value_83 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_83 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_83 == NULL)) {
                                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_83 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 181;
                                type_description_2 = "o";
                                goto tuple_build_exception_79;
                            }
                            Py_INCREF(tmp_expression_value_83);
                        } else {
                            goto tuple_build_exception_79;
                        }
                    }

                    tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_83);
                    if (tmp_called_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    tmp_args_element_value_23 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_23 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_23 == NULL)) {
                                tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_23 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);

                                exception_lineno = 181;
                                type_description_2 = "o";
                                goto tuple_build_exception_79;
                            }
                            Py_INCREF(tmp_args_element_value_23);
                        } else {
                            goto tuple_build_exception_79;
                        }
                    }

                    tmp_args_element_value_24 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_24 == NULL)) {
                                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);
                                Py_DECREF(tmp_args_element_value_23);

                                exception_lineno = 181;
                                type_description_2 = "o";
                                goto tuple_build_exception_79;
                            }
                            Py_INCREF(tmp_args_element_value_24);
                        } else {
                            goto tuple_build_exception_79;
                        }
                    }

                    tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_84 == NULL)) {
                        tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_84 == NULL));
                    tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[30]);
                    if (tmp_called_value_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_85 == NULL)) {
                        tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_85 == NULL));
                    tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[38]);
                    if (tmp_args_element_value_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 182;
                    tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_26);
                    Py_DECREF(tmp_called_value_32);
                    Py_DECREF(tmp_args_element_value_26);
                    if (tmp_args_element_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    tmp_args_element_value_27 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[31]);

                    if (tmp_args_element_value_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_27 == NULL)) {
                                tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_27 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);
                                Py_DECREF(tmp_args_element_value_23);
                                Py_DECREF(tmp_args_element_value_24);
                                Py_DECREF(tmp_args_element_value_25);

                                exception_lineno = 182;
                                type_description_2 = "o";
                                goto tuple_build_exception_79;
                            }
                            Py_INCREF(tmp_args_element_value_27);
                        } else {
                            goto tuple_build_exception_79;
                        }
                    }

                    tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_86 == NULL)) {
                        tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_86 == NULL));
                    tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[30]);
                    if (tmp_called_value_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_27);

                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_87 == NULL)) {
                        tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_87 == NULL));
                    tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[38]);
                    if (tmp_args_element_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_27);
                        Py_DECREF(tmp_called_value_33);

                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 183;
                    tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_29);
                    Py_DECREF(tmp_called_value_33);
                    Py_DECREF(tmp_args_element_value_29);
                    if (tmp_args_element_value_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_23);
                        Py_DECREF(tmp_args_element_value_24);
                        Py_DECREF(tmp_args_element_value_25);
                        Py_DECREF(tmp_args_element_value_27);

                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    tmp_args_element_value_30 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[31]);

                    if (tmp_args_element_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_30 == NULL)) {
                                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);
                                Py_DECREF(tmp_args_element_value_23);
                                Py_DECREF(tmp_args_element_value_24);
                                Py_DECREF(tmp_args_element_value_25);
                                Py_DECREF(tmp_args_element_value_27);
                                Py_DECREF(tmp_args_element_value_28);

                                exception_lineno = 183;
                                type_description_2 = "o";
                                goto tuple_build_exception_79;
                            }
                            Py_INCREF(tmp_args_element_value_30);
                        } else {
                            goto tuple_build_exception_79;
                        }
                    }

                    tmp_args_element_value_31 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_31 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_31 == NULL)) {
                                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_31 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);
                                Py_DECREF(tmp_args_element_value_23);
                                Py_DECREF(tmp_args_element_value_24);
                                Py_DECREF(tmp_args_element_value_25);
                                Py_DECREF(tmp_args_element_value_27);
                                Py_DECREF(tmp_args_element_value_28);
                                Py_DECREF(tmp_args_element_value_30);

                                exception_lineno = 184;
                                type_description_2 = "o";
                                goto tuple_build_exception_79;
                            }
                            Py_INCREF(tmp_args_element_value_31);
                        } else {
                            goto tuple_build_exception_79;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 181;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_30, tmp_args_element_value_31};
                        tmp_tuple_element_102 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_31, call_args);
                    }

                    Py_DECREF(tmp_called_value_31);
                    Py_DECREF(tmp_args_element_value_23);
                    Py_DECREF(tmp_args_element_value_24);
                    Py_DECREF(tmp_args_element_value_25);
                    Py_DECREF(tmp_args_element_value_27);
                    Py_DECREF(tmp_args_element_value_28);
                    Py_DECREF(tmp_args_element_value_30);
                    Py_DECREF(tmp_args_element_value_31);
                    if (tmp_tuple_element_102 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_102);
                }
                goto tuple_build_noexception_79;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_79:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_79:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_8);
                tmp_tuple_element_103 = mod_consts[127];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_34;
                    PyObject *tmp_expression_value_88;
                    PyObject *tmp_args_element_value_32;
                    PyObject *tmp_args_element_value_33;
                    PyObject *tmp_args_element_value_34;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_103);
                    tmp_expression_value_88 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_88 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_88 == NULL)) {
                                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_88 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 186;
                                type_description_2 = "o";
                                goto tuple_build_exception_80;
                            }
                            Py_INCREF(tmp_expression_value_88);
                        } else {
                            goto tuple_build_exception_80;
                        }
                    }

                    tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_88);
                    if (tmp_called_value_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 186;
                        type_description_2 = "o";
                        goto tuple_build_exception_80;
                    }
                    tmp_args_element_value_32 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_32 == NULL)) {
                                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_32 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_34);

                                exception_lineno = 186;
                                type_description_2 = "o";
                                goto tuple_build_exception_80;
                            }
                            Py_INCREF(tmp_args_element_value_32);
                        } else {
                            goto tuple_build_exception_80;
                        }
                    }

                    tmp_args_element_value_33 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_33 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_33 == NULL)) {
                                tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_33 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_34);
                                Py_DECREF(tmp_args_element_value_32);

                                exception_lineno = 186;
                                type_description_2 = "o";
                                goto tuple_build_exception_80;
                            }
                            Py_INCREF(tmp_args_element_value_33);
                        } else {
                            goto tuple_build_exception_80;
                        }
                    }

                    tmp_args_element_value_34 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_34 == NULL)) {
                                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_34 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_34);
                                Py_DECREF(tmp_args_element_value_32);
                                Py_DECREF(tmp_args_element_value_33);

                                exception_lineno = 186;
                                type_description_2 = "o";
                                goto tuple_build_exception_80;
                            }
                            Py_INCREF(tmp_args_element_value_34);
                        } else {
                            goto tuple_build_exception_80;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 186;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
                        tmp_tuple_element_103 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_34, call_args);
                    }

                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_args_element_value_32);
                    Py_DECREF(tmp_args_element_value_33);
                    Py_DECREF(tmp_args_element_value_34);
                    if (tmp_tuple_element_103 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 186;
                        type_description_2 = "o";
                        goto tuple_build_exception_80;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_103);
                }
                goto tuple_build_noexception_80;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_80:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_80:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_8);
                tmp_tuple_element_104 = mod_consts[128];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_35;
                    PyObject *tmp_expression_value_89;
                    PyObject *tmp_args_element_value_35;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_104);
                    tmp_expression_value_89 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_89 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_89 == NULL)) {
                                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_89 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 188;
                                type_description_2 = "o";
                                goto tuple_build_exception_81;
                            }
                            Py_INCREF(tmp_expression_value_89);
                        } else {
                            goto tuple_build_exception_81;
                        }
                    }

                    tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_89);
                    if (tmp_called_value_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 188;
                        type_description_2 = "o";
                        goto tuple_build_exception_81;
                    }
                    tmp_args_element_value_35 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_35 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_35 == NULL)) {
                                tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_35 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_35);

                                exception_lineno = 188;
                                type_description_2 = "o";
                                goto tuple_build_exception_81;
                            }
                            Py_INCREF(tmp_args_element_value_35);
                        } else {
                            goto tuple_build_exception_81;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 188;
                    tmp_tuple_element_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_35);
                    Py_DECREF(tmp_called_value_35);
                    Py_DECREF(tmp_args_element_value_35);
                    if (tmp_tuple_element_104 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 188;
                        type_description_2 = "o";
                        goto tuple_build_exception_81;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_104);
                }
                goto tuple_build_noexception_81;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_81:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_81:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_8);
                tmp_tuple_element_105 = mod_consts[129];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_36;
                    PyObject *tmp_expression_value_90;
                    PyObject *tmp_args_element_value_36;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_105);
                    tmp_expression_value_90 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_90 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_90 == NULL)) {
                                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_90 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 190;
                                type_description_2 = "o";
                                goto tuple_build_exception_82;
                            }
                            Py_INCREF(tmp_expression_value_90);
                        } else {
                            goto tuple_build_exception_82;
                        }
                    }

                    tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_90);
                    if (tmp_called_value_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto tuple_build_exception_82;
                    }
                    tmp_args_element_value_36 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[62]);

                    if (tmp_args_element_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[62]);

                            if (unlikely(tmp_args_element_value_36 == NULL)) {
                                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                            }

                            if (tmp_args_element_value_36 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_36);

                                exception_lineno = 190;
                                type_description_2 = "o";
                                goto tuple_build_exception_82;
                            }
                            Py_INCREF(tmp_args_element_value_36);
                        } else {
                            goto tuple_build_exception_82;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 190;
                    tmp_tuple_element_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_36);
                    Py_DECREF(tmp_called_value_36);
                    Py_DECREF(tmp_args_element_value_36);
                    if (tmp_tuple_element_105 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto tuple_build_exception_82;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_105);
                }
                goto tuple_build_noexception_82;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_82:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_82:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_8);
                tmp_tuple_element_106 = mod_consts[130];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_37;
                    PyObject *tmp_expression_value_91;
                    PyObject *tmp_args_element_value_37;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_106);
                    tmp_expression_value_91 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_91 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_91 == NULL)) {
                                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_91 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 192;
                                type_description_2 = "o";
                                goto tuple_build_exception_83;
                            }
                            Py_INCREF(tmp_expression_value_91);
                        } else {
                            goto tuple_build_exception_83;
                        }
                    }

                    tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_91);
                    if (tmp_called_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto tuple_build_exception_83;
                    }
                    tmp_args_element_value_37 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[33]);

                    if (tmp_args_element_value_37 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_args_element_value_37 == NULL)) {
                                tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                            }

                            if (tmp_args_element_value_37 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);

                                exception_lineno = 192;
                                type_description_2 = "o";
                                goto tuple_build_exception_83;
                            }
                            Py_INCREF(tmp_args_element_value_37);
                        } else {
                            goto tuple_build_exception_83;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 192;
                    tmp_tuple_element_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_37);
                    Py_DECREF(tmp_called_value_37);
                    Py_DECREF(tmp_args_element_value_37);
                    if (tmp_tuple_element_106 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto tuple_build_exception_83;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_106);
                }
                goto tuple_build_noexception_83;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_83:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_83:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_8);
                tmp_tuple_element_107 = mod_consts[131];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_38;
                    PyObject *tmp_expression_value_92;
                    PyObject *tmp_args_element_value_38;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_107);
                    tmp_expression_value_92 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_92 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_92 == NULL)) {
                                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_92 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 194;
                                type_description_2 = "o";
                                goto tuple_build_exception_84;
                            }
                            Py_INCREF(tmp_expression_value_92);
                        } else {
                            goto tuple_build_exception_84;
                        }
                    }

                    tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_92);
                    if (tmp_called_value_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto tuple_build_exception_84;
                    }
                    tmp_args_element_value_38 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[33]);

                    if (tmp_args_element_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_args_element_value_38 == NULL)) {
                                tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                            }

                            if (tmp_args_element_value_38 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_38);

                                exception_lineno = 194;
                                type_description_2 = "o";
                                goto tuple_build_exception_84;
                            }
                            Py_INCREF(tmp_args_element_value_38);
                        } else {
                            goto tuple_build_exception_84;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 194;
                    tmp_tuple_element_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_38);
                    Py_DECREF(tmp_called_value_38);
                    Py_DECREF(tmp_args_element_value_38);
                    if (tmp_tuple_element_107 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto tuple_build_exception_84;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_107);
                }
                goto tuple_build_noexception_84;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_84:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_84:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_8);
                tmp_tuple_element_108 = mod_consts[132];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_39;
                    PyObject *tmp_expression_value_93;
                    PyObject *tmp_args_element_value_39;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_108);
                    tmp_expression_value_93 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_93 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_93 == NULL)) {
                                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_93 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 196;
                                type_description_2 = "o";
                                goto tuple_build_exception_85;
                            }
                            Py_INCREF(tmp_expression_value_93);
                        } else {
                            goto tuple_build_exception_85;
                        }
                    }

                    tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_93);
                    if (tmp_called_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto tuple_build_exception_85;
                    }
                    tmp_args_element_value_39 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_39 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_39 == NULL)) {
                                tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_39 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_39);

                                exception_lineno = 196;
                                type_description_2 = "o";
                                goto tuple_build_exception_85;
                            }
                            Py_INCREF(tmp_args_element_value_39);
                        } else {
                            goto tuple_build_exception_85;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 196;
                    tmp_tuple_element_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_39);
                    Py_DECREF(tmp_called_value_39);
                    Py_DECREF(tmp_args_element_value_39);
                    if (tmp_tuple_element_108 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto tuple_build_exception_85;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_108);
                }
                goto tuple_build_noexception_85;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_85:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_85:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_8);
                tmp_tuple_element_109 = mod_consts[133];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_4;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_109);
                    tmp_called_instance_4 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_called_instance_4 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_called_instance_4 == NULL)) {
                                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_called_instance_4 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 198;
                                type_description_2 = "o";
                                goto tuple_build_exception_86;
                            }
                            Py_INCREF(tmp_called_instance_4);
                        } else {
                            goto tuple_build_exception_86;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 198;
                    tmp_tuple_element_109 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[118]);
                    Py_DECREF(tmp_called_instance_4);
                    if (tmp_tuple_element_109 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto tuple_build_exception_86;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_109);
                }
                goto tuple_build_noexception_86;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_86:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_86:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_8);
                tmp_tuple_element_110 = mod_consts[134];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_40;
                    PyObject *tmp_expression_value_94;
                    PyObject *tmp_args_element_value_40;
                    PyObject *tmp_expression_value_95;
                    PyObject *tmp_args_element_value_41;
                    PyObject *tmp_args_element_value_42;
                    PyObject *tmp_expression_value_96;
                    PyObject *tmp_args_element_value_43;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_110);
                    tmp_expression_value_94 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_expression_value_94 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_94 == NULL)) {
                                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_94 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 200;
                                type_description_2 = "o";
                                goto tuple_build_exception_87;
                            }
                            Py_INCREF(tmp_expression_value_94);
                        } else {
                            goto tuple_build_exception_87;
                        }
                    }

                    tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_94);
                    if (tmp_called_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 200;
                        type_description_2 = "o";
                        goto tuple_build_exception_87;
                    }
                    tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_95 == NULL)) {
                        tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_95 == NULL));
                    tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[38]);
                    if (tmp_args_element_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 200;
                        type_description_2 = "o";
                        goto tuple_build_exception_87;
                    }
                    tmp_args_element_value_41 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_41 == NULL)) {
                                tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_41 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_40);
                                Py_DECREF(tmp_args_element_value_40);

                                exception_lineno = 200;
                                type_description_2 = "o";
                                goto tuple_build_exception_87;
                            }
                            Py_INCREF(tmp_args_element_value_41);
                        } else {
                            goto tuple_build_exception_87;
                        }
                    }

                    tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_96 == NULL)) {
                        tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_96 == NULL));
                    tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[38]);
                    if (tmp_args_element_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);
                        Py_DECREF(tmp_args_element_value_40);
                        Py_DECREF(tmp_args_element_value_41);

                        exception_lineno = 200;
                        type_description_2 = "o";
                        goto tuple_build_exception_87;
                    }
                    tmp_args_element_value_43 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[29]);

                    if (tmp_args_element_value_43 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_43 == NULL)) {
                                tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_43 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_40);
                                Py_DECREF(tmp_args_element_value_40);
                                Py_DECREF(tmp_args_element_value_41);
                                Py_DECREF(tmp_args_element_value_42);

                                exception_lineno = 200;
                                type_description_2 = "o";
                                goto tuple_build_exception_87;
                            }
                            Py_INCREF(tmp_args_element_value_43);
                        } else {
                            goto tuple_build_exception_87;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 200;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
                        tmp_tuple_element_110 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_40, call_args);
                    }

                    Py_DECREF(tmp_called_value_40);
                    Py_DECREF(tmp_args_element_value_40);
                    Py_DECREF(tmp_args_element_value_41);
                    Py_DECREF(tmp_args_element_value_42);
                    Py_DECREF(tmp_args_element_value_43);
                    if (tmp_tuple_element_110 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 200;
                        type_description_2 = "o";
                        goto tuple_build_exception_87;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_110);
                }
                goto tuple_build_noexception_87;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_87:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_87:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_8);
                tmp_tuple_element_111 = mod_consts[135];
                tmp_list_element_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_5;
                    PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_111);
                    tmp_called_instance_5 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[24]);

                    if (tmp_called_instance_5 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_called_instance_5 == NULL)) {
                                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_called_instance_5 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 202;
                                type_description_2 = "o";
                                goto tuple_build_exception_88;
                            }
                            Py_INCREF(tmp_called_instance_5);
                        } else {
                            goto tuple_build_exception_88;
                        }
                    }

                    frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame.f_lineno = 202;
                    tmp_tuple_element_111 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[118]);
                    Py_DECREF(tmp_called_instance_5);
                    if (tmp_tuple_element_111 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto tuple_build_exception_88;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_111);
                }
                goto tuple_build_noexception_88;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_88:;
                Py_DECREF(tmp_list_element_8);
                goto list_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_88:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_8);
            }
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a1c5f9bc0dcfca028119003c28a47c6e_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a1c5f9bc0dcfca028119003c28a47c6e_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a1c5f9bc0dcfca028119003c28a47c6e_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a1c5f9bc0dcfca028119003c28a47c6e_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_a1c5f9bc0dcfca028119003c28a47c6e_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_24;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_24;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_87;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_112;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_41 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_112 = mod_consts[116];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_112);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_112 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_112);
            tmp_tuple_element_112 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_112);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 162;
            tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_87;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_86 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_86);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__8_IDirectSoundBuffer_162 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 162;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_86);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 205;
        tmp_assign_source_88 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_6,
            mod_consts[137],
            &PyTuple_GET_ITEM(mod_consts[138], 0)
        );

        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_88);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_tuple_element_113;
        PyObject *tmp_expression_value_97;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_tuple_element_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[115]);
        if (tmp_tuple_element_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_assign_source_89 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_89, 0, tmp_tuple_element_113);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_90 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_98 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[23];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_98, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_92 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_92;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_99;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_99 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_99, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_114;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_100 = tmp_class_creation_9__metaclass;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[44]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_tuple_element_114 = mod_consts[140];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_114);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_114 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_114);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 208;
        tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_93;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_101;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_101 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_101, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_115;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_102 = tmp_class_creation_9__metaclass;
        tmp_name_value_10 = mod_consts[48];
        tmp_default_value_9 = mod_consts[49];
        tmp_tuple_element_115 = BUILTIN_GETATTR(tstate, tmp_expression_value_102, tmp_name_value_10, tmp_default_value_9);
        if (tmp_tuple_element_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_103;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_115);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_103 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_103 == NULL));
            tmp_tuple_element_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[48]);
            Py_DECREF(tmp_expression_value_103);
            if (tmp_tuple_element_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto tuple_build_exception_89;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_115);
        }
        goto tuple_build_noexception_89;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_89:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_89:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 208;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_94;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_95;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_27;
        }
        frame_12c7eb55f8721002fb6141b1668f2e41_10 = MAKE_CLASS_FRAME(tstate, codeobj_12c7eb55f8721002fb6141b1668f2e41, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_12c7eb55f8721002fb6141b1668f2e41_10);
        assert(Py_REFCNT(frame_12c7eb55f8721002fb6141b1668f2e41_10) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_9;
            PyObject *tmp_tuple_element_116;
            tmp_tuple_element_116 = mod_consts[141];
            tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_43;
                PyObject *tmp_expression_value_104;
                PyObject *tmp_args_element_value_44;
                PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_116);
                tmp_expression_value_104 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                if (tmp_expression_value_104 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_104 == NULL)) {
                            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_expression_value_104 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "o";
                            goto tuple_build_exception_90;
                        }
                        Py_INCREF(tmp_expression_value_104);
                    } else {
                        goto tuple_build_exception_90;
                    }
                }

                tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[118]);
                Py_DECREF(tmp_expression_value_104);
                if (tmp_called_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto tuple_build_exception_90;
                }
                tmp_args_element_value_44 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[114]);

                if (tmp_args_element_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_args_element_value_44 == NULL)) {
                            tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
                        }

                        if (tmp_args_element_value_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_43);

                            exception_lineno = 211;
                            type_description_2 = "o";
                            goto tuple_build_exception_90;
                        }
                        Py_INCREF(tmp_args_element_value_44);
                    } else {
                        goto tuple_build_exception_90;
                    }
                }

                frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 211;
                tmp_tuple_element_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_44);
                Py_DECREF(tmp_called_value_43);
                Py_DECREF(tmp_args_element_value_44);
                if (tmp_tuple_element_116 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto tuple_build_exception_90;
                }
                PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_116);
            }
            goto tuple_build_noexception_90;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_90:;
            Py_DECREF(tmp_list_element_9);
            goto frame_exception_exit_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_90:;
            tmp_dictset_value = MAKE_LIST_EMPTY(15);
            {
                PyObject *tmp_tuple_element_117;
                PyObject *tmp_tuple_element_118;
                PyObject *tmp_tuple_element_119;
                PyObject *tmp_tuple_element_120;
                PyObject *tmp_tuple_element_121;
                PyObject *tmp_tuple_element_122;
                PyObject *tmp_tuple_element_123;
                PyObject *tmp_tuple_element_124;
                PyObject *tmp_tuple_element_125;
                PyObject *tmp_tuple_element_126;
                PyObject *tmp_tuple_element_127;
                PyObject *tmp_tuple_element_128;
                PyObject *tmp_tuple_element_129;
                PyObject *tmp_tuple_element_130;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_9);
                tmp_tuple_element_117 = mod_consts[142];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_44;
                    PyObject *tmp_expression_value_105;
                    PyObject *tmp_args_element_value_45;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_117);
                    tmp_expression_value_105 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_105 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_105 == NULL)) {
                                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_105 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 213;
                                type_description_2 = "o";
                                goto tuple_build_exception_91;
                            }
                            Py_INCREF(tmp_expression_value_105);
                        } else {
                            goto tuple_build_exception_91;
                        }
                    }

                    tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_105);
                    if (tmp_called_value_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 213;
                        type_description_2 = "o";
                        goto tuple_build_exception_91;
                    }
                    tmp_args_element_value_45 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[42]);

                    if (tmp_args_element_value_45 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[42]);

                            if (unlikely(tmp_args_element_value_45 == NULL)) {
                                tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
                            }

                            if (tmp_args_element_value_45 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_44);

                                exception_lineno = 213;
                                type_description_2 = "o";
                                goto tuple_build_exception_91;
                            }
                            Py_INCREF(tmp_args_element_value_45);
                        } else {
                            goto tuple_build_exception_91;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 213;
                    tmp_tuple_element_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_45);
                    Py_DECREF(tmp_called_value_44);
                    Py_DECREF(tmp_args_element_value_45);
                    if (tmp_tuple_element_117 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 213;
                        type_description_2 = "o";
                        goto tuple_build_exception_91;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_117);
                }
                goto tuple_build_noexception_91;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_91:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_91:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_9);
                tmp_tuple_element_118 = mod_consts[143];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_45;
                    PyObject *tmp_expression_value_106;
                    PyObject *tmp_args_element_value_46;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_118);
                    tmp_expression_value_106 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_106 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_106 == NULL)) {
                                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_106 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 215;
                                type_description_2 = "o";
                                goto tuple_build_exception_92;
                            }
                            Py_INCREF(tmp_expression_value_106);
                        } else {
                            goto tuple_build_exception_92;
                        }
                    }

                    tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_106);
                    if (tmp_called_value_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 215;
                        type_description_2 = "o";
                        goto tuple_build_exception_92;
                    }
                    tmp_args_element_value_46 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[42]);

                    if (tmp_args_element_value_46 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[42]);

                            if (unlikely(tmp_args_element_value_46 == NULL)) {
                                tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
                            }

                            if (tmp_args_element_value_46 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_45);

                                exception_lineno = 215;
                                type_description_2 = "o";
                                goto tuple_build_exception_92;
                            }
                            Py_INCREF(tmp_args_element_value_46);
                        } else {
                            goto tuple_build_exception_92;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 215;
                    tmp_tuple_element_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_46);
                    Py_DECREF(tmp_called_value_45);
                    Py_DECREF(tmp_args_element_value_46);
                    if (tmp_tuple_element_118 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 215;
                        type_description_2 = "o";
                        goto tuple_build_exception_92;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_118);
                }
                goto tuple_build_noexception_92;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_92:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_92:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_9);
                tmp_tuple_element_119 = mod_consts[144];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_46;
                    PyObject *tmp_expression_value_107;
                    PyObject *tmp_args_element_value_47;
                    PyObject *tmp_args_element_value_48;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_119);
                    tmp_expression_value_107 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_107 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_107 == NULL)) {
                                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_107 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 217;
                                type_description_2 = "o";
                                goto tuple_build_exception_93;
                            }
                            Py_INCREF(tmp_expression_value_107);
                        } else {
                            goto tuple_build_exception_93;
                        }
                    }

                    tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_107);
                    if (tmp_called_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 217;
                        type_description_2 = "o";
                        goto tuple_build_exception_93;
                    }
                    tmp_args_element_value_47 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[58]);

                    if (tmp_args_element_value_47 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_47 == NULL)) {
                                tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_47 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_46);

                                exception_lineno = 217;
                                type_description_2 = "o";
                                goto tuple_build_exception_93;
                            }
                            Py_INCREF(tmp_args_element_value_47);
                        } else {
                            goto tuple_build_exception_93;
                        }
                    }

                    tmp_args_element_value_48 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[58]);

                    if (tmp_args_element_value_48 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_48 == NULL)) {
                                tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_48 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_46);
                                Py_DECREF(tmp_args_element_value_47);

                                exception_lineno = 217;
                                type_description_2 = "o";
                                goto tuple_build_exception_93;
                            }
                            Py_INCREF(tmp_args_element_value_48);
                        } else {
                            goto tuple_build_exception_93;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 217;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
                        tmp_tuple_element_119 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_46, call_args);
                    }

                    Py_DECREF(tmp_called_value_46);
                    Py_DECREF(tmp_args_element_value_47);
                    Py_DECREF(tmp_args_element_value_48);
                    if (tmp_tuple_element_119 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 217;
                        type_description_2 = "o";
                        goto tuple_build_exception_93;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_119);
                }
                goto tuple_build_noexception_93;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_93:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_93:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_9);
                tmp_tuple_element_120 = mod_consts[145];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_47;
                    PyObject *tmp_expression_value_108;
                    PyObject *tmp_args_element_value_49;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_120);
                    tmp_expression_value_108 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_108 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_108 == NULL)) {
                                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_108 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 219;
                                type_description_2 = "o";
                                goto tuple_build_exception_94;
                            }
                            Py_INCREF(tmp_expression_value_108);
                        } else {
                            goto tuple_build_exception_94;
                        }
                    }

                    tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_108);
                    if (tmp_called_value_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 219;
                        type_description_2 = "o";
                        goto tuple_build_exception_94;
                    }
                    tmp_args_element_value_49 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[58]);

                    if (tmp_args_element_value_49 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_49 == NULL)) {
                                tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_49 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_47);

                                exception_lineno = 219;
                                type_description_2 = "o";
                                goto tuple_build_exception_94;
                            }
                            Py_INCREF(tmp_args_element_value_49);
                        } else {
                            goto tuple_build_exception_94;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 219;
                    tmp_tuple_element_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_49);
                    Py_DECREF(tmp_called_value_47);
                    Py_DECREF(tmp_args_element_value_49);
                    if (tmp_tuple_element_120 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 219;
                        type_description_2 = "o";
                        goto tuple_build_exception_94;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_120);
                }
                goto tuple_build_noexception_94;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_94:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_94:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_9);
                tmp_tuple_element_121 = mod_consts[146];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_48;
                    PyObject *tmp_expression_value_109;
                    PyObject *tmp_args_element_value_50;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_121);
                    tmp_expression_value_109 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_109 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_109 == NULL)) {
                                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_109 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 221;
                                type_description_2 = "o";
                                goto tuple_build_exception_95;
                            }
                            Py_INCREF(tmp_expression_value_109);
                        } else {
                            goto tuple_build_exception_95;
                        }
                    }

                    tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_109);
                    if (tmp_called_value_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 221;
                        type_description_2 = "o";
                        goto tuple_build_exception_95;
                    }
                    tmp_args_element_value_50 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[42]);

                    if (tmp_args_element_value_50 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[42]);

                            if (unlikely(tmp_args_element_value_50 == NULL)) {
                                tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
                            }

                            if (tmp_args_element_value_50 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_48);

                                exception_lineno = 221;
                                type_description_2 = "o";
                                goto tuple_build_exception_95;
                            }
                            Py_INCREF(tmp_args_element_value_50);
                        } else {
                            goto tuple_build_exception_95;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 221;
                    tmp_tuple_element_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_50);
                    Py_DECREF(tmp_called_value_48);
                    Py_DECREF(tmp_args_element_value_50);
                    if (tmp_tuple_element_121 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 221;
                        type_description_2 = "o";
                        goto tuple_build_exception_95;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_121);
                }
                goto tuple_build_noexception_95;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_95:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_95:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_9);
                tmp_tuple_element_122 = mod_consts[147];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_49;
                    PyObject *tmp_expression_value_110;
                    PyObject *tmp_args_element_value_51;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_122);
                    tmp_expression_value_110 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_110 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_110 == NULL)) {
                                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_110 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 223;
                                type_description_2 = "o";
                                goto tuple_build_exception_96;
                            }
                            Py_INCREF(tmp_expression_value_110);
                        } else {
                            goto tuple_build_exception_96;
                        }
                    }

                    tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_110);
                    if (tmp_called_value_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 223;
                        type_description_2 = "o";
                        goto tuple_build_exception_96;
                    }
                    tmp_args_element_value_51 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[58]);

                    if (tmp_args_element_value_51 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_51 == NULL)) {
                                tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_51 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_49);

                                exception_lineno = 223;
                                type_description_2 = "o";
                                goto tuple_build_exception_96;
                            }
                            Py_INCREF(tmp_args_element_value_51);
                        } else {
                            goto tuple_build_exception_96;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 223;
                    tmp_tuple_element_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_51);
                    Py_DECREF(tmp_called_value_49);
                    Py_DECREF(tmp_args_element_value_51);
                    if (tmp_tuple_element_122 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 223;
                        type_description_2 = "o";
                        goto tuple_build_exception_96;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_122);
                }
                goto tuple_build_noexception_96;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_96:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_96:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_9);
                tmp_tuple_element_123 = mod_consts[148];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_50;
                    PyObject *tmp_expression_value_111;
                    PyObject *tmp_args_element_value_52;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_123);
                    tmp_expression_value_111 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_111 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_111 == NULL)) {
                                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_111 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 225;
                                type_description_2 = "o";
                                goto tuple_build_exception_97;
                            }
                            Py_INCREF(tmp_expression_value_111);
                        } else {
                            goto tuple_build_exception_97;
                        }
                    }

                    tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_111);
                    if (tmp_called_value_50 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 225;
                        type_description_2 = "o";
                        goto tuple_build_exception_97;
                    }
                    tmp_args_element_value_52 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[114]);

                    if (tmp_args_element_value_52 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[114]);

                            if (unlikely(tmp_args_element_value_52 == NULL)) {
                                tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
                            }

                            if (tmp_args_element_value_52 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_50);

                                exception_lineno = 225;
                                type_description_2 = "o";
                                goto tuple_build_exception_97;
                            }
                            Py_INCREF(tmp_args_element_value_52);
                        } else {
                            goto tuple_build_exception_97;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 225;
                    tmp_tuple_element_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_52);
                    Py_DECREF(tmp_called_value_50);
                    Py_DECREF(tmp_args_element_value_52);
                    if (tmp_tuple_element_123 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 225;
                        type_description_2 = "o";
                        goto tuple_build_exception_97;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_123);
                }
                goto tuple_build_noexception_97;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_97:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_97:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_9);
                tmp_tuple_element_124 = mod_consts[149];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_51;
                    PyObject *tmp_expression_value_112;
                    PyObject *tmp_args_element_value_53;
                    PyObject *tmp_args_element_value_54;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_124);
                    tmp_expression_value_112 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_112 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_112 == NULL)) {
                                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_112 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 227;
                                type_description_2 = "o";
                                goto tuple_build_exception_98;
                            }
                            Py_INCREF(tmp_expression_value_112);
                        } else {
                            goto tuple_build_exception_98;
                        }
                    }

                    tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_112);
                    if (tmp_called_value_51 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto tuple_build_exception_98;
                    }
                    tmp_args_element_value_53 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_53 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_53 == NULL)) {
                                tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_53 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_51);

                                exception_lineno = 227;
                                type_description_2 = "o";
                                goto tuple_build_exception_98;
                            }
                            Py_INCREF(tmp_args_element_value_53);
                        } else {
                            goto tuple_build_exception_98;
                        }
                    }

                    tmp_args_element_value_54 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[29]);

                    if (tmp_args_element_value_54 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_54 == NULL)) {
                                tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_54 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_51);
                                Py_DECREF(tmp_args_element_value_53);

                                exception_lineno = 227;
                                type_description_2 = "o";
                                goto tuple_build_exception_98;
                            }
                            Py_INCREF(tmp_args_element_value_54);
                        } else {
                            goto tuple_build_exception_98;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 227;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
                        tmp_tuple_element_124 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_51, call_args);
                    }

                    Py_DECREF(tmp_called_value_51);
                    Py_DECREF(tmp_args_element_value_53);
                    Py_DECREF(tmp_args_element_value_54);
                    if (tmp_tuple_element_124 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto tuple_build_exception_98;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_124);
                }
                goto tuple_build_noexception_98;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_98:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_98:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_9);
                tmp_tuple_element_125 = mod_consts[150];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_52;
                    PyObject *tmp_expression_value_113;
                    PyObject *tmp_args_element_value_55;
                    PyObject *tmp_args_element_value_56;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_125);
                    tmp_expression_value_113 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_113 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_113 == NULL)) {
                                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_113 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 229;
                                type_description_2 = "o";
                                goto tuple_build_exception_99;
                            }
                            Py_INCREF(tmp_expression_value_113);
                        } else {
                            goto tuple_build_exception_99;
                        }
                    }

                    tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_113);
                    if (tmp_called_value_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;
                        type_description_2 = "o";
                        goto tuple_build_exception_99;
                    }
                    tmp_args_element_value_55 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_55 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_55 == NULL)) {
                                tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_55 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_52);

                                exception_lineno = 229;
                                type_description_2 = "o";
                                goto tuple_build_exception_99;
                            }
                            Py_INCREF(tmp_args_element_value_55);
                        } else {
                            goto tuple_build_exception_99;
                        }
                    }

                    tmp_args_element_value_56 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[29]);

                    if (tmp_args_element_value_56 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_56 == NULL)) {
                                tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_56 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_52);
                                Py_DECREF(tmp_args_element_value_55);

                                exception_lineno = 229;
                                type_description_2 = "o";
                                goto tuple_build_exception_99;
                            }
                            Py_INCREF(tmp_args_element_value_56);
                        } else {
                            goto tuple_build_exception_99;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 229;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
                        tmp_tuple_element_125 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_52, call_args);
                    }

                    Py_DECREF(tmp_called_value_52);
                    Py_DECREF(tmp_args_element_value_55);
                    Py_DECREF(tmp_args_element_value_56);
                    if (tmp_tuple_element_125 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;
                        type_description_2 = "o";
                        goto tuple_build_exception_99;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_125);
                }
                goto tuple_build_noexception_99;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_99:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_99:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_9);
                tmp_tuple_element_126 = mod_consts[151];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_53;
                    PyObject *tmp_expression_value_114;
                    PyObject *tmp_args_element_value_57;
                    PyObject *tmp_args_element_value_58;
                    PyObject *tmp_args_element_value_59;
                    PyObject *tmp_args_element_value_60;
                    PyObject *tmp_args_element_value_61;
                    PyObject *tmp_args_element_value_62;
                    PyObject *tmp_args_element_value_63;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_126);
                    tmp_expression_value_114 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_114 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_114 == NULL)) {
                                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_114 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 231;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_expression_value_114);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_114);
                    if (tmp_called_value_53 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 231;
                        type_description_2 = "o";
                        goto tuple_build_exception_100;
                    }
                    tmp_args_element_value_57 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_57 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_57 == NULL)) {
                                tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_57 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_53);

                                exception_lineno = 231;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_args_element_value_57);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    tmp_args_element_value_58 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_58 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_58 == NULL)) {
                                tmp_args_element_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_58 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_53);
                                Py_DECREF(tmp_args_element_value_57);

                                exception_lineno = 231;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_args_element_value_58);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    tmp_args_element_value_59 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_59 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_59 == NULL)) {
                                tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_59 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_53);
                                Py_DECREF(tmp_args_element_value_57);
                                Py_DECREF(tmp_args_element_value_58);

                                exception_lineno = 231;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_args_element_value_59);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    tmp_args_element_value_60 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_60 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_60 == NULL)) {
                                tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_60 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_53);
                                Py_DECREF(tmp_args_element_value_57);
                                Py_DECREF(tmp_args_element_value_58);
                                Py_DECREF(tmp_args_element_value_59);

                                exception_lineno = 232;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_args_element_value_60);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    tmp_args_element_value_61 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_61 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_61 == NULL)) {
                                tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_61 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_53);
                                Py_DECREF(tmp_args_element_value_57);
                                Py_DECREF(tmp_args_element_value_58);
                                Py_DECREF(tmp_args_element_value_59);
                                Py_DECREF(tmp_args_element_value_60);

                                exception_lineno = 232;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_args_element_value_61);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    tmp_args_element_value_62 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_62 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_62 == NULL)) {
                                tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_62 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_53);
                                Py_DECREF(tmp_args_element_value_57);
                                Py_DECREF(tmp_args_element_value_58);
                                Py_DECREF(tmp_args_element_value_59);
                                Py_DECREF(tmp_args_element_value_60);
                                Py_DECREF(tmp_args_element_value_61);

                                exception_lineno = 232;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_args_element_value_62);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    tmp_args_element_value_63 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[29]);

                    if (tmp_args_element_value_63 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_63 == NULL)) {
                                tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_63 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_53);
                                Py_DECREF(tmp_args_element_value_57);
                                Py_DECREF(tmp_args_element_value_58);
                                Py_DECREF(tmp_args_element_value_59);
                                Py_DECREF(tmp_args_element_value_60);
                                Py_DECREF(tmp_args_element_value_61);
                                Py_DECREF(tmp_args_element_value_62);

                                exception_lineno = 232;
                                type_description_2 = "o";
                                goto tuple_build_exception_100;
                            }
                            Py_INCREF(tmp_args_element_value_63);
                        } else {
                            goto tuple_build_exception_100;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 231;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
                        tmp_tuple_element_126 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_53, call_args);
                    }

                    Py_DECREF(tmp_called_value_53);
                    Py_DECREF(tmp_args_element_value_57);
                    Py_DECREF(tmp_args_element_value_58);
                    Py_DECREF(tmp_args_element_value_59);
                    Py_DECREF(tmp_args_element_value_60);
                    Py_DECREF(tmp_args_element_value_61);
                    Py_DECREF(tmp_args_element_value_62);
                    Py_DECREF(tmp_args_element_value_63);
                    if (tmp_tuple_element_126 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 231;
                        type_description_2 = "o";
                        goto tuple_build_exception_100;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_126);
                }
                goto tuple_build_noexception_100;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_100:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_100:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_9);
                tmp_tuple_element_127 = mod_consts[152];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_54;
                    PyObject *tmp_expression_value_115;
                    PyObject *tmp_args_element_value_64;
                    PyObject *tmp_args_element_value_65;
                    PyObject *tmp_args_element_value_66;
                    PyObject *tmp_args_element_value_67;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_127);
                    tmp_expression_value_115 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_115 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_115 == NULL)) {
                                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_115 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 234;
                                type_description_2 = "o";
                                goto tuple_build_exception_101;
                            }
                            Py_INCREF(tmp_expression_value_115);
                        } else {
                            goto tuple_build_exception_101;
                        }
                    }

                    tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_115);
                    if (tmp_called_value_54 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto tuple_build_exception_101;
                    }
                    tmp_args_element_value_64 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_64 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_64 == NULL)) {
                                tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_64 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_54);

                                exception_lineno = 234;
                                type_description_2 = "o";
                                goto tuple_build_exception_101;
                            }
                            Py_INCREF(tmp_args_element_value_64);
                        } else {
                            goto tuple_build_exception_101;
                        }
                    }

                    tmp_args_element_value_65 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_65 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_65 == NULL)) {
                                tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_65 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_54);
                                Py_DECREF(tmp_args_element_value_64);

                                exception_lineno = 234;
                                type_description_2 = "o";
                                goto tuple_build_exception_101;
                            }
                            Py_INCREF(tmp_args_element_value_65);
                        } else {
                            goto tuple_build_exception_101;
                        }
                    }

                    tmp_args_element_value_66 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_66 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_66 == NULL)) {
                                tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_66 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_54);
                                Py_DECREF(tmp_args_element_value_64);
                                Py_DECREF(tmp_args_element_value_65);

                                exception_lineno = 234;
                                type_description_2 = "o";
                                goto tuple_build_exception_101;
                            }
                            Py_INCREF(tmp_args_element_value_66);
                        } else {
                            goto tuple_build_exception_101;
                        }
                    }

                    tmp_args_element_value_67 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[29]);

                    if (tmp_args_element_value_67 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_67 == NULL)) {
                                tmp_args_element_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_67 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_54);
                                Py_DECREF(tmp_args_element_value_64);
                                Py_DECREF(tmp_args_element_value_65);
                                Py_DECREF(tmp_args_element_value_66);

                                exception_lineno = 234;
                                type_description_2 = "o";
                                goto tuple_build_exception_101;
                            }
                            Py_INCREF(tmp_args_element_value_67);
                        } else {
                            goto tuple_build_exception_101;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 234;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
                        tmp_tuple_element_127 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_54, call_args);
                    }

                    Py_DECREF(tmp_called_value_54);
                    Py_DECREF(tmp_args_element_value_64);
                    Py_DECREF(tmp_args_element_value_65);
                    Py_DECREF(tmp_args_element_value_66);
                    Py_DECREF(tmp_args_element_value_67);
                    if (tmp_tuple_element_127 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto tuple_build_exception_101;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_127);
                }
                goto tuple_build_noexception_101;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_101:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_101:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_9);
                tmp_tuple_element_128 = mod_consts[153];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_55;
                    PyObject *tmp_expression_value_116;
                    PyObject *tmp_args_element_value_68;
                    PyObject *tmp_args_element_value_69;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_128);
                    tmp_expression_value_116 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_116 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_116 == NULL)) {
                                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_116 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 236;
                                type_description_2 = "o";
                                goto tuple_build_exception_102;
                            }
                            Py_INCREF(tmp_expression_value_116);
                        } else {
                            goto tuple_build_exception_102;
                        }
                    }

                    tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_116);
                    if (tmp_called_value_55 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 236;
                        type_description_2 = "o";
                        goto tuple_build_exception_102;
                    }
                    tmp_args_element_value_68 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_68 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_68 == NULL)) {
                                tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_68 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_55);

                                exception_lineno = 236;
                                type_description_2 = "o";
                                goto tuple_build_exception_102;
                            }
                            Py_INCREF(tmp_args_element_value_68);
                        } else {
                            goto tuple_build_exception_102;
                        }
                    }

                    tmp_args_element_value_69 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[29]);

                    if (tmp_args_element_value_69 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_69 == NULL)) {
                                tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_69 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_55);
                                Py_DECREF(tmp_args_element_value_68);

                                exception_lineno = 236;
                                type_description_2 = "o";
                                goto tuple_build_exception_102;
                            }
                            Py_INCREF(tmp_args_element_value_69);
                        } else {
                            goto tuple_build_exception_102;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 236;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
                        tmp_tuple_element_128 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_55, call_args);
                    }

                    Py_DECREF(tmp_called_value_55);
                    Py_DECREF(tmp_args_element_value_68);
                    Py_DECREF(tmp_args_element_value_69);
                    if (tmp_tuple_element_128 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 236;
                        type_description_2 = "o";
                        goto tuple_build_exception_102;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_128);
                }
                goto tuple_build_noexception_102;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_102:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_102:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_9);
                tmp_tuple_element_129 = mod_consts[154];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_56;
                    PyObject *tmp_expression_value_117;
                    PyObject *tmp_args_element_value_70;
                    PyObject *tmp_args_element_value_71;
                    PyObject *tmp_args_element_value_72;
                    PyObject *tmp_args_element_value_73;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_129);
                    tmp_expression_value_117 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_expression_value_117 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_117 == NULL)) {
                                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_117 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 238;
                                type_description_2 = "o";
                                goto tuple_build_exception_103;
                            }
                            Py_INCREF(tmp_expression_value_117);
                        } else {
                            goto tuple_build_exception_103;
                        }
                    }

                    tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_117);
                    if (tmp_called_value_56 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "o";
                        goto tuple_build_exception_103;
                    }
                    tmp_args_element_value_70 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_70 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_70 == NULL)) {
                                tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_70 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_56);

                                exception_lineno = 238;
                                type_description_2 = "o";
                                goto tuple_build_exception_103;
                            }
                            Py_INCREF(tmp_args_element_value_70);
                        } else {
                            goto tuple_build_exception_103;
                        }
                    }

                    tmp_args_element_value_71 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_71 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_71 == NULL)) {
                                tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_71 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_56);
                                Py_DECREF(tmp_args_element_value_70);

                                exception_lineno = 238;
                                type_description_2 = "o";
                                goto tuple_build_exception_103;
                            }
                            Py_INCREF(tmp_args_element_value_71);
                        } else {
                            goto tuple_build_exception_103;
                        }
                    }

                    tmp_args_element_value_72 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[41]);

                    if (tmp_args_element_value_72 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_72 == NULL)) {
                                tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_72 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_56);
                                Py_DECREF(tmp_args_element_value_70);
                                Py_DECREF(tmp_args_element_value_71);

                                exception_lineno = 238;
                                type_description_2 = "o";
                                goto tuple_build_exception_103;
                            }
                            Py_INCREF(tmp_args_element_value_72);
                        } else {
                            goto tuple_build_exception_103;
                        }
                    }

                    tmp_args_element_value_73 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[29]);

                    if (tmp_args_element_value_73 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_73 == NULL)) {
                                tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_73 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_56);
                                Py_DECREF(tmp_args_element_value_70);
                                Py_DECREF(tmp_args_element_value_71);
                                Py_DECREF(tmp_args_element_value_72);

                                exception_lineno = 238;
                                type_description_2 = "o";
                                goto tuple_build_exception_103;
                            }
                            Py_INCREF(tmp_args_element_value_73);
                        } else {
                            goto tuple_build_exception_103;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 238;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73};
                        tmp_tuple_element_129 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_56, call_args);
                    }

                    Py_DECREF(tmp_called_value_56);
                    Py_DECREF(tmp_args_element_value_70);
                    Py_DECREF(tmp_args_element_value_71);
                    Py_DECREF(tmp_args_element_value_72);
                    Py_DECREF(tmp_args_element_value_73);
                    if (tmp_tuple_element_129 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "o";
                        goto tuple_build_exception_103;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_129);
                }
                goto tuple_build_noexception_103;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_103:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_103:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_9);
                tmp_tuple_element_130 = mod_consts[155];
                tmp_list_element_9 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_7;
                    PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_130);
                    tmp_called_instance_7 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[24]);

                    if (tmp_called_instance_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_called_instance_7 == NULL)) {
                                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_called_instance_7 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 240;
                                type_description_2 = "o";
                                goto tuple_build_exception_104;
                            }
                            Py_INCREF(tmp_called_instance_7);
                        } else {
                            goto tuple_build_exception_104;
                        }
                    }

                    frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame.f_lineno = 240;
                    tmp_tuple_element_130 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[118]);
                    Py_DECREF(tmp_called_instance_7);
                    if (tmp_tuple_element_130 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 240;
                        type_description_2 = "o";
                        goto tuple_build_exception_104;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_130);
                }
                goto tuple_build_noexception_104;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_104:;
                Py_DECREF(tmp_list_element_9);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_104:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_9);
            }
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_10;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_12c7eb55f8721002fb6141b1668f2e41_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_12c7eb55f8721002fb6141b1668f2e41_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_12c7eb55f8721002fb6141b1668f2e41_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_12c7eb55f8721002fb6141b1668f2e41_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_12c7eb55f8721002fb6141b1668f2e41_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_27;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_27;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_131;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_57 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_131 = mod_consts[140];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_131);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_131 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_131);
            tmp_tuple_element_131 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_131);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 208;
            tmp_assign_source_96 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_96;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_95 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_95);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__9_IDirectSound3DListener_208 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 208;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_95);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 243;
        tmp_assign_source_97 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_8,
            mod_consts[137],
            &PyTuple_GET_ITEM(mod_consts[156], 0)
        );

        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_97);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_tuple_element_132;
        PyObject *tmp_expression_value_118;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_tuple_element_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[115]);
        if (tmp_tuple_element_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_assign_source_98 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_98, 0, tmp_tuple_element_132);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_99 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_119 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[23];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_119, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_101 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_101;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_120;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_120 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_120, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_133;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_121 = tmp_class_creation_10__metaclass;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[44]);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_tuple_element_133 = mod_consts[158];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_133);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_133 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_133);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 246;
        tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_122;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_122 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_134;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_123 = tmp_class_creation_10__metaclass;
        tmp_name_value_11 = mod_consts[48];
        tmp_default_value_10 = mod_consts[49];
        tmp_tuple_element_134 = BUILTIN_GETATTR(tstate, tmp_expression_value_123, tmp_name_value_11, tmp_default_value_10);
        if (tmp_tuple_element_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_124;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_134);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_124 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_124 == NULL));
            tmp_tuple_element_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[48]);
            Py_DECREF(tmp_expression_value_124);
            if (tmp_tuple_element_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_105;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_134);
        }
        goto tuple_build_noexception_105;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_105:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_105:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 246;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_103;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_104;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_30;
        }
        frame_7049b5bc8a65bf63d3f9ae4d856b2824_11 = MAKE_CLASS_FRAME(tstate, codeobj_7049b5bc8a65bf63d3f9ae4d856b2824, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7049b5bc8a65bf63d3f9ae4d856b2824_11);
        assert(Py_REFCNT(frame_7049b5bc8a65bf63d3f9ae4d856b2824_11) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_10;
            PyObject *tmp_tuple_element_135;
            tmp_tuple_element_135 = mod_consts[141];
            tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_59;
                PyObject *tmp_expression_value_125;
                PyObject *tmp_args_element_value_74;
                PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_135);
                tmp_expression_value_125 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                if (tmp_expression_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_125 == NULL)) {
                            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_expression_value_125 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 249;
                            type_description_2 = "o";
                            goto tuple_build_exception_106;
                        }
                        Py_INCREF(tmp_expression_value_125);
                    } else {
                        goto tuple_build_exception_106;
                    }
                }

                tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[118]);
                Py_DECREF(tmp_expression_value_125);
                if (tmp_called_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto tuple_build_exception_106;
                }
                tmp_args_element_value_74 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[107]);

                if (tmp_args_element_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_args_element_value_74 == NULL)) {
                            tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
                        }

                        if (tmp_args_element_value_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_59);

                            exception_lineno = 249;
                            type_description_2 = "o";
                            goto tuple_build_exception_106;
                        }
                        Py_INCREF(tmp_args_element_value_74);
                    } else {
                        goto tuple_build_exception_106;
                    }
                }

                frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 249;
                tmp_tuple_element_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_74);
                Py_DECREF(tmp_called_value_59);
                Py_DECREF(tmp_args_element_value_74);
                if (tmp_tuple_element_135 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto tuple_build_exception_106;
                }
                PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_135);
            }
            goto tuple_build_noexception_106;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_106:;
            Py_DECREF(tmp_list_element_10);
            goto frame_exception_exit_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_106:;
            tmp_dictset_value = MAKE_LIST_EMPTY(18);
            {
                PyObject *tmp_tuple_element_136;
                PyObject *tmp_tuple_element_137;
                PyObject *tmp_tuple_element_138;
                PyObject *tmp_tuple_element_139;
                PyObject *tmp_tuple_element_140;
                PyObject *tmp_tuple_element_141;
                PyObject *tmp_tuple_element_142;
                PyObject *tmp_tuple_element_143;
                PyObject *tmp_tuple_element_144;
                PyObject *tmp_tuple_element_145;
                PyObject *tmp_tuple_element_146;
                PyObject *tmp_tuple_element_147;
                PyObject *tmp_tuple_element_148;
                PyObject *tmp_tuple_element_149;
                PyObject *tmp_tuple_element_150;
                PyObject *tmp_tuple_element_151;
                PyObject *tmp_tuple_element_152;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_10);
                tmp_tuple_element_136 = mod_consts[159];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_60;
                    PyObject *tmp_expression_value_126;
                    PyObject *tmp_args_element_value_75;
                    PyObject *tmp_args_element_value_76;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_136);
                    tmp_expression_value_126 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_126 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_126 == NULL)) {
                                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_126 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 251;
                                type_description_2 = "o";
                                goto tuple_build_exception_107;
                            }
                            Py_INCREF(tmp_expression_value_126);
                        } else {
                            goto tuple_build_exception_107;
                        }
                    }

                    tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_126);
                    if (tmp_called_value_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 251;
                        type_description_2 = "o";
                        goto tuple_build_exception_107;
                    }
                    tmp_args_element_value_75 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[31]);

                    if (tmp_args_element_value_75 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_75 == NULL)) {
                                tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_75 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_60);

                                exception_lineno = 251;
                                type_description_2 = "o";
                                goto tuple_build_exception_107;
                            }
                            Py_INCREF(tmp_args_element_value_75);
                        } else {
                            goto tuple_build_exception_107;
                        }
                    }

                    tmp_args_element_value_76 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[31]);

                    if (tmp_args_element_value_76 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_76 == NULL)) {
                                tmp_args_element_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_76 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_60);
                                Py_DECREF(tmp_args_element_value_75);

                                exception_lineno = 251;
                                type_description_2 = "o";
                                goto tuple_build_exception_107;
                            }
                            Py_INCREF(tmp_args_element_value_76);
                        } else {
                            goto tuple_build_exception_107;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 251;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
                        tmp_tuple_element_136 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_60, call_args);
                    }

                    Py_DECREF(tmp_called_value_60);
                    Py_DECREF(tmp_args_element_value_75);
                    Py_DECREF(tmp_args_element_value_76);
                    if (tmp_tuple_element_136 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 251;
                        type_description_2 = "o";
                        goto tuple_build_exception_107;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_136);
                }
                goto tuple_build_noexception_107;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_107:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_107:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_10);
                tmp_tuple_element_137 = mod_consts[160];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_61;
                    PyObject *tmp_expression_value_127;
                    PyObject *tmp_args_element_value_77;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_137);
                    tmp_expression_value_127 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_127 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_127 == NULL)) {
                                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_127 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 253;
                                type_description_2 = "o";
                                goto tuple_build_exception_108;
                            }
                            Py_INCREF(tmp_expression_value_127);
                        } else {
                            goto tuple_build_exception_108;
                        }
                    }

                    tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_127);
                    if (tmp_called_value_61 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 253;
                        type_description_2 = "o";
                        goto tuple_build_exception_108;
                    }
                    tmp_args_element_value_77 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[58]);

                    if (tmp_args_element_value_77 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_77 == NULL)) {
                                tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_77 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_61);

                                exception_lineno = 253;
                                type_description_2 = "o";
                                goto tuple_build_exception_108;
                            }
                            Py_INCREF(tmp_args_element_value_77);
                        } else {
                            goto tuple_build_exception_108;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 253;
                    tmp_tuple_element_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_77);
                    Py_DECREF(tmp_called_value_61);
                    Py_DECREF(tmp_args_element_value_77);
                    if (tmp_tuple_element_137 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 253;
                        type_description_2 = "o";
                        goto tuple_build_exception_108;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_137);
                }
                goto tuple_build_noexception_108;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_108:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_108:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_10);
                tmp_tuple_element_138 = mod_consts[161];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_62;
                    PyObject *tmp_expression_value_128;
                    PyObject *tmp_args_element_value_78;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_138);
                    tmp_expression_value_128 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_128 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_128 == NULL)) {
                                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_128 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 255;
                                type_description_2 = "o";
                                goto tuple_build_exception_109;
                            }
                            Py_INCREF(tmp_expression_value_128);
                        } else {
                            goto tuple_build_exception_109;
                        }
                    }

                    tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_128);
                    if (tmp_called_value_62 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "o";
                        goto tuple_build_exception_109;
                    }
                    tmp_args_element_value_78 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[34]);

                    if (tmp_args_element_value_78 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[34]);

                            if (unlikely(tmp_args_element_value_78 == NULL)) {
                                tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
                            }

                            if (tmp_args_element_value_78 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_62);

                                exception_lineno = 255;
                                type_description_2 = "o";
                                goto tuple_build_exception_109;
                            }
                            Py_INCREF(tmp_args_element_value_78);
                        } else {
                            goto tuple_build_exception_109;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 255;
                    tmp_tuple_element_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_78);
                    Py_DECREF(tmp_called_value_62);
                    Py_DECREF(tmp_args_element_value_78);
                    if (tmp_tuple_element_138 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "o";
                        goto tuple_build_exception_109;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_138);
                }
                goto tuple_build_noexception_109;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_109:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_109:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_10);
                tmp_tuple_element_139 = mod_consts[162];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_63;
                    PyObject *tmp_expression_value_129;
                    PyObject *tmp_args_element_value_79;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_139);
                    tmp_expression_value_129 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_129 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_129 == NULL)) {
                                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_129 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 257;
                                type_description_2 = "o";
                                goto tuple_build_exception_110;
                            }
                            Py_INCREF(tmp_expression_value_129);
                        } else {
                            goto tuple_build_exception_110;
                        }
                    }

                    tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_129);
                    if (tmp_called_value_63 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto tuple_build_exception_110;
                    }
                    tmp_args_element_value_79 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[42]);

                    if (tmp_args_element_value_79 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[42]);

                            if (unlikely(tmp_args_element_value_79 == NULL)) {
                                tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
                            }

                            if (tmp_args_element_value_79 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_63);

                                exception_lineno = 257;
                                type_description_2 = "o";
                                goto tuple_build_exception_110;
                            }
                            Py_INCREF(tmp_args_element_value_79);
                        } else {
                            goto tuple_build_exception_110;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 257;
                    tmp_tuple_element_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_79);
                    Py_DECREF(tmp_called_value_63);
                    Py_DECREF(tmp_args_element_value_79);
                    if (tmp_tuple_element_139 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto tuple_build_exception_110;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_139);
                }
                goto tuple_build_noexception_110;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_110:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_110:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_10);
                tmp_tuple_element_140 = mod_consts[163];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_64;
                    PyObject *tmp_expression_value_130;
                    PyObject *tmp_args_element_value_80;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_140);
                    tmp_expression_value_130 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_130 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_130 == NULL)) {
                                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_130 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 259;
                                type_description_2 = "o";
                                goto tuple_build_exception_111;
                            }
                            Py_INCREF(tmp_expression_value_130);
                        } else {
                            goto tuple_build_exception_111;
                        }
                    }

                    tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_130);
                    if (tmp_called_value_64 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 259;
                        type_description_2 = "o";
                        goto tuple_build_exception_111;
                    }
                    tmp_args_element_value_80 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[42]);

                    if (tmp_args_element_value_80 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[42]);

                            if (unlikely(tmp_args_element_value_80 == NULL)) {
                                tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
                            }

                            if (tmp_args_element_value_80 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_64);

                                exception_lineno = 259;
                                type_description_2 = "o";
                                goto tuple_build_exception_111;
                            }
                            Py_INCREF(tmp_args_element_value_80);
                        } else {
                            goto tuple_build_exception_111;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 259;
                    tmp_tuple_element_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_80);
                    Py_DECREF(tmp_called_value_64);
                    Py_DECREF(tmp_args_element_value_80);
                    if (tmp_tuple_element_140 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 259;
                        type_description_2 = "o";
                        goto tuple_build_exception_111;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_140);
                }
                goto tuple_build_noexception_111;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_111:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_111:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_10);
                tmp_tuple_element_141 = mod_consts[164];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_65;
                    PyObject *tmp_expression_value_131;
                    PyObject *tmp_args_element_value_81;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_141);
                    tmp_expression_value_131 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_131 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_131 == NULL)) {
                                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_131 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 261;
                                type_description_2 = "o";
                                goto tuple_build_exception_112;
                            }
                            Py_INCREF(tmp_expression_value_131);
                        } else {
                            goto tuple_build_exception_112;
                        }
                    }

                    tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_131);
                    if (tmp_called_value_65 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 261;
                        type_description_2 = "o";
                        goto tuple_build_exception_112;
                    }
                    tmp_args_element_value_81 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[31]);

                    if (tmp_args_element_value_81 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_81 == NULL)) {
                                tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_81 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_65);

                                exception_lineno = 261;
                                type_description_2 = "o";
                                goto tuple_build_exception_112;
                            }
                            Py_INCREF(tmp_args_element_value_81);
                        } else {
                            goto tuple_build_exception_112;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 261;
                    tmp_tuple_element_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_81);
                    Py_DECREF(tmp_called_value_65);
                    Py_DECREF(tmp_args_element_value_81);
                    if (tmp_tuple_element_141 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 261;
                        type_description_2 = "o";
                        goto tuple_build_exception_112;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_141);
                }
                goto tuple_build_noexception_112;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_112:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_112:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_10);
                tmp_tuple_element_142 = mod_consts[145];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_66;
                    PyObject *tmp_expression_value_132;
                    PyObject *tmp_args_element_value_82;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_142);
                    tmp_expression_value_132 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_132 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_132 == NULL)) {
                                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_132 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 263;
                                type_description_2 = "o";
                                goto tuple_build_exception_113;
                            }
                            Py_INCREF(tmp_expression_value_132);
                        } else {
                            goto tuple_build_exception_113;
                        }
                    }

                    tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_132);
                    if (tmp_called_value_66 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_2 = "o";
                        goto tuple_build_exception_113;
                    }
                    tmp_args_element_value_82 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[58]);

                    if (tmp_args_element_value_82 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_82 == NULL)) {
                                tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_82 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_66);

                                exception_lineno = 263;
                                type_description_2 = "o";
                                goto tuple_build_exception_113;
                            }
                            Py_INCREF(tmp_args_element_value_82);
                        } else {
                            goto tuple_build_exception_113;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 263;
                    tmp_tuple_element_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_82);
                    Py_DECREF(tmp_called_value_66);
                    Py_DECREF(tmp_args_element_value_82);
                    if (tmp_tuple_element_142 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_2 = "o";
                        goto tuple_build_exception_113;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_142);
                }
                goto tuple_build_noexception_113;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_113:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_113:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_10);
                tmp_tuple_element_143 = mod_consts[147];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_67;
                    PyObject *tmp_expression_value_133;
                    PyObject *tmp_args_element_value_83;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_143);
                    tmp_expression_value_133 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_133 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_133 == NULL)) {
                                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_133 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 265;
                                type_description_2 = "o";
                                goto tuple_build_exception_114;
                            }
                            Py_INCREF(tmp_expression_value_133);
                        } else {
                            goto tuple_build_exception_114;
                        }
                    }

                    tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_133);
                    if (tmp_called_value_67 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 265;
                        type_description_2 = "o";
                        goto tuple_build_exception_114;
                    }
                    tmp_args_element_value_83 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[58]);

                    if (tmp_args_element_value_83 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_83 == NULL)) {
                                tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_83 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_67);

                                exception_lineno = 265;
                                type_description_2 = "o";
                                goto tuple_build_exception_114;
                            }
                            Py_INCREF(tmp_args_element_value_83);
                        } else {
                            goto tuple_build_exception_114;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 265;
                    tmp_tuple_element_143 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_83);
                    Py_DECREF(tmp_called_value_67);
                    Py_DECREF(tmp_args_element_value_83);
                    if (tmp_tuple_element_143 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 265;
                        type_description_2 = "o";
                        goto tuple_build_exception_114;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_143);
                }
                goto tuple_build_noexception_114;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_114:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_114:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_10);
                tmp_tuple_element_144 = mod_consts[148];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_68;
                    PyObject *tmp_expression_value_134;
                    PyObject *tmp_args_element_value_84;
                    PyObject *tmp_args_element_value_85;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_144);
                    tmp_expression_value_134 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_134 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_134 == NULL)) {
                                tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_134 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 267;
                                type_description_2 = "o";
                                goto tuple_build_exception_115;
                            }
                            Py_INCREF(tmp_expression_value_134);
                        } else {
                            goto tuple_build_exception_115;
                        }
                    }

                    tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_134);
                    if (tmp_called_value_68 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 267;
                        type_description_2 = "o";
                        goto tuple_build_exception_115;
                    }
                    tmp_args_element_value_84 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[107]);

                    if (tmp_args_element_value_84 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[107]);

                            if (unlikely(tmp_args_element_value_84 == NULL)) {
                                tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
                            }

                            if (tmp_args_element_value_84 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_68);

                                exception_lineno = 267;
                                type_description_2 = "o";
                                goto tuple_build_exception_115;
                            }
                            Py_INCREF(tmp_args_element_value_84);
                        } else {
                            goto tuple_build_exception_115;
                        }
                    }

                    tmp_args_element_value_85 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_85 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_85 == NULL)) {
                                tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_85 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_68);
                                Py_DECREF(tmp_args_element_value_84);

                                exception_lineno = 267;
                                type_description_2 = "o";
                                goto tuple_build_exception_115;
                            }
                            Py_INCREF(tmp_args_element_value_85);
                        } else {
                            goto tuple_build_exception_115;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 267;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85};
                        tmp_tuple_element_144 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_68, call_args);
                    }

                    Py_DECREF(tmp_called_value_68);
                    Py_DECREF(tmp_args_element_value_84);
                    Py_DECREF(tmp_args_element_value_85);
                    if (tmp_tuple_element_144 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 267;
                        type_description_2 = "o";
                        goto tuple_build_exception_115;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_144);
                }
                goto tuple_build_noexception_115;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_115:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_115:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_10);
                tmp_tuple_element_145 = mod_consts[165];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_69;
                    PyObject *tmp_expression_value_135;
                    PyObject *tmp_args_element_value_86;
                    PyObject *tmp_args_element_value_87;
                    PyObject *tmp_args_element_value_88;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_145);
                    tmp_expression_value_135 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_135 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_135 == NULL)) {
                                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_135 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 269;
                                type_description_2 = "o";
                                goto tuple_build_exception_116;
                            }
                            Py_INCREF(tmp_expression_value_135);
                        } else {
                            goto tuple_build_exception_116;
                        }
                    }

                    tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_135);
                    if (tmp_called_value_69 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 269;
                        type_description_2 = "o";
                        goto tuple_build_exception_116;
                    }
                    tmp_args_element_value_86 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_86 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_86 == NULL)) {
                                tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_86 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_69);

                                exception_lineno = 269;
                                type_description_2 = "o";
                                goto tuple_build_exception_116;
                            }
                            Py_INCREF(tmp_args_element_value_86);
                        } else {
                            goto tuple_build_exception_116;
                        }
                    }

                    tmp_args_element_value_87 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_87 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_87 == NULL)) {
                                tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_87 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_69);
                                Py_DECREF(tmp_args_element_value_86);

                                exception_lineno = 269;
                                type_description_2 = "o";
                                goto tuple_build_exception_116;
                            }
                            Py_INCREF(tmp_args_element_value_87);
                        } else {
                            goto tuple_build_exception_116;
                        }
                    }

                    tmp_args_element_value_88 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_88 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_88 == NULL)) {
                                tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_88 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_69);
                                Py_DECREF(tmp_args_element_value_86);
                                Py_DECREF(tmp_args_element_value_87);

                                exception_lineno = 269;
                                type_description_2 = "o";
                                goto tuple_build_exception_116;
                            }
                            Py_INCREF(tmp_args_element_value_88);
                        } else {
                            goto tuple_build_exception_116;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 269;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88};
                        tmp_tuple_element_145 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_69, call_args);
                    }

                    Py_DECREF(tmp_called_value_69);
                    Py_DECREF(tmp_args_element_value_86);
                    Py_DECREF(tmp_args_element_value_87);
                    Py_DECREF(tmp_args_element_value_88);
                    if (tmp_tuple_element_145 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 269;
                        type_description_2 = "o";
                        goto tuple_build_exception_116;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_145);
                }
                goto tuple_build_noexception_116;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_116:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_116:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_10);
                tmp_tuple_element_146 = mod_consts[166];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_70;
                    PyObject *tmp_expression_value_136;
                    PyObject *tmp_args_element_value_89;
                    PyObject *tmp_args_element_value_90;
                    PyObject *tmp_args_element_value_91;
                    PyObject *tmp_args_element_value_92;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_146);
                    tmp_expression_value_136 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_136 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_136 == NULL)) {
                                tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_136 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 271;
                                type_description_2 = "o";
                                goto tuple_build_exception_117;
                            }
                            Py_INCREF(tmp_expression_value_136);
                        } else {
                            goto tuple_build_exception_117;
                        }
                    }

                    tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_136);
                    if (tmp_called_value_70 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 271;
                        type_description_2 = "o";
                        goto tuple_build_exception_117;
                    }
                    tmp_args_element_value_89 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_89 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_89 == NULL)) {
                                tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_89 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_70);

                                exception_lineno = 271;
                                type_description_2 = "o";
                                goto tuple_build_exception_117;
                            }
                            Py_INCREF(tmp_args_element_value_89);
                        } else {
                            goto tuple_build_exception_117;
                        }
                    }

                    tmp_args_element_value_90 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_90 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_90 == NULL)) {
                                tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_90 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_70);
                                Py_DECREF(tmp_args_element_value_89);

                                exception_lineno = 271;
                                type_description_2 = "o";
                                goto tuple_build_exception_117;
                            }
                            Py_INCREF(tmp_args_element_value_90);
                        } else {
                            goto tuple_build_exception_117;
                        }
                    }

                    tmp_args_element_value_91 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_91 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_91 == NULL)) {
                                tmp_args_element_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_91 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_70);
                                Py_DECREF(tmp_args_element_value_89);
                                Py_DECREF(tmp_args_element_value_90);

                                exception_lineno = 271;
                                type_description_2 = "o";
                                goto tuple_build_exception_117;
                            }
                            Py_INCREF(tmp_args_element_value_91);
                        } else {
                            goto tuple_build_exception_117;
                        }
                    }

                    tmp_args_element_value_92 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_92 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_92 == NULL)) {
                                tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_92 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_70);
                                Py_DECREF(tmp_args_element_value_89);
                                Py_DECREF(tmp_args_element_value_90);
                                Py_DECREF(tmp_args_element_value_91);

                                exception_lineno = 271;
                                type_description_2 = "o";
                                goto tuple_build_exception_117;
                            }
                            Py_INCREF(tmp_args_element_value_92);
                        } else {
                            goto tuple_build_exception_117;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 271;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92};
                        tmp_tuple_element_146 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_70, call_args);
                    }

                    Py_DECREF(tmp_called_value_70);
                    Py_DECREF(tmp_args_element_value_89);
                    Py_DECREF(tmp_args_element_value_90);
                    Py_DECREF(tmp_args_element_value_91);
                    Py_DECREF(tmp_args_element_value_92);
                    if (tmp_tuple_element_146 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 271;
                        type_description_2 = "o";
                        goto tuple_build_exception_117;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_146);
                }
                goto tuple_build_noexception_117;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_117:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_117:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_10);
                tmp_tuple_element_147 = mod_consts[167];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_71;
                    PyObject *tmp_expression_value_137;
                    PyObject *tmp_args_element_value_93;
                    PyObject *tmp_args_element_value_94;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_147);
                    tmp_expression_value_137 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_137 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_137 == NULL)) {
                                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_137 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 273;
                                type_description_2 = "o";
                                goto tuple_build_exception_118;
                            }
                            Py_INCREF(tmp_expression_value_137);
                        } else {
                            goto tuple_build_exception_118;
                        }
                    }

                    tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_137);
                    if (tmp_called_value_71 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_2 = "o";
                        goto tuple_build_exception_118;
                    }
                    tmp_args_element_value_93 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[33]);

                    if (tmp_args_element_value_93 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_args_element_value_93 == NULL)) {
                                tmp_args_element_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                            }

                            if (tmp_args_element_value_93 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_71);

                                exception_lineno = 273;
                                type_description_2 = "o";
                                goto tuple_build_exception_118;
                            }
                            Py_INCREF(tmp_args_element_value_93);
                        } else {
                            goto tuple_build_exception_118;
                        }
                    }

                    tmp_args_element_value_94 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_94 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_94 == NULL)) {
                                tmp_args_element_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_94 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_71);
                                Py_DECREF(tmp_args_element_value_93);

                                exception_lineno = 273;
                                type_description_2 = "o";
                                goto tuple_build_exception_118;
                            }
                            Py_INCREF(tmp_args_element_value_94);
                        } else {
                            goto tuple_build_exception_118;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 273;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94};
                        tmp_tuple_element_147 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_71, call_args);
                    }

                    Py_DECREF(tmp_called_value_71);
                    Py_DECREF(tmp_args_element_value_93);
                    Py_DECREF(tmp_args_element_value_94);
                    if (tmp_tuple_element_147 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_2 = "o";
                        goto tuple_build_exception_118;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_147);
                }
                goto tuple_build_noexception_118;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_118:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_118:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_10);
                tmp_tuple_element_148 = mod_consts[168];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_72;
                    PyObject *tmp_expression_value_138;
                    PyObject *tmp_args_element_value_95;
                    PyObject *tmp_args_element_value_96;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_148);
                    tmp_expression_value_138 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_138 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_138 == NULL)) {
                                tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_138 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 275;
                                type_description_2 = "o";
                                goto tuple_build_exception_119;
                            }
                            Py_INCREF(tmp_expression_value_138);
                        } else {
                            goto tuple_build_exception_119;
                        }
                    }

                    tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_138);
                    if (tmp_called_value_72 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 275;
                        type_description_2 = "o";
                        goto tuple_build_exception_119;
                    }
                    tmp_args_element_value_95 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_95 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_95 == NULL)) {
                                tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_95 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_72);

                                exception_lineno = 275;
                                type_description_2 = "o";
                                goto tuple_build_exception_119;
                            }
                            Py_INCREF(tmp_args_element_value_95);
                        } else {
                            goto tuple_build_exception_119;
                        }
                    }

                    tmp_args_element_value_96 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_96 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_96 == NULL)) {
                                tmp_args_element_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_96 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_72);
                                Py_DECREF(tmp_args_element_value_95);

                                exception_lineno = 275;
                                type_description_2 = "o";
                                goto tuple_build_exception_119;
                            }
                            Py_INCREF(tmp_args_element_value_96);
                        } else {
                            goto tuple_build_exception_119;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 275;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96};
                        tmp_tuple_element_148 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_72, call_args);
                    }

                    Py_DECREF(tmp_called_value_72);
                    Py_DECREF(tmp_args_element_value_95);
                    Py_DECREF(tmp_args_element_value_96);
                    if (tmp_tuple_element_148 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 275;
                        type_description_2 = "o";
                        goto tuple_build_exception_119;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_148);
                }
                goto tuple_build_noexception_119;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_119:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_119:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_10);
                tmp_tuple_element_149 = mod_consts[169];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_73;
                    PyObject *tmp_expression_value_139;
                    PyObject *tmp_args_element_value_97;
                    PyObject *tmp_args_element_value_98;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_149);
                    tmp_expression_value_139 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_139 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_139 == NULL)) {
                                tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_139 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 277;
                                type_description_2 = "o";
                                goto tuple_build_exception_120;
                            }
                            Py_INCREF(tmp_expression_value_139);
                        } else {
                            goto tuple_build_exception_120;
                        }
                    }

                    tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_139);
                    if (tmp_called_value_73 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_2 = "o";
                        goto tuple_build_exception_120;
                    }
                    tmp_args_element_value_97 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_97 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_97 == NULL)) {
                                tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_97 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_73);

                                exception_lineno = 277;
                                type_description_2 = "o";
                                goto tuple_build_exception_120;
                            }
                            Py_INCREF(tmp_args_element_value_97);
                        } else {
                            goto tuple_build_exception_120;
                        }
                    }

                    tmp_args_element_value_98 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_98 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_98 == NULL)) {
                                tmp_args_element_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_98 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_73);
                                Py_DECREF(tmp_args_element_value_97);

                                exception_lineno = 277;
                                type_description_2 = "o";
                                goto tuple_build_exception_120;
                            }
                            Py_INCREF(tmp_args_element_value_98);
                        } else {
                            goto tuple_build_exception_120;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 277;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98};
                        tmp_tuple_element_149 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_73, call_args);
                    }

                    Py_DECREF(tmp_called_value_73);
                    Py_DECREF(tmp_args_element_value_97);
                    Py_DECREF(tmp_args_element_value_98);
                    if (tmp_tuple_element_149 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_2 = "o";
                        goto tuple_build_exception_120;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_149);
                }
                goto tuple_build_noexception_120;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_120:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_120:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_10);
                tmp_tuple_element_150 = mod_consts[170];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_74;
                    PyObject *tmp_expression_value_140;
                    PyObject *tmp_args_element_value_99;
                    PyObject *tmp_args_element_value_100;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_150);
                    tmp_expression_value_140 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_140 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_140 == NULL)) {
                                tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_140 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 279;
                                type_description_2 = "o";
                                goto tuple_build_exception_121;
                            }
                            Py_INCREF(tmp_expression_value_140);
                        } else {
                            goto tuple_build_exception_121;
                        }
                    }

                    tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_140);
                    if (tmp_called_value_74 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 279;
                        type_description_2 = "o";
                        goto tuple_build_exception_121;
                    }
                    tmp_args_element_value_99 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_99 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_99 == NULL)) {
                                tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_99 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_74);

                                exception_lineno = 279;
                                type_description_2 = "o";
                                goto tuple_build_exception_121;
                            }
                            Py_INCREF(tmp_args_element_value_99);
                        } else {
                            goto tuple_build_exception_121;
                        }
                    }

                    tmp_args_element_value_100 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_100 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_100 == NULL)) {
                                tmp_args_element_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_100 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_74);
                                Py_DECREF(tmp_args_element_value_99);

                                exception_lineno = 279;
                                type_description_2 = "o";
                                goto tuple_build_exception_121;
                            }
                            Py_INCREF(tmp_args_element_value_100);
                        } else {
                            goto tuple_build_exception_121;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 279;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_99, tmp_args_element_value_100};
                        tmp_tuple_element_150 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_74, call_args);
                    }

                    Py_DECREF(tmp_called_value_74);
                    Py_DECREF(tmp_args_element_value_99);
                    Py_DECREF(tmp_args_element_value_100);
                    if (tmp_tuple_element_150 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 279;
                        type_description_2 = "o";
                        goto tuple_build_exception_121;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_150);
                }
                goto tuple_build_noexception_121;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_121:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_121:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_10);
                tmp_tuple_element_151 = mod_consts[152];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_75;
                    PyObject *tmp_expression_value_141;
                    PyObject *tmp_args_element_value_101;
                    PyObject *tmp_args_element_value_102;
                    PyObject *tmp_args_element_value_103;
                    PyObject *tmp_args_element_value_104;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_151);
                    tmp_expression_value_141 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_141 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_141 == NULL)) {
                                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_141 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 281;
                                type_description_2 = "o";
                                goto tuple_build_exception_122;
                            }
                            Py_INCREF(tmp_expression_value_141);
                        } else {
                            goto tuple_build_exception_122;
                        }
                    }

                    tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_141);
                    if (tmp_called_value_75 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_2 = "o";
                        goto tuple_build_exception_122;
                    }
                    tmp_args_element_value_101 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_101 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_101 == NULL)) {
                                tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_101 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_75);

                                exception_lineno = 281;
                                type_description_2 = "o";
                                goto tuple_build_exception_122;
                            }
                            Py_INCREF(tmp_args_element_value_101);
                        } else {
                            goto tuple_build_exception_122;
                        }
                    }

                    tmp_args_element_value_102 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_102 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_102 == NULL)) {
                                tmp_args_element_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_102 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_75);
                                Py_DECREF(tmp_args_element_value_101);

                                exception_lineno = 281;
                                type_description_2 = "o";
                                goto tuple_build_exception_122;
                            }
                            Py_INCREF(tmp_args_element_value_102);
                        } else {
                            goto tuple_build_exception_122;
                        }
                    }

                    tmp_args_element_value_103 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_103 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_103 == NULL)) {
                                tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_103 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_75);
                                Py_DECREF(tmp_args_element_value_101);
                                Py_DECREF(tmp_args_element_value_102);

                                exception_lineno = 281;
                                type_description_2 = "o";
                                goto tuple_build_exception_122;
                            }
                            Py_INCREF(tmp_args_element_value_103);
                        } else {
                            goto tuple_build_exception_122;
                        }
                    }

                    tmp_args_element_value_104 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_104 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_104 == NULL)) {
                                tmp_args_element_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_104 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_75);
                                Py_DECREF(tmp_args_element_value_101);
                                Py_DECREF(tmp_args_element_value_102);
                                Py_DECREF(tmp_args_element_value_103);

                                exception_lineno = 281;
                                type_description_2 = "o";
                                goto tuple_build_exception_122;
                            }
                            Py_INCREF(tmp_args_element_value_104);
                        } else {
                            goto tuple_build_exception_122;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 281;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104};
                        tmp_tuple_element_151 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_75, call_args);
                    }

                    Py_DECREF(tmp_called_value_75);
                    Py_DECREF(tmp_args_element_value_101);
                    Py_DECREF(tmp_args_element_value_102);
                    Py_DECREF(tmp_args_element_value_103);
                    Py_DECREF(tmp_args_element_value_104);
                    if (tmp_tuple_element_151 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_2 = "o";
                        goto tuple_build_exception_122;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_151);
                }
                goto tuple_build_noexception_122;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_122:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_122:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_10);
                tmp_tuple_element_152 = mod_consts[154];
                tmp_list_element_10 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_76;
                    PyObject *tmp_expression_value_142;
                    PyObject *tmp_args_element_value_105;
                    PyObject *tmp_args_element_value_106;
                    PyObject *tmp_args_element_value_107;
                    PyObject *tmp_args_element_value_108;
                    PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_152);
                    tmp_expression_value_142 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[24]);

                    if (tmp_expression_value_142 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_142 == NULL)) {
                                tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_142 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 283;
                                type_description_2 = "o";
                                goto tuple_build_exception_123;
                            }
                            Py_INCREF(tmp_expression_value_142);
                        } else {
                            goto tuple_build_exception_123;
                        }
                    }

                    tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_142);
                    if (tmp_called_value_76 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "o";
                        goto tuple_build_exception_123;
                    }
                    tmp_args_element_value_105 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_105 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_105 == NULL)) {
                                tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_105 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_76);

                                exception_lineno = 283;
                                type_description_2 = "o";
                                goto tuple_build_exception_123;
                            }
                            Py_INCREF(tmp_args_element_value_105);
                        } else {
                            goto tuple_build_exception_123;
                        }
                    }

                    tmp_args_element_value_106 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_106 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_106 == NULL)) {
                                tmp_args_element_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_106 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_76);
                                Py_DECREF(tmp_args_element_value_105);

                                exception_lineno = 283;
                                type_description_2 = "o";
                                goto tuple_build_exception_123;
                            }
                            Py_INCREF(tmp_args_element_value_106);
                        } else {
                            goto tuple_build_exception_123;
                        }
                    }

                    tmp_args_element_value_107 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[41]);

                    if (tmp_args_element_value_107 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[41]);

                            if (unlikely(tmp_args_element_value_107 == NULL)) {
                                tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                            }

                            if (tmp_args_element_value_107 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_76);
                                Py_DECREF(tmp_args_element_value_105);
                                Py_DECREF(tmp_args_element_value_106);

                                exception_lineno = 283;
                                type_description_2 = "o";
                                goto tuple_build_exception_123;
                            }
                            Py_INCREF(tmp_args_element_value_107);
                        } else {
                            goto tuple_build_exception_123;
                        }
                    }

                    tmp_args_element_value_108 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[29]);

                    if (tmp_args_element_value_108 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_108 == NULL)) {
                                tmp_args_element_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_108 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_76);
                                Py_DECREF(tmp_args_element_value_105);
                                Py_DECREF(tmp_args_element_value_106);
                                Py_DECREF(tmp_args_element_value_107);

                                exception_lineno = 283;
                                type_description_2 = "o";
                                goto tuple_build_exception_123;
                            }
                            Py_INCREF(tmp_args_element_value_108);
                        } else {
                            goto tuple_build_exception_123;
                        }
                    }

                    frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame.f_lineno = 283;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
                        tmp_tuple_element_152 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_76, call_args);
                    }

                    Py_DECREF(tmp_called_value_76);
                    Py_DECREF(tmp_args_element_value_105);
                    Py_DECREF(tmp_args_element_value_106);
                    Py_DECREF(tmp_args_element_value_107);
                    Py_DECREF(tmp_args_element_value_108);
                    if (tmp_tuple_element_152 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "o";
                        goto tuple_build_exception_123;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_152);
                }
                goto tuple_build_noexception_123;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_123:;
                Py_DECREF(tmp_list_element_10);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_123:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_10);
            }
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_11;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7049b5bc8a65bf63d3f9ae4d856b2824_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7049b5bc8a65bf63d3f9ae4d856b2824_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7049b5bc8a65bf63d3f9ae4d856b2824_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7049b5bc8a65bf63d3f9ae4d856b2824_11,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_7049b5bc8a65bf63d3f9ae4d856b2824_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_30;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_30;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_105;
            PyObject *tmp_called_value_77;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_153;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_77 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_153 = mod_consts[158];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_153);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_153 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_153);
            tmp_tuple_element_153 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_153);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 246;
            tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_77, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_105;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_104 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_104);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__10_IDirectSound3DBuffer_246 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 246;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_104);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_tuple_element_154;
        PyObject *tmp_expression_value_143;
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_tuple_element_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[115]);
        if (tmp_tuple_element_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_assign_source_106 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_106, 0, tmp_tuple_element_154);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_107 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_144 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[23];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_144, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_109 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_109;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_expression_value_145;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_145 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_145, mod_consts[44]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_155;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_146 = tmp_class_creation_11__metaclass;
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[44]);
        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_tuple_element_155 = mod_consts[171];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_155);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_155 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_155);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 286;
        tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_78, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_110;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_147;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_147 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_147, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_156;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_148 = tmp_class_creation_11__metaclass;
        tmp_name_value_12 = mod_consts[48];
        tmp_default_value_11 = mod_consts[49];
        tmp_tuple_element_156 = BUILTIN_GETATTR(tstate, tmp_expression_value_148, tmp_name_value_12, tmp_default_value_11);
        if (tmp_tuple_element_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_149;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_156);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_149 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_149 == NULL));
            tmp_tuple_element_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[48]);
            Py_DECREF(tmp_expression_value_149);
            if (tmp_tuple_element_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_124;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_156);
        }
        goto tuple_build_noexception_124;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_124:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_124:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 286;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_111;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_112;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_33;
        }
        frame_0f53aff36cb3a8e9331d6b6973842ecb_12 = MAKE_CLASS_FRAME(tstate, codeobj_0f53aff36cb3a8e9331d6b6973842ecb, module_pyglet$media$drivers$directsound$lib_dsound, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0f53aff36cb3a8e9331d6b6973842ecb_12);
        assert(Py_REFCNT(frame_0f53aff36cb3a8e9331d6b6973842ecb_12) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_11;
            PyObject *tmp_tuple_element_157;
            tmp_tuple_element_157 = mod_consts[172];
            tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_79;
                PyObject *tmp_expression_value_150;
                PyObject *tmp_args_element_value_109;
                PyObject *tmp_args_element_value_110;
                PyObject *tmp_called_value_80;
                PyObject *tmp_expression_value_151;
                PyObject *tmp_args_element_value_111;
                PyObject *tmp_args_element_value_112;
                PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_157);
                tmp_expression_value_150 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                if (tmp_expression_value_150 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_150 == NULL)) {
                            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_expression_value_150 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 289;
                            type_description_2 = "o";
                            goto tuple_build_exception_125;
                        }
                        Py_INCREF(tmp_expression_value_150);
                    } else {
                        goto tuple_build_exception_125;
                    }
                }

                tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[118]);
                Py_DECREF(tmp_expression_value_150);
                if (tmp_called_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "o";
                    goto tuple_build_exception_125;
                }
                tmp_args_element_value_109 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[96]);

                if (tmp_args_element_value_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[96]);

                        if (unlikely(tmp_args_element_value_109 == NULL)) {
                            tmp_args_element_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
                        }

                        if (tmp_args_element_value_109 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_79);

                            exception_lineno = 289;
                            type_description_2 = "o";
                            goto tuple_build_exception_125;
                        }
                        Py_INCREF(tmp_args_element_value_109);
                    } else {
                        goto tuple_build_exception_125;
                    }
                }

                tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_expression_value_151 == NULL)) {
                    tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                }

                assert(!(tmp_expression_value_151 == NULL));
                tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[30]);
                if (tmp_called_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_79);
                    Py_DECREF(tmp_args_element_value_109);

                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto tuple_build_exception_125;
                }
                tmp_args_element_value_111 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[116]);

                if (tmp_args_element_value_111 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_args_element_value_111 == NULL)) {
                            tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
                        }

                        if (tmp_args_element_value_111 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_79);
                            Py_DECREF(tmp_args_element_value_109);
                            Py_DECREF(tmp_called_value_80);

                            exception_lineno = 290;
                            type_description_2 = "o";
                            goto tuple_build_exception_125;
                        }
                        Py_INCREF(tmp_args_element_value_111);
                    } else {
                        goto tuple_build_exception_125;
                    }
                }

                frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 290;
                tmp_args_element_value_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_111);
                Py_DECREF(tmp_called_value_80);
                Py_DECREF(tmp_args_element_value_111);
                if (tmp_args_element_value_110 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_79);
                    Py_DECREF(tmp_args_element_value_109);

                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto tuple_build_exception_125;
                }
                tmp_args_element_value_112 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[39]);

                if (tmp_args_element_value_112 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[39]);

                        if (unlikely(tmp_args_element_value_112 == NULL)) {
                            tmp_args_element_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
                        }

                        if (tmp_args_element_value_112 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_79);
                            Py_DECREF(tmp_args_element_value_109);
                            Py_DECREF(tmp_args_element_value_110);

                            exception_lineno = 291;
                            type_description_2 = "o";
                            goto tuple_build_exception_125;
                        }
                        Py_INCREF(tmp_args_element_value_112);
                    } else {
                        goto tuple_build_exception_125;
                    }
                }

                frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 289;
                {
                    PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_112};
                    tmp_tuple_element_157 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_79, call_args);
                }

                Py_DECREF(tmp_called_value_79);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                Py_DECREF(tmp_args_element_value_112);
                if (tmp_tuple_element_157 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "o";
                    goto tuple_build_exception_125;
                }
                PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_157);
            }
            goto tuple_build_noexception_125;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_125:;
            Py_DECREF(tmp_list_element_11);
            goto frame_exception_exit_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_125:;
            tmp_dictset_value = MAKE_LIST_EMPTY(8);
            {
                PyObject *tmp_tuple_element_158;
                PyObject *tmp_tuple_element_159;
                PyObject *tmp_tuple_element_160;
                PyObject *tmp_tuple_element_161;
                PyObject *tmp_tuple_element_162;
                PyObject *tmp_tuple_element_163;
                PyObject *tmp_tuple_element_164;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_11);
                tmp_tuple_element_158 = mod_consts[117];
                tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_81;
                    PyObject *tmp_expression_value_152;
                    PyObject *tmp_args_element_value_113;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_158);
                    tmp_expression_value_152 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_expression_value_152 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_152 == NULL)) {
                                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_152 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 293;
                                type_description_2 = "o";
                                goto tuple_build_exception_126;
                            }
                            Py_INCREF(tmp_expression_value_152);
                        } else {
                            goto tuple_build_exception_126;
                        }
                    }

                    tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_152);
                    if (tmp_called_value_81 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 293;
                        type_description_2 = "o";
                        goto tuple_build_exception_126;
                    }
                    tmp_args_element_value_113 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[88]);

                    if (tmp_args_element_value_113 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[88]);

                            if (unlikely(tmp_args_element_value_113 == NULL)) {
                                tmp_args_element_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
                            }

                            if (tmp_args_element_value_113 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_81);

                                exception_lineno = 293;
                                type_description_2 = "o";
                                goto tuple_build_exception_126;
                            }
                            Py_INCREF(tmp_args_element_value_113);
                        } else {
                            goto tuple_build_exception_126;
                        }
                    }

                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 293;
                    tmp_tuple_element_158 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_113);
                    Py_DECREF(tmp_called_value_81);
                    Py_DECREF(tmp_args_element_value_113);
                    if (tmp_tuple_element_158 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 293;
                        type_description_2 = "o";
                        goto tuple_build_exception_126;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_158);
                }
                goto tuple_build_noexception_126;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_126:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_126:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_11);
                tmp_tuple_element_159 = mod_consts[173];
                tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_82;
                    PyObject *tmp_expression_value_153;
                    PyObject *tmp_args_element_value_114;
                    PyObject *tmp_args_element_value_115;
                    PyObject *tmp_called_value_83;
                    PyObject *tmp_expression_value_154;
                    PyObject *tmp_args_element_value_116;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_159);
                    tmp_expression_value_153 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_expression_value_153 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_153 == NULL)) {
                                tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_153 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 295;
                                type_description_2 = "o";
                                goto tuple_build_exception_127;
                            }
                            Py_INCREF(tmp_expression_value_153);
                        } else {
                            goto tuple_build_exception_127;
                        }
                    }

                    tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_153);
                    if (tmp_called_value_82 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto tuple_build_exception_127;
                    }
                    tmp_args_element_value_114 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[116]);

                    if (tmp_args_element_value_114 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[116]);

                            if (unlikely(tmp_args_element_value_114 == NULL)) {
                                tmp_args_element_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
                            }

                            if (tmp_args_element_value_114 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_82);

                                exception_lineno = 295;
                                type_description_2 = "o";
                                goto tuple_build_exception_127;
                            }
                            Py_INCREF(tmp_args_element_value_114);
                        } else {
                            goto tuple_build_exception_127;
                        }
                    }

                    tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_154 == NULL)) {
                        tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    assert(!(tmp_expression_value_154 == NULL));
                    tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[30]);
                    if (tmp_called_value_83 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_82);
                        Py_DECREF(tmp_args_element_value_114);

                        exception_lineno = 296;
                        type_description_2 = "o";
                        goto tuple_build_exception_127;
                    }
                    tmp_args_element_value_116 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[116]);

                    if (tmp_args_element_value_116 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[116]);

                            if (unlikely(tmp_args_element_value_116 == NULL)) {
                                tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
                            }

                            if (tmp_args_element_value_116 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_82);
                                Py_DECREF(tmp_args_element_value_114);
                                Py_DECREF(tmp_called_value_83);

                                exception_lineno = 296;
                                type_description_2 = "o";
                                goto tuple_build_exception_127;
                            }
                            Py_INCREF(tmp_args_element_value_116);
                        } else {
                            goto tuple_build_exception_127;
                        }
                    }

                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 296;
                    tmp_args_element_value_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_116);
                    Py_DECREF(tmp_called_value_83);
                    Py_DECREF(tmp_args_element_value_116);
                    if (tmp_args_element_value_115 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_82);
                        Py_DECREF(tmp_args_element_value_114);

                        exception_lineno = 296;
                        type_description_2 = "o";
                        goto tuple_build_exception_127;
                    }
                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 295;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115};
                        tmp_tuple_element_159 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_82, call_args);
                    }

                    Py_DECREF(tmp_called_value_82);
                    Py_DECREF(tmp_args_element_value_114);
                    Py_DECREF(tmp_args_element_value_115);
                    if (tmp_tuple_element_159 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto tuple_build_exception_127;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_159);
                }
                goto tuple_build_noexception_127;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_127:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_127:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_11);
                tmp_tuple_element_160 = mod_consts[174];
                tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_84;
                    PyObject *tmp_expression_value_155;
                    PyObject *tmp_args_element_value_117;
                    PyObject *tmp_args_element_value_118;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_160);
                    tmp_expression_value_155 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_expression_value_155 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_155 == NULL)) {
                                tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_155 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 298;
                                type_description_2 = "o";
                                goto tuple_build_exception_128;
                            }
                            Py_INCREF(tmp_expression_value_155);
                        } else {
                            goto tuple_build_exception_128;
                        }
                    }

                    tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_155);
                    if (tmp_called_value_84 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 298;
                        type_description_2 = "o";
                        goto tuple_build_exception_128;
                    }
                    tmp_args_element_value_117 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[37]);

                    if (tmp_args_element_value_117 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[37]);

                            if (unlikely(tmp_args_element_value_117 == NULL)) {
                                tmp_args_element_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
                            }

                            if (tmp_args_element_value_117 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_84);

                                exception_lineno = 298;
                                type_description_2 = "o";
                                goto tuple_build_exception_128;
                            }
                            Py_INCREF(tmp_args_element_value_117);
                        } else {
                            goto tuple_build_exception_128;
                        }
                    }

                    tmp_args_element_value_118 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[29]);

                    if (tmp_args_element_value_118 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_118 == NULL)) {
                                tmp_args_element_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_118 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_84);
                                Py_DECREF(tmp_args_element_value_117);

                                exception_lineno = 298;
                                type_description_2 = "o";
                                goto tuple_build_exception_128;
                            }
                            Py_INCREF(tmp_args_element_value_118);
                        } else {
                            goto tuple_build_exception_128;
                        }
                    }

                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 298;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
                        tmp_tuple_element_160 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_84, call_args);
                    }

                    Py_DECREF(tmp_called_value_84);
                    Py_DECREF(tmp_args_element_value_117);
                    Py_DECREF(tmp_args_element_value_118);
                    if (tmp_tuple_element_160 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 298;
                        type_description_2 = "o";
                        goto tuple_build_exception_128;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_160);
                }
                goto tuple_build_noexception_128;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_128:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_128:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_11);
                tmp_tuple_element_161 = mod_consts[175];
                tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_9;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_161);
                    tmp_called_instance_9 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_called_instance_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_called_instance_9 == NULL)) {
                                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_called_instance_9 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 300;
                                type_description_2 = "o";
                                goto tuple_build_exception_129;
                            }
                            Py_INCREF(tmp_called_instance_9);
                        } else {
                            goto tuple_build_exception_129;
                        }
                    }

                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 300;
                    tmp_tuple_element_161 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[118]);
                    Py_DECREF(tmp_called_instance_9);
                    if (tmp_tuple_element_161 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 300;
                        type_description_2 = "o";
                        goto tuple_build_exception_129;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_161);
                }
                goto tuple_build_noexception_129;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_129:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_129:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_11);
                tmp_tuple_element_162 = mod_consts[176];
                tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_85;
                    PyObject *tmp_expression_value_156;
                    PyObject *tmp_args_element_value_119;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_162);
                    tmp_expression_value_156 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_expression_value_156 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_156 == NULL)) {
                                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_156 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 302;
                                type_description_2 = "o";
                                goto tuple_build_exception_130;
                            }
                            Py_INCREF(tmp_expression_value_156);
                        } else {
                            goto tuple_build_exception_130;
                        }
                    }

                    tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_156);
                    if (tmp_called_value_85 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_2 = "o";
                        goto tuple_build_exception_130;
                    }
                    tmp_args_element_value_119 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[31]);

                    if (tmp_args_element_value_119 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_119 == NULL)) {
                                tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_119 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_85);

                                exception_lineno = 302;
                                type_description_2 = "o";
                                goto tuple_build_exception_130;
                            }
                            Py_INCREF(tmp_args_element_value_119);
                        } else {
                            goto tuple_build_exception_130;
                        }
                    }

                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 302;
                    tmp_tuple_element_162 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_119);
                    Py_DECREF(tmp_called_value_85);
                    Py_DECREF(tmp_args_element_value_119);
                    if (tmp_tuple_element_162 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_2 = "o";
                        goto tuple_build_exception_130;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_162);
                }
                goto tuple_build_noexception_130;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_130:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_130:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_11);
                tmp_tuple_element_163 = mod_consts[177];
                tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_86;
                    PyObject *tmp_expression_value_157;
                    PyObject *tmp_args_element_value_120;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_163);
                    tmp_expression_value_157 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_expression_value_157 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_157 == NULL)) {
                                tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_157 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 304;
                                type_description_2 = "o";
                                goto tuple_build_exception_131;
                            }
                            Py_INCREF(tmp_expression_value_157);
                        } else {
                            goto tuple_build_exception_131;
                        }
                    }

                    tmp_called_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_157);
                    if (tmp_called_value_86 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_2 = "o";
                        goto tuple_build_exception_131;
                    }
                    tmp_args_element_value_120 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[29]);

                    if (tmp_args_element_value_120 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_120 == NULL)) {
                                tmp_args_element_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_120 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_86);

                                exception_lineno = 304;
                                type_description_2 = "o";
                                goto tuple_build_exception_131;
                            }
                            Py_INCREF(tmp_args_element_value_120);
                        } else {
                            goto tuple_build_exception_131;
                        }
                    }

                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 304;
                    tmp_tuple_element_163 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_120);
                    Py_DECREF(tmp_called_value_86);
                    Py_DECREF(tmp_args_element_value_120);
                    if (tmp_tuple_element_163 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_2 = "o";
                        goto tuple_build_exception_131;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_163);
                }
                goto tuple_build_noexception_131;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_131:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_131:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_11);
                tmp_tuple_element_164 = mod_consts[125];
                tmp_list_element_11 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_87;
                    PyObject *tmp_expression_value_158;
                    PyObject *tmp_args_element_value_121;
                    PyObject *tmp_expression_value_159;
                    PyTuple_SET_ITEM0(tmp_list_element_11, 0, tmp_tuple_element_164);
                    tmp_expression_value_158 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_expression_value_158 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_158 == NULL)) {
                                tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_158 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 306;
                                type_description_2 = "o";
                                goto tuple_build_exception_132;
                            }
                            Py_INCREF(tmp_expression_value_158);
                        } else {
                            goto tuple_build_exception_132;
                        }
                    }

                    tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[118]);
                    Py_DECREF(tmp_expression_value_158);
                    if (tmp_called_value_87 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 306;
                        type_description_2 = "o";
                        goto tuple_build_exception_132;
                    }
                    tmp_expression_value_159 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

                    if (tmp_expression_value_159 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_159 == NULL)) {
                                tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_159 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_87);

                                exception_lineno = 306;
                                type_description_2 = "o";
                                goto tuple_build_exception_132;
                            }
                            Py_INCREF(tmp_expression_value_159);
                        } else {
                            goto tuple_build_exception_132;
                        }
                    }

                    tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[178]);
                    Py_DECREF(tmp_expression_value_159);
                    if (tmp_args_element_value_121 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_87);

                        exception_lineno = 306;
                        type_description_2 = "o";
                        goto tuple_build_exception_132;
                    }
                    frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame.f_lineno = 306;
                    tmp_tuple_element_164 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_121);
                    Py_DECREF(tmp_called_value_87);
                    Py_DECREF(tmp_args_element_value_121);
                    if (tmp_tuple_element_164 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 306;
                        type_description_2 = "o";
                        goto tuple_build_exception_132;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_11, 1, tmp_tuple_element_164);
                }
                goto tuple_build_noexception_132;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_132:;
                Py_DECREF(tmp_list_element_11);
                goto list_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_132:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_11);
            }
            goto list_build_noexception_11;
            // Exception handling pass through code for list_build:
            list_build_exception_11:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_12;
            // Finished with no exception for list_build:
            list_build_noexception_11:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_expression_value_160;
            tmp_expression_value_160 = PyObject_GetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[24]);

            if (tmp_expression_value_160 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

                    if (unlikely(tmp_expression_value_160 == NULL)) {
                        tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                    }

                    if (tmp_expression_value_160 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 308;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_expression_value_160);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[179]);
            Py_DECREF(tmp_expression_value_160);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0f53aff36cb3a8e9331d6b6973842ecb_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0f53aff36cb3a8e9331d6b6973842ecb_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0f53aff36cb3a8e9331d6b6973842ecb_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0f53aff36cb3a8e9331d6b6973842ecb_12,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_0f53aff36cb3a8e9331d6b6973842ecb_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_33;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto try_except_handler_33;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286, mod_consts[57], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_33;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_called_value_88;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_165;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_88 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_165 = mod_consts[171];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_165);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_165 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_165);
            tmp_tuple_element_165 = locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_165);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 286;
            tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_88, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_113;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_112 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_112);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286);
        locals_pyglet$media$drivers$directsound$lib_dsound$$$class__11_IDirectSound_286 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 286;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_112);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_161;
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[181]);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_12;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_list_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[178]);
        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_89;
            PyObject *tmp_expression_value_163;
            PyObject *tmp_args_element_value_122;
            PyObject *tmp_expression_value_164;
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_12);
            tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_163 == NULL)) {
                tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            assert(!(tmp_expression_value_163 == NULL));
            tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[30]);
            if (tmp_called_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_12;
            }
            tmp_args_element_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[171]);

            if (unlikely(tmp_args_element_value_122 == NULL)) {
                tmp_args_element_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
            }

            if (tmp_args_element_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_89);

                exception_lineno = 312;

                goto list_build_exception_12;
            }
            frame_b54010c5b44c6727e305c84725ef8fde->m_frame.f_lineno = 312;
            tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_122);
            Py_DECREF(tmp_called_value_89);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_12);
            tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_value_164 == NULL)) {
                tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            assert(!(tmp_expression_value_164 == NULL));
            tmp_list_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[38]);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 2, tmp_list_element_12);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[181]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[182], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_12;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b54010c5b44c6727e305c84725ef8fde, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b54010c5b44c6727e305c84725ef8fde->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b54010c5b44c6727e305c84725ef8fde, exception_lineno);
    }



    assertFrameObject(frame_b54010c5b44c6727e305c84725ef8fde);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_12:;
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[284];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[286];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[290];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[290];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[299];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[273]);

        if (unlikely(tmp_assign_source_201 == NULL)) {
            tmp_assign_source_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[273]);
        }

        assert(!(tmp_assign_source_201 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[308];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[312];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[314];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[316];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[326];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[328];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[330];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[332];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[334];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[336];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[338];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[340];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[342];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[344];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[346];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[348];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[350];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[352];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_229);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.media.drivers.directsound.lib_dsound", false);

    Py_INCREF(module_pyglet$media$drivers$directsound$lib_dsound);
    return module_pyglet$media$drivers$directsound$lib_dsound;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$directsound$lib_dsound, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$media$drivers$directsound$lib_dsound", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
