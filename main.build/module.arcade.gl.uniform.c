/* Generated code for Python module 'arcade.gl.uniform'
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

/* The "module_arcade$gl$uniform" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_arcade$gl$uniform;
PyDictObject *moduledict_arcade$gl$uniform;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[195];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("arcade.gl.uniform"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 195; i++) {
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
void checkModuleConstants_arcade$gl$uniform(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 195; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d749f7d800d215e792a627785a120495;
static PyCodeObject *codeobj_6061d5f53c15dd0fc79cf29d67693f76;
static PyCodeObject *codeobj_3b80c92128c65742f77f70be8d62e9d1;
static PyCodeObject *codeobj_a9d54c20b068dc81236b81aaa95f367b;
static PyCodeObject *codeobj_4faed015c108d8e3a2e383f5f1e06f5f;
static PyCodeObject *codeobj_4e24964e91972cc444099a58c8a81940;
static PyCodeObject *codeobj_f001f8466b3be67e6f45c40de0dc727e;
static PyCodeObject *codeobj_a9e63b0868346127de9262e640fd156e;
static PyCodeObject *codeobj_d0dd0e14b42cfc9fcf2814fa06de142d;
static PyCodeObject *codeobj_b5479219722f23a82ad8a9f626a8783b;
static PyCodeObject *codeobj_55603b63646cc2649952a12deaf42a3e;
static PyCodeObject *codeobj_3bdb7acada7f677e18ba7298aac09e03;
static PyCodeObject *codeobj_a7a635a3029b3ac7c008c27dc4f2ef99;
static PyCodeObject *codeobj_9ac1544e0bc00feb3e9378e39420b22f;
static PyCodeObject *codeobj_71c571bb1f5bde55d45bc8efeef56adb;
static PyCodeObject *codeobj_2c4a5754ce6fda91eaacbf9a6d7b6e02;
static PyCodeObject *codeobj_eb9d18dc234ac64418a64a31f8c282ed;
static PyCodeObject *codeobj_7850ea264b60a9138451526be37eb0fb;
static PyCodeObject *codeobj_e35a02c694e25cef26375b4f61649aff;
static PyCodeObject *codeobj_98b7eb87efd2107c0ba199be8bd09c21;
static PyCodeObject *codeobj_1e09a8300bc917fb42ddb2de2fb0b13e;
static PyCodeObject *codeobj_d1ed40925a95b3db5d5184d998447b13;
static PyCodeObject *codeobj_1f15e41c4393e78bc84e2bcb7ff825de;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[179]); CHECK_OBJECT(module_filename_obj);
    codeobj_d749f7d800d215e792a627785a120495 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[180], mod_consts[180], NULL, NULL, 0, 0, 0);
    codeobj_6061d5f53c15dd0fc79cf29d67693f76 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[181], NULL, 0, 0, 0);
    codeobj_3b80c92128c65742f77f70be8d62e9d1 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_NOFREE, mod_consts[168], mod_consts[168], mod_consts[181], NULL, 0, 0, 0);
    codeobj_a9d54c20b068dc81236b81aaa95f367b = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[182], NULL, 5, 0, 0);
    codeobj_4faed015c108d8e3a2e383f5f1e06f5f = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[183], NULL, 6, 0, 0);
    codeobj_4e24964e91972cc444099a58c8a81940 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[184], NULL, 1, 0, 0);
    codeobj_f001f8466b3be67e6f45c40de0dc727e = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[184], NULL, 1, 0, 0);
    codeobj_a9e63b0868346127de9262e640fd156e = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[185], NULL, 5, 0, 0);
    codeobj_d0dd0e14b42cfc9fcf2814fa06de142d = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[186], NULL, 8, 0, 0);
    codeobj_b5479219722f23a82ad8a9f626a8783b = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[187], NULL, 1, 0, 0);
    codeobj_55603b63646cc2649952a12deaf42a3e = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[184], NULL, 1, 0, 0);
    codeobj_3bdb7acada7f677e18ba7298aac09e03 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[188], NULL, 1, 0, 0);
    codeobj_a7a635a3029b3ac7c008c27dc4f2ef99 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[188], NULL, 2, 0, 0);
    codeobj_9ac1544e0bc00feb3e9378e39420b22f = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[184], NULL, 1, 0, 0);
    codeobj_71c571bb1f5bde55d45bc8efeef56adb = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[184], NULL, 1, 0, 0);
    codeobj_2c4a5754ce6fda91eaacbf9a6d7b6e02 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[189], mod_consts[190], 0, 0, 0);
    codeobj_eb9d18dc234ac64418a64a31f8c282ed = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[189], mod_consts[190], 0, 0, 0);
    codeobj_7850ea264b60a9138451526be37eb0fb = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[184], NULL, 1, 0, 0);
    codeobj_e35a02c694e25cef26375b4f61649aff = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[184], NULL, 1, 0, 0);
    codeobj_98b7eb87efd2107c0ba199be8bd09c21 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[191], NULL, 2, 0, 0);
    codeobj_1e09a8300bc917fb42ddb2de2fb0b13e = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], mod_consts[192], mod_consts[193], 1, 0, 0);
    codeobj_d1ed40925a95b3db5d5184d998447b13 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], mod_consts[192], mod_consts[193], 1, 0, 0);
    codeobj_1f15e41c4393e78bc84e2bcb7ff825de = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], mod_consts[194], mod_consts[193], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__10___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__11_binding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__12_binding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__13_getter();


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__14_setter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__15___str__();


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__1___init__();


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__2_location(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__3_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__4_array_length(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__5_components(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__6__setup_getters_and_setters();


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func();


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func$$$function__1_getter_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func$$$function__2_getter_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func();


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__1_setter_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__2_setter_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__3_setter_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__9___repr__();


// The module function definitions.
static PyObject *impl_arcade$gl$uniform$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_program_id = python_pars[1];
    PyObject *par_location = python_pars[2];
    PyObject *par_name = python_pars[3];
    PyObject *par_data_type = python_pars[4];
    PyObject *par_array_length = python_pars[5];
    struct Nuitka_FrameObject *frame_4faed015c108d8e3a2e383f5f1e06f5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4faed015c108d8e3a2e383f5f1e06f5f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4faed015c108d8e3a2e383f5f1e06f5f)) {
        Py_XDECREF(cache_frame_4faed015c108d8e3a2e383f5f1e06f5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4faed015c108d8e3a2e383f5f1e06f5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4faed015c108d8e3a2e383f5f1e06f5f = MAKE_FUNCTION_FRAME(tstate, codeobj_4faed015c108d8e3a2e383f5f1e06f5f, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4faed015c108d8e3a2e383f5f1e06f5f->m_type_description == NULL);
    frame_4faed015c108d8e3a2e383f5f1e06f5f = cache_frame_4faed015c108d8e3a2e383f5f1e06f5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4faed015c108d8e3a2e383f5f1e06f5f);
    assert(Py_REFCNT(frame_4faed015c108d8e3a2e383f5f1e06f5f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_program_id);
        tmp_assattr_value_1 = par_program_id;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_location);
        tmp_assattr_value_2 = par_location;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_3 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_data_type);
        tmp_assattr_value_4 = par_data_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_array_length);
        tmp_assattr_value_5 = par_array_length;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[6], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4faed015c108d8e3a2e383f5f1e06f5f->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[7]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_4faed015c108d8e3a2e383f5f1e06f5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4faed015c108d8e3a2e383f5f1e06f5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4faed015c108d8e3a2e383f5f1e06f5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4faed015c108d8e3a2e383f5f1e06f5f,
        type_description_1,
        par_self,
        par_program_id,
        par_location,
        par_name,
        par_data_type,
        par_array_length
    );


    // Release cached frame if used for exception.
    if (frame_4faed015c108d8e3a2e383f5f1e06f5f == cache_frame_4faed015c108d8e3a2e383f5f1e06f5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4faed015c108d8e3a2e383f5f1e06f5f);
        cache_frame_4faed015c108d8e3a2e383f5f1e06f5f = NULL;
    }

    assertFrameObject(frame_4faed015c108d8e3a2e383f5f1e06f5f);

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
    CHECK_OBJECT(par_program_id);
    Py_DECREF(par_program_id);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_data_type);
    Py_DECREF(par_data_type);
    CHECK_OBJECT(par_array_length);
    Py_DECREF(par_array_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_program_id);
    Py_DECREF(par_program_id);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_data_type);
    Py_DECREF(par_data_type);
    CHECK_OBJECT(par_array_length);
    Py_DECREF(par_array_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__2_location(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7850ea264b60a9138451526be37eb0fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7850ea264b60a9138451526be37eb0fb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7850ea264b60a9138451526be37eb0fb)) {
        Py_XDECREF(cache_frame_7850ea264b60a9138451526be37eb0fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7850ea264b60a9138451526be37eb0fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7850ea264b60a9138451526be37eb0fb = MAKE_FUNCTION_FRAME(tstate, codeobj_7850ea264b60a9138451526be37eb0fb, module_arcade$gl$uniform, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7850ea264b60a9138451526be37eb0fb->m_type_description == NULL);
    frame_7850ea264b60a9138451526be37eb0fb = cache_frame_7850ea264b60a9138451526be37eb0fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7850ea264b60a9138451526be37eb0fb);
    assert(Py_REFCNT(frame_7850ea264b60a9138451526be37eb0fb) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_7850ea264b60a9138451526be37eb0fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7850ea264b60a9138451526be37eb0fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7850ea264b60a9138451526be37eb0fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7850ea264b60a9138451526be37eb0fb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7850ea264b60a9138451526be37eb0fb == cache_frame_7850ea264b60a9138451526be37eb0fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7850ea264b60a9138451526be37eb0fb);
        cache_frame_7850ea264b60a9138451526be37eb0fb = NULL;
    }

    assertFrameObject(frame_7850ea264b60a9138451526be37eb0fb);

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


static PyObject *impl_arcade$gl$uniform$$$function__3_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e35a02c694e25cef26375b4f61649aff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e35a02c694e25cef26375b4f61649aff = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e35a02c694e25cef26375b4f61649aff)) {
        Py_XDECREF(cache_frame_e35a02c694e25cef26375b4f61649aff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e35a02c694e25cef26375b4f61649aff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e35a02c694e25cef26375b4f61649aff = MAKE_FUNCTION_FRAME(tstate, codeobj_e35a02c694e25cef26375b4f61649aff, module_arcade$gl$uniform, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e35a02c694e25cef26375b4f61649aff->m_type_description == NULL);
    frame_e35a02c694e25cef26375b4f61649aff = cache_frame_e35a02c694e25cef26375b4f61649aff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e35a02c694e25cef26375b4f61649aff);
    assert(Py_REFCNT(frame_e35a02c694e25cef26375b4f61649aff) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_e35a02c694e25cef26375b4f61649aff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e35a02c694e25cef26375b4f61649aff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e35a02c694e25cef26375b4f61649aff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e35a02c694e25cef26375b4f61649aff,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e35a02c694e25cef26375b4f61649aff == cache_frame_e35a02c694e25cef26375b4f61649aff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e35a02c694e25cef26375b4f61649aff);
        cache_frame_e35a02c694e25cef26375b4f61649aff = NULL;
    }

    assertFrameObject(frame_e35a02c694e25cef26375b4f61649aff);

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


static PyObject *impl_arcade$gl$uniform$$$function__4_array_length(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_55603b63646cc2649952a12deaf42a3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55603b63646cc2649952a12deaf42a3e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55603b63646cc2649952a12deaf42a3e)) {
        Py_XDECREF(cache_frame_55603b63646cc2649952a12deaf42a3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55603b63646cc2649952a12deaf42a3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55603b63646cc2649952a12deaf42a3e = MAKE_FUNCTION_FRAME(tstate, codeobj_55603b63646cc2649952a12deaf42a3e, module_arcade$gl$uniform, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55603b63646cc2649952a12deaf42a3e->m_type_description == NULL);
    frame_55603b63646cc2649952a12deaf42a3e = cache_frame_55603b63646cc2649952a12deaf42a3e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_55603b63646cc2649952a12deaf42a3e);
    assert(Py_REFCNT(frame_55603b63646cc2649952a12deaf42a3e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
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
        exception_tb = MAKE_TRACEBACK(frame_55603b63646cc2649952a12deaf42a3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55603b63646cc2649952a12deaf42a3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55603b63646cc2649952a12deaf42a3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55603b63646cc2649952a12deaf42a3e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_55603b63646cc2649952a12deaf42a3e == cache_frame_55603b63646cc2649952a12deaf42a3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55603b63646cc2649952a12deaf42a3e);
        cache_frame_55603b63646cc2649952a12deaf42a3e = NULL;
    }

    assertFrameObject(frame_55603b63646cc2649952a12deaf42a3e);

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


static PyObject *impl_arcade$gl$uniform$$$function__5_components(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9ac1544e0bc00feb3e9378e39420b22f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ac1544e0bc00feb3e9378e39420b22f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ac1544e0bc00feb3e9378e39420b22f)) {
        Py_XDECREF(cache_frame_9ac1544e0bc00feb3e9378e39420b22f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ac1544e0bc00feb3e9378e39420b22f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ac1544e0bc00feb3e9378e39420b22f = MAKE_FUNCTION_FRAME(tstate, codeobj_9ac1544e0bc00feb3e9378e39420b22f, module_arcade$gl$uniform, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ac1544e0bc00feb3e9378e39420b22f->m_type_description == NULL);
    frame_9ac1544e0bc00feb3e9378e39420b22f = cache_frame_9ac1544e0bc00feb3e9378e39420b22f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ac1544e0bc00feb3e9378e39420b22f);
    assert(Py_REFCNT(frame_9ac1544e0bc00feb3e9378e39420b22f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
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
        exception_tb = MAKE_TRACEBACK(frame_9ac1544e0bc00feb3e9378e39420b22f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ac1544e0bc00feb3e9378e39420b22f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ac1544e0bc00feb3e9378e39420b22f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ac1544e0bc00feb3e9378e39420b22f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9ac1544e0bc00feb3e9378e39420b22f == cache_frame_9ac1544e0bc00feb3e9378e39420b22f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ac1544e0bc00feb3e9378e39420b22f);
        cache_frame_9ac1544e0bc00feb3e9378e39420b22f = NULL;
    }

    assertFrameObject(frame_9ac1544e0bc00feb3e9378e39420b22f);

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


static PyObject *impl_arcade$gl$uniform$$$function__6__setup_getters_and_setters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_gl_type = NULL;
    PyObject *var_gl_setter = NULL;
    PyObject *var_length = NULL;
    PyObject *var_count = NULL;
    PyObject *var_gl_getter = NULL;
    PyObject *var_is_matrix = NULL;
    PyObject *var_c_array = NULL;
    PyObject *var_ptr = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b5479219722f23a82ad8a9f626a8783b;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_b5479219722f23a82ad8a9f626a8783b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b5479219722f23a82ad8a9f626a8783b)) {
        Py_XDECREF(cache_frame_b5479219722f23a82ad8a9f626a8783b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5479219722f23a82ad8a9f626a8783b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5479219722f23a82ad8a9f626a8783b = MAKE_FUNCTION_FRAME(tstate, codeobj_b5479219722f23a82ad8a9f626a8783b, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5479219722f23a82ad8a9f626a8783b->m_type_description == NULL);
    frame_b5479219722f23a82ad8a9f626a8783b = cache_frame_b5479219722f23a82ad8a9f626a8783b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b5479219722f23a82ad8a9f626a8783b);
    assert(Py_REFCNT(frame_b5479219722f23a82ad8a9f626a8783b) == 2);

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 139;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 4);
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
            exception_lineno = 139;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 4);
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
            exception_lineno = 139;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 4);
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
            exception_lineno = 139;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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
                    exception_lineno = 139;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 139;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_gl_type == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_gl_type = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_gl_setter == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_gl_setter = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_length == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_length = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_count == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_count = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_length);
        tmp_assattr_value_1 = var_length;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooo";
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
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_b5479219722f23a82ad8a9f626a8783b, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_b5479219722f23a82ad8a9f626a8783b, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_1 = mod_consts[15];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[16];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[16], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        frame_b5479219722f23a82ad8a9f626a8783b->m_frame.f_lineno = 142;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 142;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 138;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b5479219722f23a82ad8a9f626a8783b->m_frame) frame_b5479219722f23a82ad8a9f626a8783b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gl_type);
        tmp_subscript_value_2 = var_gl_type;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gl_getter == NULL);
        var_gl_getter = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[3]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 146;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[19]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 146;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_2);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[20]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_2);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[21]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = (tmp_res == 1) ? Py_True : Py_False;
        assert(var_is_matrix == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_is_matrix = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_length);
        tmp_mult_expr_left_1 = var_length;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[4]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_length;
            assert(old != NULL);
            var_length = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_gl_type);
        tmp_mult_expr_left_2 = var_gl_type;
        CHECK_OBJECT(var_length);
        tmp_mult_expr_right_2 = var_length;
        tmp_called_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b5479219722f23a82ad8a9f626a8783b->m_frame.f_lineno = 153;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c_array == NULL);
        var_c_array = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_c_array);
        tmp_args_element_value_2 = var_c_array;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gl_type);
        tmp_args_element_value_4 = var_gl_type;
        frame_b5479219722f23a82ad8a9f626a8783b->m_frame.f_lineno = 154;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b5479219722f23a82ad8a9f626a8783b->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ptr == NULL);
        var_ptr = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[25]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[0]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 158;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[1]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 158;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gl_getter);
        tmp_args_element_value_7 = var_gl_getter;
        CHECK_OBJECT(var_c_array);
        tmp_args_element_value_8 = var_c_array;
        CHECK_OBJECT(var_length);
        tmp_args_element_value_9 = var_length;
        frame_b5479219722f23a82ad8a9f626a8783b->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[26], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[1]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gl_setter);
        tmp_args_element_value_11 = var_gl_setter;
        CHECK_OBJECT(var_c_array);
        tmp_args_element_value_12 = var_c_array;
        CHECK_OBJECT(var_length);
        tmp_args_element_value_13 = var_length;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[4]);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 161;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_count);
        tmp_args_element_value_15 = var_count;
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_16 = var_ptr;
        CHECK_OBJECT(var_is_matrix);
        tmp_args_element_value_17 = var_is_matrix;
        frame_b5479219722f23a82ad8a9f626a8783b->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[28], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5479219722f23a82ad8a9f626a8783b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5479219722f23a82ad8a9f626a8783b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5479219722f23a82ad8a9f626a8783b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5479219722f23a82ad8a9f626a8783b,
        type_description_1,
        par_self,
        var_gl_type,
        var_gl_setter,
        var_length,
        var_count,
        var_gl_getter,
        var_is_matrix,
        var_c_array,
        var_ptr
    );


    // Release cached frame if used for exception.
    if (frame_b5479219722f23a82ad8a9f626a8783b == cache_frame_b5479219722f23a82ad8a9f626a8783b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5479219722f23a82ad8a9f626a8783b);
        cache_frame_b5479219722f23a82ad8a9f626a8783b = NULL;
    }

    assertFrameObject(frame_b5479219722f23a82ad8a9f626a8783b);

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
    CHECK_OBJECT(var_gl_type);
    Py_DECREF(var_gl_type);
    var_gl_type = NULL;
    CHECK_OBJECT(var_gl_setter);
    Py_DECREF(var_gl_setter);
    var_gl_setter = NULL;
    CHECK_OBJECT(var_length);
    Py_DECREF(var_length);
    var_length = NULL;
    CHECK_OBJECT(var_count);
    Py_DECREF(var_count);
    var_count = NULL;
    CHECK_OBJECT(var_gl_getter);
    Py_DECREF(var_gl_getter);
    var_gl_getter = NULL;
    CHECK_OBJECT(var_is_matrix);
    Py_DECREF(var_is_matrix);
    var_is_matrix = NULL;
    CHECK_OBJECT(var_c_array);
    Py_DECREF(var_c_array);
    var_c_array = NULL;
    CHECK_OBJECT(var_ptr);
    Py_DECREF(var_ptr);
    var_ptr = NULL;
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

    Py_XDECREF(var_gl_type);
    var_gl_type = NULL;
    Py_XDECREF(var_gl_setter);
    var_gl_setter = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_gl_getter);
    var_gl_getter = NULL;
    Py_XDECREF(var_is_matrix);
    var_is_matrix = NULL;
    Py_XDECREF(var_c_array);
    var_c_array = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
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


static PyObject *impl_arcade$gl$uniform$$$function__7__create_getter_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_program_id = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_location = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_gl_getter = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_c_array = Nuitka_Cell_New1(python_pars[3]);
    PyObject *par_length = python_pars[4];
    PyObject *var_getter_func = NULL;
    struct Nuitka_FrameObject *frame_a9e63b0868346127de9262e640fd156e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9e63b0868346127de9262e640fd156e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a9e63b0868346127de9262e640fd156e)) {
        Py_XDECREF(cache_frame_a9e63b0868346127de9262e640fd156e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9e63b0868346127de9262e640fd156e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9e63b0868346127de9262e640fd156e = MAKE_FUNCTION_FRAME(tstate, codeobj_a9e63b0868346127de9262e640fd156e, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9e63b0868346127de9262e640fd156e->m_type_description == NULL);
    frame_a9e63b0868346127de9262e640fd156e = cache_frame_a9e63b0868346127de9262e640fd156e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a9e63b0868346127de9262e640fd156e);
    assert(Py_REFCNT(frame_a9e63b0868346127de9262e640fd156e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_length);
        tmp_cmp_expr_left_1 = par_length;
        tmp_cmp_expr_right_1 = mod_consts[30];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ccccoo";
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
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_c_array;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_gl_getter;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_location;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_program_id;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_1 = MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func$$$function__1_getter_func(tmp_closure_1);

        assert(var_getter_func == NULL);
        var_getter_func = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_2[4];

        tmp_closure_2[0] = par_c_array;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_gl_getter;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = par_location;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = par_program_id;
        Py_INCREF(tmp_closure_2[3]);

        tmp_assign_source_2 = MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func$$$function__2_getter_func(tmp_closure_2);

        assert(var_getter_func == NULL);
        var_getter_func = tmp_assign_source_2;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9e63b0868346127de9262e640fd156e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9e63b0868346127de9262e640fd156e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9e63b0868346127de9262e640fd156e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9e63b0868346127de9262e640fd156e,
        type_description_1,
        par_program_id,
        par_location,
        par_gl_getter,
        par_c_array,
        par_length,
        var_getter_func
    );


    // Release cached frame if used for exception.
    if (frame_a9e63b0868346127de9262e640fd156e == cache_frame_a9e63b0868346127de9262e640fd156e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9e63b0868346127de9262e640fd156e);
        cache_frame_a9e63b0868346127de9262e640fd156e = NULL;
    }

    assertFrameObject(frame_a9e63b0868346127de9262e640fd156e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_getter_func);
    tmp_return_value = var_getter_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_getter_func);
    Py_DECREF(var_getter_func);
    var_getter_func = NULL;
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
    CHECK_OBJECT(par_program_id);
    Py_DECREF(par_program_id);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    CHECK_OBJECT(par_gl_getter);
    Py_DECREF(par_gl_getter);
    CHECK_OBJECT(par_c_array);
    Py_DECREF(par_c_array);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_program_id);
    Py_DECREF(par_program_id);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    CHECK_OBJECT(par_gl_getter);
    Py_DECREF(par_gl_getter);
    CHECK_OBJECT(par_c_array);
    Py_DECREF(par_c_array);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__7__create_getter_func$$$function__1_getter_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2c4a5754ce6fda91eaacbf9a6d7b6e02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02)) {
        Py_XDECREF(cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02 = MAKE_FUNCTION_FRAME(tstate, codeobj_2c4a5754ce6fda91eaacbf9a6d7b6e02, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02->m_type_description == NULL);
    frame_2c4a5754ce6fda91eaacbf9a6d7b6e02 = cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2c4a5754ce6fda91eaacbf9a6d7b6e02);
    assert(Py_REFCNT(frame_2c4a5754ce6fda91eaacbf9a6d7b6e02) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 171;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 171;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 171;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 171;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_2c4a5754ce6fda91eaacbf9a6d7b6e02->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 172;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_subscript_value_1 = mod_consts[5];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "cccc";
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
        exception_tb = MAKE_TRACEBACK(frame_2c4a5754ce6fda91eaacbf9a6d7b6e02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c4a5754ce6fda91eaacbf9a6d7b6e02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c4a5754ce6fda91eaacbf9a6d7b6e02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c4a5754ce6fda91eaacbf9a6d7b6e02,
        type_description_1,
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2c4a5754ce6fda91eaacbf9a6d7b6e02 == cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02);
        cache_frame_2c4a5754ce6fda91eaacbf9a6d7b6e02 = NULL;
    }

    assertFrameObject(frame_2c4a5754ce6fda91eaacbf9a6d7b6e02);

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


static PyObject *impl_arcade$gl$uniform$$$function__7__create_getter_func$$$function__2_getter_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_eb9d18dc234ac64418a64a31f8c282ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_eb9d18dc234ac64418a64a31f8c282ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb9d18dc234ac64418a64a31f8c282ed)) {
        Py_XDECREF(cache_frame_eb9d18dc234ac64418a64a31f8c282ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb9d18dc234ac64418a64a31f8c282ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb9d18dc234ac64418a64a31f8c282ed = MAKE_FUNCTION_FRAME(tstate, codeobj_eb9d18dc234ac64418a64a31f8c282ed, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb9d18dc234ac64418a64a31f8c282ed->m_type_description == NULL);
    frame_eb9d18dc234ac64418a64a31f8c282ed = cache_frame_eb9d18dc234ac64418a64a31f8c282ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_eb9d18dc234ac64418a64a31f8c282ed);
    assert(Py_REFCNT(frame_eb9d18dc234ac64418a64a31f8c282ed) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 178;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 178;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 178;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 178;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_eb9d18dc234ac64418a64a31f8c282ed->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 179;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "cccc";
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
        exception_tb = MAKE_TRACEBACK(frame_eb9d18dc234ac64418a64a31f8c282ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb9d18dc234ac64418a64a31f8c282ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb9d18dc234ac64418a64a31f8c282ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb9d18dc234ac64418a64a31f8c282ed,
        type_description_1,
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_eb9d18dc234ac64418a64a31f8c282ed == cache_frame_eb9d18dc234ac64418a64a31f8c282ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb9d18dc234ac64418a64a31f8c282ed);
        cache_frame_eb9d18dc234ac64418a64a31f8c282ed = NULL;
    }

    assertFrameObject(frame_eb9d18dc234ac64418a64a31f8c282ed);

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


static PyObject *impl_arcade$gl$uniform$$$function__8__create_setter_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_location = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_gl_setter = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_c_array = Nuitka_Cell_New1(python_pars[2]);
    PyObject *par_length = python_pars[3];
    struct Nuitka_CellObject *par_array_length = Nuitka_Cell_New1(python_pars[4]);
    PyObject *par_count = python_pars[5];
    struct Nuitka_CellObject *par_ptr = Nuitka_Cell_New1(python_pars[6]);
    PyObject *par_is_matrix = python_pars[7];
    PyObject *var_setter_func = NULL;
    struct Nuitka_FrameObject *frame_d0dd0e14b42cfc9fcf2814fa06de142d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d)) {
        Py_XDECREF(cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d = MAKE_FUNCTION_FRAME(tstate, codeobj_d0dd0e14b42cfc9fcf2814fa06de142d, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d->m_type_description == NULL);
    frame_d0dd0e14b42cfc9fcf2814fa06de142d = cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0dd0e14b42cfc9fcf2814fa06de142d);
    assert(Py_REFCNT(frame_d0dd0e14b42cfc9fcf2814fa06de142d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_matrix);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_matrix);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "cccococoo";
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
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[5];

        tmp_closure_1[0] = par_array_length;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_c_array;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_gl_setter;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_location;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_ptr;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_1 = MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__1_setter_func(tmp_closure_1);

        assert(var_setter_func == NULL);
        var_setter_func = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_length);
        tmp_cmp_expr_left_1 = par_length;
        tmp_cmp_expr_right_1 = mod_consts[30];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "cccococoo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "cccococoo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_count);
        tmp_cmp_expr_left_2 = par_count;
        tmp_cmp_expr_right_2 = mod_consts[30];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "cccococoo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_2[5];

        tmp_closure_2[0] = par_array_length;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_c_array;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = par_gl_setter;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = par_location;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = par_ptr;
        Py_INCREF(tmp_closure_2[4]);

        tmp_assign_source_2 = MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__2_setter_func(tmp_closure_2);

        assert(var_setter_func == NULL);
        var_setter_func = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_length);
        tmp_cmp_expr_left_3 = par_length;
        tmp_cmp_expr_right_3 = mod_consts[30];
        tmp_and_left_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "cccococoo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "cccococoo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_count);
        tmp_cmp_expr_left_4 = par_count;
        tmp_cmp_expr_right_4 = mod_consts[30];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "cccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_3[5];

        tmp_closure_3[0] = par_array_length;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = par_c_array;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = par_gl_setter;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = par_location;
        Py_INCREF(tmp_closure_3[3]);
        tmp_closure_3[4] = par_ptr;
        Py_INCREF(tmp_closure_3[4]);

        tmp_assign_source_3 = MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__3_setter_func(tmp_closure_3);

        assert(var_setter_func == NULL);
        var_setter_func = tmp_assign_source_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[45];
        frame_d0dd0e14b42cfc9fcf2814fa06de142d->m_frame.f_lineno = 210;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 210;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccococoo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0dd0e14b42cfc9fcf2814fa06de142d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0dd0e14b42cfc9fcf2814fa06de142d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0dd0e14b42cfc9fcf2814fa06de142d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0dd0e14b42cfc9fcf2814fa06de142d,
        type_description_1,
        par_location,
        par_gl_setter,
        par_c_array,
        par_length,
        par_array_length,
        par_count,
        par_ptr,
        par_is_matrix,
        var_setter_func
    );


    // Release cached frame if used for exception.
    if (frame_d0dd0e14b42cfc9fcf2814fa06de142d == cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d);
        cache_frame_d0dd0e14b42cfc9fcf2814fa06de142d = NULL;
    }

    assertFrameObject(frame_d0dd0e14b42cfc9fcf2814fa06de142d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_setter_func);
    tmp_return_value = var_setter_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_setter_func);
    Py_DECREF(var_setter_func);
    var_setter_func = NULL;
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
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    CHECK_OBJECT(par_gl_setter);
    Py_DECREF(par_gl_setter);
    CHECK_OBJECT(par_c_array);
    Py_DECREF(par_c_array);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    CHECK_OBJECT(par_array_length);
    Py_DECREF(par_array_length);
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);
    CHECK_OBJECT(par_ptr);
    Py_DECREF(par_ptr);
    CHECK_OBJECT(par_is_matrix);
    Py_DECREF(par_is_matrix);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    CHECK_OBJECT(par_gl_setter);
    Py_DECREF(par_gl_setter);
    CHECK_OBJECT(par_c_array);
    Py_DECREF(par_c_array);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    CHECK_OBJECT(par_array_length);
    Py_DECREF(par_array_length);
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);
    CHECK_OBJECT(par_ptr);
    Py_DECREF(par_ptr);
    CHECK_OBJECT(par_is_matrix);
    Py_DECREF(par_is_matrix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__1_setter_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_1e09a8300bc917fb42ddb2de2fb0b13e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e)) {
        Py_XDECREF(cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e = MAKE_FUNCTION_FRAME(tstate, codeobj_1e09a8300bc917fb42ddb2de2fb0b13e, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e->m_type_description == NULL);
    frame_1e09a8300bc917fb42ddb2de2fb0b13e = cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e09a8300bc917fb42ddb2de2fb0b13e);
    assert(Py_REFCNT(frame_1e09a8300bc917fb42ddb2de2fb0b13e) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_ass_subscript_1 = mod_consts[47];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_1e09a8300bc917fb42ddb2de2fb0b13e->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e09a8300bc917fb42ddb2de2fb0b13e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e09a8300bc917fb42ddb2de2fb0b13e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e09a8300bc917fb42ddb2de2fb0b13e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e09a8300bc917fb42ddb2de2fb0b13e,
        type_description_1,
        par_value,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[4]
    );


    // Release cached frame if used for exception.
    if (frame_1e09a8300bc917fb42ddb2de2fb0b13e == cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e);
        cache_frame_1e09a8300bc917fb42ddb2de2fb0b13e = NULL;
    }

    assertFrameObject(frame_1e09a8300bc917fb42ddb2de2fb0b13e);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__2_setter_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_d1ed40925a95b3db5d5184d998447b13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d1ed40925a95b3db5d5184d998447b13 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1ed40925a95b3db5d5184d998447b13)) {
        Py_XDECREF(cache_frame_d1ed40925a95b3db5d5184d998447b13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1ed40925a95b3db5d5184d998447b13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1ed40925a95b3db5d5184d998447b13 = MAKE_FUNCTION_FRAME(tstate, codeobj_d1ed40925a95b3db5d5184d998447b13, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1ed40925a95b3db5d5184d998447b13->m_type_description == NULL);
    frame_d1ed40925a95b3db5d5184d998447b13 = cache_frame_d1ed40925a95b3db5d5184d998447b13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d1ed40925a95b3db5d5184d998447b13);
    assert(Py_REFCNT(frame_d1ed40925a95b3db5d5184d998447b13) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 199;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_ass_subscript_1 = mod_consts[5];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 200;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 200;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 200;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 200;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_d1ed40925a95b3db5d5184d998447b13->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1ed40925a95b3db5d5184d998447b13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1ed40925a95b3db5d5184d998447b13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1ed40925a95b3db5d5184d998447b13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1ed40925a95b3db5d5184d998447b13,
        type_description_1,
        par_value,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[4]
    );


    // Release cached frame if used for exception.
    if (frame_d1ed40925a95b3db5d5184d998447b13 == cache_frame_d1ed40925a95b3db5d5184d998447b13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1ed40925a95b3db5d5184d998447b13);
        cache_frame_d1ed40925a95b3db5d5184d998447b13 = NULL;
    }

    assertFrameObject(frame_d1ed40925a95b3db5d5184d998447b13);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__3_setter_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    struct Nuitka_FrameObject *frame_1f15e41c4393e78bc84e2bcb7ff825de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1f15e41c4393e78bc84e2bcb7ff825de = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1f15e41c4393e78bc84e2bcb7ff825de)) {
        Py_XDECREF(cache_frame_1f15e41c4393e78bc84e2bcb7ff825de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1f15e41c4393e78bc84e2bcb7ff825de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1f15e41c4393e78bc84e2bcb7ff825de = MAKE_FUNCTION_FRAME(tstate, codeobj_1f15e41c4393e78bc84e2bcb7ff825de, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1f15e41c4393e78bc84e2bcb7ff825de->m_type_description == NULL);
    frame_1f15e41c4393e78bc84e2bcb7ff825de = cache_frame_1f15e41c4393e78bc84e2bcb7ff825de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1f15e41c4393e78bc84e2bcb7ff825de);
    assert(Py_REFCNT(frame_1f15e41c4393e78bc84e2bcb7ff825de) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_values);
        tmp_ass_subvalue_1 = par_values;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 206;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_ass_subscript_1 = mod_consts[47];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_1f15e41c4393e78bc84e2bcb7ff825de->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f15e41c4393e78bc84e2bcb7ff825de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f15e41c4393e78bc84e2bcb7ff825de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f15e41c4393e78bc84e2bcb7ff825de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1f15e41c4393e78bc84e2bcb7ff825de,
        type_description_1,
        par_values,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[4]
    );


    // Release cached frame if used for exception.
    if (frame_1f15e41c4393e78bc84e2bcb7ff825de == cache_frame_1f15e41c4393e78bc84e2bcb7ff825de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1f15e41c4393e78bc84e2bcb7ff825de);
        cache_frame_1f15e41c4393e78bc84e2bcb7ff825de = NULL;
    }

    assertFrameObject(frame_1f15e41c4393e78bc84e2bcb7ff825de);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__9___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4e24964e91972cc444099a58c8a81940;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e24964e91972cc444099a58c8a81940 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e24964e91972cc444099a58c8a81940)) {
        Py_XDECREF(cache_frame_4e24964e91972cc444099a58c8a81940);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e24964e91972cc444099a58c8a81940 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e24964e91972cc444099a58c8a81940 = MAKE_FUNCTION_FRAME(tstate, codeobj_4e24964e91972cc444099a58c8a81940, module_arcade$gl$uniform, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e24964e91972cc444099a58c8a81940->m_type_description == NULL);
    frame_4e24964e91972cc444099a58c8a81940 = cache_frame_4e24964e91972cc444099a58c8a81940;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4e24964e91972cc444099a58c8a81940);
    assert(Py_REFCNT(frame_4e24964e91972cc444099a58c8a81940) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[52];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[16];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[16];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[16];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[16], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_4e24964e91972cc444099a58c8a81940, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e24964e91972cc444099a58c8a81940->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e24964e91972cc444099a58c8a81940, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e24964e91972cc444099a58c8a81940,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4e24964e91972cc444099a58c8a81940 == cache_frame_4e24964e91972cc444099a58c8a81940) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e24964e91972cc444099a58c8a81940);
        cache_frame_4e24964e91972cc444099a58c8a81940 = NULL;
    }

    assertFrameObject(frame_4e24964e91972cc444099a58c8a81940);

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


static PyObject *impl_arcade$gl$uniform$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_glo = python_pars[1];
    PyObject *par_index = python_pars[2];
    PyObject *par_size = python_pars[3];
    PyObject *par_name = python_pars[4];
    struct Nuitka_FrameObject *frame_a9d54c20b068dc81236b81aaa95f367b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9d54c20b068dc81236b81aaa95f367b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a9d54c20b068dc81236b81aaa95f367b)) {
        Py_XDECREF(cache_frame_a9d54c20b068dc81236b81aaa95f367b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9d54c20b068dc81236b81aaa95f367b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9d54c20b068dc81236b81aaa95f367b = MAKE_FUNCTION_FRAME(tstate, codeobj_a9d54c20b068dc81236b81aaa95f367b, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9d54c20b068dc81236b81aaa95f367b->m_type_description == NULL);
    frame_a9d54c20b068dc81236b81aaa95f367b = cache_frame_a9d54c20b068dc81236b81aaa95f367b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a9d54c20b068dc81236b81aaa95f367b);
    assert(Py_REFCNT(frame_a9d54c20b068dc81236b81aaa95f367b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_glo);
        tmp_assattr_value_1 = par_glo;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_index);
        tmp_assattr_value_2 = par_index;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[57], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_size);
        tmp_assattr_value_3 = par_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[58], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_4 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[59], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9d54c20b068dc81236b81aaa95f367b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9d54c20b068dc81236b81aaa95f367b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9d54c20b068dc81236b81aaa95f367b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9d54c20b068dc81236b81aaa95f367b,
        type_description_1,
        par_self,
        par_glo,
        par_index,
        par_size,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_a9d54c20b068dc81236b81aaa95f367b == cache_frame_a9d54c20b068dc81236b81aaa95f367b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9d54c20b068dc81236b81aaa95f367b);
        cache_frame_a9d54c20b068dc81236b81aaa95f367b = NULL;
    }

    assertFrameObject(frame_a9d54c20b068dc81236b81aaa95f367b);

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
    CHECK_OBJECT(par_glo);
    Py_DECREF(par_glo);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_glo);
    Py_DECREF(par_glo);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__11_binding(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_binding = NULL;
    struct Nuitka_FrameObject *frame_3bdb7acada7f677e18ba7298aac09e03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3bdb7acada7f677e18ba7298aac09e03 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3bdb7acada7f677e18ba7298aac09e03)) {
        Py_XDECREF(cache_frame_3bdb7acada7f677e18ba7298aac09e03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3bdb7acada7f677e18ba7298aac09e03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3bdb7acada7f677e18ba7298aac09e03 = MAKE_FUNCTION_FRAME(tstate, codeobj_3bdb7acada7f677e18ba7298aac09e03, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3bdb7acada7f677e18ba7298aac09e03->m_type_description == NULL);
    frame_3bdb7acada7f677e18ba7298aac09e03 = cache_frame_3bdb7acada7f677e18ba7298aac09e03;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3bdb7acada7f677e18ba7298aac09e03);
    assert(Py_REFCNT(frame_3bdb7acada7f677e18ba7298aac09e03) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3bdb7acada7f677e18ba7298aac09e03->m_frame.f_lineno = 233;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[60]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_binding == NULL);
        var_binding = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[56]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[57]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[62]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_binding);
        tmp_args_element_value_4 = var_binding;
        frame_3bdb7acada7f677e18ba7298aac09e03->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_binding);
        tmp_expression_value_5 = var_binding;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
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
        exception_tb = MAKE_TRACEBACK(frame_3bdb7acada7f677e18ba7298aac09e03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3bdb7acada7f677e18ba7298aac09e03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3bdb7acada7f677e18ba7298aac09e03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3bdb7acada7f677e18ba7298aac09e03,
        type_description_1,
        par_self,
        var_binding
    );


    // Release cached frame if used for exception.
    if (frame_3bdb7acada7f677e18ba7298aac09e03 == cache_frame_3bdb7acada7f677e18ba7298aac09e03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3bdb7acada7f677e18ba7298aac09e03);
        cache_frame_3bdb7acada7f677e18ba7298aac09e03 = NULL;
    }

    assertFrameObject(frame_3bdb7acada7f677e18ba7298aac09e03);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_binding);
    Py_DECREF(var_binding);
    var_binding = NULL;
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

    Py_XDECREF(var_binding);
    var_binding = NULL;
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


static PyObject *impl_arcade$gl$uniform$$$function__12_binding(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_binding = python_pars[1];
    struct Nuitka_FrameObject *frame_a7a635a3029b3ac7c008c27dc4f2ef99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99)) {
        Py_XDECREF(cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99 = MAKE_FUNCTION_FRAME(tstate, codeobj_a7a635a3029b3ac7c008c27dc4f2ef99, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99->m_type_description == NULL);
    frame_a7a635a3029b3ac7c008c27dc4f2ef99 = cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a7a635a3029b3ac7c008c27dc4f2ef99);
    assert(Py_REFCNT(frame_a7a635a3029b3ac7c008c27dc4f2ef99) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[65]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[56]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[57]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_binding);
        tmp_args_element_value_3 = par_binding;
        frame_a7a635a3029b3ac7c008c27dc4f2ef99->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7a635a3029b3ac7c008c27dc4f2ef99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7a635a3029b3ac7c008c27dc4f2ef99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7a635a3029b3ac7c008c27dc4f2ef99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7a635a3029b3ac7c008c27dc4f2ef99,
        type_description_1,
        par_self,
        par_binding
    );


    // Release cached frame if used for exception.
    if (frame_a7a635a3029b3ac7c008c27dc4f2ef99 == cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99);
        cache_frame_a7a635a3029b3ac7c008c27dc4f2ef99 = NULL;
    }

    assertFrameObject(frame_a7a635a3029b3ac7c008c27dc4f2ef99);

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
    CHECK_OBJECT(par_binding);
    Py_DECREF(par_binding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_binding);
    Py_DECREF(par_binding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__13_getter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_arcade$gl$uniform$$$function__14_setter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_98b7eb87efd2107c0ba199be8bd09c21;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_98b7eb87efd2107c0ba199be8bd09c21 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_98b7eb87efd2107c0ba199be8bd09c21)) {
        Py_XDECREF(cache_frame_98b7eb87efd2107c0ba199be8bd09c21);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98b7eb87efd2107c0ba199be8bd09c21 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98b7eb87efd2107c0ba199be8bd09c21 = MAKE_FUNCTION_FRAME(tstate, codeobj_98b7eb87efd2107c0ba199be8bd09c21, module_arcade$gl$uniform, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_98b7eb87efd2107c0ba199be8bd09c21->m_type_description == NULL);
    frame_98b7eb87efd2107c0ba199be8bd09c21 = cache_frame_98b7eb87efd2107c0ba199be8bd09c21;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_98b7eb87efd2107c0ba199be8bd09c21);
    assert(Py_REFCNT(frame_98b7eb87efd2107c0ba199be8bd09c21) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[66], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_98b7eb87efd2107c0ba199be8bd09c21, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98b7eb87efd2107c0ba199be8bd09c21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98b7eb87efd2107c0ba199be8bd09c21, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98b7eb87efd2107c0ba199be8bd09c21,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_98b7eb87efd2107c0ba199be8bd09c21 == cache_frame_98b7eb87efd2107c0ba199be8bd09c21) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_98b7eb87efd2107c0ba199be8bd09c21);
        cache_frame_98b7eb87efd2107c0ba199be8bd09c21 = NULL;
    }

    assertFrameObject(frame_98b7eb87efd2107c0ba199be8bd09c21);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$uniform$$$function__15___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f001f8466b3be67e6f45c40de0dc727e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f001f8466b3be67e6f45c40de0dc727e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f001f8466b3be67e6f45c40de0dc727e)) {
        Py_XDECREF(cache_frame_f001f8466b3be67e6f45c40de0dc727e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f001f8466b3be67e6f45c40de0dc727e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f001f8466b3be67e6f45c40de0dc727e = MAKE_FUNCTION_FRAME(tstate, codeobj_f001f8466b3be67e6f45c40de0dc727e, module_arcade$gl$uniform, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f001f8466b3be67e6f45c40de0dc727e->m_type_description == NULL);
    frame_f001f8466b3be67e6f45c40de0dc727e = cache_frame_f001f8466b3be67e6f45c40de0dc727e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f001f8466b3be67e6f45c40de0dc727e);
    assert(Py_REFCNT(frame_f001f8466b3be67e6f45c40de0dc727e) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[67];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[59]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[16];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[16];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[69];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[58]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[16];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[16], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_f001f8466b3be67e6f45c40de0dc727e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f001f8466b3be67e6f45c40de0dc727e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f001f8466b3be67e6f45c40de0dc727e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f001f8466b3be67e6f45c40de0dc727e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f001f8466b3be67e6f45c40de0dc727e == cache_frame_f001f8466b3be67e6f45c40de0dc727e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f001f8466b3be67e6f45c40de0dc727e);
        cache_frame_f001f8466b3be67e6f45c40de0dc727e = NULL;
    }

    assertFrameObject(frame_f001f8466b3be67e6f45c40de0dc727e);

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



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__10___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__10___init__,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_a9d54c20b068dc81236b81aaa95f367b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__11_binding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__11_binding,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_3bdb7acada7f677e18ba7298aac09e03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__12_binding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__12_binding,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_a7a635a3029b3ac7c008c27dc4f2ef99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__13_getter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__13_getter,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_71c571bb1f5bde55d45bc8efeef56adb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__14_setter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__14_setter,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_98b7eb87efd2107c0ba199be8bd09c21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__15___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__15___str__,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_f001f8466b3be67e6f45c40de0dc727e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__1___init__,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_4faed015c108d8e3a2e383f5f1e06f5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__2_location(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__2_location,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_7850ea264b60a9138451526be37eb0fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__3_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__3_name,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_e35a02c694e25cef26375b4f61649aff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__4_array_length(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__4_array_length,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_55603b63646cc2649952a12deaf42a3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__5_components(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__5_components,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_9ac1544e0bc00feb3e9378e39420b22f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$uniform,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__6__setup_getters_and_setters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__6__setup_getters_and_setters,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_b5479219722f23a82ad8a9f626a8783b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__7__create_getter_func,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_a9e63b0868346127de9262e640fd156e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func$$$function__1_getter_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__7__create_getter_func$$$function__1_getter_func,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_2c4a5754ce6fda91eaacbf9a6d7b6e02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[31],
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func$$$function__2_getter_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__7__create_getter_func$$$function__2_getter_func,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_eb9d18dc234ac64418a64a31f8c282ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[34],
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__8__create_setter_func,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_d0dd0e14b42cfc9fcf2814fa06de142d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__1_setter_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__1_setter_func,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_1e09a8300bc917fb42ddb2de2fb0b13e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[40],
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__2_setter_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__2_setter_func,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_d1ed40925a95b3db5d5184d998447b13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[43],
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func$$$function__3_setter_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__3_setter_func,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_1f15e41c4393e78bc84e2bcb7ff825de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
        mod_consts[44],
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$uniform$$$function__9___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$uniform$$$function__9___repr__,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_4e24964e91972cc444099a58c8a81940,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$uniform,
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

function_impl_code functable_arcade$gl$uniform[] = {
    impl_arcade$gl$uniform$$$function__7__create_getter_func$$$function__1_getter_func,
    impl_arcade$gl$uniform$$$function__7__create_getter_func$$$function__2_getter_func,
    impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__1_setter_func,
    impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__2_setter_func,
    impl_arcade$gl$uniform$$$function__8__create_setter_func$$$function__3_setter_func,
    impl_arcade$gl$uniform$$$function__1___init__,
    impl_arcade$gl$uniform$$$function__2_location,
    impl_arcade$gl$uniform$$$function__3_name,
    impl_arcade$gl$uniform$$$function__4_array_length,
    impl_arcade$gl$uniform$$$function__5_components,
    impl_arcade$gl$uniform$$$function__6__setup_getters_and_setters,
    impl_arcade$gl$uniform$$$function__7__create_getter_func,
    impl_arcade$gl$uniform$$$function__8__create_setter_func,
    impl_arcade$gl$uniform$$$function__9___repr__,
    impl_arcade$gl$uniform$$$function__10___init__,
    impl_arcade$gl$uniform$$$function__11_binding,
    impl_arcade$gl$uniform$$$function__12_binding,
    impl_arcade$gl$uniform$$$function__13_getter,
    impl_arcade$gl$uniform$$$function__14_setter,
    impl_arcade$gl$uniform$$$function__15___str__,
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

    function_impl_code *current = functable_arcade$gl$uniform;
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

    if (offset > sizeof(functable_arcade$gl$uniform) || offset < 0) {
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
        functable_arcade$gl$uniform[offset],
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
        module_arcade$gl$uniform,
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
PyObject *modulecode_arcade$gl$uniform(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("arcade.gl.uniform");

    // Store the module for future use.
    module_arcade$gl$uniform = module;

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
        PRINT_STRING("arcade.gl.uniform: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("arcade.gl.uniform: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initarcade$gl$uniform\n");

    moduledict_arcade$gl$uniform = MODULE_DICT(module_arcade$gl$uniform);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_arcade$gl$uniform,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_arcade$gl$uniform,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[16]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_arcade$gl$uniform,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$gl$uniform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$gl$uniform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_arcade$gl$uniform);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_arcade$gl$uniform);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d749f7d800d215e792a627785a120495;
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
    PyObject *locals_arcade$gl$uniform$$$class__1_Uniform_7 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_6061d5f53c15dd0fc79cf29d67693f76_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_arcade$gl$uniform$$$class__2_UniformBlock_218 = NULL;
    struct Nuitka_FrameObject *frame_3b80c92128c65742f77f70be8d62e9d1_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_2);
    }
    frame_d749f7d800d215e792a627785a120495 = MAKE_MODULE_FRAME(codeobj_d749f7d800d215e792a627785a120495, module_arcade$gl$uniform);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d749f7d800d215e792a627785a120495);
    assert(Py_REFCNT(frame_d749f7d800d215e792a627785a120495) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[73], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[74], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_arcade$gl$uniform,
                mod_consts[22],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[22]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_arcade$gl$uniform,
                mod_consts[23],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[23]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[76];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_arcade$gl$uniform;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[77];
        tmp_level_value_1 = mod_consts[5];
        frame_d749f7d800d215e792a627785a120495->m_frame.f_lineno = 2;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_arcade$gl$uniform,
                mod_consts[18],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[78];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_arcade$gl$uniform;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[79];
        tmp_level_value_2 = mod_consts[30];
        frame_d749f7d800d215e792a627785a120495->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_arcade$gl$uniform,
                mod_consts[14],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_arcade$gl$uniform$$$class__1_Uniform_7 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[81], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[70], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[83], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_6061d5f53c15dd0fc79cf29d67693f76_2 = MAKE_CLASS_FRAME(tstate, codeobj_6061d5f53c15dd0fc79cf29d67693f76, module_arcade$gl$uniform, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6061d5f53c15dd0fc79cf29d67693f76_2);
        assert(Py_REFCNT(frame_6061d5f53c15dd0fc79cf29d67693f76_2) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[84]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_3;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_expression_value_6;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[85]);
                if (tmp_dict_key_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[86]);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[87]);
                if (tmp_dict_key_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_6 == NULL)) {
                    tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[88]);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_1);

                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                Py_DECREF(tmp_dict_key_1);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_value_8;
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[89]);
            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[60]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_expression_value_9;
                PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_1);
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[90]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_1);
                tmp_tuple_element_1 = mod_consts[30];
                PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_1);
                tmp_tuple_element_1 = mod_consts[30];
                PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_dict_key_2);
            Py_DECREF(tmp_dict_value_2);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dictset_value = _PyDict_NewPresized( 44 );
            {
                PyObject *tmp_expression_value_10;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_expression_value_58;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_expression_value_59;
                PyObject *tmp_expression_value_61;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_expression_value_62;
                PyObject *tmp_expression_value_64;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_expression_value_65;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_expression_value_70;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_expression_value_71;
                PyObject *tmp_expression_value_73;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_expression_value_74;
                PyObject *tmp_expression_value_76;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_expression_value_77;
                PyObject *tmp_expression_value_79;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_expression_value_80;
                PyObject *tmp_expression_value_82;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_expression_value_83;
                PyObject *tmp_expression_value_85;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_expression_value_86;
                PyObject *tmp_expression_value_88;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_expression_value_89;
                PyObject *tmp_expression_value_91;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_expression_value_92;
                PyObject *tmp_expression_value_94;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_expression_value_95;
                PyObject *tmp_expression_value_97;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_expression_value_98;
                PyObject *tmp_expression_value_100;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_expression_value_101;
                PyObject *tmp_expression_value_103;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_expression_value_104;
                PyObject *tmp_expression_value_106;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_expression_value_107;
                PyObject *tmp_expression_value_109;
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_expression_value_110;
                PyObject *tmp_expression_value_112;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_expression_value_113;
                PyObject *tmp_expression_value_115;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_expression_value_116;
                PyObject *tmp_expression_value_118;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_expression_value_119;
                PyObject *tmp_expression_value_121;
                PyObject *tmp_tuple_element_39;
                PyObject *tmp_expression_value_122;
                PyObject *tmp_expression_value_124;
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_expression_value_125;
                PyObject *tmp_expression_value_127;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_expression_value_128;
                PyObject *tmp_expression_value_130;
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_expression_value_131;
                PyObject *tmp_expression_value_133;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_expression_value_134;
                PyObject *tmp_expression_value_136;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_expression_value_137;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[91]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_11 == NULL)) {
                    tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[60]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_12;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_2);
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[92]);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[93];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_2);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_13 == NULL)) {
                    tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[94]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[60]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_15;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_3);
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 27;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[95]);
                    if (tmp_tuple_element_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 27;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_3);
                    tmp_tuple_element_3 = mod_consts[96];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_3);
                    tmp_tuple_element_3 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_3);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_16 == NULL)) {
                    tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[97]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[60]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_18;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_4);
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[98]);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_4);
                    tmp_tuple_element_4 = mod_consts[99];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_4);
                    tmp_tuple_element_4 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[100]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[85]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_21;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_5);
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[101]);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_5);
                    tmp_tuple_element_5 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_5);
                    tmp_tuple_element_5 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_22 == NULL)) {
                    tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[102]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[85]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_24;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_6);
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[103]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_6);
                    tmp_tuple_element_6 = mod_consts[93];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_6);
                    tmp_tuple_element_6 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_25 == NULL)) {
                    tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[104]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[85]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_27;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_7);
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[105]);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_7);
                    tmp_tuple_element_7 = mod_consts[96];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_7);
                    tmp_tuple_element_7 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[106]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_29 == NULL)) {
                    tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[85]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_30;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_8);
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[107]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_8);
                    tmp_tuple_element_8 = mod_consts[99];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_8);
                    tmp_tuple_element_8 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_8);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_31 == NULL)) {
                    tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[108]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[60]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_33;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_9);
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[90]);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_9);
                    tmp_tuple_element_9 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_9);
                    tmp_tuple_element_9 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[109]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[60]);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_36;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_10);
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[92]);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_10);
                    tmp_tuple_element_10 = mod_consts[93];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_10);
                    tmp_tuple_element_10 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[110]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_38 == NULL)) {
                    tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[60]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_39;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_11);
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[95]);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_11);
                    tmp_tuple_element_11 = mod_consts[96];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_11);
                    tmp_tuple_element_11 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_40 == NULL)) {
                    tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[111]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[60]);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_42;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_12);
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[98]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_12);
                    tmp_tuple_element_12 = mod_consts[99];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_12);
                    tmp_tuple_element_12 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_43 == NULL)) {
                    tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[112]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[87]);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_45;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_13);
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[113]);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_13);
                    tmp_tuple_element_13 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_13);
                    tmp_tuple_element_13 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[114]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_47 == NULL)) {
                    tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[87]);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_48;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_14);
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[115]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_14);
                    tmp_tuple_element_14 = mod_consts[93];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_14);
                    tmp_tuple_element_14 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_49 == NULL)) {
                    tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[116]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_50 == NULL)) {
                    tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[87]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_51;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_15);
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[117]);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_15);
                    tmp_tuple_element_15 = mod_consts[96];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_15);
                    tmp_tuple_element_15 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_52 == NULL)) {
                    tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[118]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_53 == NULL)) {
                    tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 42;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[87]);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 42;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_54;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_16);
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[119]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_16);
                    tmp_tuple_element_16 = mod_consts[99];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_16);
                    tmp_tuple_element_16 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_55 == NULL)) {
                    tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[120]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_56 == NULL)) {
                    tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[60]);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_57;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_17);
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto tuple_build_exception_17;
                    }
                    tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[90]);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto tuple_build_exception_17;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_17);
                    tmp_tuple_element_17 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_17);
                    tmp_tuple_element_17 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_58 == NULL)) {
                    tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[121]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_59 == NULL)) {
                    tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[60]);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_60;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_18);
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "o";
                        goto tuple_build_exception_18;
                    }
                    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[90]);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "o";
                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_18);
                    tmp_tuple_element_18 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_18);
                    tmp_tuple_element_18 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_18);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_61 == NULL)) {
                    tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[122]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_62 == NULL)) {
                    tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[60]);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_63;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_19);
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[90]);
                    if (tmp_tuple_element_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_19);
                    tmp_tuple_element_19 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_19);
                    tmp_tuple_element_19 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_19);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_64 == NULL)) {
                    tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[123]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_65 == NULL)) {
                    tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 47;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[60]);
                if (tmp_tuple_element_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 47;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_66;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_20);
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_66 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[90]);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_20);
                    tmp_tuple_element_20 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_20);
                    tmp_tuple_element_20 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_67 == NULL)) {
                    tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[124]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_68 == NULL)) {
                    tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[60]);
                if (tmp_tuple_element_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_69;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_21);
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[90]);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_21);
                    tmp_tuple_element_21 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_21);
                    tmp_tuple_element_21 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_70 == NULL)) {
                    tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[125]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_71 == NULL)) {
                    tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[60]);
                if (tmp_tuple_element_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_72;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_22);
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto tuple_build_exception_22;
                    }
                    tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[90]);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto tuple_build_exception_22;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_22);
                    tmp_tuple_element_22 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_22);
                    tmp_tuple_element_22 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_22);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_73 == NULL)) {
                    tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[126]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_74 == NULL)) {
                    tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[60]);
                if (tmp_tuple_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_75;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_23);
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto tuple_build_exception_23;
                    }
                    tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[90]);
                    if (tmp_tuple_element_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto tuple_build_exception_23;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_23);
                    tmp_tuple_element_23 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_23);
                    tmp_tuple_element_23 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_23);
                }
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_76 == NULL)) {
                    tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[127]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_77 == NULL)) {
                    tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[60]);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_78;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_24);
                    tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_78 == NULL)) {
                        tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_78 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[90]);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_24);
                    tmp_tuple_element_24 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_24);
                    tmp_tuple_element_24 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_79 == NULL)) {
                    tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[128]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_80 == NULL)) {
                    tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 53;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[60]);
                if (tmp_tuple_element_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 53;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_81;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_25);
                    tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_81 == NULL)) {
                        tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_81 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto tuple_build_exception_25;
                    }
                    tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[90]);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto tuple_build_exception_25;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_25);
                    tmp_tuple_element_25 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_25);
                    tmp_tuple_element_25 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_82 == NULL)) {
                    tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_82 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[129]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_83 == NULL)) {
                    tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[60]);
                if (tmp_tuple_element_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_84;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_26);
                    tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_84 == NULL)) {
                        tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_84 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto tuple_build_exception_26;
                    }
                    tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[90]);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_26);
                    tmp_tuple_element_26 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_26);
                    tmp_tuple_element_26 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_85 == NULL)) {
                    tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_85 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[130]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_86 == NULL)) {
                    tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_86 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 56;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[60]);
                if (tmp_tuple_element_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 56;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_87;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_27);
                    tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_87 == NULL)) {
                        tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_87 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[90]);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_27);
                    tmp_tuple_element_27 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_27);
                    tmp_tuple_element_27 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_88 == NULL)) {
                    tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_88 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[131]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_89 == NULL)) {
                    tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_89 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[60]);
                if (tmp_tuple_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_90;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_28);
                    tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_90 == NULL)) {
                        tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_90 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[90]);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_28);
                    tmp_tuple_element_28 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_28);
                    tmp_tuple_element_28 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_91 == NULL)) {
                    tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_91 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[132]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_92 == NULL)) {
                    tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_92 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[60]);
                if (tmp_tuple_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_93;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_29);
                    tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_93 == NULL)) {
                        tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_93 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[90]);
                    if (tmp_tuple_element_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_29);
                    tmp_tuple_element_29 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_29);
                    tmp_tuple_element_29 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_29);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_94 == NULL)) {
                    tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[133]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_95 == NULL)) {
                    tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_95 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[60]);
                if (tmp_tuple_element_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_96;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_30);
                    tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_96 == NULL)) {
                        tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_96 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[90]);
                    if (tmp_tuple_element_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_30);
                    tmp_tuple_element_30 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_30);
                    tmp_tuple_element_30 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_30);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_97 == NULL)) {
                    tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_97 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[19]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_98 == NULL)) {
                    tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_98 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[87]);
                if (tmp_tuple_element_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_99;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_31);
                    tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_99 == NULL)) {
                        tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_99 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 63;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[134]);
                    if (tmp_tuple_element_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 63;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_31);
                    tmp_tuple_element_31 = mod_consts[99];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_31);
                    tmp_tuple_element_31 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_31);
                }
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_100 == NULL)) {
                    tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[20]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_101 == NULL)) {
                    tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_101 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[87]);
                if (tmp_tuple_element_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_102;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_32);
                    tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_102 == NULL)) {
                        tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_102 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 64;
                        type_description_2 = "o";
                        goto tuple_build_exception_32;
                    }
                    tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[135]);
                    if (tmp_tuple_element_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 64;
                        type_description_2 = "o";
                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_32);
                    tmp_tuple_element_32 = mod_consts[136];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_32);
                    tmp_tuple_element_32 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_32);
                }
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_103 == NULL)) {
                    tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_103 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[21]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_104 == NULL)) {
                    tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_104 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[87]);
                if (tmp_tuple_element_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_105;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_33);
                    tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_105 == NULL)) {
                        tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_105 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto tuple_build_exception_33;
                    }
                    tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[137]);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto tuple_build_exception_33;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_33);
                    tmp_tuple_element_33 = mod_consts[138];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_33);
                    tmp_tuple_element_33 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_106 == NULL)) {
                    tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_106 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[139]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_107 == NULL)) {
                    tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_107 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[60]);
                if (tmp_tuple_element_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_108;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_34);
                    tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_108 == NULL)) {
                        tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_108 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto tuple_build_exception_34;
                    }
                    tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[90]);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto tuple_build_exception_34;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_34);
                    tmp_tuple_element_34 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_34);
                    tmp_tuple_element_34 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_109 == NULL)) {
                    tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_109 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[140]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_110 == NULL)) {
                    tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_110 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 68;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[60]);
                if (tmp_tuple_element_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 68;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_111;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_35);
                    tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_111 == NULL)) {
                        tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_111 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[90]);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_35);
                    tmp_tuple_element_35 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_35);
                    tmp_tuple_element_35 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_112 == NULL)) {
                    tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_112 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[141]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_113 == NULL)) {
                    tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_113 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[60]);
                if (tmp_tuple_element_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_114;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_36);
                    tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_114 == NULL)) {
                        tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_114 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_36;
                    }
                    tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[90]);
                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_36);
                    tmp_tuple_element_36 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_36);
                    tmp_tuple_element_36 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_36);
                }
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_115 == NULL)) {
                    tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_115 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[142]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_116 == NULL)) {
                    tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_116 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[60]);
                if (tmp_tuple_element_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_117;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_37);
                    tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_117 == NULL)) {
                        tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_117 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto tuple_build_exception_37;
                    }
                    tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[90]);
                    if (tmp_tuple_element_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto tuple_build_exception_37;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_37);
                    tmp_tuple_element_37 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_37);
                    tmp_tuple_element_37 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_37);
                }
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_118 == NULL)) {
                    tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_118 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[143]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_119 == NULL)) {
                    tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_119 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[60]);
                if (tmp_tuple_element_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_120;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_38);
                    tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_120 == NULL)) {
                        tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_120 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto tuple_build_exception_38;
                    }
                    tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[90]);
                    if (tmp_tuple_element_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto tuple_build_exception_38;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_38);
                    tmp_tuple_element_38 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_38);
                    tmp_tuple_element_38 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_38);
                }
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_121 == NULL)) {
                    tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_121 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[144]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_122 == NULL)) {
                    tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_122 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[60]);
                if (tmp_tuple_element_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_123;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_39);
                    tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_123 == NULL)) {
                        tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_123 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto tuple_build_exception_39;
                    }
                    tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[90]);
                    if (tmp_tuple_element_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto tuple_build_exception_39;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_39);
                    tmp_tuple_element_39 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_39);
                    tmp_tuple_element_39 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_39);
                }
                goto tuple_build_noexception_39;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_39:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_39:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_124 == NULL)) {
                    tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_124 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[145]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_125 == NULL)) {
                    tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_125 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[60]);
                if (tmp_tuple_element_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_126;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_40);
                    tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_126 == NULL)) {
                        tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_126 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto tuple_build_exception_40;
                    }
                    tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[90]);
                    if (tmp_tuple_element_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto tuple_build_exception_40;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_40);
                    tmp_tuple_element_40 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_40);
                    tmp_tuple_element_40 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_40);
                }
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_127 == NULL)) {
                    tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_127 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[146]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_128 == NULL)) {
                    tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_128 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[60]);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_129;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_41);
                    tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_129 == NULL)) {
                        tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_129 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto tuple_build_exception_41;
                    }
                    tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[90]);
                    if (tmp_tuple_element_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto tuple_build_exception_41;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_41);
                    tmp_tuple_element_41 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_41);
                    tmp_tuple_element_41 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_41);
                }
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_130 == NULL)) {
                    tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_130 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[147]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_131 == NULL)) {
                    tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_131 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[60]);
                if (tmp_tuple_element_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_132;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_42);
                    tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_132 == NULL)) {
                        tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_132 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto tuple_build_exception_42;
                    }
                    tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[90]);
                    if (tmp_tuple_element_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto tuple_build_exception_42;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_42);
                    tmp_tuple_element_42 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_42);
                    tmp_tuple_element_42 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_42);
                }
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_133 == NULL)) {
                    tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_133 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[148]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_134 == NULL)) {
                    tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_134 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[60]);
                if (tmp_tuple_element_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_135;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_43);
                    tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_135 == NULL)) {
                        tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_135 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto tuple_build_exception_43;
                    }
                    tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[90]);
                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto tuple_build_exception_43;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_43);
                    tmp_tuple_element_43 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_43);
                    tmp_tuple_element_43 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_43);
                }
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_136 == NULL)) {
                    tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_136 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[149]);
                if (tmp_dict_key_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_expression_value_137 == NULL)) {
                    tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                }

                if (tmp_expression_value_137 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[60]);
                if (tmp_tuple_element_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_2);

                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_138;
                    PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_44);
                    tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_expression_value_138 == NULL)) {
                        tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_expression_value_138 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto tuple_build_exception_44;
                    }
                    tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[90]);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto tuple_build_exception_44;
                    }
                    PyTuple_SET_ITEM(tmp_dict_value_2, 1, tmp_tuple_element_44);
                    tmp_tuple_element_44 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_44);
                    tmp_tuple_element_44 = mod_consts[30];
                    PyTuple_SET_ITEM0(tmp_dict_value_2, 3, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_44;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_44:;
                Py_DECREF(tmp_dict_key_2);
                Py_DECREF(tmp_dict_value_2);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_44:;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                Py_DECREF(tmp_dict_key_2);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[151], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_arcade$gl$uniform$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_1;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;
            tmp_annotations_1 = DICT_COPY(mod_consts[154]);


            tmp_args_element_value_1 = MAKE_FUNCTION_arcade$gl$uniform$$$function__2_location(tmp_annotations_1);

            frame_6061d5f53c15dd0fc79cf29d67693f76_2->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_2;
            tmp_called_value_2 = (PyObject *)&PyProperty_Type;
            tmp_annotations_2 = DICT_COPY(mod_consts[156]);


            tmp_args_element_value_2 = MAKE_FUNCTION_arcade$gl$uniform$$$function__3_name(tmp_annotations_2);

            frame_6061d5f53c15dd0fc79cf29d67693f76_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_3;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_annotations_3 = DICT_COPY(mod_consts[154]);


            tmp_args_element_value_3 = MAKE_FUNCTION_arcade$gl$uniform$$$function__4_array_length(tmp_annotations_3);

            frame_6061d5f53c15dd0fc79cf29d67693f76_2->m_frame.f_lineno = 123;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_4;
            tmp_called_value_4 = (PyObject *)&PyProperty_Type;
            tmp_annotations_4 = DICT_COPY(mod_consts[154]);


            tmp_args_element_value_4 = MAKE_FUNCTION_arcade$gl$uniform$$$function__5_components(tmp_annotations_4);

            frame_6061d5f53c15dd0fc79cf29d67693f76_2->m_frame.f_lineno = 128;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[159], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6061d5f53c15dd0fc79cf29d67693f76_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6061d5f53c15dd0fc79cf29d67693f76_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6061d5f53c15dd0fc79cf29d67693f76_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6061d5f53c15dd0fc79cf29d67693f76_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_6061d5f53c15dd0fc79cf29d67693f76_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;


        tmp_dictset_value = MAKE_FUNCTION_arcade$gl$uniform$$$function__6__setup_getters_and_setters();

        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_staticmethod_arg_1;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_arcade$gl$uniform$$$function__7__create_getter_func();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_staticmethod_arg_2;


            tmp_staticmethod_arg_2 = MAKE_FUNCTION_arcade$gl$uniform$$$function__8__create_setter_func();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_2);
            Py_DECREF(tmp_staticmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_arcade$gl$uniform$$$function__9___repr__();

        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__1_Uniform_7, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_45 = mod_consts[24];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = mod_consts[166];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = locals_arcade$gl$uniform$$$class__1_Uniform_7;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_d749f7d800d215e792a627785a120495->m_frame.f_lineno = 7;
            tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_11 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_arcade$gl$uniform$$$class__1_Uniform_7);
        locals_arcade$gl$uniform$$$class__1_Uniform_7 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_arcade$gl$uniform$$$class__1_Uniform_7);
        locals_arcade$gl$uniform$$$class__1_Uniform_7 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 7;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_arcade$gl$uniform$$$class__2_UniformBlock_218 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[81], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[70], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[83], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[151], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[170]);


            tmp_dictset_value = MAKE_FUNCTION_arcade$gl$uniform$$$function__10___init__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_3b80c92128c65742f77f70be8d62e9d1_3 = MAKE_CLASS_FRAME(tstate, codeobj_3b80c92128c65742f77f70be8d62e9d1, module_arcade$gl$uniform, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3b80c92128c65742f77f70be8d62e9d1_3);
        assert(Py_REFCNT(frame_3b80c92128c65742f77f70be8d62e9d1_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_6;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_annotations_6 = DICT_COPY(mod_consts[154]);


            tmp_args_element_value_5 = MAKE_FUNCTION_arcade$gl$uniform$$$function__11_binding(tmp_annotations_6);

            frame_3b80c92128c65742f77f70be8d62e9d1_3->m_frame.f_lineno = 230;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_7;
            tmp_called_instance_1 = DICT_GET_ITEM0(tstate, locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[66]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_7 = DICT_COPY(mod_consts[173]);


            tmp_args_element_value_6 = MAKE_FUNCTION_arcade$gl$uniform$$$function__12_binding(tmp_annotations_7);

            frame_3b80c92128c65742f77f70be8d62e9d1_3->m_frame.f_lineno = 239;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[28], tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3b80c92128c65742f77f70be8d62e9d1_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3b80c92128c65742f77f70be8d62e9d1_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3b80c92128c65742f77f70be8d62e9d1_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3b80c92128c65742f77f70be8d62e9d1_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3b80c92128c65742f77f70be8d62e9d1_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;


        tmp_dictset_value = MAKE_FUNCTION_arcade$gl$uniform$$$function__13_getter();

        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[26], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[175]);


            tmp_dictset_value = MAKE_FUNCTION_arcade$gl$uniform$$$function__14_setter(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_arcade$gl$uniform$$$function__15___str__();

        tmp_res = PyDict_SetItem(locals_arcade$gl$uniform$$$class__2_UniformBlock_218, mod_consts[177], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_46 = mod_consts[168];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_46);
            tmp_tuple_element_46 = mod_consts[166];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_arcade$gl$uniform$$$class__2_UniformBlock_218;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_d749f7d800d215e792a627785a120495->m_frame.f_lineno = 218;
            tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_15 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_arcade$gl$uniform$$$class__2_UniformBlock_218);
        locals_arcade$gl$uniform$$$class__2_UniformBlock_218 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_arcade$gl$uniform$$$class__2_UniformBlock_218);
        locals_arcade$gl$uniform$$$class__2_UniformBlock_218 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 218;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_15);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d749f7d800d215e792a627785a120495, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d749f7d800d215e792a627785a120495->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d749f7d800d215e792a627785a120495, exception_lineno);
    }



    assertFrameObject(frame_d749f7d800d215e792a627785a120495);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("arcade.gl.uniform", false);

    Py_INCREF(module_arcade$gl$uniform);
    return module_arcade$gl$uniform;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$uniform, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("arcade$gl$uniform", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
