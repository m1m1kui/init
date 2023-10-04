/* Generated code for Python module 'pyglet.window.key'
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

/* The "module_pyglet$window$key" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$window$key;
PyDictObject *moduledict_pyglet$window$key;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[464];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[464];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.window.key"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 464; i++) {
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
void checkModuleConstants_pyglet$window$key(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 464; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cfb72000243b2abe8c83b9eabd09daa4;
static PyCodeObject *codeobj_6abcca1432633e7cd9756600789ab4d8;
static PyCodeObject *codeobj_8627ca2437e80f907949daf2825ea474;
static PyCodeObject *codeobj_d47014521af59251313711e85980af8a;
static PyCodeObject *codeobj_3c917842c4a0db1a1fc9a40bed9ab4d9;
static PyCodeObject *codeobj_bd318f889adffff094cb594339a7ae74;
static PyCodeObject *codeobj_21506d5f55b52e46983f7ab799186a3c;
static PyCodeObject *codeobj_0c1d4affa7ea724471dc3593dbe032d7;
static PyCodeObject *codeobj_5a274959c4f979470b055cc10799ef6f;
static PyCodeObject *codeobj_c76f6bb925ee91b760afe1115a255809;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[454]); CHECK_OBJECT(module_filename_obj);
    codeobj_cfb72000243b2abe8c83b9eabd09daa4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[455], mod_consts[455], NULL, NULL, 0, 0, 0);
    codeobj_6abcca1432633e7cd9756600789ab4d8 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[456], NULL, 2, 0, 0);
    codeobj_8627ca2437e80f907949daf2825ea474 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[457], NULL, 1, 0, 0);
    codeobj_d47014521af59251313711e85980af8a = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[458], NULL, 1, 0, 0);
    codeobj_3c917842c4a0db1a1fc9a40bed9ab4d9 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[459], NULL, 1, 0, 0);
    codeobj_bd318f889adffff094cb594339a7ae74 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[457], NULL, 1, 0, 0);
    codeobj_21506d5f55b52e46983f7ab799186a3c = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[460], NULL, 3, 0, 0);
    codeobj_0c1d4affa7ea724471dc3593dbe032d7 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[460], NULL, 3, 0, 0);
    codeobj_5a274959c4f979470b055cc10799ef6f = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[461], NULL, 1, 0, 0);
    codeobj_c76f6bb925ee91b760afe1115a255809 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[462], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__1___init__();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__2_on_key_press();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__3_on_key_release();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__4_on_deactivate();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__5___getitem__();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__6_modifiers_string();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__7_symbol_string();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__8_motion_string();


static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__9_user_key();


// The module function definitions.
static PyObject *impl_pyglet$window$key$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8627ca2437e80f907949daf2825ea474;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8627ca2437e80f907949daf2825ea474 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8627ca2437e80f907949daf2825ea474)) {
        Py_XDECREF(cache_frame_8627ca2437e80f907949daf2825ea474);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8627ca2437e80f907949daf2825ea474 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8627ca2437e80f907949daf2825ea474 = MAKE_FUNCTION_FRAME(tstate, codeobj_8627ca2437e80f907949daf2825ea474, module_pyglet$window$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8627ca2437e80f907949daf2825ea474->m_type_description == NULL);
    frame_8627ca2437e80f907949daf2825ea474 = cache_frame_8627ca2437e80f907949daf2825ea474;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8627ca2437e80f907949daf2825ea474);
    assert(Py_REFCNT(frame_8627ca2437e80f907949daf2825ea474) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8627ca2437e80f907949daf2825ea474, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8627ca2437e80f907949daf2825ea474->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8627ca2437e80f907949daf2825ea474, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8627ca2437e80f907949daf2825ea474,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8627ca2437e80f907949daf2825ea474 == cache_frame_8627ca2437e80f907949daf2825ea474) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8627ca2437e80f907949daf2825ea474);
        cache_frame_8627ca2437e80f907949daf2825ea474 = NULL;
    }

    assertFrameObject(frame_8627ca2437e80f907949daf2825ea474);

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


static PyObject *impl_pyglet$window$key$$$function__2_on_key_press(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_symbol = python_pars[1];
    PyObject *par_modifiers = python_pars[2];
    struct Nuitka_FrameObject *frame_21506d5f55b52e46983f7ab799186a3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_21506d5f55b52e46983f7ab799186a3c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21506d5f55b52e46983f7ab799186a3c)) {
        Py_XDECREF(cache_frame_21506d5f55b52e46983f7ab799186a3c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21506d5f55b52e46983f7ab799186a3c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21506d5f55b52e46983f7ab799186a3c = MAKE_FUNCTION_FRAME(tstate, codeobj_21506d5f55b52e46983f7ab799186a3c, module_pyglet$window$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21506d5f55b52e46983f7ab799186a3c->m_type_description == NULL);
    frame_21506d5f55b52e46983f7ab799186a3c = cache_frame_21506d5f55b52e46983f7ab799186a3c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_21506d5f55b52e46983f7ab799186a3c);
    assert(Py_REFCNT(frame_21506d5f55b52e46983f7ab799186a3c) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_symbol);
        tmp_ass_subscript_1 = par_symbol;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21506d5f55b52e46983f7ab799186a3c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21506d5f55b52e46983f7ab799186a3c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21506d5f55b52e46983f7ab799186a3c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21506d5f55b52e46983f7ab799186a3c,
        type_description_1,
        par_self,
        par_symbol,
        par_modifiers
    );


    // Release cached frame if used for exception.
    if (frame_21506d5f55b52e46983f7ab799186a3c == cache_frame_21506d5f55b52e46983f7ab799186a3c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21506d5f55b52e46983f7ab799186a3c);
        cache_frame_21506d5f55b52e46983f7ab799186a3c = NULL;
    }

    assertFrameObject(frame_21506d5f55b52e46983f7ab799186a3c);

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
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$key$$$function__3_on_key_release(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_symbol = python_pars[1];
    PyObject *par_modifiers = python_pars[2];
    struct Nuitka_FrameObject *frame_0c1d4affa7ea724471dc3593dbe032d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0c1d4affa7ea724471dc3593dbe032d7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c1d4affa7ea724471dc3593dbe032d7)) {
        Py_XDECREF(cache_frame_0c1d4affa7ea724471dc3593dbe032d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c1d4affa7ea724471dc3593dbe032d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c1d4affa7ea724471dc3593dbe032d7 = MAKE_FUNCTION_FRAME(tstate, codeobj_0c1d4affa7ea724471dc3593dbe032d7, module_pyglet$window$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c1d4affa7ea724471dc3593dbe032d7->m_type_description == NULL);
    frame_0c1d4affa7ea724471dc3593dbe032d7 = cache_frame_0c1d4affa7ea724471dc3593dbe032d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0c1d4affa7ea724471dc3593dbe032d7);
    assert(Py_REFCNT(frame_0c1d4affa7ea724471dc3593dbe032d7) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_symbol);
        tmp_ass_subscript_1 = par_symbol;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c1d4affa7ea724471dc3593dbe032d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c1d4affa7ea724471dc3593dbe032d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c1d4affa7ea724471dc3593dbe032d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c1d4affa7ea724471dc3593dbe032d7,
        type_description_1,
        par_self,
        par_symbol,
        par_modifiers
    );


    // Release cached frame if used for exception.
    if (frame_0c1d4affa7ea724471dc3593dbe032d7 == cache_frame_0c1d4affa7ea724471dc3593dbe032d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c1d4affa7ea724471dc3593dbe032d7);
        cache_frame_0c1d4affa7ea724471dc3593dbe032d7 = NULL;
    }

    assertFrameObject(frame_0c1d4affa7ea724471dc3593dbe032d7);

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
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$key$$$function__4_on_deactivate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bd318f889adffff094cb594339a7ae74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd318f889adffff094cb594339a7ae74 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd318f889adffff094cb594339a7ae74)) {
        Py_XDECREF(cache_frame_bd318f889adffff094cb594339a7ae74);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd318f889adffff094cb594339a7ae74 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd318f889adffff094cb594339a7ae74 = MAKE_FUNCTION_FRAME(tstate, codeobj_bd318f889adffff094cb594339a7ae74, module_pyglet$window$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd318f889adffff094cb594339a7ae74->m_type_description == NULL);
    frame_bd318f889adffff094cb594339a7ae74 = cache_frame_bd318f889adffff094cb594339a7ae74;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bd318f889adffff094cb594339a7ae74);
    assert(Py_REFCNT(frame_bd318f889adffff094cb594339a7ae74) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bd318f889adffff094cb594339a7ae74->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd318f889adffff094cb594339a7ae74, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd318f889adffff094cb594339a7ae74->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd318f889adffff094cb594339a7ae74, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd318f889adffff094cb594339a7ae74,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bd318f889adffff094cb594339a7ae74 == cache_frame_bd318f889adffff094cb594339a7ae74) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd318f889adffff094cb594339a7ae74);
        cache_frame_bd318f889adffff094cb594339a7ae74 = NULL;
    }

    assertFrameObject(frame_bd318f889adffff094cb594339a7ae74);

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


static PyObject *impl_pyglet$window$key$$$function__5___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_6abcca1432633e7cd9756600789ab4d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6abcca1432633e7cd9756600789ab4d8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6abcca1432633e7cd9756600789ab4d8)) {
        Py_XDECREF(cache_frame_6abcca1432633e7cd9756600789ab4d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6abcca1432633e7cd9756600789ab4d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6abcca1432633e7cd9756600789ab4d8 = MAKE_FUNCTION_FRAME(tstate, codeobj_6abcca1432633e7cd9756600789ab4d8, module_pyglet$window$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6abcca1432633e7cd9756600789ab4d8->m_type_description == NULL);
    frame_6abcca1432633e7cd9756600789ab4d8 = cache_frame_6abcca1432633e7cd9756600789ab4d8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6abcca1432633e7cd9756600789ab4d8);
    assert(Py_REFCNT(frame_6abcca1432633e7cd9756600789ab4d8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = Py_False;
        frame_6abcca1432633e7cd9756600789ab4d8->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6abcca1432633e7cd9756600789ab4d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6abcca1432633e7cd9756600789ab4d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6abcca1432633e7cd9756600789ab4d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6abcca1432633e7cd9756600789ab4d8,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_6abcca1432633e7cd9756600789ab4d8 == cache_frame_6abcca1432633e7cd9756600789ab4d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6abcca1432633e7cd9756600789ab4d8);
        cache_frame_6abcca1432633e7cd9756600789ab4d8 = NULL;
    }

    assertFrameObject(frame_6abcca1432633e7cd9756600789ab4d8);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$key$$$function__6_modifiers_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_modifiers = python_pars[0];
    PyObject *var_mod_names = NULL;
    struct Nuitka_FrameObject *frame_d47014521af59251313711e85980af8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d47014521af59251313711e85980af8a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_mod_names == NULL);
        var_mod_names = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d47014521af59251313711e85980af8a)) {
        Py_XDECREF(cache_frame_d47014521af59251313711e85980af8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d47014521af59251313711e85980af8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d47014521af59251313711e85980af8a = MAKE_FUNCTION_FRAME(tstate, codeobj_d47014521af59251313711e85980af8a, module_pyglet$window$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d47014521af59251313711e85980af8a->m_type_description == NULL);
    frame_d47014521af59251313711e85980af8a = cache_frame_d47014521af59251313711e85980af8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d47014521af59251313711e85980af8a);
    assert(Py_REFCNT(frame_d47014521af59251313711e85980af8a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_1 = par_modifiers;
        tmp_bitand_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
            tmp_bitand_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
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
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_mod_names);
        tmp_list_arg_value_1 = var_mod_names;
        tmp_item_value_1 = mod_consts[3];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_2 = par_modifiers;
        tmp_bitand_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_bitand_expr_right_2 == NULL)) {
            tmp_bitand_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_mod_names;
        tmp_item_value_2 = mod_consts[4];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_3 = par_modifiers;
        tmp_bitand_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_bitand_expr_right_3 == NULL)) {
            tmp_bitand_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_bitand_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = var_mod_names;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d47014521af59251313711e85980af8a->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[8]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_4 = par_modifiers;
        tmp_bitand_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_bitand_expr_right_4 == NULL)) {
            tmp_bitand_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_bitand_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_mod_names;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d47014521af59251313711e85980af8a->m_frame.f_lineno = 125;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[10]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_bitand_expr_left_5;
        PyObject *tmp_bitand_expr_right_5;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_5 = par_modifiers;
        tmp_bitand_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_bitand_expr_right_5 == NULL)) {
            tmp_bitand_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_bitand_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_mod_names;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d47014521af59251313711e85980af8a->m_frame.f_lineno = 127;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[12]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_bitand_expr_left_6;
        PyObject *tmp_bitand_expr_right_6;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_6 = par_modifiers;
        tmp_bitand_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_bitand_expr_right_6 == NULL)) {
            tmp_bitand_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_bitand_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_mod_names;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d47014521af59251313711e85980af8a->m_frame.f_lineno = 129;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[14]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_bitand_expr_left_7;
        PyObject *tmp_bitand_expr_right_7;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_7 = par_modifiers;
        tmp_bitand_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_bitand_expr_right_7 == NULL)) {
            tmp_bitand_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_bitand_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_mod_names;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[7]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d47014521af59251313711e85980af8a->m_frame.f_lineno = 131;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[16]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_bitand_expr_left_8;
        PyObject *tmp_bitand_expr_right_8;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_8 = par_modifiers;
        tmp_bitand_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_bitand_expr_right_8 == NULL)) {
            tmp_bitand_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_bitand_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_8, tmp_bitand_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_mod_names;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[7]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d47014521af59251313711e85980af8a->m_frame.f_lineno = 133;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[18]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_bitand_expr_left_9;
        PyObject *tmp_bitand_expr_right_9;
        CHECK_OBJECT(par_modifiers);
        tmp_bitand_expr_left_9 = par_modifiers;
        tmp_bitand_expr_right_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_bitand_expr_right_9 == NULL)) {
            tmp_bitand_expr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_bitand_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_9, tmp_bitand_expr_right_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_mod_names;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[7]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d47014521af59251313711e85980af8a->m_frame.f_lineno = 135;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[20]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_9:;
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[21];
        if (var_mod_names == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_mod_names;
        tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_d47014521af59251313711e85980af8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d47014521af59251313711e85980af8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d47014521af59251313711e85980af8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d47014521af59251313711e85980af8a,
        type_description_1,
        par_modifiers,
        var_mod_names
    );


    // Release cached frame if used for exception.
    if (frame_d47014521af59251313711e85980af8a == cache_frame_d47014521af59251313711e85980af8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d47014521af59251313711e85980af8a);
        cache_frame_d47014521af59251313711e85980af8a = NULL;
    }

    assertFrameObject(frame_d47014521af59251313711e85980af8a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_mod_names);
    var_mod_names = NULL;
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

    Py_XDECREF(var_mod_names);
    var_mod_names = NULL;
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
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$key$$$function__7_symbol_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_symbol = python_pars[0];
    struct Nuitka_FrameObject *frame_5a274959c4f979470b055cc10799ef6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5a274959c4f979470b055cc10799ef6f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5a274959c4f979470b055cc10799ef6f)) {
        Py_XDECREF(cache_frame_5a274959c4f979470b055cc10799ef6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a274959c4f979470b055cc10799ef6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a274959c4f979470b055cc10799ef6f = MAKE_FUNCTION_FRAME(tstate, codeobj_5a274959c4f979470b055cc10799ef6f, module_pyglet$window$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5a274959c4f979470b055cc10799ef6f->m_type_description == NULL);
    frame_5a274959c4f979470b055cc10799ef6f = cache_frame_5a274959c4f979470b055cc10799ef6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5a274959c4f979470b055cc10799ef6f);
    assert(Py_REFCNT(frame_5a274959c4f979470b055cc10799ef6f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_symbol);
        tmp_cmp_expr_left_1 = par_symbol;
        tmp_cmp_expr_right_1 = mod_consts[23];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_symbol);
        tmp_args_element_value_1 = par_symbol;
        CHECK_OBJECT(par_symbol);
        tmp_unicode_arg_1 = par_symbol;
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5a274959c4f979470b055cc10799ef6f->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[25];
        CHECK_OBJECT(par_symbol);
        tmp_rshift_expr_left_1 = par_symbol;
        tmp_rshift_expr_right_1 = mod_consts[26];
        tmp_mod_expr_right_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5a274959c4f979470b055cc10799ef6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a274959c4f979470b055cc10799ef6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a274959c4f979470b055cc10799ef6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a274959c4f979470b055cc10799ef6f,
        type_description_1,
        par_symbol
    );


    // Release cached frame if used for exception.
    if (frame_5a274959c4f979470b055cc10799ef6f == cache_frame_5a274959c4f979470b055cc10799ef6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5a274959c4f979470b055cc10799ef6f);
        cache_frame_5a274959c4f979470b055cc10799ef6f = NULL;
    }

    assertFrameObject(frame_5a274959c4f979470b055cc10799ef6f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$key$$$function__8_motion_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_motion = python_pars[0];
    struct Nuitka_FrameObject *frame_3c917842c4a0db1a1fc9a40bed9ab4d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9)) {
        Py_XDECREF(cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9 = MAKE_FUNCTION_FRAME(tstate, codeobj_3c917842c4a0db1a1fc9a40bed9ab4d9, module_pyglet$window$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9->m_type_description == NULL);
    frame_3c917842c4a0db1a1fc9a40bed9ab4d9 = cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3c917842c4a0db1a1fc9a40bed9ab4d9);
    assert(Py_REFCNT(frame_3c917842c4a0db1a1fc9a40bed9ab4d9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_motion);
        tmp_args_element_value_1 = par_motion;
        CHECK_OBJECT(par_motion);
        tmp_unicode_arg_1 = par_motion;
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 173;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3c917842c4a0db1a1fc9a40bed9ab4d9->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_3c917842c4a0db1a1fc9a40bed9ab4d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c917842c4a0db1a1fc9a40bed9ab4d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c917842c4a0db1a1fc9a40bed9ab4d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c917842c4a0db1a1fc9a40bed9ab4d9,
        type_description_1,
        par_motion
    );


    // Release cached frame if used for exception.
    if (frame_3c917842c4a0db1a1fc9a40bed9ab4d9 == cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9);
        cache_frame_3c917842c4a0db1a1fc9a40bed9ab4d9 = NULL;
    }

    assertFrameObject(frame_3c917842c4a0db1a1fc9a40bed9ab4d9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_motion);
    Py_DECREF(par_motion);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_motion);
    Py_DECREF(par_motion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$key$$$function__9_user_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_scancode = python_pars[0];
    struct Nuitka_FrameObject *frame_c76f6bb925ee91b760afe1115a255809;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c76f6bb925ee91b760afe1115a255809 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c76f6bb925ee91b760afe1115a255809)) {
        Py_XDECREF(cache_frame_c76f6bb925ee91b760afe1115a255809);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c76f6bb925ee91b760afe1115a255809 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c76f6bb925ee91b760afe1115a255809 = MAKE_FUNCTION_FRAME(tstate, codeobj_c76f6bb925ee91b760afe1115a255809, module_pyglet$window$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c76f6bb925ee91b760afe1115a255809->m_type_description == NULL);
    frame_c76f6bb925ee91b760afe1115a255809 = cache_frame_c76f6bb925ee91b760afe1115a255809;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c76f6bb925ee91b760afe1115a255809);
    assert(Py_REFCNT(frame_c76f6bb925ee91b760afe1115a255809) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_scancode);
        tmp_cmp_expr_left_1 = par_scancode;
        tmp_cmp_expr_right_1 = mod_consts[30];
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 186;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        CHECK_OBJECT(par_scancode);
        tmp_lshift_expr_left_1 = par_scancode;
        tmp_lshift_expr_right_1 = mod_consts[26];
        tmp_return_value = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
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
        exception_tb = MAKE_TRACEBACK(frame_c76f6bb925ee91b760afe1115a255809, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c76f6bb925ee91b760afe1115a255809->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c76f6bb925ee91b760afe1115a255809, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c76f6bb925ee91b760afe1115a255809,
        type_description_1,
        par_scancode
    );


    // Release cached frame if used for exception.
    if (frame_c76f6bb925ee91b760afe1115a255809 == cache_frame_c76f6bb925ee91b760afe1115a255809) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c76f6bb925ee91b760afe1115a255809);
        cache_frame_c76f6bb925ee91b760afe1115a255809 = NULL;
    }

    assertFrameObject(frame_c76f6bb925ee91b760afe1115a255809);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_scancode);
    Py_DECREF(par_scancode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_scancode);
    Py_DECREF(par_scancode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__1___init__,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_8627ca2437e80f907949daf2825ea474,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__2_on_key_press() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__2_on_key_press,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        codeobj_21506d5f55b52e46983f7ab799186a3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__3_on_key_release() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__3_on_key_release,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_0c1d4affa7ea724471dc3593dbe032d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__4_on_deactivate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__4_on_deactivate,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_bd318f889adffff094cb594339a7ae74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__5___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__5___getitem__,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_6abcca1432633e7cd9756600789ab4d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__6_modifiers_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__6_modifiers_string,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d47014521af59251313711e85980af8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__7_symbol_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__7_symbol_string,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5a274959c4f979470b055cc10799ef6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__8_motion_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__8_motion_string,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3c917842c4a0db1a1fc9a40bed9ab4d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$key$$$function__9_user_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$key$$$function__9_user_key,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c76f6bb925ee91b760afe1115a255809,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$key,
        mod_consts[31],
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

function_impl_code functable_pyglet$window$key[] = {
    impl_pyglet$window$key$$$function__1___init__,
    impl_pyglet$window$key$$$function__2_on_key_press,
    impl_pyglet$window$key$$$function__3_on_key_release,
    impl_pyglet$window$key$$$function__4_on_deactivate,
    impl_pyglet$window$key$$$function__5___getitem__,
    impl_pyglet$window$key$$$function__6_modifiers_string,
    impl_pyglet$window$key$$$function__7_symbol_string,
    impl_pyglet$window$key$$$function__8_motion_string,
    impl_pyglet$window$key$$$function__9_user_key,
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

    function_impl_code *current = functable_pyglet$window$key;
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

    if (offset > sizeof(functable_pyglet$window$key) || offset < 0) {
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
        functable_pyglet$window$key[offset],
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
        module_pyglet$window$key,
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
PyObject *modulecode_pyglet$window$key(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.window.key");

    // Store the module for future use.
    module_pyglet$window$key = module;

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
        PRINT_STRING("pyglet.window.key: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.window.key: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$window$key\n");

    moduledict_pyglet$window$key = MODULE_DICT(module_pyglet$window$key);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$window$key,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$window$key,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[463]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$window$key,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$window$key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$window$key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$window$key);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$window$key);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_cfb72000243b2abe8c83b9eabd09daa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_pyglet$window$key$$$class__1_KeyStateHandler_67 = NULL;
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
    PyObject *tmp_iterator_attempt;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_2);
    }
    frame_cfb72000243b2abe8c83b9eabd09daa4 = MAKE_MODULE_FRAME(codeobj_cfb72000243b2abe8c83b9eabd09daa4, module_pyglet$window$key);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cfb72000243b2abe8c83b9eabd09daa4);
    assert(Py_REFCNT(frame_cfb72000243b2abe8c83b9eabd09daa4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[39];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$window$key;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[40];
        tmp_level_value_1 = mod_consts[30];
        frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame.f_lineno = 64;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$window$key,
                mod_consts[41],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$window$key$$$class__1_KeyStateHandler_67 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[33], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[46], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$key$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$key$$$function__2_on_key_press();

        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$key$$$function__3_on_key_release();

        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[51], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$key$$$function__4_on_deactivate();

        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$key$$$function__5___getitem__();

        tmp_res = PyDict_SetItem(locals_pyglet$window$key$$$class__1_KeyStateHandler_67, mod_consts[55], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[45];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyglet$window$key$$$class__1_KeyStateHandler_67;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame.f_lineno = 67;
            tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_8;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_7 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$window$key$$$class__1_KeyStateHandler_67);
        locals_pyglet$window$key$$$class__1_KeyStateHandler_67 = NULL;
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

        Py_DECREF(locals_pyglet$window$key$$$class__1_KeyStateHandler_67);
        locals_pyglet$window$key$$$class__1_KeyStateHandler_67 = NULL;
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
        exception_lineno = 67;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_7);
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
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_pyglet$window$key$$$function__6_modifiers_string();

        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_pyglet$window$key$$$function__7_symbol_string();

        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_pyglet$window$key$$$function__8_motion_string();

        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_pyglet$window$key$$$function__9_user_key();

        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assign_source_23 == NULL)) {
            tmp_assign_source_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        assert(!(tmp_assign_source_23 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_23);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[73];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

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
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assign_source_24 == NULL)) {
            tmp_assign_source_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_24);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_assign_source_60 == NULL)) {
            tmp_assign_source_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        assert(!(tmp_assign_source_60 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_assign_source_61 == NULL)) {
            tmp_assign_source_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        assert(!(tmp_assign_source_61 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_assign_source_62 == NULL)) {
            tmp_assign_source_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        assert(!(tmp_assign_source_62 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assign_source_63 == NULL)) {
            tmp_assign_source_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        assert(!(tmp_assign_source_63 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_assign_source_68 == NULL)) {
            tmp_assign_source_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        assert(!(tmp_assign_source_68 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_assign_source_69 == NULL)) {
            tmp_assign_source_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        assert(!(tmp_assign_source_69 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assign_source_72 == NULL)) {
            tmp_assign_source_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        assert(!(tmp_assign_source_72 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assign_source_73 == NULL)) {
            tmp_assign_source_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        assert(!(tmp_assign_source_73 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[220];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[224];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[226];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[260];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[266];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[274];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[278];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[280];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[282];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[284];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[286];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[290];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[306];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[308];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[317];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[319];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[321];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[323];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[325];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[329];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[370];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[372];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[374];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[376];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[378];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[380];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[380];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[393];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[395];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[397];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[401];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[403];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[405];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[411];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[413];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[415];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[417];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[419];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[421];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[423];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[429];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[431];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[433];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[435];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[437];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[439];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[441];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = (PyObject *)moduledict_pyglet$window$key;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[443]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame.f_lineno = 424;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[444]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame.f_lineno = 424;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_222 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_222;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_223;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_223 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_223 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 424;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_223;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_224 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_224;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_225 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_225 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 424;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_225;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_226 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_226 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 424;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_226;
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


                    exception_lineno = 424;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[445];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 424;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_227;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_227 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_227);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_228;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_228 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_228);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        tmp_subscript_value_1 = mod_consts[448];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_2 = mod_consts[449];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[450]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame.f_lineno = 425;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 425;

            goto try_except_handler_4;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_4;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[451]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_4;
        }
        frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame.f_lineno = 426;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[452]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto try_except_handler_4;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto try_except_handler_4;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[451]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto try_except_handler_4;
        }
        frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame.f_lineno = 427;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[453]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 427;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_4;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_4;
        }
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[447]);

        if (unlikely(tmp_ass_subscript_1 == NULL)) {
            tmp_ass_subscript_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[447]);
        }

        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_4;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_4;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_4;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_4;
        }
        tmp_ass_subscript_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)mod_consts[447]);

        if (unlikely(tmp_ass_subscript_2 == NULL)) {
            tmp_ass_subscript_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[447]);
        }

        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_4;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_4;
        }
    }
    branch_end_3:;
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 424;

        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cfb72000243b2abe8c83b9eabd09daa4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cfb72000243b2abe8c83b9eabd09daa4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cfb72000243b2abe8c83b9eabd09daa4, exception_lineno);
    }



    assertFrameObject(frame_cfb72000243b2abe8c83b9eabd09daa4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.window.key", false);

    Py_INCREF(module_pyglet$window$key);
    return module_pyglet$window$key;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$key, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$window$key", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
