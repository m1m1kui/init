/* Generated code for Python module 'pyglet.media.devices.win32'
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

/* The "module_pyglet$media$devices$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$media$devices$win32;
PyDictObject *moduledict_pyglet$media$devices$win32;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[225];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[225];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.media.devices.win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 225; i++) {
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
void checkModuleConstants_pyglet$media$devices$win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 225; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2d33499d63ee036cd89250e3072b6f70;
static PyCodeObject *codeobj_7f29930b80c3d61de4fc0ff5b27c60b0;
static PyCodeObject *codeobj_4e7228e1ab62cb4bf880c7a9fc1a2269;
static PyCodeObject *codeobj_5713b55c8f50d2740bd43d8a0ad75ab7;
static PyCodeObject *codeobj_c1e17eb4f33dbc370247afc8e8e7936e;
static PyCodeObject *codeobj_61673a5b7f5d4cf38fd271cdfd6bb2b3;
static PyCodeObject *codeobj_b57135bce58a4e2eb7a0ce8b14f784f4;
static PyCodeObject *codeobj_aa2106e5aa5892f23140376136b5ec91;
static PyCodeObject *codeobj_95c4fc77b3124092d8854141ca3daac7;
static PyCodeObject *codeobj_aba3cf3b0f8c72f62bc3ed7f9e4181a2;
static PyCodeObject *codeobj_9537ab9bbb77ce7fe64baf21a303ca10;
static PyCodeObject *codeobj_1b820ea6a2dc866c0e0dd06099f40e2b;
static PyCodeObject *codeobj_627689cd16ee88116f8b8b44d70c262f;
static PyCodeObject *codeobj_5676362b4a92c7234952fe3ae2e934e8;
static PyCodeObject *codeobj_f5df5eb658d749f67329f67ebf14d5bd;
static PyCodeObject *codeobj_499cf095bb759aa05a28aa2a60034c95;
static PyCodeObject *codeobj_1c1efc0b6298f8e280a23d33bf234bf5;
static PyCodeObject *codeobj_b04c056ffe41f46393df6056c97d9cc6;
static PyCodeObject *codeobj_e15c5c9b69b733b4301538364e693986;
static PyCodeObject *codeobj_cee8b8bafcfdc2cc441d64dbdb20651a;
static PyCodeObject *codeobj_5b3b5e9b852bb50a7052cc8ed4eda3f2;
static PyCodeObject *codeobj_bdaf29c356dd3130202974c07657eaf8;
static PyCodeObject *codeobj_b2a74319142636bfa4a2ca59cb8d1bb3;
static PyCodeObject *codeobj_556ea50436b8707dfd3ee114e27b5069;
static PyCodeObject *codeobj_a314b0818df7bddccd9e3ad4a981cac0;
static PyCodeObject *codeobj_ddd612b96f75551426f23fcc0e6f08c8;
static PyCodeObject *codeobj_5cfa659f5792f3dae8a70daf963771aa;
static PyCodeObject *codeobj_d13f0b23e94cb6317bb233d6c484deab;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[208]); CHECK_OBJECT(module_filename_obj);
    codeobj_2d33499d63ee036cd89250e3072b6f70 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[209], mod_consts[209], NULL, NULL, 0, 0, 0);
    codeobj_7f29930b80c3d61de4fc0ff5b27c60b0 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[210], NULL, 0, 0, 0);
    codeobj_4e7228e1ab62cb4bf880c7a9fc1a2269 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[210], NULL, 0, 0, 0);
    codeobj_5713b55c8f50d2740bd43d8a0ad75ab7 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[210], NULL, 0, 0, 0);
    codeobj_c1e17eb4f33dbc370247afc8e8e7936e = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[210], NULL, 0, 0, 0);
    codeobj_61673a5b7f5d4cf38fd271cdfd6bb2b3 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[210], NULL, 0, 0, 0);
    codeobj_b57135bce58a4e2eb7a0ce8b14f784f4 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[210], NULL, 0, 0, 0);
    codeobj_aa2106e5aa5892f23140376136b5ec91 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[211], NULL, 5, 0, 0);
    codeobj_95c4fc77b3124092d8854141ca3daac7 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[212], NULL, 3, 0, 0);
    codeobj_aba3cf3b0f8c72f62bc3ed7f9e4181a2 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[212], NULL, 3, 0, 0);
    codeobj_9537ab9bbb77ce7fe64baf21a303ca10 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[213], NULL, 4, 0, 0);
    codeobj_1b820ea6a2dc866c0e0dd06099f40e2b = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[214], NULL, 4, 0, 0);
    codeobj_627689cd16ee88116f8b8b44d70c262f = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[210], NULL, 0, 0, 0);
    codeobj_5676362b4a92c7234952fe3ae2e934e8 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[210], NULL, 0, 0, 0);
    codeobj_f5df5eb658d749f67329f67ebf14d5bd = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[210], NULL, 0, 0, 0);
    codeobj_499cf095bb759aa05a28aa2a60034c95 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[4], mod_consts[215], mod_consts[210], 1, 0, 0);
    codeobj_1c1efc0b6298f8e280a23d33bf234bf5 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[4], mod_consts[216], mod_consts[210], 2, 0, 0);
    codeobj_b04c056ffe41f46393df6056c97d9cc6 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[217], NULL, 1, 0, 0);
    codeobj_e15c5c9b69b733b4301538364e693986 = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[217], NULL, 1, 0, 0);
    codeobj_cee8b8bafcfdc2cc441d64dbdb20651a = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[217], NULL, 1, 0, 0);
    codeobj_5b3b5e9b852bb50a7052cc8ed4eda3f2 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[218], NULL, 2, 0, 0);
    codeobj_bdaf29c356dd3130202974c07657eaf8 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[219], NULL, 1, 0, 0);
    codeobj_b2a74319142636bfa4a2ca59cb8d1bb3 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[219], NULL, 1, 0, 0);
    codeobj_556ea50436b8707dfd3ee114e27b5069 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[220], NULL, 2, 0, 0);
    codeobj_a314b0818df7bddccd9e3ad4a981cac0 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[221], NULL, 3, 0, 0);
    codeobj_ddd612b96f75551426f23fcc0e6f08c8 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[222], NULL, 2, 0, 0);
    codeobj_5cfa659f5792f3dae8a70daf963771aa = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[222], NULL, 2, 0, 0);
    codeobj_d13f0b23e94cb6317bb233d6c484deab = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[223], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__10_get_default_input();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__11_get_cached_device();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__12_get_output_devices(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__13_get_input_devices(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__14_get_all_devices();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__15__query_all_devices();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__16_get_device_info();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__17_get_devices(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__18_get_pkey_value();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__1___repr__();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__2___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__3_OnDeviceStateChanged();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__4_OnDeviceAdded();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__5_OnDeviceRemoved();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__6_OnDefaultDeviceChanged();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__7_OnPropertyValueChanged();


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__8___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__9_get_default_output();


// The module function definitions.
static PyObject *impl_pyglet$media$devices$win32$$$function__1___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b04c056ffe41f46393df6056c97d9cc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b04c056ffe41f46393df6056c97d9cc6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b04c056ffe41f46393df6056c97d9cc6)) {
        Py_XDECREF(cache_frame_b04c056ffe41f46393df6056c97d9cc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b04c056ffe41f46393df6056c97d9cc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b04c056ffe41f46393df6056c97d9cc6 = MAKE_FUNCTION_FRAME(tstate, codeobj_b04c056ffe41f46393df6056c97d9cc6, module_pyglet$media$devices$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b04c056ffe41f46393df6056c97d9cc6->m_type_description == NULL);
    frame_b04c056ffe41f46393df6056c97d9cc6 = cache_frame_b04c056ffe41f46393df6056c97d9cc6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b04c056ffe41f46393df6056c97d9cc6);
    assert(Py_REFCNT(frame_b04c056ffe41f46393df6056c97d9cc6) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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

            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b04c056ffe41f46393df6056c97d9cc6->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_b04c056ffe41f46393df6056c97d9cc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b04c056ffe41f46393df6056c97d9cc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b04c056ffe41f46393df6056c97d9cc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b04c056ffe41f46393df6056c97d9cc6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b04c056ffe41f46393df6056c97d9cc6 == cache_frame_b04c056ffe41f46393df6056c97d9cc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b04c056ffe41f46393df6056c97d9cc6);
        cache_frame_b04c056ffe41f46393df6056c97d9cc6 = NULL;
    }

    assertFrameObject(frame_b04c056ffe41f46393df6056c97d9cc6);

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


static PyObject *impl_pyglet$media$devices$win32$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_audio_devices = python_pars[1];
    struct Nuitka_FrameObject *frame_1c1efc0b6298f8e280a23d33bf234bf5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1c1efc0b6298f8e280a23d33bf234bf5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c1efc0b6298f8e280a23d33bf234bf5)) {
        Py_XDECREF(cache_frame_1c1efc0b6298f8e280a23d33bf234bf5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c1efc0b6298f8e280a23d33bf234bf5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c1efc0b6298f8e280a23d33bf234bf5 = MAKE_FUNCTION_FRAME(tstate, codeobj_1c1efc0b6298f8e280a23d33bf234bf5, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c1efc0b6298f8e280a23d33bf234bf5->m_type_description == NULL);
    frame_1c1efc0b6298f8e280a23d33bf234bf5 = cache_frame_1c1efc0b6298f8e280a23d33bf234bf5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1c1efc0b6298f8e280a23d33bf234bf5);
    assert(Py_REFCNT(frame_1c1efc0b6298f8e280a23d33bf234bf5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 100;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pyglet$media$devices$win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_1c1efc0b6298f8e280a23d33bf234bf5->m_frame.f_lineno = 100;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_audio_devices);
        tmp_assattr_value_1 = par_audio_devices;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c1efc0b6298f8e280a23d33bf234bf5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c1efc0b6298f8e280a23d33bf234bf5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c1efc0b6298f8e280a23d33bf234bf5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c1efc0b6298f8e280a23d33bf234bf5,
        type_description_1,
        par_self,
        par_audio_devices,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1c1efc0b6298f8e280a23d33bf234bf5 == cache_frame_1c1efc0b6298f8e280a23d33bf234bf5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c1efc0b6298f8e280a23d33bf234bf5);
        cache_frame_1c1efc0b6298f8e280a23d33bf234bf5 = NULL;
    }

    assertFrameObject(frame_1c1efc0b6298f8e280a23d33bf234bf5);

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
    CHECK_OBJECT(par_audio_devices);
    Py_DECREF(par_audio_devices);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_audio_devices);
    Py_DECREF(par_audio_devices);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__3_OnDeviceStateChanged(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_this = python_pars[1];
    PyObject *par_pwstrDeviceId = python_pars[2];
    PyObject *par_dwNewState = python_pars[3];
    PyObject *var_device = NULL;
    PyObject *var_old_state = NULL;
    struct Nuitka_FrameObject *frame_9537ab9bbb77ce7fe64baf21a303ca10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9537ab9bbb77ce7fe64baf21a303ca10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9537ab9bbb77ce7fe64baf21a303ca10)) {
        Py_XDECREF(cache_frame_9537ab9bbb77ce7fe64baf21a303ca10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9537ab9bbb77ce7fe64baf21a303ca10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9537ab9bbb77ce7fe64baf21a303ca10 = MAKE_FUNCTION_FRAME(tstate, codeobj_9537ab9bbb77ce7fe64baf21a303ca10, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9537ab9bbb77ce7fe64baf21a303ca10->m_type_description == NULL);
    frame_9537ab9bbb77ce7fe64baf21a303ca10 = cache_frame_9537ab9bbb77ce7fe64baf21a303ca10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9537ab9bbb77ce7fe64baf21a303ca10);
    assert(Py_REFCNT(frame_9537ab9bbb77ce7fe64baf21a303ca10) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pwstrDeviceId);
        tmp_args_element_value_1 = par_pwstrDeviceId;
        frame_9537ab9bbb77ce7fe64baf21a303ca10->m_frame.f_lineno = 105;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[7], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_device);
        tmp_expression_value_2 = var_device;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_old_state == NULL);
        var_old_state = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[10];
        CHECK_OBJECT(var_device);
        tmp_expression_value_3 = var_device;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_old_state);
        tmp_kw_call_arg_value_2_1 = var_old_state;
        CHECK_OBJECT(par_dwNewState);
        tmp_kw_call_arg_value_3_1 = par_dwNewState;
        frame_9537ab9bbb77ce7fe64baf21a303ca10->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9537ab9bbb77ce7fe64baf21a303ca10->m_frame.f_lineno = 108;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 108;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_dwNewState);
        tmp_assattr_value_1 = par_dwNewState;
        CHECK_OBJECT(var_device);
        tmp_assattr_target_1 = var_device;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[5]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[13];
        CHECK_OBJECT(var_device);
        tmp_args_element_value_4 = var_device;
        CHECK_OBJECT(var_old_state);
        tmp_args_element_value_5 = var_old_state;
        CHECK_OBJECT(par_dwNewState);
        tmp_args_element_value_6 = par_dwNewState;
        frame_9537ab9bbb77ce7fe64baf21a303ca10->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS4(
                tstate,
                tmp_called_instance_2,
                mod_consts[12],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
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
        exception_tb = MAKE_TRACEBACK(frame_9537ab9bbb77ce7fe64baf21a303ca10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9537ab9bbb77ce7fe64baf21a303ca10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9537ab9bbb77ce7fe64baf21a303ca10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9537ab9bbb77ce7fe64baf21a303ca10,
        type_description_1,
        par_self,
        par_this,
        par_pwstrDeviceId,
        par_dwNewState,
        var_device,
        var_old_state
    );


    // Release cached frame if used for exception.
    if (frame_9537ab9bbb77ce7fe64baf21a303ca10 == cache_frame_9537ab9bbb77ce7fe64baf21a303ca10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9537ab9bbb77ce7fe64baf21a303ca10);
        cache_frame_9537ab9bbb77ce7fe64baf21a303ca10 = NULL;
    }

    assertFrameObject(frame_9537ab9bbb77ce7fe64baf21a303ca10);

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
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
    CHECK_OBJECT(var_old_state);
    Py_DECREF(var_old_state);
    var_old_state = NULL;
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

    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_old_state);
    var_old_state = NULL;
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
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);
    CHECK_OBJECT(par_dwNewState);
    Py_DECREF(par_dwNewState);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);
    CHECK_OBJECT(par_dwNewState);
    Py_DECREF(par_dwNewState);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__4_OnDeviceAdded(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_this = python_pars[1];
    PyObject *par_pwstrDeviceId = python_pars[2];
    struct Nuitka_FrameObject *frame_95c4fc77b3124092d8854141ca3daac7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_95c4fc77b3124092d8854141ca3daac7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_95c4fc77b3124092d8854141ca3daac7)) {
        Py_XDECREF(cache_frame_95c4fc77b3124092d8854141ca3daac7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95c4fc77b3124092d8854141ca3daac7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95c4fc77b3124092d8854141ca3daac7 = MAKE_FUNCTION_FRAME(tstate, codeobj_95c4fc77b3124092d8854141ca3daac7, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_95c4fc77b3124092d8854141ca3daac7->m_type_description == NULL);
    frame_95c4fc77b3124092d8854141ca3daac7 = cache_frame_95c4fc77b3124092d8854141ca3daac7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_95c4fc77b3124092d8854141ca3daac7);
    assert(Py_REFCNT(frame_95c4fc77b3124092d8854141ca3daac7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[14];
        CHECK_OBJECT(par_pwstrDeviceId);
        tmp_kw_call_arg_value_1_1 = par_pwstrDeviceId;
        frame_95c4fc77b3124092d8854141ca3daac7->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_95c4fc77b3124092d8854141ca3daac7->m_frame.f_lineno = 115;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 115;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[15];
        CHECK_OBJECT(par_pwstrDeviceId);
        tmp_args_element_value_3 = par_pwstrDeviceId;
        frame_95c4fc77b3124092d8854141ca3daac7->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[12],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95c4fc77b3124092d8854141ca3daac7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95c4fc77b3124092d8854141ca3daac7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95c4fc77b3124092d8854141ca3daac7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95c4fc77b3124092d8854141ca3daac7,
        type_description_1,
        par_self,
        par_this,
        par_pwstrDeviceId
    );


    // Release cached frame if used for exception.
    if (frame_95c4fc77b3124092d8854141ca3daac7 == cache_frame_95c4fc77b3124092d8854141ca3daac7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_95c4fc77b3124092d8854141ca3daac7);
        cache_frame_95c4fc77b3124092d8854141ca3daac7 = NULL;
    }

    assertFrameObject(frame_95c4fc77b3124092d8854141ca3daac7);

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
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__5_OnDeviceRemoved(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_this = python_pars[1];
    PyObject *par_pwstrDeviceId = python_pars[2];
    struct Nuitka_FrameObject *frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2)) {
        Py_XDECREF(cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2 = MAKE_FUNCTION_FRAME(tstate, codeobj_aba3cf3b0f8c72f62bc3ed7f9e4181a2, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2->m_type_description == NULL);
    frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2 = cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2);
    assert(Py_REFCNT(frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[16];
        CHECK_OBJECT(par_pwstrDeviceId);
        tmp_kw_call_arg_value_1_1 = par_pwstrDeviceId;
        frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2->m_frame.f_lineno = 119;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 119;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[17];
        CHECK_OBJECT(par_pwstrDeviceId);
        tmp_args_element_value_3 = par_pwstrDeviceId;
        frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[12],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2,
        type_description_1,
        par_self,
        par_this,
        par_pwstrDeviceId
    );


    // Release cached frame if used for exception.
    if (frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2 == cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2);
        cache_frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2 = NULL;
    }

    assertFrameObject(frame_aba3cf3b0f8c72f62bc3ed7f9e4181a2);

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
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__6_OnDefaultDeviceChanged(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_this = python_pars[1];
    PyObject *par_flow = python_pars[2];
    PyObject *par_role = python_pars[3];
    PyObject *par_pwstrDeviceId = python_pars[4];
    PyObject *var_device = NULL;
    struct Nuitka_FrameObject *frame_aa2106e5aa5892f23140376136b5ec91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_aa2106e5aa5892f23140376136b5ec91 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa2106e5aa5892f23140376136b5ec91)) {
        Py_XDECREF(cache_frame_aa2106e5aa5892f23140376136b5ec91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa2106e5aa5892f23140376136b5ec91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa2106e5aa5892f23140376136b5ec91 = MAKE_FUNCTION_FRAME(tstate, codeobj_aa2106e5aa5892f23140376136b5ec91, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa2106e5aa5892f23140376136b5ec91->m_type_description == NULL);
    frame_aa2106e5aa5892f23140376136b5ec91 = cache_frame_aa2106e5aa5892f23140376136b5ec91;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa2106e5aa5892f23140376136b5ec91);
    assert(Py_REFCNT(frame_aa2106e5aa5892f23140376136b5ec91) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_role);
        tmp_cmp_expr_left_1 = par_role;
        tmp_cmp_expr_right_1 = mod_consts[18];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_pwstrDeviceId);
        tmp_cmp_expr_left_2 = par_pwstrDeviceId;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_device == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_device = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pwstrDeviceId);
        tmp_args_element_value_1 = par_pwstrDeviceId;
        frame_aa2106e5aa5892f23140376136b5ec91->m_frame.f_lineno = 128;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[7], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_2;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[20];
        CHECK_OBJECT(var_device);
        tmp_args_element_value_3 = var_device;
        frame_aa2106e5aa5892f23140376136b5ec91->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[12],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa2106e5aa5892f23140376136b5ec91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa2106e5aa5892f23140376136b5ec91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa2106e5aa5892f23140376136b5ec91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa2106e5aa5892f23140376136b5ec91,
        type_description_1,
        par_self,
        par_this,
        par_flow,
        par_role,
        par_pwstrDeviceId,
        var_device
    );


    // Release cached frame if used for exception.
    if (frame_aa2106e5aa5892f23140376136b5ec91 == cache_frame_aa2106e5aa5892f23140376136b5ec91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa2106e5aa5892f23140376136b5ec91);
        cache_frame_aa2106e5aa5892f23140376136b5ec91 = NULL;
    }

    assertFrameObject(frame_aa2106e5aa5892f23140376136b5ec91);

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
    Py_XDECREF(var_device);
    var_device = NULL;
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

    Py_XDECREF(var_device);
    var_device = NULL;
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
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_flow);
    Py_DECREF(par_flow);
    CHECK_OBJECT(par_role);
    Py_DECREF(par_role);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_flow);
    Py_DECREF(par_flow);
    CHECK_OBJECT(par_role);
    Py_DECREF(par_role);
    CHECK_OBJECT(par_pwstrDeviceId);
    Py_DECREF(par_pwstrDeviceId);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_499cf095bb759aa05a28aa2a60034c95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_499cf095bb759aa05a28aa2a60034c95 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_499cf095bb759aa05a28aa2a60034c95)) {
        Py_XDECREF(cache_frame_499cf095bb759aa05a28aa2a60034c95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_499cf095bb759aa05a28aa2a60034c95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_499cf095bb759aa05a28aa2a60034c95 = MAKE_FUNCTION_FRAME(tstate, codeobj_499cf095bb759aa05a28aa2a60034c95, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_499cf095bb759aa05a28aa2a60034c95->m_type_description == NULL);
    frame_499cf095bb759aa05a28aa2a60034c95 = cache_frame_499cf095bb759aa05a28aa2a60034c95;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_499cf095bb759aa05a28aa2a60034c95);
    assert(Py_REFCNT(frame_499cf095bb759aa05a28aa2a60034c95) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_499cf095bb759aa05a28aa2a60034c95->m_frame.f_lineno = 190;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 191;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 192;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 192;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_499cf095bb759aa05a28aa2a60034c95->m_frame.f_lineno = 192;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 192;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_499cf095bb759aa05a28aa2a60034c95->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_499cf095bb759aa05a28aa2a60034c95->m_frame.f_lineno = 195;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[29]);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 197;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_pyglet$media$devices$win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_499cf095bb759aa05a28aa2a60034c95->m_frame.f_lineno = 197;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[4]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_7 = par_self;
        frame_499cf095bb759aa05a28aa2a60034c95->m_frame.f_lineno = 199;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[32], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[22]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[33]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[32]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 200;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_499cf095bb759aa05a28aa2a60034c95->m_frame.f_lineno = 200;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_499cf095bb759aa05a28aa2a60034c95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_499cf095bb759aa05a28aa2a60034c95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_499cf095bb759aa05a28aa2a60034c95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_499cf095bb759aa05a28aa2a60034c95,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_499cf095bb759aa05a28aa2a60034c95 == cache_frame_499cf095bb759aa05a28aa2a60034c95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_499cf095bb759aa05a28aa2a60034c95);
        cache_frame_499cf095bb759aa05a28aa2a60034c95 = NULL;
    }

    assertFrameObject(frame_499cf095bb759aa05a28aa2a60034c95);

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


static PyObject *impl_pyglet$media$devices$win32$$$function__9_get_default_output(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_device = NULL;
    PyObject *var_dev_id = NULL;
    PyObject *var_name = NULL;
    PyObject *var_desc = NULL;
    PyObject *var_dev_state = NULL;
    PyObject *var_pid = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b2a74319142636bfa4a2ca59cb8d1bb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3)) {
        Py_XDECREF(cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3 = MAKE_FUNCTION_FRAME(tstate, codeobj_b2a74319142636bfa4a2ca59cb8d1bb3, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_type_description == NULL);
    frame_b2a74319142636bfa4a2ca59cb8d1bb3 = cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b2a74319142636bfa4a2ca59cb8d1bb3);
    assert(Py_REFCNT(frame_b2a74319142636bfa4a2ca59cb8d1bb3) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = 205;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_device);
        tmp_args_element_value_4 = var_device;
        frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = 206;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_device);
        tmp_args_element_value_5 = var_device;
        frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = 207;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
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
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 207;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 207;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 207;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 207;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 207;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[39];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 207;
            goto try_except_handler_4;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_dev_id == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_dev_id = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_name == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_name = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_desc == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_desc = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        assert(var_dev_state == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_dev_state = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_device);
        tmp_called_instance_2 = var_device;
        frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = 208;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[40]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_dev_id);
        tmp_args_element_value_6 = var_dev_id;
        frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = 210;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[7], tmp_args_element_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_pid == NULL);
        var_pid = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_dev_state);
        tmp_assattr_value_1 = var_dev_state;
        CHECK_OBJECT(var_pid);
        tmp_assattr_target_1 = var_pid;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_b2a74319142636bfa4a2ca59cb8d1bb3, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_b2a74319142636bfa4a2ca59cb8d1bb3, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
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
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = 214;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[42]);

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 214;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    branch_no_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 204;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame) frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2a74319142636bfa4a2ca59cb8d1bb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2a74319142636bfa4a2ca59cb8d1bb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2a74319142636bfa4a2ca59cb8d1bb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2a74319142636bfa4a2ca59cb8d1bb3,
        type_description_1,
        par_self,
        var_device,
        var_dev_id,
        var_name,
        var_desc,
        var_dev_state,
        var_pid
    );


    // Release cached frame if used for exception.
    if (frame_b2a74319142636bfa4a2ca59cb8d1bb3 == cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3);
        cache_frame_b2a74319142636bfa4a2ca59cb8d1bb3 = NULL;
    }

    assertFrameObject(frame_b2a74319142636bfa4a2ca59cb8d1bb3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_pid);
    tmp_return_value = var_pid;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_dev_id);
    var_dev_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_dev_state);
    var_dev_state = NULL;
    Py_XDECREF(var_pid);
    var_pid = NULL;
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

    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_dev_id);
    var_dev_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_dev_state);
    var_dev_state = NULL;
    Py_XDECREF(var_pid);
    var_pid = NULL;
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


static PyObject *impl_pyglet$media$devices$win32$$$function__10_get_default_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_device = NULL;
    PyObject *var_dev_id = NULL;
    PyObject *var_name = NULL;
    PyObject *var_desc = NULL;
    PyObject *var_dev_state = NULL;
    PyObject *var_pid = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bdaf29c356dd3130202974c07657eaf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_bdaf29c356dd3130202974c07657eaf8 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bdaf29c356dd3130202974c07657eaf8)) {
        Py_XDECREF(cache_frame_bdaf29c356dd3130202974c07657eaf8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdaf29c356dd3130202974c07657eaf8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdaf29c356dd3130202974c07657eaf8 = MAKE_FUNCTION_FRAME(tstate, codeobj_bdaf29c356dd3130202974c07657eaf8, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bdaf29c356dd3130202974c07657eaf8->m_type_description == NULL);
    frame_bdaf29c356dd3130202974c07657eaf8 = cache_frame_bdaf29c356dd3130202974c07657eaf8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bdaf29c356dd3130202974c07657eaf8);
    assert(Py_REFCNT(frame_bdaf29c356dd3130202974c07657eaf8) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = 220;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_device);
        tmp_args_element_value_4 = var_device;
        frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = 221;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_device);
        tmp_args_element_value_5 = var_device;
        frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = 222;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
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
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 222;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 222;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 222;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 222;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 222;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[39];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 222;
            goto try_except_handler_4;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_dev_id == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_dev_id = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_name == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_name = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_desc == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_desc = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        assert(var_dev_state == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_dev_state = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_device);
        tmp_called_instance_2 = var_device;
        frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = 223;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[40]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_dev_id);
        tmp_args_element_value_6 = var_dev_id;
        frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = 225;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[7], tmp_args_element_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_pid == NULL);
        var_pid = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_dev_state);
        tmp_assattr_value_1 = var_dev_state;
        CHECK_OBJECT(var_pid);
        tmp_assattr_target_1 = var_pid;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_bdaf29c356dd3130202974c07657eaf8, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_bdaf29c356dd3130202974c07657eaf8, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
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
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = 229;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[45]);

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 229;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    branch_no_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 219;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bdaf29c356dd3130202974c07657eaf8->m_frame) frame_bdaf29c356dd3130202974c07657eaf8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdaf29c356dd3130202974c07657eaf8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdaf29c356dd3130202974c07657eaf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdaf29c356dd3130202974c07657eaf8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdaf29c356dd3130202974c07657eaf8,
        type_description_1,
        par_self,
        var_device,
        var_dev_id,
        var_name,
        var_desc,
        var_dev_state,
        var_pid
    );


    // Release cached frame if used for exception.
    if (frame_bdaf29c356dd3130202974c07657eaf8 == cache_frame_bdaf29c356dd3130202974c07657eaf8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bdaf29c356dd3130202974c07657eaf8);
        cache_frame_bdaf29c356dd3130202974c07657eaf8 = NULL;
    }

    assertFrameObject(frame_bdaf29c356dd3130202974c07657eaf8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_pid);
    tmp_return_value = var_pid;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_dev_id);
    var_dev_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_dev_state);
    var_dev_state = NULL;
    Py_XDECREF(var_pid);
    var_pid = NULL;
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

    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_dev_id);
    var_dev_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_dev_state);
    var_dev_state = NULL;
    Py_XDECREF(var_pid);
    var_pid = NULL;
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


static PyObject *impl_pyglet$media$devices$win32$$$function__11_get_cached_device(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dev_id = python_pars[1];
    PyObject *var_device = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5b3b5e9b852bb50a7052cc8ed4eda3f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2)) {
        Py_XDECREF(cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2 = MAKE_FUNCTION_FRAME(tstate, codeobj_5b3b5e9b852bb50a7052cc8ed4eda3f2, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2->m_type_description == NULL);
    frame_5b3b5e9b852bb50a7052cc8ed4eda3f2 = cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5b3b5e9b852bb50a7052cc8ed4eda3f2);
    assert(Py_REFCNT(frame_5b3b5e9b852bb50a7052cc8ed4eda3f2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 234;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_device;
            var_device = tmp_assign_source_3;
            Py_INCREF(var_device);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_device);
        tmp_expression_value_2 = var_device;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[47]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_dev_id);
        tmp_cmp_expr_right_1 = par_dev_id;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_device);
    tmp_return_value = var_device;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 234;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5b3b5e9b852bb50a7052cc8ed4eda3f2->m_frame.f_lineno = 238;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[49]);

        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 238;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_5b3b5e9b852bb50a7052cc8ed4eda3f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b3b5e9b852bb50a7052cc8ed4eda3f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b3b5e9b852bb50a7052cc8ed4eda3f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b3b5e9b852bb50a7052cc8ed4eda3f2,
        type_description_1,
        par_self,
        par_dev_id,
        var_device
    );


    // Release cached frame if used for exception.
    if (frame_5b3b5e9b852bb50a7052cc8ed4eda3f2 == cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2);
        cache_frame_5b3b5e9b852bb50a7052cc8ed4eda3f2 = NULL;
    }

    assertFrameObject(frame_5b3b5e9b852bb50a7052cc8ed4eda3f2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
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

    Py_XDECREF(var_device);
    var_device = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dev_id);
    Py_DECREF(par_dev_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dev_id);
    Py_DECREF(par_dev_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__12_get_output_devices(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state = python_pars[1];
    PyObject *outline_0_var_device = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5cfa659f5792f3dae8a70daf963771aa;
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
    static struct Nuitka_FrameObject *cache_frame_5cfa659f5792f3dae8a70daf963771aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5cfa659f5792f3dae8a70daf963771aa)) {
        Py_XDECREF(cache_frame_5cfa659f5792f3dae8a70daf963771aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cfa659f5792f3dae8a70daf963771aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cfa659f5792f3dae8a70daf963771aa = MAKE_FUNCTION_FRAME(tstate, codeobj_5cfa659f5792f3dae8a70daf963771aa, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5cfa659f5792f3dae8a70daf963771aa->m_type_description == NULL);
    frame_5cfa659f5792f3dae8a70daf963771aa = cache_frame_5cfa659f5792f3dae8a70daf963771aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5cfa659f5792f3dae8a70daf963771aa);
    assert(Py_REFCNT(frame_5cfa659f5792f3dae8a70daf963771aa) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
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
                type_description_1 = "oo";
                exception_lineno = 243;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_device;
            outline_0_var_device = tmp_assign_source_4;
            Py_INCREF(outline_0_var_device);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(outline_0_var_device);
        tmp_expression_value_2 = outline_0_var_device;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_state);
        tmp_cmp_expr_right_1 = par_state;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(outline_0_var_device);
        tmp_expression_value_3 = outline_0_var_device;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[51]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_device);
        tmp_append_value_1 = outline_0_var_device;
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 243;
        type_description_1 = "oo";
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
    Py_XDECREF(outline_0_var_device);
    outline_0_var_device = NULL;
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

    Py_XDECREF(outline_0_var_device);
    outline_0_var_device = NULL;
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
    exception_lineno = 243;
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
        exception_tb = MAKE_TRACEBACK(frame_5cfa659f5792f3dae8a70daf963771aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cfa659f5792f3dae8a70daf963771aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cfa659f5792f3dae8a70daf963771aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cfa659f5792f3dae8a70daf963771aa,
        type_description_1,
        par_self,
        par_state
    );


    // Release cached frame if used for exception.
    if (frame_5cfa659f5792f3dae8a70daf963771aa == cache_frame_5cfa659f5792f3dae8a70daf963771aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5cfa659f5792f3dae8a70daf963771aa);
        cache_frame_5cfa659f5792f3dae8a70daf963771aa = NULL;
    }

    assertFrameObject(frame_5cfa659f5792f3dae8a70daf963771aa);

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
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__13_get_input_devices(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state = python_pars[1];
    PyObject *outline_0_var_device = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_ddd612b96f75551426f23fcc0e6f08c8;
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
    static struct Nuitka_FrameObject *cache_frame_ddd612b96f75551426f23fcc0e6f08c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ddd612b96f75551426f23fcc0e6f08c8)) {
        Py_XDECREF(cache_frame_ddd612b96f75551426f23fcc0e6f08c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ddd612b96f75551426f23fcc0e6f08c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ddd612b96f75551426f23fcc0e6f08c8 = MAKE_FUNCTION_FRAME(tstate, codeobj_ddd612b96f75551426f23fcc0e6f08c8, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ddd612b96f75551426f23fcc0e6f08c8->m_type_description == NULL);
    frame_ddd612b96f75551426f23fcc0e6f08c8 = cache_frame_ddd612b96f75551426f23fcc0e6f08c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ddd612b96f75551426f23fcc0e6f08c8);
    assert(Py_REFCNT(frame_ddd612b96f75551426f23fcc0e6f08c8) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
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
                type_description_1 = "oo";
                exception_lineno = 246;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_device;
            outline_0_var_device = tmp_assign_source_4;
            Py_INCREF(outline_0_var_device);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(outline_0_var_device);
        tmp_expression_value_2 = outline_0_var_device;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_state);
        tmp_cmp_expr_right_1 = par_state;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(outline_0_var_device);
        tmp_expression_value_3 = outline_0_var_device;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[51]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_device);
        tmp_append_value_1 = outline_0_var_device;
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 246;
        type_description_1 = "oo";
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
    Py_XDECREF(outline_0_var_device);
    outline_0_var_device = NULL;
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

    Py_XDECREF(outline_0_var_device);
    outline_0_var_device = NULL;
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
    exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_ddd612b96f75551426f23fcc0e6f08c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ddd612b96f75551426f23fcc0e6f08c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ddd612b96f75551426f23fcc0e6f08c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ddd612b96f75551426f23fcc0e6f08c8,
        type_description_1,
        par_self,
        par_state
    );


    // Release cached frame if used for exception.
    if (frame_ddd612b96f75551426f23fcc0e6f08c8 == cache_frame_ddd612b96f75551426f23fcc0e6f08c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ddd612b96f75551426f23fcc0e6f08c8);
        cache_frame_ddd612b96f75551426f23fcc0e6f08c8 = NULL;
    }

    assertFrameObject(frame_ddd612b96f75551426f23fcc0e6f08c8);

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
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__14_get_all_devices(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cee8b8bafcfdc2cc441d64dbdb20651a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a)) {
        Py_XDECREF(cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a = MAKE_FUNCTION_FRAME(tstate, codeobj_cee8b8bafcfdc2cc441d64dbdb20651a, module_pyglet$media$devices$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a->m_type_description == NULL);
    frame_cee8b8bafcfdc2cc441d64dbdb20651a = cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cee8b8bafcfdc2cc441d64dbdb20651a);
    assert(Py_REFCNT(frame_cee8b8bafcfdc2cc441d64dbdb20651a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_cee8b8bafcfdc2cc441d64dbdb20651a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cee8b8bafcfdc2cc441d64dbdb20651a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cee8b8bafcfdc2cc441d64dbdb20651a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cee8b8bafcfdc2cc441d64dbdb20651a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cee8b8bafcfdc2cc441d64dbdb20651a == cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a);
        cache_frame_cee8b8bafcfdc2cc441d64dbdb20651a = NULL;
    }

    assertFrameObject(frame_cee8b8bafcfdc2cc441d64dbdb20651a);

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


static PyObject *impl_pyglet$media$devices$win32$$$function__15__query_all_devices(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e15c5c9b69b733b4301538364e693986;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e15c5c9b69b733b4301538364e693986 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e15c5c9b69b733b4301538364e693986)) {
        Py_XDECREF(cache_frame_e15c5c9b69b733b4301538364e693986);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e15c5c9b69b733b4301538364e693986 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e15c5c9b69b733b4301538364e693986 = MAKE_FUNCTION_FRAME(tstate, codeobj_e15c5c9b69b733b4301538364e693986, module_pyglet$media$devices$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e15c5c9b69b733b4301538364e693986->m_type_description == NULL);
    frame_e15c5c9b69b733b4301538364e693986 = cache_frame_e15c5c9b69b733b4301538364e693986;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e15c5c9b69b733b4301538364e693986);
    assert(Py_REFCNT(frame_e15c5c9b69b733b4301538364e693986) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e15c5c9b69b733b4301538364e693986->m_frame.f_lineno = 252;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_add_expr_left_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[52]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e15c5c9b69b733b4301538364e693986->m_frame.f_lineno = 252;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_add_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
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
        exception_tb = MAKE_TRACEBACK(frame_e15c5c9b69b733b4301538364e693986, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e15c5c9b69b733b4301538364e693986->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e15c5c9b69b733b4301538364e693986, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e15c5c9b69b733b4301538364e693986,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e15c5c9b69b733b4301538364e693986 == cache_frame_e15c5c9b69b733b4301538364e693986) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e15c5c9b69b733b4301538364e693986);
        cache_frame_e15c5c9b69b733b4301538364e693986 = NULL;
    }

    assertFrameObject(frame_e15c5c9b69b733b4301538364e693986);

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


static PyObject *impl_pyglet$media$devices$win32$$$function__16_get_device_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_device = python_pars[1];
    PyObject *var_store = NULL;
    PyObject *var_dev_id = NULL;
    PyObject *var_name = NULL;
    PyObject *var_description = NULL;
    PyObject *var_state = NULL;
    struct Nuitka_FrameObject *frame_556ea50436b8707dfd3ee114e27b5069;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_556ea50436b8707dfd3ee114e27b5069 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_556ea50436b8707dfd3ee114e27b5069)) {
        Py_XDECREF(cache_frame_556ea50436b8707dfd3ee114e27b5069);

#if _DEBUG_REFCOUNTS
        if (cache_frame_556ea50436b8707dfd3ee114e27b5069 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_556ea50436b8707dfd3ee114e27b5069 = MAKE_FUNCTION_FRAME(tstate, codeobj_556ea50436b8707dfd3ee114e27b5069, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_556ea50436b8707dfd3ee114e27b5069->m_type_description == NULL);
    frame_556ea50436b8707dfd3ee114e27b5069 = cache_frame_556ea50436b8707dfd3ee114e27b5069;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_556ea50436b8707dfd3ee114e27b5069);
    assert(Py_REFCNT(frame_556ea50436b8707dfd3ee114e27b5069) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 257;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_store == NULL);
        var_store = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_device);
        tmp_expression_value_1 = par_device;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[56]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_store);
        tmp_args_element_value_3 = var_store;
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 258;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 260;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dev_id == NULL);
        var_dev_id = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_device);
        tmp_expression_value_2 = par_device;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[59]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dev_id);
        tmp_args_element_value_5 = var_dev_id;
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 261;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 261;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[60]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_store);
        tmp_args_element_value_6 = var_store;
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[60]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_store);
        tmp_args_element_value_8 = var_store;
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_description == NULL);
        var_description = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 266;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state == NULL);
        var_state = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_device);
        tmp_expression_value_5 = par_device;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[64]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_state);
        tmp_args_element_value_11 = var_state;
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 267;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 267;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_store);
        tmp_called_instance_1 = var_store;
        frame_556ea50436b8707dfd3ee114e27b5069->m_frame.f_lineno = 269;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[40]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_dev_id);
        tmp_expression_value_6 = var_dev_id;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[65]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_name);
            tmp_tuple_element_1 = var_name;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_description);
            tmp_tuple_element_1 = var_description;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_state);
            tmp_expression_value_7 = var_state;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[65]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_556ea50436b8707dfd3ee114e27b5069, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_556ea50436b8707dfd3ee114e27b5069->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_556ea50436b8707dfd3ee114e27b5069, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_556ea50436b8707dfd3ee114e27b5069,
        type_description_1,
        par_self,
        par_device,
        var_store,
        var_dev_id,
        var_name,
        var_description,
        var_state
    );


    // Release cached frame if used for exception.
    if (frame_556ea50436b8707dfd3ee114e27b5069 == cache_frame_556ea50436b8707dfd3ee114e27b5069) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_556ea50436b8707dfd3ee114e27b5069);
        cache_frame_556ea50436b8707dfd3ee114e27b5069 = NULL;
    }

    assertFrameObject(frame_556ea50436b8707dfd3ee114e27b5069);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_store);
    Py_DECREF(var_store);
    var_store = NULL;
    CHECK_OBJECT(var_dev_id);
    Py_DECREF(var_dev_id);
    var_dev_id = NULL;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_description);
    Py_DECREF(var_description);
    var_description = NULL;
    CHECK_OBJECT(var_state);
    Py_DECREF(var_state);
    var_state = NULL;
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

    Py_XDECREF(var_store);
    var_store = NULL;
    Py_XDECREF(var_dev_id);
    var_dev_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_description);
    var_description = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
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
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__17_get_devices(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_flow = python_pars[1];
    PyObject *par_state = python_pars[2];
    PyObject *var_collection = NULL;
    PyObject *var_count = NULL;
    PyObject *var_devices = NULL;
    PyObject *var_i = NULL;
    PyObject *var_dev_itf = NULL;
    PyObject *var_dev_id = NULL;
    PyObject *var_name = NULL;
    PyObject *var_desc = NULL;
    PyObject *var_dev_state = NULL;
    PyObject *var_device = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a314b0818df7bddccd9e3ad4a981cac0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a314b0818df7bddccd9e3ad4a981cac0 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a314b0818df7bddccd9e3ad4a981cac0)) {
        Py_XDECREF(cache_frame_a314b0818df7bddccd9e3ad4a981cac0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a314b0818df7bddccd9e3ad4a981cac0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a314b0818df7bddccd9e3ad4a981cac0 = MAKE_FUNCTION_FRAME(tstate, codeobj_a314b0818df7bddccd9e3ad4a981cac0, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a314b0818df7bddccd9e3ad4a981cac0->m_type_description == NULL);
    frame_a314b0818df7bddccd9e3ad4a981cac0 = cache_frame_a314b0818df7bddccd9e3ad4a981cac0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a314b0818df7bddccd9e3ad4a981cac0);
    assert(Py_REFCNT(frame_a314b0818df7bddccd9e3ad4a981cac0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 275;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_collection == NULL);
        var_collection = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_flow);
        tmp_args_element_value_1 = par_flow;
        CHECK_OBJECT(par_state);
        tmp_args_element_value_2 = par_state;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_collection);
        tmp_args_element_value_4 = var_collection;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 276;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 278;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_count == NULL);
        var_count = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_collection);
        tmp_expression_value_3 = var_collection;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[70]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_count);
        tmp_args_element_value_6 = var_count;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 279;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 279;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_devices == NULL);
        var_devices = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_4;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_count);
        tmp_expression_value_4 = var_count;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[65]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 282;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
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
                type_description_1 = "ooooooooooooo";
                exception_lineno = 282;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 283;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dev_itf;
            var_dev_itf = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        if (var_collection == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_collection;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[73]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_args_element_value_8 = var_i;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_dev_itf);
        tmp_args_element_value_10 = var_dev_itf;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 284;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_dev_itf);
        tmp_args_element_value_11 = var_dev_itf;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 286;
        tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_11);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 286;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 4);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 286;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 4);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 286;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 4);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 286;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 286;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[39];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 286;
            goto try_except_handler_4;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_dev_id;
            var_dev_id = tmp_assign_source_13;
            Py_INCREF(var_dev_id);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_14;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_desc;
            var_desc = tmp_assign_source_15;
            Py_INCREF(var_desc);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_dev_state;
            var_dev_state = tmp_assign_source_16;
            Py_INCREF(var_dev_state);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_dev_id);
        tmp_args_element_value_12 = var_dev_id;
        CHECK_OBJECT(var_name);
        tmp_args_element_value_13 = var_name;
        CHECK_OBJECT(var_desc);
        tmp_args_element_value_14 = var_desc;
        if (par_flow == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 287;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_15 = par_flow;
        CHECK_OBJECT(var_dev_state);
        tmp_args_element_value_16 = var_dev_state;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_device;
            var_device = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_dev_itf);
        tmp_called_instance_2 = var_dev_itf;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 288;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[40]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_17;
        if (var_devices == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_devices;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[75]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_device);
        tmp_args_element_value_17 = var_device;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 289;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 282;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_6;
        if (var_collection == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_collection;
        frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame.f_lineno = 291;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[40]);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (var_devices == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 293;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_devices;
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
        exception_tb = MAKE_TRACEBACK(frame_a314b0818df7bddccd9e3ad4a981cac0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a314b0818df7bddccd9e3ad4a981cac0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a314b0818df7bddccd9e3ad4a981cac0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a314b0818df7bddccd9e3ad4a981cac0,
        type_description_1,
        par_self,
        par_flow,
        par_state,
        var_collection,
        var_count,
        var_devices,
        var_i,
        var_dev_itf,
        var_dev_id,
        var_name,
        var_desc,
        var_dev_state,
        var_device
    );


    // Release cached frame if used for exception.
    if (frame_a314b0818df7bddccd9e3ad4a981cac0 == cache_frame_a314b0818df7bddccd9e3ad4a981cac0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a314b0818df7bddccd9e3ad4a981cac0);
        cache_frame_a314b0818df7bddccd9e3ad4a981cac0 = NULL;
    }

    assertFrameObject(frame_a314b0818df7bddccd9e3ad4a981cac0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_collection);
    var_collection = NULL;
    CHECK_OBJECT(var_count);
    Py_DECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_devices);
    var_devices = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_dev_itf);
    var_dev_itf = NULL;
    Py_XDECREF(var_dev_id);
    var_dev_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_dev_state);
    var_dev_state = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
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

    Py_XDECREF(var_collection);
    var_collection = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_devices);
    var_devices = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_dev_itf);
    var_dev_itf = NULL;
    Py_XDECREF(var_dev_id);
    var_dev_id = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_desc);
    var_desc = NULL;
    Py_XDECREF(var_dev_state);
    var_dev_state = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_flow);
    Py_DECREF(par_flow);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_flow);
    Py_DECREF(par_flow);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$media$devices$win32$$$function__18_get_pkey_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_store = python_pars[0];
    PyObject *par_pkey = python_pars[1];
    PyObject *var_propvar = NULL;
    PyObject *var_value = NULL;
    PyObject *var_err = NULL;
    struct Nuitka_FrameObject *frame_d13f0b23e94cb6317bb233d6c484deab;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d13f0b23e94cb6317bb233d6c484deab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d13f0b23e94cb6317bb233d6c484deab)) {
        Py_XDECREF(cache_frame_d13f0b23e94cb6317bb233d6c484deab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d13f0b23e94cb6317bb233d6c484deab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d13f0b23e94cb6317bb233d6c484deab = MAKE_FUNCTION_FRAME(tstate, codeobj_d13f0b23e94cb6317bb233d6c484deab, module_pyglet$media$devices$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d13f0b23e94cb6317bb233d6c484deab->m_type_description == NULL);
    frame_d13f0b23e94cb6317bb233d6c484deab = cache_frame_d13f0b23e94cb6317bb233d6c484deab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d13f0b23e94cb6317bb233d6c484deab);
    assert(Py_REFCNT(frame_d13f0b23e94cb6317bb233d6c484deab) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_d13f0b23e94cb6317bb233d6c484deab->m_frame.f_lineno = 298;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_propvar == NULL);
        var_propvar = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_store);
        tmp_expression_value_1 = par_store;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[78]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_pkey);
        tmp_args_element_value_1 = par_pkey;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 299;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_propvar);
        tmp_args_element_value_3 = var_propvar;
        frame_d13f0b23e94cb6317bb233d6c484deab->m_frame.f_lineno = 299;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 299;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_d13f0b23e94cb6317bb233d6c484deab->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_propvar);
        tmp_expression_value_2 = var_propvar;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[79]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_propvar);
        tmp_args_element_value_4 = var_propvar;
        frame_d13f0b23e94cb6317bb233d6c484deab->m_frame.f_lineno = 301;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[80], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d13f0b23e94cb6317bb233d6c484deab, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d13f0b23e94cb6317bb233d6c484deab, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
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
        tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_err = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[81];
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_4;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(var_err);
    var_err = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 297;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d13f0b23e94cb6317bb233d6c484deab->m_frame) frame_d13f0b23e94cb6317bb233d6c484deab->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_d13f0b23e94cb6317bb233d6c484deab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d13f0b23e94cb6317bb233d6c484deab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d13f0b23e94cb6317bb233d6c484deab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d13f0b23e94cb6317bb233d6c484deab,
        type_description_1,
        par_store,
        par_pkey,
        var_propvar,
        var_value,
        var_err
    );


    // Release cached frame if used for exception.
    if (frame_d13f0b23e94cb6317bb233d6c484deab == cache_frame_d13f0b23e94cb6317bb233d6c484deab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d13f0b23e94cb6317bb233d6c484deab);
        cache_frame_d13f0b23e94cb6317bb233d6c484deab = NULL;
    }

    assertFrameObject(frame_d13f0b23e94cb6317bb233d6c484deab);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_value);
    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_propvar);
    var_propvar = NULL;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_propvar);
    var_propvar = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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
    CHECK_OBJECT(par_store);
    Py_DECREF(par_store);
    CHECK_OBJECT(par_pkey);
    Py_DECREF(par_pkey);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_store);
    Py_DECREF(par_store);
    CHECK_OBJECT(par_pkey);
    Py_DECREF(par_pkey);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__10_get_default_input() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__10_get_default_input,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_bdaf29c356dd3130202974c07657eaf8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__11_get_cached_device() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__11_get_cached_device,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_5b3b5e9b852bb50a7052cc8ed4eda3f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__12_get_output_devices(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__12_get_output_devices,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_5cfa659f5792f3dae8a70daf963771aa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__13_get_input_devices(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__13_get_input_devices,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_ddd612b96f75551426f23fcc0e6f08c8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__14_get_all_devices() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__14_get_all_devices,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_cee8b8bafcfdc2cc441d64dbdb20651a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__15__query_all_devices() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__15__query_all_devices,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_e15c5c9b69b733b4301538364e693986,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__16_get_device_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__16_get_device_info,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_556ea50436b8707dfd3ee114e27b5069,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__17_get_devices(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__17_get_devices,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_a314b0818df7bddccd9e3ad4a981cac0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__18_get_pkey_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__18_get_pkey_value,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_d13f0b23e94cb6317bb233d6c484deab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__1___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__1___repr__,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_b04c056ffe41f46393df6056c97d9cc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__2___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__2___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_1c1efc0b6298f8e280a23d33bf234bf5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__3_OnDeviceStateChanged() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__3_OnDeviceStateChanged,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_9537ab9bbb77ce7fe64baf21a303ca10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__4_OnDeviceAdded() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__4_OnDeviceAdded,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_95c4fc77b3124092d8854141ca3daac7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__5_OnDeviceRemoved() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__5_OnDeviceRemoved,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_aba3cf3b0f8c72f62bc3ed7f9e4181a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__6_OnDefaultDeviceChanged() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__6_OnDefaultDeviceChanged,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_aa2106e5aa5892f23140376136b5ec91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__7_OnPropertyValueChanged() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_1b820ea6a2dc866c0e0dd06099f40e2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__8___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__8___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_499cf095bb759aa05a28aa2a60034c95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$media$devices$win32$$$function__9_get_default_output() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$media$devices$win32$$$function__9_get_default_output,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_b2a74319142636bfa4a2ca59cb8d1bb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$media$devices$win32,
        mod_consts[43],
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

function_impl_code functable_pyglet$media$devices$win32[] = {
    impl_pyglet$media$devices$win32$$$function__1___repr__,
    impl_pyglet$media$devices$win32$$$function__2___init__,
    impl_pyglet$media$devices$win32$$$function__3_OnDeviceStateChanged,
    impl_pyglet$media$devices$win32$$$function__4_OnDeviceAdded,
    impl_pyglet$media$devices$win32$$$function__5_OnDeviceRemoved,
    impl_pyglet$media$devices$win32$$$function__6_OnDefaultDeviceChanged,
    NULL,
    impl_pyglet$media$devices$win32$$$function__8___init__,
    impl_pyglet$media$devices$win32$$$function__9_get_default_output,
    impl_pyglet$media$devices$win32$$$function__10_get_default_input,
    impl_pyglet$media$devices$win32$$$function__11_get_cached_device,
    impl_pyglet$media$devices$win32$$$function__12_get_output_devices,
    impl_pyglet$media$devices$win32$$$function__13_get_input_devices,
    impl_pyglet$media$devices$win32$$$function__14_get_all_devices,
    impl_pyglet$media$devices$win32$$$function__15__query_all_devices,
    impl_pyglet$media$devices$win32$$$function__16_get_device_info,
    impl_pyglet$media$devices$win32$$$function__17_get_devices,
    impl_pyglet$media$devices$win32$$$function__18_get_pkey_value,
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

    function_impl_code *current = functable_pyglet$media$devices$win32;
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

    if (offset > sizeof(functable_pyglet$media$devices$win32) || offset < 0) {
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
        functable_pyglet$media$devices$win32[offset],
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
        module_pyglet$media$devices$win32,
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
PyObject *modulecode_pyglet$media$devices$win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.media.devices.win32");

    // Store the module for future use.
    module_pyglet$media$devices$win32 = module;

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
        PRINT_STRING("pyglet.media.devices.win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.media.devices.win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$media$devices$win32\n");

    moduledict_pyglet$media$devices$win32 = MODULE_DICT(module_pyglet$media$devices$win32);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$media$devices$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$devices$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[224]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$devices$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$devices$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$devices$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$media$devices$win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$media$devices$win32);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    struct Nuitka_CellObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    struct Nuitka_CellObject *outline_8_var___class__ = NULL;
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
    struct Nuitka_FrameObject *frame_2d33499d63ee036cd89250e3072b6f70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_627689cd16ee88116f8b8b44d70c262f_2;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62 = NULL;
    struct Nuitka_FrameObject *frame_b57135bce58a4e2eb7a0ce8b14f784f4_3;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81 = NULL;
    struct Nuitka_FrameObject *frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96 = NULL;
    struct Nuitka_FrameObject *frame_7f29930b80c3d61de4fc0ff5b27c60b0_5;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136 = NULL;
    struct Nuitka_FrameObject *frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149 = NULL;
    struct Nuitka_FrameObject *frame_5713b55c8f50d2740bd43d8a0ad75ab7_7;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158 = NULL;
    struct Nuitka_FrameObject *frame_c1e17eb4f33dbc370247afc8e8e7936e_8;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173 = NULL;
    struct Nuitka_FrameObject *frame_5676362b4a92c7234952fe3ae2e934e8_9;
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
    PyObject *locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188 = NULL;
    struct Nuitka_FrameObject *frame_f5df5eb658d749f67329f67ebf14d5bd_10;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_2);
    }
    frame_2d33499d63ee036cd89250e3072b6f70 = MAKE_MODULE_FRAME(codeobj_2d33499d63ee036cd89250e3072b6f70, module_pyglet$media$devices$win32);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2d33499d63ee036cd89250e3072b6f70);
    assert(Py_REFCNT(frame_2d33499d63ee036cd89250e3072b6f70) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[86], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[88];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$media$devices$win32;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[89];
        tmp_level_value_1 = mod_consts[18];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_pyglet$media$devices$win32,
                mod_consts[90],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[88];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$media$devices$win32;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[91];
        tmp_level_value_2 = mod_consts[18];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$media$devices$win32,
                mod_consts[92],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[93];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$media$devices$win32;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[94];
        tmp_level_value_3 = mod_consts[18];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 3;
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
                (PyObject *)moduledict_pyglet$media$devices$win32,
                mod_consts[26],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[95];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyglet$media$devices$win32;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_pyglet$media$devices$win32;
        tmp_fromlist_value_4 = mod_consts[96];
        tmp_level_value_4 = mod_consts[18];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 4;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$media$devices$win32, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[97];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyglet$media$devices$win32;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[98];
        tmp_level_value_5 = mod_consts[18];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyglet$media$devices$win32,
                mod_consts[99],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[100];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pyglet$media$devices$win32;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[101];
        tmp_level_value_6 = mod_consts[18];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyglet$media$devices$win32,
                mod_consts[102],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 8;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[103]);

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assign_source_10 == NULL)) {
            tmp_assign_source_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assign_source_15 == NULL)) {
            tmp_assign_source_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_28);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[126]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_30 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

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
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[18];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[127]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[128];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 42;
        tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_7 = mod_consts[131];
        tmp_default_value_1 = mod_consts[132];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_7, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[131]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

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


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 42;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_34;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        frame_627689cd16ee88116f8b8b44d70c262f_2 = MAKE_CLASS_FRAME(tstate, codeobj_627689cd16ee88116f8b8b44d70c262f, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_627689cd16ee88116f8b8b44d70c262f_2);
        assert(Py_REFCNT(frame_627689cd16ee88116f8b8b44d70c262f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[1];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_8 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42, mod_consts[90]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 44;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[136]);
                Py_DECREF(tmp_expression_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
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
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_5;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[2];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42, mod_consts[63]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 45;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__1___repr__();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42, mod_consts[138], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_627689cd16ee88116f8b8b44d70c262f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_627689cd16ee88116f8b8b44d70c262f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_627689cd16ee88116f8b8b44d70c262f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_627689cd16ee88116f8b8b44d70c262f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_627689cd16ee88116f8b8b44d70c262f_2);

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


                exception_lineno = 42;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[128];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 42;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_35 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42);
        locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42);
        locals_pyglet$media$devices$win32$$$class__1_PROPERTYKEY_42 = NULL;
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
        exception_lineno = 42;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_35);
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
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assign_source_37 == NULL)) {
            tmp_assign_source_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 55;
        tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_1,
            mod_consts[136],
            &PyTuple_GET_ITEM(mod_consts[142], 0)
        );

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[143];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 57;
        tmp_args_element_value_3 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_2,
            mod_consts[136],
            &PyTuple_GET_ITEM(mod_consts[142], 0)
        );

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[106];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 59;
        tmp_args_element_value_5 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_3,
            mod_consts[136],
            &PyTuple_GET_ITEM(mod_consts[144], 0)
        );

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[106];
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_40);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[146]);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_41, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_42 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

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
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[18];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

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
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[127]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_tuple_element_8 = mod_consts[55];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 62;
        tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_14 = tmp_class_creation_2__metaclass;
        tmp_name_value_8 = mod_consts[131];
        tmp_default_value_2 = mod_consts[132];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_8, tmp_default_value_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[131]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 62;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_46;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        frame_b57135bce58a4e2eb7a0ce8b14f784f4_3 = MAKE_CLASS_FRAME(tstate, codeobj_b57135bce58a4e2eb7a0ce8b14f784f4, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b57135bce58a4e2eb7a0ce8b14f784f4_3);
        assert(Py_REFCNT(frame_b57135bce58a4e2eb7a0ce8b14f784f4_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_10;
            tmp_tuple_element_10 = mod_consts[70];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_8;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_args_element_value_7;
                PyObject *tmp_called_value_9;
                PyObject *tmp_args_element_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_10);
                tmp_expression_value_16 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[90]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[147]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_called_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                tmp_called_value_9 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[148]);

                if (tmp_called_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                        if (unlikely(tmp_called_value_9 == NULL)) {
                            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                        }

                        if (tmp_called_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_8);

                            exception_lineno = 65;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_9);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_8 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[63]);

                if (tmp_args_element_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_args_element_value_8 == NULL)) {
                            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_args_element_value_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_8);
                            Py_DECREF(tmp_called_value_9);

                            exception_lineno = 65;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_8);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 65;
                tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_args_element_value_8);
                if (tmp_args_element_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_8);

                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 65;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_7);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_11 = mod_consts[149];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_10;
                    PyObject *tmp_expression_value_17;
                    PyObject *tmp_args_element_value_9;
                    PyObject *tmp_args_element_value_10;
                    PyObject *tmp_called_value_11;
                    PyObject *tmp_args_element_value_11;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_11);
                    tmp_expression_value_17 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[90]);

                    if (tmp_expression_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_17 == NULL)) {
                                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 67;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_expression_value_17);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_17);
                    if (tmp_called_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    tmp_args_element_value_9 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[63]);

                    if (tmp_args_element_value_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

                            if (unlikely(tmp_args_element_value_9 == NULL)) {
                                tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                            }

                            if (tmp_args_element_value_9 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_10);

                                exception_lineno = 67;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_args_element_value_9);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_called_value_11 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[148]);

                    if (tmp_called_value_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_11 == NULL)) {
                                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_11 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_10);
                                Py_DECREF(tmp_args_element_value_9);

                                exception_lineno = 67;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_called_value_11);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_args_element_value_11 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[128]);

                    if (tmp_args_element_value_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[128]);

                            if (unlikely(tmp_args_element_value_11 == NULL)) {
                                tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
                            }

                            if (tmp_args_element_value_11 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_10);
                                Py_DECREF(tmp_args_element_value_9);
                                Py_DECREF(tmp_called_value_11);

                                exception_lineno = 67;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_args_element_value_11);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 67;
                    tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
                    Py_DECREF(tmp_called_value_11);
                    Py_DECREF(tmp_args_element_value_11);
                    if (tmp_args_element_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);
                        Py_DECREF(tmp_args_element_value_9);

                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 67;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                        tmp_tuple_element_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
                    }

                    Py_DECREF(tmp_called_value_10);
                    Py_DECREF(tmp_args_element_value_9);
                    Py_DECREF(tmp_args_element_value_10);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_12 = mod_consts[78];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_12;
                    PyObject *tmp_expression_value_18;
                    PyObject *tmp_args_element_value_12;
                    PyObject *tmp_args_element_value_13;
                    PyObject *tmp_called_value_13;
                    PyObject *tmp_args_element_value_14;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
                    tmp_expression_value_18 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[90]);

                    if (tmp_expression_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_18 == NULL)) {
                                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 69;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_expression_value_18);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_18);
                    if (tmp_called_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    tmp_args_element_value_12 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[141]);

                    if (tmp_args_element_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[141]);

                            if (unlikely(tmp_args_element_value_12 == NULL)) {
                                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
                            }

                            if (tmp_args_element_value_12 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_12);

                                exception_lineno = 69;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_args_element_value_12);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_called_value_13 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[148]);

                    if (tmp_called_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_13 == NULL)) {
                                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_13 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_12);
                                Py_DECREF(tmp_args_element_value_12);

                                exception_lineno = 69;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_called_value_13);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_args_element_value_14 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[77]);

                    if (tmp_args_element_value_14 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[77]);

                            if (unlikely(tmp_args_element_value_14 == NULL)) {
                                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                            }

                            if (tmp_args_element_value_14 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_12);
                                Py_DECREF(tmp_args_element_value_12);
                                Py_DECREF(tmp_called_value_13);

                                exception_lineno = 69;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_args_element_value_14);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 69;
                    tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_14);
                    Py_DECREF(tmp_called_value_13);
                    Py_DECREF(tmp_args_element_value_14);
                    if (tmp_args_element_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_args_element_value_12);

                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 69;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
                        tmp_tuple_element_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
                    }

                    Py_DECREF(tmp_called_value_12);
                    Py_DECREF(tmp_args_element_value_12);
                    Py_DECREF(tmp_args_element_value_13);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_13 = mod_consts[150];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_4;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
                    tmp_called_instance_4 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[90]);

                    if (tmp_called_instance_4 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_called_instance_4 == NULL)) {
                                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_called_instance_4 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 71;
                                type_description_2 = "o";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_called_instance_4);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 71;
                    tmp_tuple_element_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[147]);
                    Py_DECREF(tmp_called_instance_4);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_14 = mod_consts[151];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_5;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
                    tmp_called_instance_5 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[90]);

                    if (tmp_called_instance_5 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_called_instance_5 == NULL)) {
                                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_called_instance_5 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 73;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_called_instance_5);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame.f_lineno = 73;
                    tmp_tuple_element_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[147]);
                    Py_DECREF(tmp_called_instance_5);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b57135bce58a4e2eb7a0ce8b14f784f4_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b57135bce58a4e2eb7a0ce8b14f784f4_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b57135bce58a4e2eb7a0ce8b14f784f4_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b57135bce58a4e2eb7a0ce8b14f784f4_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_b57135bce58a4e2eb7a0ce8b14f784f4_3);

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


                exception_lineno = 62;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_14 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_15 = mod_consts[55];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_15 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 62;
            tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_47 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62);
        locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62);
        locals_pyglet$media$devices$win32$$$class__2_IPropertyStore_62 = NULL;
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
        exception_lineno = 62;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_47);
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
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 77;
        tmp_assign_source_49 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_6,
            mod_consts[136],
            &PyTuple_GET_ITEM(mod_consts[153], 0)
        );

        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 78;
        tmp_assign_source_50 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_7,
            mod_consts[136],
            &PyTuple_GET_ITEM(mod_consts[154], 0)
        );

        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_50);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[155]);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_51, 0, tmp_tuple_element_16);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_52 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

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
        tmp_expression_value_20 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[18];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_54;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

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
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_22 = tmp_class_creation_3__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[127]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        tmp_tuple_element_17 = mod_consts[156];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_17 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 81;
        tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_23 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

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
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_24 = tmp_class_creation_3__metaclass;
        tmp_name_value_9 = mod_consts[131];
        tmp_default_value_3 = mod_consts[132];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_9, tmp_default_value_3);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[131]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 81;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_56;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_9;
        }
        frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4 = MAKE_CLASS_FRAME(tstate, codeobj_61673a5b7f5d4cf38fd271cdfd6bb2b3, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4);
        assert(Py_REFCNT(frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_19;
            tmp_tuple_element_19 = mod_consts[157];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_16;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_args_element_value_17;
                PyObject *tmp_args_element_value_18;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_19);
                tmp_expression_value_26 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[90]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[158]);
                Py_DECREF(tmp_expression_value_26);
                if (tmp_called_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto tuple_build_exception_11;
                }
                tmp_expression_value_27 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_16);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[159]);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_16);

                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto tuple_build_exception_11;
                }
                tmp_expression_value_28 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_16);
                            Py_DECREF(tmp_args_element_value_15);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[159]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_args_element_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_16);
                    Py_DECREF(tmp_args_element_value_15);

                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto tuple_build_exception_11;
                }
                tmp_args_element_value_17 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[160]);

                if (tmp_args_element_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[160]);

                        if (unlikely(tmp_args_element_value_17 == NULL)) {
                            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
                        }

                        if (tmp_args_element_value_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_16);
                            Py_DECREF(tmp_args_element_value_15);
                            Py_DECREF(tmp_args_element_value_16);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_args_element_value_17);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                tmp_args_element_value_18 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[63]);

                if (tmp_args_element_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_args_element_value_18 == NULL)) {
                            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_args_element_value_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_16);
                            Py_DECREF(tmp_args_element_value_15);
                            Py_DECREF(tmp_args_element_value_16);
                            Py_DECREF(tmp_args_element_value_17);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_args_element_value_18);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4->m_frame.f_lineno = 84;
                {
                    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
                    tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_16, call_args);
                }

                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_17);
                Py_DECREF(tmp_args_element_value_18);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_tuple_element_23;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_20 = mod_consts[161];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_17;
                    PyObject *tmp_expression_value_29;
                    PyObject *tmp_args_element_value_19;
                    PyObject *tmp_expression_value_30;
                    PyObject *tmp_args_element_value_20;
                    PyObject *tmp_expression_value_31;
                    PyObject *tmp_args_element_value_21;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_20);
                    tmp_expression_value_29 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[90]);

                    if (tmp_expression_value_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_29 == NULL)) {
                                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_29 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 86;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_expression_value_29);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[158]);
                    Py_DECREF(tmp_expression_value_29);
                    if (tmp_called_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    tmp_expression_value_30 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_30 == NULL)) {
                                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_17);

                                exception_lineno = 86;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_expression_value_30);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_30);
                    if (tmp_args_element_value_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    tmp_expression_value_31 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_31 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_31 == NULL)) {
                                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_31 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_17);
                                Py_DECREF(tmp_args_element_value_19);

                                exception_lineno = 86;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_expression_value_31);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_31);
                    if (tmp_args_element_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_args_element_value_19);

                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    tmp_args_element_value_21 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[160]);

                    if (tmp_args_element_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[160]);

                            if (unlikely(tmp_args_element_value_21 == NULL)) {
                                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
                            }

                            if (tmp_args_element_value_21 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_17);
                                Py_DECREF(tmp_args_element_value_19);
                                Py_DECREF(tmp_args_element_value_20);

                                exception_lineno = 86;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_args_element_value_21);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4->m_frame.f_lineno = 86;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
                        tmp_tuple_element_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
                    }

                    Py_DECREF(tmp_called_value_17);
                    Py_DECREF(tmp_args_element_value_19);
                    Py_DECREF(tmp_args_element_value_20);
                    Py_DECREF(tmp_args_element_value_21);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_21 = mod_consts[162];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_18;
                    PyObject *tmp_expression_value_32;
                    PyObject *tmp_args_element_value_22;
                    PyObject *tmp_expression_value_33;
                    PyObject *tmp_args_element_value_23;
                    PyObject *tmp_expression_value_34;
                    PyObject *tmp_args_element_value_24;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_21);
                    tmp_expression_value_32 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[90]);

                    if (tmp_expression_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_32 == NULL)) {
                                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_32 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 88;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_expression_value_32);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[158]);
                    Py_DECREF(tmp_expression_value_32);
                    if (tmp_called_value_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    tmp_expression_value_33 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_33 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_33 == NULL)) {
                                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_33 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_18);

                                exception_lineno = 88;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_expression_value_33);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_33);
                    if (tmp_args_element_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    tmp_expression_value_34 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_34 == NULL)) {
                                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_34 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_18);
                                Py_DECREF(tmp_args_element_value_22);

                                exception_lineno = 88;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_expression_value_34);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_34);
                    if (tmp_args_element_value_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_22);

                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    tmp_args_element_value_24 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[160]);

                    if (tmp_args_element_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[160]);

                            if (unlikely(tmp_args_element_value_24 == NULL)) {
                                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
                            }

                            if (tmp_args_element_value_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_18);
                                Py_DECREF(tmp_args_element_value_22);
                                Py_DECREF(tmp_args_element_value_23);

                                exception_lineno = 88;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_args_element_value_24);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4->m_frame.f_lineno = 88;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
                        tmp_tuple_element_21 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_18, call_args);
                    }

                    Py_DECREF(tmp_called_value_18);
                    Py_DECREF(tmp_args_element_value_22);
                    Py_DECREF(tmp_args_element_value_23);
                    Py_DECREF(tmp_args_element_value_24);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_22 = mod_consts[163];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_19;
                    PyObject *tmp_expression_value_35;
                    PyObject *tmp_args_element_value_25;
                    PyObject *tmp_expression_value_36;
                    PyObject *tmp_args_element_value_26;
                    PyObject *tmp_expression_value_37;
                    PyObject *tmp_args_element_value_27;
                    PyObject *tmp_args_element_value_28;
                    PyObject *tmp_args_element_value_29;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_22);
                    tmp_expression_value_35 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[90]);

                    if (tmp_expression_value_35 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_35 == NULL)) {
                                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_35 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 90;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_expression_value_35);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[158]);
                    Py_DECREF(tmp_expression_value_35);
                    if (tmp_called_value_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    tmp_expression_value_36 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_36 == NULL)) {
                                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_36 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);

                                exception_lineno = 90;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_expression_value_36);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_36);
                    if (tmp_args_element_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    tmp_expression_value_37 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_37 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_37 == NULL)) {
                                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_37 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);
                                Py_DECREF(tmp_args_element_value_25);

                                exception_lineno = 90;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_expression_value_37);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_37);
                    if (tmp_args_element_value_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_args_element_value_25);

                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    tmp_args_element_value_27 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[104]);

                    if (tmp_args_element_value_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[104]);

                            if (unlikely(tmp_args_element_value_27 == NULL)) {
                                tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
                            }

                            if (tmp_args_element_value_27 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);
                                Py_DECREF(tmp_args_element_value_25);
                                Py_DECREF(tmp_args_element_value_26);

                                exception_lineno = 90;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_args_element_value_27);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_args_element_value_28 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[110]);

                    if (tmp_args_element_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[110]);

                            if (unlikely(tmp_args_element_value_28 == NULL)) {
                                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                            }

                            if (tmp_args_element_value_28 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);
                                Py_DECREF(tmp_args_element_value_25);
                                Py_DECREF(tmp_args_element_value_26);
                                Py_DECREF(tmp_args_element_value_27);

                                exception_lineno = 90;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_args_element_value_28);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_args_element_value_29 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[160]);

                    if (tmp_args_element_value_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[160]);

                            if (unlikely(tmp_args_element_value_29 == NULL)) {
                                tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
                            }

                            if (tmp_args_element_value_29 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);
                                Py_DECREF(tmp_args_element_value_25);
                                Py_DECREF(tmp_args_element_value_26);
                                Py_DECREF(tmp_args_element_value_27);
                                Py_DECREF(tmp_args_element_value_28);

                                exception_lineno = 90;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_args_element_value_29);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4->m_frame.f_lineno = 90;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
                        tmp_tuple_element_22 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_19, call_args);
                    }

                    Py_DECREF(tmp_called_value_19);
                    Py_DECREF(tmp_args_element_value_25);
                    Py_DECREF(tmp_args_element_value_26);
                    Py_DECREF(tmp_args_element_value_27);
                    Py_DECREF(tmp_args_element_value_28);
                    Py_DECREF(tmp_args_element_value_29);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_22);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_23 = mod_consts[164];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_20;
                    PyObject *tmp_expression_value_38;
                    PyObject *tmp_args_element_value_30;
                    PyObject *tmp_expression_value_39;
                    PyObject *tmp_args_element_value_31;
                    PyObject *tmp_expression_value_40;
                    PyObject *tmp_args_element_value_32;
                    PyObject *tmp_args_element_value_33;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
                    tmp_expression_value_38 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[90]);

                    if (tmp_expression_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_38 == NULL)) {
                                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_38 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 92;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_expression_value_38);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[158]);
                    Py_DECREF(tmp_expression_value_38);
                    if (tmp_called_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    tmp_expression_value_39 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_39 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_39 == NULL)) {
                                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_39 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_20);

                                exception_lineno = 92;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_expression_value_39);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_39);
                    if (tmp_args_element_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    tmp_expression_value_40 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[125]);

                    if (tmp_expression_value_40 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_40 == NULL)) {
                                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_40 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_20);
                                Py_DECREF(tmp_args_element_value_30);

                                exception_lineno = 92;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_expression_value_40);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[159]);
                    Py_DECREF(tmp_expression_value_40);
                    if (tmp_args_element_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);
                        Py_DECREF(tmp_args_element_value_30);

                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    tmp_args_element_value_32 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[160]);

                    if (tmp_args_element_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[160]);

                            if (unlikely(tmp_args_element_value_32 == NULL)) {
                                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
                            }

                            if (tmp_args_element_value_32 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_20);
                                Py_DECREF(tmp_args_element_value_30);
                                Py_DECREF(tmp_args_element_value_31);

                                exception_lineno = 92;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_args_element_value_32);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_args_element_value_33 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[128]);

                    if (tmp_args_element_value_33 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[128]);

                            if (unlikely(tmp_args_element_value_33 == NULL)) {
                                tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
                            }

                            if (tmp_args_element_value_33 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_20);
                                Py_DECREF(tmp_args_element_value_30);
                                Py_DECREF(tmp_args_element_value_31);
                                Py_DECREF(tmp_args_element_value_32);

                                exception_lineno = 92;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_args_element_value_33);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4->m_frame.f_lineno = 92;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
                        tmp_tuple_element_23 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_20, call_args);
                    }

                    Py_DECREF(tmp_called_value_20);
                    Py_DECREF(tmp_args_element_value_30);
                    Py_DECREF(tmp_args_element_value_31);
                    Py_DECREF(tmp_args_element_value_32);
                    Py_DECREF(tmp_args_element_value_33);
                    if (tmp_tuple_element_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_23);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_61673a5b7f5d4cf38fd271cdfd6bb2b3_4);

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


                exception_lineno = 81;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_21 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_24 = mod_consts[156];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_24 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 81;
            tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_57 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81);
        locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81);
        locals_pyglet$media$devices$win32$$$class__3_IMMNotificationClient_81 = NULL;
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
        exception_lineno = 81;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_57);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_41;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[165]);
        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_59, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_60 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

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
        tmp_expression_value_42 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[18];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_43 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

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
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_44 = tmp_class_creation_4__metaclass;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[127]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        tmp_tuple_element_26 = mod_consts[31];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_26 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 96;
        tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_45 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

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
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_46 = tmp_class_creation_4__metaclass;
        tmp_name_value_10 = mod_consts[131];
        tmp_default_value_4 = mod_consts[132];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_46, tmp_name_value_10, tmp_default_value_4);
        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_47;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_47 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_47 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[131]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 96;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_64;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_65;
        outline_3_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_12;
        }
        frame_7f29930b80c3d61de4fc0ff5b27c60b0_5 = MAKE_CLASS_FRAME(tstate, codeobj_7f29930b80c3d61de4fc0ff5b27c60b0, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7f29930b80c3d61de4fc0ff5b27c60b0_5);
        assert(Py_REFCNT(frame_7f29930b80c3d61de4fc0ff5b27c60b0_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            tmp_list_element_4 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[156]);

            if (tmp_list_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[156]);

                    if (unlikely(tmp_list_element_4 == NULL)) {
                        tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
                    }

                    if (tmp_list_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_list_element_4);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__2___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__3_OnDeviceStateChanged();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_2 = "c";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__4_OnDeviceAdded();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[161], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_2 = "c";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__5_OnDeviceRemoved();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[162], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_2 = "c";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__6_OnDefaultDeviceChanged();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[163], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_2 = "c";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__7_OnPropertyValueChanged();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "c";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7f29930b80c3d61de4fc0ff5b27c60b0_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7f29930b80c3d61de4fc0ff5b27c60b0_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7f29930b80c3d61de4fc0ff5b27c60b0_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7f29930b80c3d61de4fc0ff5b27c60b0_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_7f29930b80c3d61de4fc0ff5b27c60b0_5);

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


                exception_lineno = 96;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_23 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_28 = mod_consts[31];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_28 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 96;
            tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto try_except_handler_12;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_66);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_65 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96);
        locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96);
        locals_pyglet$media$devices$win32$$$class__4_AudioNotificationCB_96 = NULL;
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
        exception_lineno = 96;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_65);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_48;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[146]);
        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        tmp_assign_source_67 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_67, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_68 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

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
        tmp_expression_value_49 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[18];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_70;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_50 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

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
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_51 = tmp_class_creation_5__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[127]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        tmp_tuple_element_30 = mod_consts[34];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_30 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 136;
        tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_52 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

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
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_53 = tmp_class_creation_5__metaclass;
        tmp_name_value_11 = mod_consts[131];
        tmp_default_value_5 = mod_consts[132];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_11, tmp_default_value_5);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[131]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 136;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_72;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[34];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_15;
        }
        frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6 = MAKE_CLASS_FRAME(tstate, codeobj_4e7228e1ab62cb4bf880c7a9fc1a2269, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6);
        assert(Py_REFCNT(frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_32;
            tmp_tuple_element_32 = mod_consts[173];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_25;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_args_element_value_35;
                PyObject *tmp_args_element_value_36;
                PyObject *tmp_called_value_26;
                PyObject *tmp_args_element_value_37;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_32);
                tmp_expression_value_55 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[90]);

                if (tmp_expression_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_expression_value_55 == NULL)) {
                            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_expression_value_55 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_expression_value_55);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[147]);
                Py_DECREF(tmp_expression_value_55);
                if (tmp_called_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                tmp_expression_value_56 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[90]);

                if (tmp_expression_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_expression_value_56 == NULL)) {
                            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_expression_value_56 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_25);

                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_expression_value_56);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[174]);
                Py_DECREF(tmp_expression_value_56);
                if (tmp_args_element_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_25);

                    exception_lineno = 139;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                tmp_args_element_value_35 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[63]);

                if (tmp_args_element_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_args_element_value_35 == NULL)) {
                            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_args_element_value_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_25);
                            Py_DECREF(tmp_args_element_value_34);

                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_args_element_value_35);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                tmp_called_value_26 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[148]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_25);
                            Py_DECREF(tmp_args_element_value_34);
                            Py_DECREF(tmp_args_element_value_35);

                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                tmp_args_element_value_37 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[77]);

                if (tmp_args_element_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_args_element_value_37 == NULL)) {
                            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                        }

                        if (tmp_args_element_value_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_25);
                            Py_DECREF(tmp_args_element_value_34);
                            Py_DECREF(tmp_args_element_value_35);
                            Py_DECREF(tmp_called_value_26);

                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_args_element_value_37);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 139;
                tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_37);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_37);
                if (tmp_args_element_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_25);
                    Py_DECREF(tmp_args_element_value_34);
                    Py_DECREF(tmp_args_element_value_35);

                    exception_lineno = 139;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 139;
                {
                    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
                    tmp_tuple_element_32 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_25, call_args);
                }

                Py_DECREF(tmp_called_value_25);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);
                if (tmp_tuple_element_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_tuple_element_35;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_33 = mod_consts[56];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_27;
                    PyObject *tmp_expression_value_57;
                    PyObject *tmp_args_element_value_38;
                    PyObject *tmp_args_element_value_39;
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_args_element_value_40;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_33);
                    tmp_expression_value_57 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[90]);

                    if (tmp_expression_value_57 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_57 == NULL)) {
                                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_57 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 141;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_expression_value_57);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_57);
                    if (tmp_called_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 141;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    tmp_args_element_value_38 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[69]);

                    if (tmp_args_element_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[69]);

                            if (unlikely(tmp_args_element_value_38 == NULL)) {
                                tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                            }

                            if (tmp_args_element_value_38 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_27);

                                exception_lineno = 141;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_args_element_value_38);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_called_value_28 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[148]);

                    if (tmp_called_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_28 == NULL)) {
                                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_28 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_27);
                                Py_DECREF(tmp_args_element_value_38);

                                exception_lineno = 141;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_called_value_28);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_args_element_value_40 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[55]);

                    if (tmp_args_element_value_40 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[55]);

                            if (unlikely(tmp_args_element_value_40 == NULL)) {
                                tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
                            }

                            if (tmp_args_element_value_40 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_27);
                                Py_DECREF(tmp_args_element_value_38);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 141;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_args_element_value_40);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 141;
                    tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_40);
                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_40);
                    if (tmp_args_element_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_38);

                        exception_lineno = 141;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 141;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
                        tmp_tuple_element_33 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
                    }

                    Py_DECREF(tmp_called_value_27);
                    Py_DECREF(tmp_args_element_value_38);
                    Py_DECREF(tmp_args_element_value_39);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 141;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_tuple_element_34 = mod_consts[59];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_29;
                    PyObject *tmp_expression_value_58;
                    PyObject *tmp_args_element_value_41;
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_args_element_value_42;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_34);
                    tmp_expression_value_58 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[90]);

                    if (tmp_expression_value_58 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_58 == NULL)) {
                                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_58 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 143;
                                type_description_2 = "o";
                                goto tuple_build_exception_20;
                            }
                            Py_INCREF(tmp_expression_value_58);
                        } else {
                            goto tuple_build_exception_20;
                        }
                    }

                    tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_58);
                    if (tmp_called_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    tmp_called_value_30 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[148]);

                    if (tmp_called_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_30 == NULL)) {
                                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_29);

                                exception_lineno = 143;
                                type_description_2 = "o";
                                goto tuple_build_exception_20;
                            }
                            Py_INCREF(tmp_called_value_30);
                        } else {
                            goto tuple_build_exception_20;
                        }
                    }

                    tmp_args_element_value_42 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[58]);

                    if (tmp_args_element_value_42 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_42 == NULL)) {
                                tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
                            }

                            if (tmp_args_element_value_42 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_29);
                                Py_DECREF(tmp_called_value_30);

                                exception_lineno = 143;
                                type_description_2 = "o";
                                goto tuple_build_exception_20;
                            }
                            Py_INCREF(tmp_args_element_value_42);
                        } else {
                            goto tuple_build_exception_20;
                        }
                    }

                    frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 143;
                    tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_42);
                    Py_DECREF(tmp_called_value_30);
                    Py_DECREF(tmp_args_element_value_42);
                    if (tmp_args_element_value_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 143;
                    tmp_tuple_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_41);
                    Py_DECREF(tmp_called_value_29);
                    Py_DECREF(tmp_args_element_value_41);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
                tmp_tuple_element_35 = mod_consts[64];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_31;
                    PyObject *tmp_expression_value_59;
                    PyObject *tmp_args_element_value_43;
                    PyObject *tmp_called_value_32;
                    PyObject *tmp_args_element_value_44;
                    PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_35);
                    tmp_expression_value_59 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[90]);

                    if (tmp_expression_value_59 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_59 == NULL)) {
                                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_59 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 145;
                                type_description_2 = "o";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_expression_value_59);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_59);
                    if (tmp_called_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 145;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    tmp_called_value_32 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[148]);

                    if (tmp_called_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_32 == NULL)) {
                                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_32 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);

                                exception_lineno = 145;
                                type_description_2 = "o";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_called_value_32);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_args_element_value_44 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[63]);

                    if (tmp_args_element_value_44 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

                            if (unlikely(tmp_args_element_value_44 == NULL)) {
                                tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                            }

                            if (tmp_args_element_value_44 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);
                                Py_DECREF(tmp_called_value_32);

                                exception_lineno = 145;
                                type_description_2 = "o";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_args_element_value_44);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 145;
                    tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_44);
                    Py_DECREF(tmp_called_value_32);
                    Py_DECREF(tmp_args_element_value_44);
                    if (tmp_args_element_value_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 145;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame.f_lineno = 145;
                    tmp_tuple_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_43);
                    Py_DECREF(tmp_called_value_31);
                    Py_DECREF(tmp_args_element_value_43);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 145;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_4e7228e1ab62cb4bf880c7a9fc1a2269_6);

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


                exception_lineno = 136;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_33 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_36 = mod_consts[34];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_36 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 136;
            tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_73 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136);
        locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136);
        locals_pyglet$media$devices$win32$$$class__5_IMMDevice_136 = NULL;
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
        exception_lineno = 136;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_73);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_60;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[146]);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        tmp_assign_source_75 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_75, 0, tmp_tuple_element_37);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_76 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

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
        tmp_expression_value_61 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[18];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_62 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

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
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_63 = tmp_class_creation_6__metaclass;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[127]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        tmp_tuple_element_38 = mod_consts[67];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_38 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 149;
        tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_79;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_64 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

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
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_65 = tmp_class_creation_6__metaclass;
        tmp_name_value_12 = mod_consts[131];
        tmp_default_value_6 = mod_consts[132];
        tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_12, tmp_default_value_6);
        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_66 == NULL));
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[131]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 149;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_80;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_18;
        }
        frame_5713b55c8f50d2740bd43d8a0ad75ab7_7 = MAKE_CLASS_FRAME(tstate, codeobj_5713b55c8f50d2740bd43d8a0ad75ab7, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5713b55c8f50d2740bd43d8a0ad75ab7_7);
        assert(Py_REFCNT(frame_5713b55c8f50d2740bd43d8a0ad75ab7_7) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_tuple_element_40;
            tmp_tuple_element_40 = mod_consts[70];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_35;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_called_value_36;
                PyObject *tmp_args_element_value_46;
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_40);
                tmp_expression_value_67 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[90]);

                if (tmp_expression_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_expression_value_67 == NULL)) {
                            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_expression_value_67 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 152;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_expression_value_67);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[147]);
                Py_DECREF(tmp_expression_value_67);
                if (tmp_called_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto tuple_build_exception_23;
                }
                tmp_called_value_36 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[148]);

                if (tmp_called_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                        if (unlikely(tmp_called_value_36 == NULL)) {
                            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                        }

                        if (tmp_called_value_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_35);

                            exception_lineno = 152;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_called_value_36);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                tmp_args_element_value_46 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[69]);

                if (tmp_args_element_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_args_element_value_46 == NULL)) {
                            tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                        }

                        if (tmp_args_element_value_46 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_35);
                            Py_DECREF(tmp_called_value_36);

                            exception_lineno = 152;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_args_element_value_46);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                frame_5713b55c8f50d2740bd43d8a0ad75ab7_7->m_frame.f_lineno = 152;
                tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_46);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_46);
                if (tmp_args_element_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_35);

                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto tuple_build_exception_23;
                }
                frame_5713b55c8f50d2740bd43d8a0ad75ab7_7->m_frame.f_lineno = 152;
                tmp_tuple_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_45);
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_tuple_element_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto tuple_build_exception_23;
                }
                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_6);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_41;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_tuple_element_41 = mod_consts[73];
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_37;
                    PyObject *tmp_expression_value_68;
                    PyObject *tmp_args_element_value_47;
                    PyObject *tmp_args_element_value_48;
                    PyObject *tmp_called_value_38;
                    PyObject *tmp_args_element_value_49;
                    PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_41);
                    tmp_expression_value_68 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[90]);

                    if (tmp_expression_value_68 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_68 == NULL)) {
                                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_68 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 154;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_expression_value_68);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_68);
                    if (tmp_called_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    tmp_args_element_value_47 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[69]);

                    if (tmp_args_element_value_47 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[69]);

                            if (unlikely(tmp_args_element_value_47 == NULL)) {
                                tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                            }

                            if (tmp_args_element_value_47 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);

                                exception_lineno = 154;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_args_element_value_47);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    tmp_called_value_38 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[148]);

                    if (tmp_called_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_38 == NULL)) {
                                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_38 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);
                                Py_DECREF(tmp_args_element_value_47);

                                exception_lineno = 154;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_called_value_38);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    tmp_args_element_value_49 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[34]);

                    if (tmp_args_element_value_49 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[34]);

                            if (unlikely(tmp_args_element_value_49 == NULL)) {
                                tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
                            }

                            if (tmp_args_element_value_49 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);
                                Py_DECREF(tmp_args_element_value_47);
                                Py_DECREF(tmp_called_value_38);

                                exception_lineno = 154;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_args_element_value_49);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    frame_5713b55c8f50d2740bd43d8a0ad75ab7_7->m_frame.f_lineno = 154;
                    tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_49);
                    Py_DECREF(tmp_called_value_38);
                    Py_DECREF(tmp_args_element_value_49);
                    if (tmp_args_element_value_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);
                        Py_DECREF(tmp_args_element_value_47);

                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    frame_5713b55c8f50d2740bd43d8a0ad75ab7_7->m_frame.f_lineno = 154;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
                        tmp_tuple_element_41 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
                    }

                    Py_DECREF(tmp_called_value_37);
                    Py_DECREF(tmp_args_element_value_47);
                    Py_DECREF(tmp_args_element_value_48);
                    if (tmp_tuple_element_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_41);
                }
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_6);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5713b55c8f50d2740bd43d8a0ad75ab7_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5713b55c8f50d2740bd43d8a0ad75ab7_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5713b55c8f50d2740bd43d8a0ad75ab7_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5713b55c8f50d2740bd43d8a0ad75ab7_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_5713b55c8f50d2740bd43d8a0ad75ab7_7);

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


                exception_lineno = 149;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_39 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_42 = mod_consts[67];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_42 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 149;
            tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_81 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149);
        locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149);
        locals_pyglet$media$devices$win32$$$class__6_IMMDeviceCollection_149 = NULL;
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
        exception_lineno = 149;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_81);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_expression_value_69;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[146]);
        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        tmp_assign_source_83 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_83, 0, tmp_tuple_element_43);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_84 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

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
        tmp_expression_value_70 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[18];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_71 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

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
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_72 = tmp_class_creation_7__metaclass;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[127]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        tmp_tuple_element_44 = mod_consts[21];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_44 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 158;
        tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_73 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

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
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_74 = tmp_class_creation_7__metaclass;
        tmp_name_value_13 = mod_consts[131];
        tmp_default_value_7 = mod_consts[132];
        tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_74, tmp_name_value_13, tmp_default_value_7);
        if (tmp_tuple_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_75;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_75 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_75 == NULL));
            tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[131]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 158;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_88;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_89;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[21];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_21;
        }
        frame_c1e17eb4f33dbc370247afc8e8e7936e_8 = MAKE_CLASS_FRAME(tstate, codeobj_c1e17eb4f33dbc370247afc8e8e7936e, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c1e17eb4f33dbc370247afc8e8e7936e_8);
        assert(Py_REFCNT(frame_c1e17eb4f33dbc370247afc8e8e7936e_8) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_7;
            PyObject *tmp_tuple_element_46;
            tmp_tuple_element_46 = mod_consts[68];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_41;
                PyObject *tmp_expression_value_76;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_args_element_value_52;
                PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_46);
                tmp_expression_value_76 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[90]);

                if (tmp_expression_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_expression_value_76 == NULL)) {
                            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_expression_value_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 161;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_expression_value_76);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[147]);
                Py_DECREF(tmp_expression_value_76);
                if (tmp_called_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto tuple_build_exception_26;
                }
                tmp_args_element_value_50 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[104]);

                if (tmp_args_element_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[104]);

                        if (unlikely(tmp_args_element_value_50 == NULL)) {
                            tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
                        }

                        if (tmp_args_element_value_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_41);

                            exception_lineno = 161;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_args_element_value_50);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                tmp_args_element_value_51 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[63]);

                if (tmp_args_element_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_args_element_value_51 == NULL)) {
                            tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                        }

                        if (tmp_args_element_value_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_41);
                            Py_DECREF(tmp_args_element_value_50);

                            exception_lineno = 161;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_args_element_value_51);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                tmp_args_element_value_52 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[159]);

                if (tmp_args_element_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[159]);

                        if (unlikely(tmp_args_element_value_52 == NULL)) {
                            tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
                        }

                        if (tmp_args_element_value_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_41);
                            Py_DECREF(tmp_args_element_value_50);
                            Py_DECREF(tmp_args_element_value_51);

                            exception_lineno = 161;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_args_element_value_52);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 161;
                {
                    PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
                    tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
                }

                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                if (tmp_tuple_element_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_46);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_list_element_7);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_tuple_element_47;
                PyObject *tmp_tuple_element_48;
                PyObject *tmp_tuple_element_49;
                PyObject *tmp_tuple_element_50;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_7);
                tmp_tuple_element_47 = mod_consts[35];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_42;
                    PyObject *tmp_expression_value_77;
                    PyObject *tmp_args_element_value_53;
                    PyObject *tmp_args_element_value_54;
                    PyObject *tmp_args_element_value_55;
                    PyObject *tmp_called_value_43;
                    PyObject *tmp_expression_value_78;
                    PyObject *tmp_args_element_value_56;
                    PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_47);
                    tmp_expression_value_77 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[90]);

                    if (tmp_expression_value_77 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_77 == NULL)) {
                                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_77 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 163;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_expression_value_77);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_77);
                    if (tmp_called_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    tmp_args_element_value_53 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[104]);

                    if (tmp_args_element_value_53 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[104]);

                            if (unlikely(tmp_args_element_value_53 == NULL)) {
                                tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
                            }

                            if (tmp_args_element_value_53 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_42);

                                exception_lineno = 163;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_args_element_value_53);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_args_element_value_54 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[110]);

                    if (tmp_args_element_value_54 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[110]);

                            if (unlikely(tmp_args_element_value_54 == NULL)) {
                                tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                            }

                            if (tmp_args_element_value_54 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_42);
                                Py_DECREF(tmp_args_element_value_53);

                                exception_lineno = 163;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_args_element_value_54);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_expression_value_78 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[125]);

                    if (tmp_expression_value_78 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[125]);

                            if (unlikely(tmp_expression_value_78 == NULL)) {
                                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
                            }

                            if (tmp_expression_value_78 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_42);
                                Py_DECREF(tmp_args_element_value_53);
                                Py_DECREF(tmp_args_element_value_54);

                                exception_lineno = 163;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_expression_value_78);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[148]);
                    Py_DECREF(tmp_expression_value_78);
                    if (tmp_called_value_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);

                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    tmp_args_element_value_56 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[34]);

                    if (tmp_args_element_value_56 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[34]);

                            if (unlikely(tmp_args_element_value_56 == NULL)) {
                                tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
                            }

                            if (tmp_args_element_value_56 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_42);
                                Py_DECREF(tmp_args_element_value_53);
                                Py_DECREF(tmp_args_element_value_54);
                                Py_DECREF(tmp_called_value_43);

                                exception_lineno = 163;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_args_element_value_56);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 163;
                    tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_56);
                    Py_DECREF(tmp_called_value_43);
                    Py_DECREF(tmp_args_element_value_56);
                    if (tmp_args_element_value_55 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);

                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 163;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
                        tmp_tuple_element_47 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_42, call_args);
                    }

                    Py_DECREF(tmp_called_value_42);
                    Py_DECREF(tmp_args_element_value_53);
                    Py_DECREF(tmp_args_element_value_54);
                    Py_DECREF(tmp_args_element_value_55);
                    if (tmp_tuple_element_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_47);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_7);
                tmp_tuple_element_48 = mod_consts[175];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_44;
                    PyObject *tmp_expression_value_79;
                    PyObject *tmp_args_element_value_57;
                    PyObject *tmp_args_element_value_58;
                    PyObject *tmp_called_value_45;
                    PyObject *tmp_args_element_value_59;
                    PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_48);
                    tmp_expression_value_79 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[90]);

                    if (tmp_expression_value_79 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_79 == NULL)) {
                                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_79 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 165;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_expression_value_79);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_79);
                    if (tmp_called_value_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    tmp_args_element_value_57 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[160]);

                    if (tmp_args_element_value_57 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[160]);

                            if (unlikely(tmp_args_element_value_57 == NULL)) {
                                tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
                            }

                            if (tmp_args_element_value_57 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_44);

                                exception_lineno = 165;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_args_element_value_57);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_called_value_45 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[148]);

                    if (tmp_called_value_45 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_45 == NULL)) {
                                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_45 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_44);
                                Py_DECREF(tmp_args_element_value_57);

                                exception_lineno = 165;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_called_value_45);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_args_element_value_59 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[34]);

                    if (tmp_args_element_value_59 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[34]);

                            if (unlikely(tmp_args_element_value_59 == NULL)) {
                                tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
                            }

                            if (tmp_args_element_value_59 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_44);
                                Py_DECREF(tmp_args_element_value_57);
                                Py_DECREF(tmp_called_value_45);

                                exception_lineno = 165;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_args_element_value_59);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 165;
                    tmp_args_element_value_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_59);
                    Py_DECREF(tmp_called_value_45);
                    Py_DECREF(tmp_args_element_value_59);
                    if (tmp_args_element_value_58 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);
                        Py_DECREF(tmp_args_element_value_57);

                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 165;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
                        tmp_tuple_element_48 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_44, call_args);
                    }

                    Py_DECREF(tmp_called_value_44);
                    Py_DECREF(tmp_args_element_value_57);
                    Py_DECREF(tmp_args_element_value_58);
                    if (tmp_tuple_element_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_48);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_7);
                tmp_tuple_element_49 = mod_consts[33];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_46;
                    PyObject *tmp_expression_value_80;
                    PyObject *tmp_args_element_value_60;
                    PyObject *tmp_called_value_47;
                    PyObject *tmp_args_element_value_61;
                    PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_49);
                    tmp_expression_value_80 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[90]);

                    if (tmp_expression_value_80 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_expression_value_80 == NULL)) {
                                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_expression_value_80 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_29;
                            }
                            Py_INCREF(tmp_expression_value_80);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[147]);
                    Py_DECREF(tmp_expression_value_80);
                    if (tmp_called_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    tmp_called_value_47 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[148]);

                    if (tmp_called_value_47 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[148]);

                            if (unlikely(tmp_called_value_47 == NULL)) {
                                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                            }

                            if (tmp_called_value_47 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_46);

                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_29;
                            }
                            Py_INCREF(tmp_called_value_47);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    tmp_args_element_value_61 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[156]);

                    if (tmp_args_element_value_61 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[156]);

                            if (unlikely(tmp_args_element_value_61 == NULL)) {
                                tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
                            }

                            if (tmp_args_element_value_61 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_46);
                                Py_DECREF(tmp_called_value_47);

                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_29;
                            }
                            Py_INCREF(tmp_args_element_value_61);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 167;
                    tmp_args_element_value_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_61);
                    Py_DECREF(tmp_called_value_47);
                    Py_DECREF(tmp_args_element_value_61);
                    if (tmp_args_element_value_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 167;
                    tmp_tuple_element_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_60);
                    Py_DECREF(tmp_called_value_46);
                    Py_DECREF(tmp_args_element_value_60);
                    if (tmp_tuple_element_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_49);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_7);
                tmp_tuple_element_50 = mod_consts[176];
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_8;
                    PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_50);
                    tmp_called_instance_8 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[90]);

                    if (tmp_called_instance_8 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[90]);

                            if (unlikely(tmp_called_instance_8 == NULL)) {
                                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                            }

                            if (tmp_called_instance_8 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 169;
                                type_description_2 = "o";
                                goto tuple_build_exception_30;
                            }
                            Py_INCREF(tmp_called_instance_8);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame.f_lineno = 169;
                    tmp_tuple_element_50 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[147]);
                    Py_DECREF(tmp_called_instance_8);
                    if (tmp_tuple_element_50 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_50);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_list_element_7);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c1e17eb4f33dbc370247afc8e8e7936e_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c1e17eb4f33dbc370247afc8e8e7936e_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c1e17eb4f33dbc370247afc8e8e7936e_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c1e17eb4f33dbc370247afc8e8e7936e_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_c1e17eb4f33dbc370247afc8e8e7936e_8);

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


                exception_lineno = 158;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_21;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_48 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_51 = mod_consts[21];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_51 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 158;
            tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_90;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_89 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_89);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158);
        locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158);
        locals_pyglet$media$devices$win32$$$class__7_IMMDeviceEnumerator_158 = NULL;
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
        exception_lineno = 158;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_89);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_expression_value_81;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[177]);
        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        tmp_assign_source_91 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_91, 0, tmp_tuple_element_52);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_92 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

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
        tmp_expression_value_82 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[18];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_82, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_94;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_83;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_83 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_83, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

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
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_84 = tmp_class_creation_8__metaclass;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[127]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        tmp_tuple_element_53 = mod_consts[74];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_53 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 173;
        tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_95;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_85;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_85 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_85, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

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
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_86 = tmp_class_creation_8__metaclass;
        tmp_name_value_14 = mod_consts[131];
        tmp_default_value_8 = mod_consts[132];
        tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_86, tmp_name_value_14, tmp_default_value_8);
        if (tmp_tuple_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_87;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_87 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_87 == NULL));
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[131]);
            Py_DECREF(tmp_expression_value_87);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 173;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_96;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_97;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_24;
        }
        frame_5676362b4a92c7234952fe3ae2e934e8_9 = MAKE_CLASS_FRAME(tstate, codeobj_5676362b4a92c7234952fe3ae2e934e8, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5676362b4a92c7234952fe3ae2e934e8_9);
        assert(Py_REFCNT(frame_5676362b4a92c7234952fe3ae2e934e8_9) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            tmp_dict_key_1 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[114]);

            if (tmp_dict_key_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_dict_key_1 == NULL)) {
                        tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
                    }

                    if (tmp_dict_key_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_dict_key_1);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_expression_value_89 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[99]);

            if (tmp_expression_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

                    if (unlikely(tmp_expression_value_89 == NULL)) {
                        tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                    }

                    if (tmp_expression_value_89 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_dict_key_1);

                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_89);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[178]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[179]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_dictset_value = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_90;
                PyObject *tmp_expression_value_91;
                PyObject *tmp_expression_value_92;
                PyObject *tmp_expression_value_93;
                PyObject *tmp_expression_value_94;
                PyObject *tmp_expression_value_95;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[115]);

                if (tmp_dict_key_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[115]);

                        if (unlikely(tmp_dict_key_1 == NULL)) {
                            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
                        }

                        if (tmp_dict_key_1 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 176;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_key_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_91 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[99]);

                if (tmp_expression_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

                        if (unlikely(tmp_expression_value_91 == NULL)) {
                            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                        }

                        if (tmp_expression_value_91 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 176;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_91);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[178]);
                Py_DECREF(tmp_expression_value_91);
                if (tmp_expression_value_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[180]);
                Py_DECREF(tmp_expression_value_90);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[117]);

                if (tmp_dict_key_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[117]);

                        if (unlikely(tmp_dict_key_1 == NULL)) {
                            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
                        }

                        if (tmp_dict_key_1 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 177;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_key_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_93 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[99]);

                if (tmp_expression_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

                        if (unlikely(tmp_expression_value_93 == NULL)) {
                            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                        }

                        if (tmp_expression_value_93 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 177;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_93);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[178]);
                Py_DECREF(tmp_expression_value_93);
                if (tmp_expression_value_92 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 177;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[181]);
                Py_DECREF(tmp_expression_value_92);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 177;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[119]);

                if (tmp_dict_key_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_dict_key_1 == NULL)) {
                            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
                        }

                        if (tmp_dict_key_1 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 178;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_key_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_95 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[99]);

                if (tmp_expression_value_95 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

                        if (unlikely(tmp_expression_value_95 == NULL)) {
                            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                        }

                        if (tmp_expression_value_95 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_1);

                            exception_lineno = 178;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_95);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[178]);
                Py_DECREF(tmp_expression_value_95);
                if (tmp_expression_value_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 178;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[182]);
                Py_DECREF(tmp_expression_value_94);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 178;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            tmp_dict_key_2 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[36]);

            if (tmp_dict_key_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[36]);

                    if (unlikely(tmp_dict_key_2 == NULL)) {
                        tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                    }

                    if (tmp_dict_key_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_dict_key_2);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_expression_value_97 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[99]);

            if (tmp_expression_value_97 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

                    if (unlikely(tmp_expression_value_97 == NULL)) {
                        tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                    }

                    if (tmp_expression_value_97 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_dict_key_2);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_97);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[184]);
            Py_DECREF(tmp_expression_value_97);
            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[185]);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_dictset_value = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_98;
                PyObject *tmp_expression_value_99;
                PyObject *tmp_expression_value_100;
                PyObject *tmp_expression_value_101;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[44]);

                if (tmp_dict_key_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_dict_key_2 == NULL)) {
                            tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                        }

                        if (tmp_dict_key_2 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 183;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_key_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_99 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[99]);

                if (tmp_expression_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

                        if (unlikely(tmp_expression_value_99 == NULL)) {
                            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                        }

                        if (tmp_expression_value_99 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_2);

                            exception_lineno = 183;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_99);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[184]);
                Py_DECREF(tmp_expression_value_99);
                if (tmp_expression_value_98 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 183;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[186]);
                Py_DECREF(tmp_expression_value_98);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 183;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 183;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[107]);

                if (tmp_dict_key_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_key_2 == NULL)) {
                            tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
                        }

                        if (tmp_dict_key_2 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 184;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_key_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_101 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[99]);

                if (tmp_expression_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

                        if (unlikely(tmp_expression_value_101 == NULL)) {
                            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                        }

                        if (tmp_expression_value_101 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_dict_key_2);

                            exception_lineno = 184;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_101);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[184]);
                Py_DECREF(tmp_expression_value_101);
                if (tmp_expression_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[187]);
                Py_DECREF(tmp_expression_value_100);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[188], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5676362b4a92c7234952fe3ae2e934e8_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5676362b4a92c7234952fe3ae2e934e8_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5676362b4a92c7234952fe3ae2e934e8_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5676362b4a92c7234952fe3ae2e934e8_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_5676362b4a92c7234952fe3ae2e934e8_9);

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


                exception_lineno = 173;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_24;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_50 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_55 = mod_consts[74];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_55 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 173;
            tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_98;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_97 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_97);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173);
        locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173);
        locals_pyglet$media$devices$win32$$$class__8_Win32AudioDevice_173 = NULL;
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
        exception_lineno = 173;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_97);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_expression_value_102;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[189]);
        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        tmp_assign_source_99 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_99, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_100 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

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
        tmp_expression_value_103 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[18];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_102 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_104 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts[127]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

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
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_105 = tmp_class_creation_9__metaclass;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[127]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        tmp_tuple_element_57 = mod_consts[190];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_57 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 188;
        tmp_assign_source_103 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_103;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_106;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_106 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts[129]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

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
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[130];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_107 = tmp_class_creation_9__metaclass;
        tmp_name_value_15 = mod_consts[131];
        tmp_default_value_9 = mod_consts[132];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_15, tmp_default_value_9);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_108 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[131]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 188;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_104;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_105;
        outline_8_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_27;
        }
        frame_f5df5eb658d749f67329f67ebf14d5bd_10 = MAKE_CLASS_FRAME(tstate, codeobj_f5df5eb658d749f67329f67ebf14d5bd, module_pyglet$media$devices$win32, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f5df5eb658d749f67329f67ebf14d5bd_10);
        assert(Py_REFCNT(frame_f5df5eb658d749f67329f67ebf14d5bd_10) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_2[1];

            tmp_closure_2[0] = outline_8_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__8___init__(tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__9_get_default_output();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[192], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__10_get_default_input();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[194], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__11_get_cached_device();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_59;
            tmp_tuple_element_59 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[114]);

            if (tmp_tuple_element_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_tuple_element_59 == NULL)) {
                        tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
                    }

                    if (tmp_tuple_element_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 242;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_tuple_element_59);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_59);


            tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__12_get_output_devices(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_60;
            tmp_tuple_element_60 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[114]);

            if (tmp_tuple_element_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_tuple_element_60 == NULL)) {
                        tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
                    }

                    if (tmp_tuple_element_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_tuple_element_60);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_defaults_2 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_60);


            tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__13_get_input_devices(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[199], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__14_get_all_devices();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[201], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__15__query_all_devices();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[29], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__16_get_device_info();

        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[38], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_2 = "c";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_61;
            tmp_tuple_element_61 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[36]);

            if (tmp_tuple_element_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[36]);

                    if (unlikely(tmp_tuple_element_61 == NULL)) {
                        tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                    }

                    if (tmp_tuple_element_61 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_tuple_element_61);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_defaults_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_61);
            tmp_tuple_element_61 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[114]);

            if (tmp_tuple_element_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_tuple_element_61 == NULL)) {
                        tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
                    }

                    if (tmp_tuple_element_61 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_2 = "c";
                        goto tuple_build_exception_33;
                    }
                    Py_INCREF(tmp_tuple_element_61);
                } else {
                    goto tuple_build_exception_33;
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_3, 1, tmp_tuple_element_61);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_defaults_3);
            goto frame_exception_exit_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;


            tmp_dictset_value = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__17_get_devices(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_62;
            tmp_called_value_52 = PyObject_GetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[206]);

            if (tmp_called_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[206]);

                    if (unlikely(tmp_called_value_52 == NULL)) {
                        tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[206]);
                    }

                    if (tmp_called_value_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_2 = "c";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_value_52);
                } else {
                    goto frame_exception_exit_10;
                }
            }



            tmp_args_element_value_62 = MAKE_FUNCTION_pyglet$media$devices$win32$$$function__18_get_pkey_value();

            frame_f5df5eb658d749f67329f67ebf14d5bd_10->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_62);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_62);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f5df5eb658d749f67329f67ebf14d5bd_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f5df5eb658d749f67329f67ebf14d5bd_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f5df5eb658d749f67329f67ebf14d5bd_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f5df5eb658d749f67329f67ebf14d5bd_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_f5df5eb658d749f67329f67ebf14d5bd_10);

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


                exception_lineno = 188;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_27;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_53 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_62 = mod_consts[190];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_62 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_62);
            tmp_tuple_element_62 = locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_2d33499d63ee036cd89250e3072b6f70->m_frame.f_lineno = 188;
            tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_27;
            }
            assert(Nuitka_Cell_GET(outline_8_var___class__) == NULL);
            PyCell_SET(outline_8_var___class__, tmp_assign_source_106);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_8_var___class__));
        tmp_assign_source_105 = Nuitka_Cell_GET(outline_8_var___class__);
        Py_INCREF(tmp_assign_source_105);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188);
        locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188 = NULL;
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

        Py_DECREF(locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188);
        locals_pyglet$media$devices$win32$$$class__9_Win32AudioDeviceManager_188 = NULL;
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
        exception_lineno = 188;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_105);
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_10;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d33499d63ee036cd89250e3072b6f70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d33499d63ee036cd89250e3072b6f70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d33499d63ee036cd89250e3072b6f70, exception_lineno);
    }



    assertFrameObject(frame_2d33499d63ee036cd89250e3072b6f70);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_10:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.media.devices.win32", false);

    Py_INCREF(module_pyglet$media$devices$win32);
    return module_pyglet$media$devices$win32;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$devices$win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$media$devices$win32", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
