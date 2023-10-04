/* Generated code for Python module 'arcade.gl.types'
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

/* The "module_arcade$gl$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_arcade$gl$types;
PyDictObject *moduledict_arcade$gl$types;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[227];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[227];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("arcade.gl.types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 227; i++) {
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
void checkModuleConstants_arcade$gl$types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 227; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_caf18beaa1a4744a78936615ce1ed788;
static PyCodeObject *codeobj_d24800ef8701533bdb3afd5f2b90956e;
static PyCodeObject *codeobj_a2d258dbc7c21a38a6b741561f85569a;
static PyCodeObject *codeobj_da286c52d9383eb61d24368f16e9f5dc;
static PyCodeObject *codeobj_5c3bfc49d231ce02056d5e59f9b18b6b;
static PyCodeObject *codeobj_646c58c298d5ed18a7b712853853cc8f;
static PyCodeObject *codeobj_3cde9a306fcc5c234bab9f4136802842;
static PyCodeObject *codeobj_1e9c0cfeb910edcd04f20eb80de3ff02;
static PyCodeObject *codeobj_321e8d374fc2ea11187078d620dd9b9a;
static PyCodeObject *codeobj_b404292a858200789ac69ddd097774a8;
static PyCodeObject *codeobj_4d40e63c274f4eeee2b413cf1437198a;
static PyCodeObject *codeobj_30bc9642c08440e78bc9a7e851b2e707;
static PyCodeObject *codeobj_f0d7def2e38b75c0052caebdc52e773b;
static PyCodeObject *codeobj_6b55d701065b8c1ada2b53bc77aee5a1;
static PyCodeObject *codeobj_a7d599b78b069a404f3db144d324bc4d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[218]); CHECK_OBJECT(module_filename_obj);
    codeobj_caf18beaa1a4744a78936615ce1ed788 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[219], mod_consts[219], NULL, NULL, 0, 0, 0);
    codeobj_d24800ef8701533bdb3afd5f2b90956e = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[220], NULL, 0, 0, 0);
    codeobj_a2d258dbc7c21a38a6b741561f85569a = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[220], NULL, 0, 0, 0);
    codeobj_da286c52d9383eb61d24368f16e9f5dc = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_NOFREE, mod_consts[196], mod_consts[196], mod_consts[220], NULL, 0, 0, 0);
    codeobj_5c3bfc49d231ce02056d5e59f9b18b6b = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[220], NULL, 0, 0, 0);
    codeobj_646c58c298d5ed18a7b712853853cc8f = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[221], NULL, 6, 0, 0);
    codeobj_3cde9a306fcc5c234bab9f4136802842 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[222], NULL, 6, 0, 0);
    codeobj_1e9c0cfeb910edcd04f20eb80de3ff02 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[223], NULL, 7, 0, 0);
    codeobj_321e8d374fc2ea11187078d620dd9b9a = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[224], NULL, 1, 0, 0);
    codeobj_b404292a858200789ac69ddd097774a8 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[224], NULL, 1, 0, 0);
    codeobj_4d40e63c274f4eeee2b413cf1437198a = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[224], NULL, 1, 0, 0);
    codeobj_30bc9642c08440e78bc9a7e851b2e707 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[224], NULL, 1, 0, 0);
    codeobj_f0d7def2e38b75c0052caebdc52e773b = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[216], mod_consts[216], mod_consts[225], NULL, 2, 0, 0);
    codeobj_6b55d701065b8c1ada2b53bc77aee5a1 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[224], NULL, 1, 0, 0);
    codeobj_a7d599b78b069a404f3db144d324bc4d = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[226], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__2_bytes_total(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__3___repr__();


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__4___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs();


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__5___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__6___init__();


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__7_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__8___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__9_get(PyObject *annotations);


// The module function definitions.
static PyObject *impl_arcade$gl$types$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_gl_type = python_pars[2];
    PyObject *par_components = python_pars[3];
    PyObject *par_bytes_per_component = python_pars[4];
    PyObject *par_offset = python_pars[5];
    PyObject *par_location = python_pars[6];
    struct Nuitka_FrameObject *frame_1e9c0cfeb910edcd04f20eb80de3ff02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02)) {
        Py_XDECREF(cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e9c0cfeb910edcd04f20eb80de3ff02, module_arcade$gl$types, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02->m_type_description == NULL);
    frame_1e9c0cfeb910edcd04f20eb80de3ff02 = cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e9c0cfeb910edcd04f20eb80de3ff02);
    assert(Py_REFCNT(frame_1e9c0cfeb910edcd04f20eb80de3ff02) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_gl_type);
        tmp_assattr_value_2 = par_gl_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_components);
        tmp_assattr_value_3 = par_components;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_bytes_per_component);
        tmp_assattr_value_4 = par_bytes_per_component;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_offset);
        tmp_assattr_value_5 = par_offset;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_location);
        tmp_assattr_value_6 = par_location;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[5], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e9c0cfeb910edcd04f20eb80de3ff02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e9c0cfeb910edcd04f20eb80de3ff02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e9c0cfeb910edcd04f20eb80de3ff02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e9c0cfeb910edcd04f20eb80de3ff02,
        type_description_1,
        par_self,
        par_name,
        par_gl_type,
        par_components,
        par_bytes_per_component,
        par_offset,
        par_location
    );


    // Release cached frame if used for exception.
    if (frame_1e9c0cfeb910edcd04f20eb80de3ff02 == cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02);
        cache_frame_1e9c0cfeb910edcd04f20eb80de3ff02 = NULL;
    }

    assertFrameObject(frame_1e9c0cfeb910edcd04f20eb80de3ff02);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_gl_type);
    Py_DECREF(par_gl_type);
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);
    CHECK_OBJECT(par_bytes_per_component);
    Py_DECREF(par_bytes_per_component);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_gl_type);
    Py_DECREF(par_gl_type);
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);
    CHECK_OBJECT(par_bytes_per_component);
    Py_DECREF(par_bytes_per_component);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$types$$$function__2_bytes_total(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_30bc9642c08440e78bc9a7e851b2e707;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30bc9642c08440e78bc9a7e851b2e707 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30bc9642c08440e78bc9a7e851b2e707)) {
        Py_XDECREF(cache_frame_30bc9642c08440e78bc9a7e851b2e707);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30bc9642c08440e78bc9a7e851b2e707 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30bc9642c08440e78bc9a7e851b2e707 = MAKE_FUNCTION_FRAME(tstate, codeobj_30bc9642c08440e78bc9a7e851b2e707, module_arcade$gl$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30bc9642c08440e78bc9a7e851b2e707->m_type_description == NULL);
    frame_30bc9642c08440e78bc9a7e851b2e707 = cache_frame_30bc9642c08440e78bc9a7e851b2e707;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_30bc9642c08440e78bc9a7e851b2e707);
    assert(Py_REFCNT(frame_30bc9642c08440e78bc9a7e851b2e707) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
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
        exception_tb = MAKE_TRACEBACK(frame_30bc9642c08440e78bc9a7e851b2e707, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30bc9642c08440e78bc9a7e851b2e707->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30bc9642c08440e78bc9a7e851b2e707, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30bc9642c08440e78bc9a7e851b2e707,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_30bc9642c08440e78bc9a7e851b2e707 == cache_frame_30bc9642c08440e78bc9a7e851b2e707) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30bc9642c08440e78bc9a7e851b2e707);
        cache_frame_30bc9642c08440e78bc9a7e851b2e707 = NULL;
    }

    assertFrameObject(frame_30bc9642c08440e78bc9a7e851b2e707);

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


static PyObject *impl_arcade$gl$types$$$function__3___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_321e8d374fc2ea11187078d620dd9b9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_321e8d374fc2ea11187078d620dd9b9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_321e8d374fc2ea11187078d620dd9b9a)) {
        Py_XDECREF(cache_frame_321e8d374fc2ea11187078d620dd9b9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_321e8d374fc2ea11187078d620dd9b9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_321e8d374fc2ea11187078d620dd9b9a = MAKE_FUNCTION_FRAME(tstate, codeobj_321e8d374fc2ea11187078d620dd9b9a, module_arcade$gl$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_321e8d374fc2ea11187078d620dd9b9a->m_type_description == NULL);
    frame_321e8d374fc2ea11187078d620dd9b9a = cache_frame_321e8d374fc2ea11187078d620dd9b9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_321e8d374fc2ea11187078d620dd9b9a);
    assert(Py_REFCNT(frame_321e8d374fc2ea11187078d620dd9b9a) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[7];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(9);
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
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[2]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[11];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
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
        exception_tb = MAKE_TRACEBACK(frame_321e8d374fc2ea11187078d620dd9b9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_321e8d374fc2ea11187078d620dd9b9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_321e8d374fc2ea11187078d620dd9b9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_321e8d374fc2ea11187078d620dd9b9a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_321e8d374fc2ea11187078d620dd9b9a == cache_frame_321e8d374fc2ea11187078d620dd9b9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_321e8d374fc2ea11187078d620dd9b9a);
        cache_frame_321e8d374fc2ea11187078d620dd9b9a = NULL;
    }

    assertFrameObject(frame_321e8d374fc2ea11187078d620dd9b9a);

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


static PyObject *impl_arcade$gl$types$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buffer = python_pars[1];
    PyObject *par_formats = python_pars[2];
    PyObject *par_attributes = python_pars[3];
    PyObject *par_normalized = python_pars[4];
    PyObject *par_instanced = python_pars[5];
    PyObject *var_formats_list = NULL;
    PyObject *var_non_padded_formats = NULL;
    PyObject *var_zip_attrs = NULL;
    PyObject *var_attr_fmt = NULL;
    PyObject *var_attr_name = NULL;
    PyObject *var_components_str = NULL;
    PyObject *var_data_type_str = NULL;
    PyObject *var_data_size_str = NULL;
    PyObject *var_data_type = NULL;
    PyObject *var_components = NULL;
    PyObject *var_data_size = NULL;
    PyObject *var_ex = NULL;
    PyObject *var_gl_type = NULL;
    PyObject *var_byte_size = NULL;
    PyObject *outline_0_var_f = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_646c58c298d5ed18a7b712853853cc8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    static struct Nuitka_FrameObject *cache_frame_646c58c298d5ed18a7b712853853cc8f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_646c58c298d5ed18a7b712853853cc8f)) {
        Py_XDECREF(cache_frame_646c58c298d5ed18a7b712853853cc8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_646c58c298d5ed18a7b712853853cc8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_646c58c298d5ed18a7b712853853cc8f = MAKE_FUNCTION_FRAME(tstate, codeobj_646c58c298d5ed18a7b712853853cc8f, module_arcade$gl$types, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_646c58c298d5ed18a7b712853853cc8f->m_type_description == NULL);
    frame_646c58c298d5ed18a7b712853853cc8f = cache_frame_646c58c298d5ed18a7b712853853cc8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_646c58c298d5ed18a7b712853853cc8f);
    assert(Py_REFCNT(frame_646c58c298d5ed18a7b712853853cc8f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_buffer);
        tmp_assattr_value_1 = par_buffer;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_attributes);
        tmp_assattr_value_2 = par_attributes;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_normalized);
        tmp_cmp_expr_left_1 = par_normalized;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_value_3 = PySet_New(NULL);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_normalized);
        tmp_set_arg_1 = par_normalized;
        tmp_assattr_value_3 = PySet_New(tmp_set_arg_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[15], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_instanced);
        tmp_assattr_value_4 = par_instanced;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[16], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[17], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[18];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[19], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[18];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[20], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_buffer);
        tmp_isinstance_inst_1 = par_buffer;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[22];
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 230;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 230;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
        if (tmp_isinstance_inst_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_3 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_inst_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[23];
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 235;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 235;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[15]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_set_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[14]);
        if (tmp_set_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[24];
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 238;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 238;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_formats);
        tmp_expression_value_5 = par_formats;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 240;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[26]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formats_list == NULL);
        var_formats_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_formats_list);
            tmp_iter_arg_1 = var_formats_list;
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "oooooooooooooooooooo";
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
                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 241;
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
                PyObject *old = outline_0_var_f;
                outline_0_var_f = tmp_assign_source_6;
                Py_INCREF(outline_0_var_f);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            tmp_cmp_expr_left_3 = mod_consts[27];
            CHECK_OBJECT(outline_0_var_f);
            tmp_cmp_expr_right_3 = outline_0_var_f;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_5 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_5 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_f);
            tmp_append_value_1 = outline_0_var_f;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_3;
            }
        }
        branch_no_4:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooo";
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
        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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

        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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
        exception_lineno = 241;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_non_padded_formats == NULL);
        var_non_padded_formats = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_non_padded_formats);
        tmp_len_arg_1 = var_non_padded_formats;
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[14]);
        if (tmp_len_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        tmp_condition_result_6 = !tmp_condition_result_6;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[28];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_formats_list);
            tmp_len_arg_3 = var_formats_list;
            tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_len_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[14]);
            if (tmp_len_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_4);
            Py_DECREF(tmp_len_arg_4);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_4 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 244;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 244;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs();

        assert(var_zip_attrs == NULL);
        var_zip_attrs = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = mod_consts[34];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[19], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_zip_attrs);
        tmp_called_value_2 = var_zip_attrs;
        CHECK_OBJECT(var_formats_list);
        tmp_args_element_value_1 = var_formats_list;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[14]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 260;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 260;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 260;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 260;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[35];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 260;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
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
            PyObject *old = var_attr_fmt;
            var_attr_fmt = tmp_assign_source_13;
            Py_INCREF(var_attr_fmt);
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
            PyObject *old = var_attr_name;
            var_attr_name = tmp_assign_source_14;
            Py_INCREF(var_attr_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_3 = mod_consts[37];
        CHECK_OBJECT(var_attr_fmt);
        tmp_args_element_value_4 = var_attr_fmt;
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 3);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 262;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 3);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 262;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_5, 2, 3);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 262;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 262;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[38];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 262;
            goto try_except_handler_9;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_8;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_components_str;
            var_components_str = tmp_assign_source_19;
            Py_INCREF(var_components_str);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_data_type_str;
            var_data_type_str = tmp_assign_source_20;
            Py_INCREF(var_data_type_str);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_data_size_str;
            var_data_size_str = tmp_assign_source_21;
            Py_INCREF(var_data_size_str);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_22;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_3;
        PyObject *tmp_format_spec_3;
        CHECK_OBJECT(var_data_size_str);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_data_size_str);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(var_data_type_str);
        tmp_format_value_3 = var_data_type_str;
        tmp_format_spec_3 = mod_consts[8];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_data_size_str);
            tmp_format_value_4 = var_data_size_str;
            tmp_format_spec_4 = mod_consts[8];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_22 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(var_data_type_str);
        tmp_assign_source_22 = var_data_type_str;
        Py_INCREF(tmp_assign_source_22);
        condexpr_end_2:;
        {
            PyObject *old = var_data_type;
            var_data_type = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_components_str);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_components_str);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(var_components_str);
        tmp_int_arg_1 = var_components_str;
        tmp_assign_source_23 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_23 = mod_consts[39];
        Py_INCREF(tmp_assign_source_23);
        condexpr_end_3:;
        {
            PyObject *old = var_components;
            var_components = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT(var_data_size_str);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_data_size_str);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(var_data_size_str);
        tmp_int_arg_2 = var_data_size_str;
        tmp_assign_source_24 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_24 = mod_consts[40];
        Py_INCREF(tmp_assign_source_24);
        condexpr_end_4:;
        {
            PyObject *old = var_data_size;
            var_data_size = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_components);
        tmp_cmp_expr_left_5 = var_components;
        tmp_cmp_expr_right_5 = mod_consts[40];
        tmp_and_left_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_data_size);
        tmp_cmp_expr_left_6 = var_data_size;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_and_right_value_2 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_10 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        tmp_make_exception_arg_5 = mod_consts[41];
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 278;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 278;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    branch_no_6:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_646c58c298d5ed18a7b712853853cc8f, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_646c58c298d5ed18a7b712853853cc8f, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = EXC_VALUE(PyThreadState_GET());
        assert(var_ex == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_ex = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_6;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[42];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_attr_fmt);
            tmp_format_value_5 = var_attr_fmt;
            tmp_format_spec_5 = mod_consts[8];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_ex);
            tmp_format_value_6 = var_ex;
            tmp_format_spec_6 = mod_consts[8];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[44];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_make_exception_arg_6 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_make_exception_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 280;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
        Py_DECREF(tmp_make_exception_arg_6);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 280;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_11;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ex);
    var_ex = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 261;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_646c58c298d5ed18a7b712853853cc8f->m_frame) frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[46]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_data_type);
        tmp_subscript_value_1 = var_data_type;
        tmp_iter_arg_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tstate, tmp_unpack_6, 0, 2);
        if (tmp_assign_source_27 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 284;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tstate, tmp_unpack_7, 1, 2);
        if (tmp_assign_source_28 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 284;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 284;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[35];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 284;
            goto try_except_handler_13;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_12;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_4;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_29 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_gl_type;
            var_gl_type = tmp_assign_source_29;
            Py_INCREF(var_gl_type);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_30 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_byte_size;
            var_byte_size = tmp_assign_source_30;
            Py_INCREF(var_byte_size);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[17]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[47]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_attr_name);
        tmp_kw_call_arg_value_0_1 = var_attr_name;
        CHECK_OBJECT(var_gl_type);
        tmp_kw_call_arg_value_1_1 = var_gl_type;
        CHECK_OBJECT(var_components);
        tmp_kw_call_arg_value_2_1 = var_components;
        CHECK_OBJECT(var_byte_size);
        tmp_kw_call_arg_value_3_1 = var_byte_size;
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_14 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[19]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 286;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 285;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_15;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_15 = par_self;
        tmp_assign_source_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[19]);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_byte_size);
        tmp_mult_expr_left_1 = var_byte_size;
        CHECK_OBJECT(var_components);
        tmp_mult_expr_right_1 = var_components;
        tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_32 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_32;

    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_9 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[19], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_14;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_4;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 260;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[13]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[50]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[19]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mod_expr_left_1);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_8 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[34];
        tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_make_exception_arg_7;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[51];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_format_spec_8;
            PyObject *tmp_format_value_9;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 295;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_expression_value_19 = par_self;
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[19]);
            if (tmp_format_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_7 = mod_consts[8];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_expression_value_20 = par_self;
            tmp_format_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[13]);
            if (tmp_format_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_8 = mod_consts[8];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 4, tmp_tuple_element_4);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_expression_value_22 = par_self;
            tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[13]);
            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[50]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_format_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_9 = mod_consts[8];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
            Py_DECREF(tmp_format_value_9);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 5, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_make_exception_arg_7 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_make_exception_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_646c58c298d5ed18a7b712853853cc8f->m_frame.f_lineno = 294;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_7);
        Py_DECREF(tmp_make_exception_arg_7);
        assert(!(tmp_raise_type_7 == NULL));
        exception_type = tmp_raise_type_7;
        exception_lineno = 294;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_assattr_target_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_self;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[13]);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[50]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_self;
        tmp_floordiv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[19]);
        if (tmp_floordiv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_floordiv_expr_left_1);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        Py_DECREF(tmp_floordiv_expr_right_1);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[20], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_646c58c298d5ed18a7b712853853cc8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_646c58c298d5ed18a7b712853853cc8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_646c58c298d5ed18a7b712853853cc8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_646c58c298d5ed18a7b712853853cc8f,
        type_description_1,
        par_self,
        par_buffer,
        par_formats,
        par_attributes,
        par_normalized,
        par_instanced,
        var_formats_list,
        var_non_padded_formats,
        var_zip_attrs,
        var_attr_fmt,
        var_attr_name,
        var_components_str,
        var_data_type_str,
        var_data_size_str,
        var_data_type,
        var_components,
        var_data_size,
        var_ex,
        var_gl_type,
        var_byte_size
    );


    // Release cached frame if used for exception.
    if (frame_646c58c298d5ed18a7b712853853cc8f == cache_frame_646c58c298d5ed18a7b712853853cc8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_646c58c298d5ed18a7b712853853cc8f);
        cache_frame_646c58c298d5ed18a7b712853853cc8f = NULL;
    }

    assertFrameObject(frame_646c58c298d5ed18a7b712853853cc8f);

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
    CHECK_OBJECT(var_formats_list);
    Py_DECREF(var_formats_list);
    var_formats_list = NULL;
    CHECK_OBJECT(var_non_padded_formats);
    Py_DECREF(var_non_padded_formats);
    var_non_padded_formats = NULL;
    CHECK_OBJECT(var_zip_attrs);
    Py_DECREF(var_zip_attrs);
    var_zip_attrs = NULL;
    Py_XDECREF(var_attr_fmt);
    var_attr_fmt = NULL;
    Py_XDECREF(var_attr_name);
    var_attr_name = NULL;
    Py_XDECREF(var_components_str);
    var_components_str = NULL;
    Py_XDECREF(var_data_type_str);
    var_data_type_str = NULL;
    Py_XDECREF(var_data_size_str);
    var_data_size_str = NULL;
    Py_XDECREF(var_data_type);
    var_data_type = NULL;
    Py_XDECREF(var_components);
    var_components = NULL;
    Py_XDECREF(var_data_size);
    var_data_size = NULL;
    Py_XDECREF(var_gl_type);
    var_gl_type = NULL;
    Py_XDECREF(var_byte_size);
    var_byte_size = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_formats_list);
    var_formats_list = NULL;
    Py_XDECREF(var_non_padded_formats);
    var_non_padded_formats = NULL;
    Py_XDECREF(var_zip_attrs);
    var_zip_attrs = NULL;
    Py_XDECREF(var_attr_fmt);
    var_attr_fmt = NULL;
    Py_XDECREF(var_attr_name);
    var_attr_name = NULL;
    Py_XDECREF(var_components_str);
    var_components_str = NULL;
    Py_XDECREF(var_data_type_str);
    var_data_type_str = NULL;
    Py_XDECREF(var_data_size_str);
    var_data_size_str = NULL;
    Py_XDECREF(var_data_type);
    var_data_type = NULL;
    Py_XDECREF(var_components);
    var_components = NULL;
    Py_XDECREF(var_data_size);
    var_data_size = NULL;
    Py_XDECREF(var_gl_type);
    var_gl_type = NULL;
    Py_XDECREF(var_byte_size);
    var_byte_size = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_formats);
    Py_DECREF(par_formats);
    CHECK_OBJECT(par_attributes);
    Py_DECREF(par_attributes);
    CHECK_OBJECT(par_normalized);
    Py_DECREF(par_normalized);
    CHECK_OBJECT(par_instanced);
    Py_DECREF(par_instanced);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_formats);
    Py_DECREF(par_formats);
    CHECK_OBJECT(par_attributes);
    Py_DECREF(par_attributes);
    CHECK_OBJECT(par_normalized);
    Py_DECREF(par_normalized);
    CHECK_OBJECT(par_instanced);
    Py_DECREF(par_instanced);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_formats = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_attributes = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_attributes;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_formats;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_formats);
    Py_DECREF(par_formats);
    CHECK_OBJECT(par_attributes);
    Py_DECREF(par_attributes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs_locals {
    PyObject *var_attr_index;
    PyObject *var_f;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    bool tmp_result;
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

static PyObject *arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs_locals *generator_heap = (struct arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_attr_index = NULL;
    generator_heap->var_f = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[34];
        assert(generator_heap->var_attr_index == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->var_attr_index = tmp_assign_source_1;
    }
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_a7d599b78b069a404f3db144d324bc4d, module_arcade$gl$types, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[17]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccoo";
                generator_heap->exception_lineno = 252;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_f;
            generator_heap->var_f = tmp_assign_source_4;
            Py_INCREF(generator_heap->var_f);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[27];
        CHECK_OBJECT(generator_heap->var_f);
        tmp_cmp_expr_right_1 = generator_heap->var_f;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_f);
        tmp_tuple_element_1 = generator_heap->var_f;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_f);
        tmp_tuple_element_2 = generator_heap->var_f;
        tmp_expression_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_expression_value_2, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[14]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 256;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
            if (generator_heap->var_attr_index == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 256;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }

            tmp_subscript_value_1 = generator_heap->var_attr_index;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 256;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_expression_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_2;
        yield_return_2:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (generator_heap->var_attr_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = generator_heap->var_attr_index;
        tmp_iadd_expr_right_1 = mod_consts[39];
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        generator_heap->var_attr_index = tmp_assign_source_5;

    }
    branch_end_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 252;
        generator_heap->type_description_1 = "ccoo";
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

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_attr_index,
            generator_heap->var_f
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

    Py_XDECREF(generator_heap->var_attr_index);
    generator_heap->var_attr_index = NULL;
    Py_XDECREF(generator_heap->var_f);
    generator_heap->var_f = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_attr_index);
    generator_heap->var_attr_index = NULL;
    Py_XDECREF(generator_heap->var_f);
    generator_heap->var_f = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs_context,
        module_arcade$gl$types,
        mod_consts[32],
#if PYTHON_VERSION >= 0x350
        mod_consts[33],
#endif
        codeobj_a7d599b78b069a404f3db144d324bc4d,
        closure,
        2,
#if 1
        sizeof(struct arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs$$$genobj__1_zip_attrs_locals)
#else
        0
#endif
    );
}


static PyObject *impl_arcade$gl$types$$$function__5___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b404292a858200789ac69ddd097774a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b404292a858200789ac69ddd097774a8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b404292a858200789ac69ddd097774a8)) {
        Py_XDECREF(cache_frame_b404292a858200789ac69ddd097774a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b404292a858200789ac69ddd097774a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b404292a858200789ac69ddd097774a8 = MAKE_FUNCTION_FRAME(tstate, codeobj_b404292a858200789ac69ddd097774a8, module_arcade$gl$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b404292a858200789ac69ddd097774a8->m_type_description == NULL);
    frame_b404292a858200789ac69ddd097774a8 = cache_frame_b404292a858200789ac69ddd097774a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b404292a858200789ac69ddd097774a8);
    assert(Py_REFCNT(frame_b404292a858200789ac69ddd097774a8) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[55];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
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
        exception_tb = MAKE_TRACEBACK(frame_b404292a858200789ac69ddd097774a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b404292a858200789ac69ddd097774a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b404292a858200789ac69ddd097774a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b404292a858200789ac69ddd097774a8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b404292a858200789ac69ddd097774a8 == cache_frame_b404292a858200789ac69ddd097774a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b404292a858200789ac69ddd097774a8);
        cache_frame_b404292a858200789ac69ddd097774a8 = NULL;
    }

    assertFrameObject(frame_b404292a858200789ac69ddd097774a8);

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


static PyObject *impl_arcade$gl$types$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_enum = python_pars[2];
    PyObject *par_gl_type = python_pars[3];
    PyObject *par_gl_size = python_pars[4];
    PyObject *par_components = python_pars[5];
    struct Nuitka_FrameObject *frame_3cde9a306fcc5c234bab9f4136802842;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3cde9a306fcc5c234bab9f4136802842 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3cde9a306fcc5c234bab9f4136802842)) {
        Py_XDECREF(cache_frame_3cde9a306fcc5c234bab9f4136802842);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3cde9a306fcc5c234bab9f4136802842 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3cde9a306fcc5c234bab9f4136802842 = MAKE_FUNCTION_FRAME(tstate, codeobj_3cde9a306fcc5c234bab9f4136802842, module_arcade$gl$types, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3cde9a306fcc5c234bab9f4136802842->m_type_description == NULL);
    frame_3cde9a306fcc5c234bab9f4136802842 = cache_frame_3cde9a306fcc5c234bab9f4136802842;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3cde9a306fcc5c234bab9f4136802842);
    assert(Py_REFCNT(frame_3cde9a306fcc5c234bab9f4136802842) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_enum);
        tmp_assattr_value_2 = par_enum;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[56], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_gl_type);
        tmp_assattr_value_3 = par_gl_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_gl_size);
        tmp_assattr_value_4 = par_gl_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[57], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_components);
        tmp_assattr_value_5 = par_components;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[2], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3cde9a306fcc5c234bab9f4136802842, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3cde9a306fcc5c234bab9f4136802842->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3cde9a306fcc5c234bab9f4136802842, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3cde9a306fcc5c234bab9f4136802842,
        type_description_1,
        par_self,
        par_name,
        par_enum,
        par_gl_type,
        par_gl_size,
        par_components
    );


    // Release cached frame if used for exception.
    if (frame_3cde9a306fcc5c234bab9f4136802842 == cache_frame_3cde9a306fcc5c234bab9f4136802842) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3cde9a306fcc5c234bab9f4136802842);
        cache_frame_3cde9a306fcc5c234bab9f4136802842 = NULL;
    }

    assertFrameObject(frame_3cde9a306fcc5c234bab9f4136802842);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);
    CHECK_OBJECT(par_gl_type);
    Py_DECREF(par_gl_type);
    CHECK_OBJECT(par_gl_size);
    Py_DECREF(par_gl_size);
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);
    CHECK_OBJECT(par_gl_type);
    Py_DECREF(par_gl_type);
    CHECK_OBJECT(par_gl_size);
    Py_DECREF(par_gl_size);
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$gl$types$$$function__7_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6b55d701065b8c1ada2b53bc77aee5a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b55d701065b8c1ada2b53bc77aee5a1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b55d701065b8c1ada2b53bc77aee5a1)) {
        Py_XDECREF(cache_frame_6b55d701065b8c1ada2b53bc77aee5a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b55d701065b8c1ada2b53bc77aee5a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b55d701065b8c1ada2b53bc77aee5a1 = MAKE_FUNCTION_FRAME(tstate, codeobj_6b55d701065b8c1ada2b53bc77aee5a1, module_arcade$gl$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b55d701065b8c1ada2b53bc77aee5a1->m_type_description == NULL);
    frame_6b55d701065b8c1ada2b53bc77aee5a1 = cache_frame_6b55d701065b8c1ada2b53bc77aee5a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b55d701065b8c1ada2b53bc77aee5a1);
    assert(Py_REFCNT(frame_6b55d701065b8c1ada2b53bc77aee5a1) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
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
        exception_tb = MAKE_TRACEBACK(frame_6b55d701065b8c1ada2b53bc77aee5a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b55d701065b8c1ada2b53bc77aee5a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b55d701065b8c1ada2b53bc77aee5a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b55d701065b8c1ada2b53bc77aee5a1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6b55d701065b8c1ada2b53bc77aee5a1 == cache_frame_6b55d701065b8c1ada2b53bc77aee5a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b55d701065b8c1ada2b53bc77aee5a1);
        cache_frame_6b55d701065b8c1ada2b53bc77aee5a1 = NULL;
    }

    assertFrameObject(frame_6b55d701065b8c1ada2b53bc77aee5a1);

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


static PyObject *impl_arcade$gl$types$$$function__8___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4d40e63c274f4eeee2b413cf1437198a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d40e63c274f4eeee2b413cf1437198a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d40e63c274f4eeee2b413cf1437198a)) {
        Py_XDECREF(cache_frame_4d40e63c274f4eeee2b413cf1437198a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d40e63c274f4eeee2b413cf1437198a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d40e63c274f4eeee2b413cf1437198a = MAKE_FUNCTION_FRAME(tstate, codeobj_4d40e63c274f4eeee2b413cf1437198a, module_arcade$gl$types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d40e63c274f4eeee2b413cf1437198a->m_type_description == NULL);
    frame_4d40e63c274f4eeee2b413cf1437198a = cache_frame_4d40e63c274f4eeee2b413cf1437198a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4d40e63c274f4eeee2b413cf1437198a);
    assert(Py_REFCNT(frame_4d40e63c274f4eeee2b413cf1437198a) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[58];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(11);
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
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[59];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[56]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[1]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[57]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[2]);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_5 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
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
        exception_tb = MAKE_TRACEBACK(frame_4d40e63c274f4eeee2b413cf1437198a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d40e63c274f4eeee2b413cf1437198a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d40e63c274f4eeee2b413cf1437198a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d40e63c274f4eeee2b413cf1437198a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4d40e63c274f4eeee2b413cf1437198a == cache_frame_4d40e63c274f4eeee2b413cf1437198a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d40e63c274f4eeee2b413cf1437198a);
        cache_frame_4d40e63c274f4eeee2b413cf1437198a = NULL;
    }

    assertFrameObject(frame_4d40e63c274f4eeee2b413cf1437198a);

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


static PyObject *impl_arcade$gl$types$$$function__9_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_enum = python_pars[1];
    struct Nuitka_FrameObject *frame_f0d7def2e38b75c0052caebdc52e773b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_f0d7def2e38b75c0052caebdc52e773b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f0d7def2e38b75c0052caebdc52e773b)) {
        Py_XDECREF(cache_frame_f0d7def2e38b75c0052caebdc52e773b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0d7def2e38b75c0052caebdc52e773b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0d7def2e38b75c0052caebdc52e773b = MAKE_FUNCTION_FRAME(tstate, codeobj_f0d7def2e38b75c0052caebdc52e773b, module_arcade$gl$types, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0d7def2e38b75c0052caebdc52e773b->m_type_description == NULL);
    frame_f0d7def2e38b75c0052caebdc52e773b = cache_frame_f0d7def2e38b75c0052caebdc52e773b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f0d7def2e38b75c0052caebdc52e773b);
    assert(Py_REFCNT(frame_f0d7def2e38b75c0052caebdc52e773b) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_enum);
        tmp_subscript_value_1 = par_enum;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f0d7def2e38b75c0052caebdc52e773b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f0d7def2e38b75c0052caebdc52e773b, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[63];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_enum);
            tmp_format_value_1 = par_enum;
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_f0d7def2e38b75c0052caebdc52e773b->m_frame.f_lineno = 409;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 409;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 406;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f0d7def2e38b75c0052caebdc52e773b->m_frame) frame_f0d7def2e38b75c0052caebdc52e773b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    // End of try:


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0d7def2e38b75c0052caebdc52e773b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0d7def2e38b75c0052caebdc52e773b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0d7def2e38b75c0052caebdc52e773b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0d7def2e38b75c0052caebdc52e773b,
        type_description_1,
        par_cls,
        par_enum
    );


    // Release cached frame if used for exception.
    if (frame_f0d7def2e38b75c0052caebdc52e773b == cache_frame_f0d7def2e38b75c0052caebdc52e773b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0d7def2e38b75c0052caebdc52e773b);
        cache_frame_f0d7def2e38b75c0052caebdc52e773b = NULL;
    }

    assertFrameObject(frame_f0d7def2e38b75c0052caebdc52e773b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__1___init__,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_1e9c0cfeb910edcd04f20eb80de3ff02,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__2_bytes_total(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__2_bytes_total,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_30bc9642c08440e78bc9a7e851b2e707,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$types,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__3___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__3___repr__,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_321e8d374fc2ea11187078d620dd9b9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__4___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__4___init__,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_646c58c298d5ed18a7b712853853cc8f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_a7d599b78b069a404f3db144d324bc4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$types,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__5___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__5___repr__,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_b404292a858200789ac69ddd097774a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__6___init__,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_3cde9a306fcc5c234bab9f4136802842,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$gl$types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__7_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__7_size,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_6b55d701065b8c1ada2b53bc77aee5a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__8___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__8___repr__,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_4d40e63c274f4eeee2b413cf1437198a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$gl$types$$$function__9_get(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$gl$types$$$function__9_get,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_f0d7def2e38b75c0052caebdc52e773b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$gl$types,
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

function_impl_code functable_arcade$gl$types[] = {
    impl_arcade$gl$types$$$function__4___init__$$$function__1_zip_attrs,
    impl_arcade$gl$types$$$function__1___init__,
    impl_arcade$gl$types$$$function__2_bytes_total,
    impl_arcade$gl$types$$$function__3___repr__,
    impl_arcade$gl$types$$$function__4___init__,
    impl_arcade$gl$types$$$function__5___repr__,
    impl_arcade$gl$types$$$function__6___init__,
    impl_arcade$gl$types$$$function__7_size,
    impl_arcade$gl$types$$$function__8___repr__,
    impl_arcade$gl$types$$$function__9_get,
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

    function_impl_code *current = functable_arcade$gl$types;
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

    if (offset > sizeof(functable_arcade$gl$types) || offset < 0) {
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
        functable_arcade$gl$types[offset],
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
        module_arcade$gl$types,
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
PyObject *modulecode_arcade$gl$types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("arcade.gl.types");

    // Store the module for future use.
    module_arcade$gl$types = module;

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
        PRINT_STRING("arcade.gl.types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("arcade.gl.types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initarcade$gl$types\n");

    moduledict_arcade$gl$types = MODULE_DICT(module_arcade$gl$types);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_arcade$gl$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_arcade$gl$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[8]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_arcade$gl$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$gl$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$gl$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_arcade$gl$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_arcade$gl$types);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_caf18beaa1a4744a78936615ce1ed788;
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
    PyObject *locals_arcade$gl$types$$$class__1_AttribFormat_89 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d24800ef8701533bdb3afd5f2b90956e_2;
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
    PyObject *locals_arcade$gl$types$$$class__2_BufferDescription_131 = NULL;
    struct Nuitka_FrameObject *frame_a2d258dbc7c21a38a6b741561f85569a_3;
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
    PyObject *locals_arcade$gl$types$$$class__3_TypeInfo_306 = NULL;
    struct Nuitka_FrameObject *frame_5c3bfc49d231ce02056d5e59f9b18b6b_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_arcade$gl$types$$$class__4_GLTypes_337 = NULL;
    struct Nuitka_FrameObject *frame_da286c52d9383eb61d24368f16e9f5dc_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_2);
    }
    frame_caf18beaa1a4744a78936615ce1ed788 = MAKE_MODULE_FRAME(codeobj_caf18beaa1a4744a78936615ce1ed788, module_arcade$gl$types);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_caf18beaa1a4744a78936615ce1ed788);
    assert(Py_REFCNT(frame_caf18beaa1a4744a78936615ce1ed788) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[68], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[69], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[36];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_arcade$gl$types;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[34];
        frame_caf18beaa1a4744a78936615ce1ed788->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_4);
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
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_arcade$gl$types,
                mod_consts[71],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[71]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_arcade$gl$types,
                mod_consts[72],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[72]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[73];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_arcade$gl$types;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[74];
        tmp_level_value_2 = mod_consts[34];
        frame_caf18beaa1a4744a78936615ce1ed788->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_arcade$gl$types,
                mod_consts[75],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[13];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_arcade$gl$types;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[76];
        tmp_level_value_3 = mod_consts[39];
        frame_caf18beaa1a4744a78936615ce1ed788->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_arcade$gl$types,
                mod_consts[21],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[34];
        tmp_assign_source_10 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM0(tmp_assign_source_10, 0, tmp_tuple_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[77]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 1, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[78]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 2, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[79]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 3, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[80]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[34];
        tmp_assign_source_11 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_2);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[82]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_11, 1, tmp_tuple_element_2);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[83]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_11, 2, tmp_tuple_element_2);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[84]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_11, 3, tmp_tuple_element_2);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[85]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_11, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_3;
        tmp_dict_key_1 = mod_consts[87];
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_13;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_4 = mod_consts[34];
            tmp_tuple_element_3 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_expression_value_12;
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[88]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_4);
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[89]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_3, 2, tmp_tuple_element_4);
                tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_11 == NULL)) {
                    tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[90]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_3, 3, tmp_tuple_element_4);
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[91]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_3, 4, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_tuple_element_3);
            goto tuple_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_3);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[92]);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[39];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_dict_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_12 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_19;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[93];
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_expression_value_18;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_6 = mod_consts[34];
                tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_14;
                    PyObject *tmp_expression_value_15;
                    PyObject *tmp_expression_value_16;
                    PyObject *tmp_expression_value_17;
                    PyTuple_SET_ITEM0(tmp_tuple_element_5, 0, tmp_tuple_element_6);
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[94]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_5, 1, tmp_tuple_element_6);
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[95]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_5, 2, tmp_tuple_element_6);
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[96]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_5, 3, tmp_tuple_element_6);
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[97]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;

                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_5, 4, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_tuple_element_5);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_5);
                tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_18 == NULL)) {
                    tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;

                    goto tuple_build_exception_5;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[98]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[99];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[100];
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_expression_value_23;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_7);
                tmp_tuple_element_8 = mod_consts[34];
                tmp_tuple_element_7 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_19;
                    PyObject *tmp_expression_value_20;
                    PyObject *tmp_expression_value_21;
                    PyObject *tmp_expression_value_22;
                    PyTuple_SET_ITEM0(tmp_tuple_element_7, 0, tmp_tuple_element_8);
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[101]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_7, 1, tmp_tuple_element_8);
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[102]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_7, 2, tmp_tuple_element_8);
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[103]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_7, 3, tmp_tuple_element_8);
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[104]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;

                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_7, 4, tmp_tuple_element_8);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_tuple_element_7);
                goto tuple_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_7);
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;

                    goto tuple_build_exception_7;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[105]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_7);
                tmp_tuple_element_7 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[106];
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_expression_value_28;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_9);
                tmp_tuple_element_10 = mod_consts[34];
                tmp_tuple_element_9 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_24;
                    PyObject *tmp_expression_value_25;
                    PyObject *tmp_expression_value_26;
                    PyObject *tmp_expression_value_27;
                    PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_10);
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[107]);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_9, 1, tmp_tuple_element_10);
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[108]);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_9, 2, tmp_tuple_element_10);
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[109]);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_9, 3, tmp_tuple_element_10);
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[110]);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;

                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_9, 4, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_tuple_element_9);
                goto tuple_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_9);
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;

                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[111]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_9);
                tmp_tuple_element_9 = mod_consts[39];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[112];
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_33;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_11);
                tmp_tuple_element_12 = mod_consts[34];
                tmp_tuple_element_11 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_29;
                    PyObject *tmp_expression_value_30;
                    PyObject *tmp_expression_value_31;
                    PyObject *tmp_expression_value_32;
                    PyTuple_SET_ITEM0(tmp_tuple_element_11, 0, tmp_tuple_element_12);
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[113]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_11, 1, tmp_tuple_element_12);
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[114]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_11, 2, tmp_tuple_element_12);
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[115]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_11, 3, tmp_tuple_element_12);
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[116]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;

                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_11, 4, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_tuple_element_11);
                goto tuple_build_exception_11;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_11);
                tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_33 == NULL)) {
                    tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;

                    goto tuple_build_exception_11;
                }
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[117]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_11);
                tmp_tuple_element_11 = mod_consts[99];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[118];
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_expression_value_38;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_13);
                tmp_tuple_element_14 = mod_consts[34];
                tmp_tuple_element_13 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_34;
                    PyObject *tmp_expression_value_35;
                    PyObject *tmp_expression_value_36;
                    PyObject *tmp_expression_value_37;
                    PyTuple_SET_ITEM0(tmp_tuple_element_13, 0, tmp_tuple_element_14);
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[119]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_13, 1, tmp_tuple_element_14);
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[120]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_13, 2, tmp_tuple_element_14);
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[121]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_13, 3, tmp_tuple_element_14);
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[122]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;

                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_13, 4, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_tuple_element_13);
                goto tuple_build_exception_13;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_13);
                tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_38 == NULL)) {
                    tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;

                    goto tuple_build_exception_13;
                }
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[123]);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_13);
                tmp_tuple_element_13 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[124];
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_expression_value_43;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_15);
                tmp_tuple_element_16 = mod_consts[34];
                tmp_tuple_element_15 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_39;
                    PyObject *tmp_expression_value_40;
                    PyObject *tmp_expression_value_41;
                    PyObject *tmp_expression_value_42;
                    PyTuple_SET_ITEM0(tmp_tuple_element_15, 0, tmp_tuple_element_16);
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[125]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_15, 1, tmp_tuple_element_16);
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[126]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_15, 2, tmp_tuple_element_16);
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[127]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_15, 3, tmp_tuple_element_16);
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[128]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;

                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_15, 4, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_tuple_element_15);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_15);
                tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_43 == NULL)) {
                    tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;

                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[92]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_15);
                tmp_tuple_element_15 = mod_consts[39];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[129];
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_expression_value_48;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_17);
                tmp_tuple_element_18 = mod_consts[34];
                tmp_tuple_element_17 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_44;
                    PyObject *tmp_expression_value_45;
                    PyObject *tmp_expression_value_46;
                    PyObject *tmp_expression_value_47;
                    PyTuple_SET_ITEM0(tmp_tuple_element_17, 0, tmp_tuple_element_18);
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[130]);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_17, 1, tmp_tuple_element_18);
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[131]);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_17, 2, tmp_tuple_element_18);
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[132]);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_17, 3, tmp_tuple_element_18);
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[133]);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;

                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_17, 4, tmp_tuple_element_18);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_tuple_element_17);
                goto tuple_build_exception_17;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_17);
                tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_48 == NULL)) {
                    tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;

                    goto tuple_build_exception_17;
                }
                tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[134]);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;

                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_17);
                tmp_tuple_element_17 = mod_consts[99];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[135];
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_expression_value_53;
                PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_19);
                tmp_tuple_element_20 = mod_consts[34];
                tmp_tuple_element_19 = MAKE_TUPLE_EMPTY(5);
                {
                    PyObject *tmp_expression_value_49;
                    PyObject *tmp_expression_value_50;
                    PyObject *tmp_expression_value_51;
                    PyObject *tmp_expression_value_52;
                    PyTuple_SET_ITEM0(tmp_tuple_element_19, 0, tmp_tuple_element_20);
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[136]);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_19, 1, tmp_tuple_element_20);
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[137]);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_19, 2, tmp_tuple_element_20);
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[138]);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_19, 3, tmp_tuple_element_20);
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[139]);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;

                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_19, 4, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_tuple_element_19);
                goto tuple_build_exception_19;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyTuple_SET_ITEM(tmp_dict_value_1, 1, tmp_tuple_element_19);
                tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_53 == NULL)) {
                    tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;

                    goto tuple_build_exception_19;
                }
                tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[140]);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;

                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_dict_value_1, 2, tmp_tuple_element_19);
                tmp_tuple_element_19 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_1, 3, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_54;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[142]);
        if (tmp_dict_key_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = mod_consts[143];
        tmp_assign_source_13 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[144]);
            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[145];
            tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[146]);
            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[147];
            tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_2;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[148]);
            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[149];
            tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_2;
            }
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[150]);
            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[151];
            tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_arcade$gl$types$$$class__1_AttribFormat_89 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__1_AttribFormat_89, mod_consts[154], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__1_AttribFormat_89, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__1_AttribFormat_89, mod_consts[156], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__1_AttribFormat_89, mod_consts[158], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[159];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_arcade$gl$types$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__1_AttribFormat_89, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_d24800ef8701533bdb3afd5f2b90956e_2 = MAKE_CLASS_FRAME(tstate, codeobj_d24800ef8701533bdb3afd5f2b90956e, module_arcade$gl$types, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d24800ef8701533bdb3afd5f2b90956e_2);
        assert(Py_REFCNT(frame_d24800ef8701533bdb3afd5f2b90956e_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_1;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;
            tmp_annotations_1 = DICT_COPY(mod_consts[162]);


            tmp_args_element_value_1 = MAKE_FUNCTION_arcade$gl$types$$$function__2_bytes_total(tmp_annotations_1);

            frame_d24800ef8701533bdb3afd5f2b90956e_2->m_frame.f_lineno = 119;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__1_AttribFormat_89, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d24800ef8701533bdb3afd5f2b90956e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d24800ef8701533bdb3afd5f2b90956e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d24800ef8701533bdb3afd5f2b90956e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d24800ef8701533bdb3afd5f2b90956e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d24800ef8701533bdb3afd5f2b90956e_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;


        tmp_dictset_value = MAKE_FUNCTION_arcade$gl$types$$$function__3___repr__();

        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__1_AttribFormat_89, mod_consts[165], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_21 = mod_consts[48];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[167];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_arcade$gl$types$$$class__1_AttribFormat_89;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_caf18beaa1a4744a78936615ce1ed788->m_frame.f_lineno = 89;
            tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_16 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_arcade$gl$types$$$class__1_AttribFormat_89);
        locals_arcade$gl$types$$$class__1_AttribFormat_89 = NULL;
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

        Py_DECREF(locals_arcade$gl$types$$$class__1_AttribFormat_89);
        locals_arcade$gl$types$$$class__1_AttribFormat_89 = NULL;
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
        exception_lineno = 89;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_arcade$gl$types$$$class__2_BufferDescription_131 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__2_BufferDescription_131, mod_consts[154], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__2_BufferDescription_131, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__2_BufferDescription_131, mod_consts[156], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_a2d258dbc7c21a38a6b741561f85569a_3 = MAKE_CLASS_FRAME(tstate, codeobj_a2d258dbc7c21a38a6b741561f85569a, module_arcade$gl$types, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a2d258dbc7c21a38a6b741561f85569a_3);
        assert(Py_REFCNT(frame_a2d258dbc7c21a38a6b741561f85569a_3) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_expression_value_59;
            tmp_dict_key_3 = mod_consts[170];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[105]);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[40];
            PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_22);
            tmp_dictset_value = _PyDict_NewPresized( 17 );
            {
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_expression_value_60;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_expression_value_61;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_expression_value_62;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_expression_value_63;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_expression_value_64;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_expression_value_65;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_expression_value_66;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_expression_value_69;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_expression_value_70;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_expression_value_71;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[87];
                tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_60 == NULL)) {
                    tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[92]);
                if (tmp_tuple_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = mod_consts[39];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_23);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[93];
                tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_61 == NULL)) {
                    tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[98]);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = mod_consts[99];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_24);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[100];
                tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_62 == NULL)) {
                    tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[105]);
                if (tmp_tuple_element_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_25);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[171];
                tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_63 == NULL)) {
                    tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[172]);
                if (tmp_tuple_element_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = mod_consts[173];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_26);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[174];
                tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_64 == NULL)) {
                    tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[105]);
                if (tmp_tuple_element_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_27);
                tmp_tuple_element_27 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_27);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[124];
                tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_65 == NULL)) {
                    tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 180;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[105]);
                if (tmp_tuple_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 180;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = mod_consts[39];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_28);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[129];
                tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_66 == NULL)) {
                    tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[105]);
                if (tmp_tuple_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = mod_consts[99];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_29);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[135];
                tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_67 == NULL)) {
                    tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[105]);
                if (tmp_tuple_element_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_30);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[175];
                tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_68 == NULL)) {
                    tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[123]);
                if (tmp_tuple_element_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_31);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[106];
                tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_69 == NULL)) {
                    tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 185;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[111]);
                if (tmp_tuple_element_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 185;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_32);
                tmp_tuple_element_32 = mod_consts[39];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_32);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[112];
                tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_70 == NULL)) {
                    tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 186;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[117]);
                if (tmp_tuple_element_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 186;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_33);
                tmp_tuple_element_33 = mod_consts[99];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_33);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[118];
                tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_71 == NULL)) {
                    tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[123]);
                if (tmp_tuple_element_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_dict_value_3, 0, tmp_tuple_element_34);
                tmp_tuple_element_34 = mod_consts[40];
                PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_34);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[176];
                tmp_dict_value_3 = mod_consts[177];
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[178];
                tmp_dict_value_3 = mod_consts[179];
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[180];
                tmp_dict_value_3 = mod_consts[181];
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[182];
                tmp_dict_value_3 = mod_consts[183];
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__2_BufferDescription_131, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = mod_consts[184];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__2_BufferDescription_131, mod_consts[158], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_defaults_2 = mod_consts[185];
            tmp_dict_key_4 = mod_consts[13];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_72;
                PyObject *tmp_subscript_value_1;
                PyObject *tmp_expression_value_73;
                PyObject *tmp_subscript_value_2;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[17];
                tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[14];
                tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[71]);

                if (unlikely(tmp_expression_value_72 == NULL)) {
                    tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                }

                if (tmp_expression_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_1);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[15];
                tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[71]);

                if (unlikely(tmp_expression_value_73 == NULL)) {
                    tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                }

                if (tmp_expression_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_2);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[16];
                tmp_dict_value_4 = (PyObject *)&PyBool_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_arcade$gl$types$$$function__4___init__(tmp_defaults_2, tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__2_BufferDescription_131, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a2d258dbc7c21a38a6b741561f85569a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a2d258dbc7c21a38a6b741561f85569a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a2d258dbc7c21a38a6b741561f85569a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a2d258dbc7c21a38a6b741561f85569a_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_a2d258dbc7c21a38a6b741561f85569a_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[187]);


            tmp_dictset_value = MAKE_FUNCTION_arcade$gl$types$$$function__5___repr__(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__2_BufferDescription_131, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_35 = mod_consts[169];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = mod_consts[167];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_arcade$gl$types$$$class__2_BufferDescription_131;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_caf18beaa1a4744a78936615ce1ed788->m_frame.f_lineno = 131;
            tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_20 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_arcade$gl$types$$$class__2_BufferDescription_131);
        locals_arcade$gl$types$$$class__2_BufferDescription_131 = NULL;
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

        Py_DECREF(locals_arcade$gl$types$$$class__2_BufferDescription_131);
        locals_arcade$gl$types$$$class__2_BufferDescription_131 = NULL;
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
        exception_lineno = 131;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_20);
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
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_arcade$gl$types$$$class__3_TypeInfo_306 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__3_TypeInfo_306, mod_consts[154], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[189];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__3_TypeInfo_306, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__3_TypeInfo_306, mod_consts[156], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[191];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__3_TypeInfo_306, mod_consts[158], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_arcade$gl$types$$$function__6___init__();

        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__3_TypeInfo_306, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_5c3bfc49d231ce02056d5e59f9b18b6b_4 = MAKE_CLASS_FRAME(tstate, codeobj_5c3bfc49d231ce02056d5e59f9b18b6b, module_arcade$gl$types, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5c3bfc49d231ce02056d5e59f9b18b6b_4);
        assert(Py_REFCNT(frame_5c3bfc49d231ce02056d5e59f9b18b6b_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_4;
            tmp_called_value_4 = (PyObject *)&PyProperty_Type;
            tmp_annotations_4 = DICT_COPY(mod_consts[162]);


            tmp_args_element_value_2 = MAKE_FUNCTION_arcade$gl$types$$$function__7_size(tmp_annotations_4);

            frame_5c3bfc49d231ce02056d5e59f9b18b6b_4->m_frame.f_lineno = 326;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__3_TypeInfo_306, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5c3bfc49d231ce02056d5e59f9b18b6b_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5c3bfc49d231ce02056d5e59f9b18b6b_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5c3bfc49d231ce02056d5e59f9b18b6b_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5c3bfc49d231ce02056d5e59f9b18b6b_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_5c3bfc49d231ce02056d5e59f9b18b6b_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[187]);


            tmp_dictset_value = MAKE_FUNCTION_arcade$gl$types$$$function__8___repr__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__3_TypeInfo_306, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_36 = mod_consts[190];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = mod_consts[167];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_arcade$gl$types$$$class__3_TypeInfo_306;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_caf18beaa1a4744a78936615ce1ed788->m_frame.f_lineno = 306;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_24 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_arcade$gl$types$$$class__3_TypeInfo_306);
        locals_arcade$gl$types$$$class__3_TypeInfo_306 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_arcade$gl$types$$$class__3_TypeInfo_306);
        locals_arcade$gl$types$$$class__3_TypeInfo_306 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 306;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_24);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_arcade$gl$types$$$class__4_GLTypes_337 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__4_GLTypes_337, mod_consts[154], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[195];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__4_GLTypes_337, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[196];
        tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__4_GLTypes_337, mod_consts[156], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_da286c52d9383eb61d24368f16e9f5dc_5 = MAKE_CLASS_FRAME(tstate, codeobj_da286c52d9383eb61d24368f16e9f5dc, module_arcade$gl$types, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_da286c52d9383eb61d24368f16e9f5dc_5);
        assert(Py_REFCNT(frame_da286c52d9383eb61d24368f16e9f5dc_5) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_args_element_value_7;
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[105]);
            if (tmp_dict_key_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_args_element_value_3 = mod_consts[105];
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[105]);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);
                Py_DECREF(tmp_args_element_value_4);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[105]);
            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);
                Py_DECREF(tmp_args_element_value_4);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_args_element_value_6 = mod_consts[40];
            tmp_args_element_value_7 = mod_consts[39];
            frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 348;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
                tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_6, call_args);
            }

            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = _PyDict_NewPresized( 23 );
            {
                PyObject *tmp_expression_value_77;
                PyObject *tmp_called_value_7;
                PyObject *tmp_args_element_value_8;
                PyObject *tmp_args_element_value_9;
                PyObject *tmp_expression_value_78;
                PyObject *tmp_args_element_value_10;
                PyObject *tmp_expression_value_79;
                PyObject *tmp_args_element_value_11;
                PyObject *tmp_args_element_value_12;
                PyObject *tmp_expression_value_80;
                PyObject *tmp_called_value_8;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_args_element_value_14;
                PyObject *tmp_expression_value_81;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_expression_value_82;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_args_element_value_17;
                PyObject *tmp_expression_value_83;
                PyObject *tmp_called_value_9;
                PyObject *tmp_args_element_value_18;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_expression_value_84;
                PyObject *tmp_args_element_value_20;
                PyObject *tmp_expression_value_85;
                PyObject *tmp_args_element_value_21;
                PyObject *tmp_args_element_value_22;
                PyObject *tmp_expression_value_86;
                PyObject *tmp_called_value_10;
                PyObject *tmp_args_element_value_23;
                PyObject *tmp_args_element_value_24;
                PyObject *tmp_expression_value_87;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_expression_value_88;
                PyObject *tmp_args_element_value_26;
                PyObject *tmp_args_element_value_27;
                PyObject *tmp_expression_value_89;
                PyObject *tmp_called_value_11;
                PyObject *tmp_args_element_value_28;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_expression_value_90;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_expression_value_91;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_args_element_value_32;
                PyObject *tmp_expression_value_92;
                PyObject *tmp_called_value_12;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_expression_value_93;
                PyObject *tmp_args_element_value_35;
                PyObject *tmp_expression_value_94;
                PyObject *tmp_args_element_value_36;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_expression_value_95;
                PyObject *tmp_called_value_13;
                PyObject *tmp_args_element_value_38;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_expression_value_96;
                PyObject *tmp_args_element_value_40;
                PyObject *tmp_expression_value_97;
                PyObject *tmp_args_element_value_41;
                PyObject *tmp_args_element_value_42;
                PyObject *tmp_expression_value_98;
                PyObject *tmp_called_value_14;
                PyObject *tmp_args_element_value_43;
                PyObject *tmp_args_element_value_44;
                PyObject *tmp_expression_value_99;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_expression_value_100;
                PyObject *tmp_args_element_value_46;
                PyObject *tmp_args_element_value_47;
                PyObject *tmp_expression_value_101;
                PyObject *tmp_called_value_15;
                PyObject *tmp_args_element_value_48;
                PyObject *tmp_args_element_value_49;
                PyObject *tmp_expression_value_102;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_expression_value_103;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_args_element_value_52;
                PyObject *tmp_expression_value_104;
                PyObject *tmp_called_value_16;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_expression_value_105;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_expression_value_106;
                PyObject *tmp_args_element_value_56;
                PyObject *tmp_args_element_value_57;
                PyObject *tmp_expression_value_107;
                PyObject *tmp_called_value_17;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_expression_value_108;
                PyObject *tmp_args_element_value_60;
                PyObject *tmp_expression_value_109;
                PyObject *tmp_args_element_value_61;
                PyObject *tmp_args_element_value_62;
                PyObject *tmp_expression_value_110;
                PyObject *tmp_called_value_18;
                PyObject *tmp_args_element_value_63;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_expression_value_111;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_expression_value_112;
                PyObject *tmp_args_element_value_66;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_expression_value_113;
                PyObject *tmp_called_value_19;
                PyObject *tmp_args_element_value_68;
                PyObject *tmp_args_element_value_69;
                PyObject *tmp_expression_value_114;
                PyObject *tmp_args_element_value_70;
                PyObject *tmp_expression_value_115;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_args_element_value_72;
                PyObject *tmp_expression_value_116;
                PyObject *tmp_called_value_20;
                PyObject *tmp_args_element_value_73;
                PyObject *tmp_args_element_value_74;
                PyObject *tmp_expression_value_117;
                PyObject *tmp_args_element_value_75;
                PyObject *tmp_expression_value_118;
                PyObject *tmp_args_element_value_76;
                PyObject *tmp_args_element_value_77;
                PyObject *tmp_expression_value_119;
                PyObject *tmp_called_value_21;
                PyObject *tmp_args_element_value_78;
                PyObject *tmp_args_element_value_79;
                PyObject *tmp_expression_value_120;
                PyObject *tmp_args_element_value_80;
                PyObject *tmp_expression_value_121;
                PyObject *tmp_args_element_value_81;
                PyObject *tmp_args_element_value_82;
                PyObject *tmp_expression_value_122;
                PyObject *tmp_called_value_22;
                PyObject *tmp_args_element_value_83;
                PyObject *tmp_args_element_value_84;
                PyObject *tmp_expression_value_123;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_expression_value_124;
                PyObject *tmp_args_element_value_86;
                PyObject *tmp_args_element_value_87;
                PyObject *tmp_expression_value_125;
                PyObject *tmp_called_value_23;
                PyObject *tmp_args_element_value_88;
                PyObject *tmp_args_element_value_89;
                PyObject *tmp_expression_value_126;
                PyObject *tmp_args_element_value_90;
                PyObject *tmp_expression_value_127;
                PyObject *tmp_args_element_value_91;
                PyObject *tmp_args_element_value_92;
                PyObject *tmp_expression_value_128;
                PyObject *tmp_called_value_24;
                PyObject *tmp_args_element_value_93;
                PyObject *tmp_args_element_value_94;
                PyObject *tmp_expression_value_129;
                PyObject *tmp_args_element_value_95;
                PyObject *tmp_expression_value_130;
                PyObject *tmp_args_element_value_96;
                PyObject *tmp_args_element_value_97;
                PyObject *tmp_expression_value_131;
                PyObject *tmp_called_value_25;
                PyObject *tmp_args_element_value_98;
                PyObject *tmp_args_element_value_99;
                PyObject *tmp_expression_value_132;
                PyObject *tmp_args_element_value_100;
                PyObject *tmp_expression_value_133;
                PyObject *tmp_args_element_value_101;
                PyObject *tmp_args_element_value_102;
                PyObject *tmp_expression_value_134;
                PyObject *tmp_called_value_26;
                PyObject *tmp_args_element_value_103;
                PyObject *tmp_args_element_value_104;
                PyObject *tmp_expression_value_135;
                PyObject *tmp_args_element_value_105;
                PyObject *tmp_expression_value_136;
                PyObject *tmp_args_element_value_106;
                PyObject *tmp_args_element_value_107;
                PyObject *tmp_expression_value_137;
                PyObject *tmp_called_value_27;
                PyObject *tmp_args_element_value_108;
                PyObject *tmp_args_element_value_109;
                PyObject *tmp_expression_value_138;
                PyObject *tmp_args_element_value_110;
                PyObject *tmp_expression_value_139;
                PyObject *tmp_args_element_value_111;
                PyObject *tmp_args_element_value_112;
                PyObject *tmp_expression_value_140;
                PyObject *tmp_called_value_28;
                PyObject *tmp_args_element_value_113;
                PyObject *tmp_args_element_value_114;
                PyObject *tmp_expression_value_141;
                PyObject *tmp_args_element_value_115;
                PyObject *tmp_expression_value_142;
                PyObject *tmp_args_element_value_116;
                PyObject *tmp_args_element_value_117;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 348;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_77 == NULL)) {
                    tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[197]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_7 == NULL)) {
                    tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 349;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_8 = mod_consts[197];
                tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_78 == NULL)) {
                    tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 350;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[197]);
                if (tmp_args_element_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 350;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_79 == NULL)) {
                    tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_9);

                    exception_lineno = 350;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[105]);
                if (tmp_args_element_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_9);

                    exception_lineno = 350;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_11 = mod_consts[40];
                tmp_args_element_value_12 = mod_consts[99];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 349;
                {
                    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_7, call_args);
                }

                Py_DECREF(tmp_args_element_value_9);
                Py_DECREF(tmp_args_element_value_10);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 349;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_80 == NULL)) {
                    tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[198]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_8 == NULL)) {
                    tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_13 = mod_consts[198];
                tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_81 == NULL)) {
                    tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_81 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[198]);
                if (tmp_args_element_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_82 == NULL)) {
                    tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_82 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_14);

                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[105]);
                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_14);

                    exception_lineno = 353;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_16 = mod_consts[40];
                tmp_args_element_value_17 = mod_consts[199];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 352;
                {
                    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_8, call_args);
                }

                Py_DECREF(tmp_args_element_value_14);
                Py_DECREF(tmp_args_element_value_15);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 352;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_83 == NULL)) {
                    tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[200]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_9 == NULL)) {
                    tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 355;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_18 = mod_consts[200];
                tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_84 == NULL)) {
                    tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_84 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 356;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[200]);
                if (tmp_args_element_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 356;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_85 == NULL)) {
                    tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_85 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_19);

                    exception_lineno = 356;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[105]);
                if (tmp_args_element_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_19);

                    exception_lineno = 356;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_21 = mod_consts[40];
                tmp_args_element_value_22 = mod_consts[40];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 355;
                {
                    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_9, call_args);
                }

                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_20);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 355;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_86 == NULL)) {
                    tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_86 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[172]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_10 == NULL)) {
                    tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_23 = mod_consts[172];
                tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_87 == NULL)) {
                    tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_87 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[172]);
                if (tmp_args_element_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_88 == NULL)) {
                    tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_88 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_24);

                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[172]);
                if (tmp_args_element_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_24);

                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_26 = mod_consts[173];
                tmp_args_element_value_27 = mod_consts[39];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 359;
                {
                    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_10, call_args);
                }

                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_89 == NULL)) {
                    tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_89 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 360;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[201]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 360;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_11 == NULL)) {
                    tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 360;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_28 = mod_consts[201];
                tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_90 == NULL)) {
                    tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 361;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[201]);
                if (tmp_args_element_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 361;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_91 == NULL)) {
                    tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_91 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_29);

                    exception_lineno = 361;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[172]);
                if (tmp_args_element_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_29);

                    exception_lineno = 361;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_31 = mod_consts[173];
                tmp_args_element_value_32 = mod_consts[99];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 360;
                {
                    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_11, call_args);
                }

                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 360;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 360;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_92 == NULL)) {
                    tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_92 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 363;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[202]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 363;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_12 == NULL)) {
                    tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 363;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_33 = mod_consts[202];
                tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_93 == NULL)) {
                    tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_93 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 364;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[202]);
                if (tmp_args_element_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 364;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_94 == NULL)) {
                    tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_34);

                    exception_lineno = 364;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[172]);
                if (tmp_args_element_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_34);

                    exception_lineno = 364;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_36 = mod_consts[173];
                tmp_args_element_value_37 = mod_consts[199];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 363;
                {
                    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_12, call_args);
                }

                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 363;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 363;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_95 == NULL)) {
                    tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_95 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 366;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[203]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 366;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_13 == NULL)) {
                    tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 366;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_38 = mod_consts[203];
                tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_96 == NULL)) {
                    tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_96 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 367;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[203]);
                if (tmp_args_element_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 367;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_97 == NULL)) {
                    tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_97 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 367;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[172]);
                if (tmp_args_element_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_39);

                    exception_lineno = 367;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_41 = mod_consts[173];
                tmp_args_element_value_42 = mod_consts[40];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 366;
                {
                    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_13, call_args);
                }

                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 366;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 366;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_98 == NULL)) {
                    tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_98 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[204]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_14 == NULL)) {
                    tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_43 = mod_consts[204];
                tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_99 == NULL)) {
                    tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_99 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[204]);
                if (tmp_args_element_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_100 == NULL)) {
                    tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_44);

                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[204]);
                if (tmp_args_element_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_44);

                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_46 = mod_consts[39];
                tmp_args_element_value_47 = mod_consts[39];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 370;
                {
                    PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_14, call_args);
                }

                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_101 == NULL)) {
                    tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_101 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[205]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_15 == NULL)) {
                    tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_48 = mod_consts[205];
                tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_102 == NULL)) {
                    tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_102 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[205]);
                if (tmp_args_element_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_103 == NULL)) {
                    tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_103 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_49);

                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[204]);
                if (tmp_args_element_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_49);

                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_51 = mod_consts[39];
                tmp_args_element_value_52 = mod_consts[99];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 371;
                {
                    PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_15, call_args);
                }

                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_104 == NULL)) {
                    tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_104 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[206]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_16 == NULL)) {
                    tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_53 = mod_consts[206];
                tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_105 == NULL)) {
                    tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_105 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[206]);
                if (tmp_args_element_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_106 == NULL)) {
                    tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_106 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_54);

                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[204]);
                if (tmp_args_element_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_54);

                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_56 = mod_consts[39];
                tmp_args_element_value_57 = mod_consts[199];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 372;
                {
                    PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_16, call_args);
                }

                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_107 == NULL)) {
                    tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_107 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[207]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_17 == NULL)) {
                    tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_58 = mod_consts[207];
                tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_108 == NULL)) {
                    tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_108 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[207]);
                if (tmp_args_element_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_109 == NULL)) {
                    tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_109 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_59);

                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[204]);
                if (tmp_args_element_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_59);

                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_61 = mod_consts[39];
                tmp_args_element_value_62 = mod_consts[40];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 373;
                {
                    PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_17, call_args);
                }

                Py_DECREF(tmp_args_element_value_59);
                Py_DECREF(tmp_args_element_value_60);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 373;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_110 == NULL)) {
                    tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_110 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[123]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_18 == NULL)) {
                    tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_63 = mod_consts[123];
                tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_111 == NULL)) {
                    tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_111 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[123]);
                if (tmp_args_element_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_112 == NULL)) {
                    tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_112 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_64);

                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[123]);
                if (tmp_args_element_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_64);

                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_66 = mod_consts[40];
                tmp_args_element_value_67 = mod_consts[39];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 375;
                {
                    PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_18, call_args);
                }

                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 375;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_113 == NULL)) {
                    tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_113 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[208]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_19 == NULL)) {
                    tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_68 = mod_consts[208];
                tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_114 == NULL)) {
                    tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_114 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[208]);
                if (tmp_args_element_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_115 == NULL)) {
                    tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_115 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_69);

                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[123]);
                if (tmp_args_element_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_69);

                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_71 = mod_consts[40];
                tmp_args_element_value_72 = mod_consts[99];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 376;
                {
                    PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_19, call_args);
                }

                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_116 == NULL)) {
                    tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_116 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[209]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_20 == NULL)) {
                    tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_73 = mod_consts[209];
                tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_117 == NULL)) {
                    tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_117 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[209]);
                if (tmp_args_element_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_118 == NULL)) {
                    tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_118 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_74);

                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[123]);
                if (tmp_args_element_value_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_74);

                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_76 = mod_consts[40];
                tmp_args_element_value_77 = mod_consts[199];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 377;
                {
                    PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_20, call_args);
                }

                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_75);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_119 == NULL)) {
                    tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_119 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[210]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_21 == NULL)) {
                    tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_78 = mod_consts[210];
                tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_120 == NULL)) {
                    tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_120 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[210]);
                if (tmp_args_element_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_121 == NULL)) {
                    tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_121 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_79);

                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[123]);
                if (tmp_args_element_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_79);

                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_81 = mod_consts[40];
                tmp_args_element_value_82 = mod_consts[40];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 378;
                {
                    PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81, tmp_args_element_value_82};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_21, call_args);
                }

                Py_DECREF(tmp_args_element_value_79);
                Py_DECREF(tmp_args_element_value_80);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_122 == NULL)) {
                    tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_122 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[140]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_22 == NULL)) {
                    tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 380;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_83 = mod_consts[140];
                tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_123 == NULL)) {
                    tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_123 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 381;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[140]);
                if (tmp_args_element_value_84 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 381;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_124 == NULL)) {
                    tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_124 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_84);

                    exception_lineno = 381;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[140]);
                if (tmp_args_element_value_85 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_84);

                    exception_lineno = 381;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_86 = mod_consts[40];
                tmp_args_element_value_87 = mod_consts[39];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 380;
                {
                    PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_22, call_args);
                }

                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 380;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_125 == NULL)) {
                    tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_125 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[211]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_23 == NULL)) {
                    tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_88 = mod_consts[211];
                tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_126 == NULL)) {
                    tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_126 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[211]);
                if (tmp_args_element_value_89 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_127 == NULL)) {
                    tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_127 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_89);

                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[140]);
                if (tmp_args_element_value_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_89);

                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_91 = mod_consts[40];
                tmp_args_element_value_92 = mod_consts[99];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 383;
                {
                    PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_23, call_args);
                }

                Py_DECREF(tmp_args_element_value_89);
                Py_DECREF(tmp_args_element_value_90);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_128 == NULL)) {
                    tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_128 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 386;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[212]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 386;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_24 == NULL)) {
                    tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 386;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_93 = mod_consts[212];
                tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_129 == NULL)) {
                    tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_129 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 387;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[212]);
                if (tmp_args_element_value_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 387;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_130 == NULL)) {
                    tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_130 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_94);

                    exception_lineno = 387;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[140]);
                if (tmp_args_element_value_95 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_94);

                    exception_lineno = 387;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_96 = mod_consts[40];
                tmp_args_element_value_97 = mod_consts[199];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 386;
                {
                    PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_24, call_args);
                }

                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_95);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 386;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 386;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_131 == NULL)) {
                    tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_131 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 389;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[213]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 389;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_25 == NULL)) {
                    tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 389;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_98 = mod_consts[213];
                tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_132 == NULL)) {
                    tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_132 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 390;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[213]);
                if (tmp_args_element_value_99 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 390;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_133 == NULL)) {
                    tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_133 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_99);

                    exception_lineno = 390;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[140]);
                if (tmp_args_element_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_99);

                    exception_lineno = 390;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_101 = mod_consts[40];
                tmp_args_element_value_102 = mod_consts[40];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 389;
                {
                    PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_25, call_args);
                }

                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_args_element_value_100);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 389;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 389;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_134 == NULL)) {
                    tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_134 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[134]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_26 == NULL)) {
                    tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_103 = mod_consts[214];
                tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_135 == NULL)) {
                    tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_135 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 394;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[134]);
                if (tmp_args_element_value_104 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 394;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_136 == NULL)) {
                    tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_136 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_104);

                    exception_lineno = 394;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[134]);
                if (tmp_args_element_value_105 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_104);

                    exception_lineno = 394;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_106 = mod_consts[99];
                tmp_args_element_value_107 = mod_consts[99];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 393;
                {
                    PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_26, call_args);
                }

                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_137 == NULL)) {
                    tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_137 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[111]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_27 == NULL)) {
                    tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_108 = mod_consts[111];
                tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_138 == NULL)) {
                    tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_138 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[111]);
                if (tmp_args_element_value_109 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_139 == NULL)) {
                    tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_139 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_109);

                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[111]);
                if (tmp_args_element_value_110 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_109);

                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_111 = mod_consts[39];
                tmp_args_element_value_112 = mod_consts[39];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 397;
                {
                    PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111, tmp_args_element_value_112};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_27, call_args);
                }

                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_140 == NULL)) {
                    tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_140 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 398;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[92]);
                if (tmp_dict_key_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 398;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[190]);

                if (unlikely(tmp_called_value_28 == NULL)) {
                    tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
                }

                if (tmp_called_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 398;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_113 = mod_consts[92];
                tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_141 == NULL)) {
                    tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_141 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 399;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[92]);
                if (tmp_args_element_value_114 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 399;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_142 == NULL)) {
                    tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_expression_value_142 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_114);

                    exception_lineno = 399;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[92]);
                if (tmp_args_element_value_115 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);
                    Py_DECREF(tmp_args_element_value_114);

                    exception_lineno = 399;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_args_element_value_116 = mod_consts[39];
                tmp_args_element_value_117 = mod_consts[39];
                frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame.f_lineno = 398;
                {
                    PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
                    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_28, call_args);
                }

                Py_DECREF(tmp_args_element_value_114);
                Py_DECREF(tmp_args_element_value_115);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dict_key_5);

                    exception_lineno = 398;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                Py_DECREF(tmp_dict_key_5);
                if (tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 398;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__4_GLTypes_337, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_da286c52d9383eb61d24368f16e9f5dc_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_da286c52d9383eb61d24368f16e9f5dc_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_da286c52d9383eb61d24368f16e9f5dc_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_da286c52d9383eb61d24368f16e9f5dc_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_da286c52d9383eb61d24368f16e9f5dc_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[215]);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_arcade$gl$types$$$function__9_get(tmp_annotations_6);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_arcade$gl$types$$$class__4_GLTypes_337, mod_consts[216], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_29 = (PyObject *)&PyType_Type;
            tmp_tuple_element_37 = mod_consts[196];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = mod_consts[167];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = locals_arcade$gl$types$$$class__4_GLTypes_337;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
            frame_caf18beaa1a4744a78936615ce1ed788->m_frame.f_lineno = 337;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_28 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_arcade$gl$types$$$class__4_GLTypes_337);
        locals_arcade$gl$types$$$class__4_GLTypes_337 = NULL;
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

        Py_DECREF(locals_arcade$gl$types$$$class__4_GLTypes_337);
        locals_arcade$gl$types$$$class__4_GLTypes_337 = NULL;
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
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 337;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_arcade$gl$types, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_28);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_caf18beaa1a4744a78936615ce1ed788, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_caf18beaa1a4744a78936615ce1ed788->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_caf18beaa1a4744a78936615ce1ed788, exception_lineno);
    }



    assertFrameObject(frame_caf18beaa1a4744a78936615ce1ed788);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("arcade.gl.types", false);

    Py_INCREF(module_arcade$gl$types);
    return module_arcade$gl$types;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$gl$types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("arcade$gl$types", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
