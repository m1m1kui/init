/* Generated code for Python module 'pyglet.window.event'
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

/* The "module_pyglet$window$event" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$window$event;
PyDictObject *moduledict_pyglet$window$event;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[113];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[113];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.window.event"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 113; i++) {
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
void checkModuleConstants_pyglet$window$event(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 113; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_37fadb9984be60bf814d984a2270bba7;
static PyCodeObject *codeobj_b973ac6ef5a99b1c08a8308e76309825;
static PyCodeObject *codeobj_62eed4e392f53d58c0f7e0824bcd7a6e;
static PyCodeObject *codeobj_91682ca1d34baa8db9bb71f96f732d2e;
static PyCodeObject *codeobj_84f1f29944034390171005d6c5eef926;
static PyCodeObject *codeobj_ff355235a1e14405f93dc64ed2fc8b81;
static PyCodeObject *codeobj_dccca4cb2d8ccfded10146c935f56b82;
static PyCodeObject *codeobj_deb1ca35ef6a4e3fe3386906a9f0f08d;
static PyCodeObject *codeobj_9c3c752c6059f51ae31e4db2cfe29f3c;
static PyCodeObject *codeobj_0d5cccfc9e86366b9fbd2778b2ab09fb;
static PyCodeObject *codeobj_7f1b1441c7195e5a6c13a3c33053acac;
static PyCodeObject *codeobj_42ca8498201fced6f97e13f80187ed9a;
static PyCodeObject *codeobj_12d3b8ea5742f421cba41a23dac182c2;
static PyCodeObject *codeobj_94f33f342e56afe574b77e5ec710197d;
static PyCodeObject *codeobj_d96d7be9a4e89bd489b44a911327ecec;
static PyCodeObject *codeobj_23006dcd24ca441cd85254e242022f4b;
static PyCodeObject *codeobj_6a9029a251d52f857e7af28a7870ffc6;
static PyCodeObject *codeobj_c490fbaea9d8d3e4fef63124f55e83af;
static PyCodeObject *codeobj_ca2928a3dddab5b899e196dec085be7d;
static PyCodeObject *codeobj_9ff4098d042281a72d169b41c3218891;
static PyCodeObject *codeobj_0ac9601caa7fd24c4b0e0483ecd609f0;
static PyCodeObject *codeobj_ff22e521ad417e8683d622c87187d4b0;
static PyCodeObject *codeobj_b930b9f02dbfcc304060503b8b969f3b;
static PyCodeObject *codeobj_e737d182b3baac9c1d8ceb32bf61d2f4;
static PyCodeObject *codeobj_37f83e2e4e488d2413743080ea8c6be5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[100]); CHECK_OBJECT(module_filename_obj);
    codeobj_37fadb9984be60bf814d984a2270bba7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[101], mod_consts[101], NULL, NULL, 0, 0, 0);
    codeobj_b973ac6ef5a99b1c08a8308e76309825 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[102], NULL, 2, 0, 0);
    codeobj_62eed4e392f53d58c0f7e0824bcd7a6e = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[103], NULL, 1, 0, 0);
    codeobj_91682ca1d34baa8db9bb71f96f732d2e = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[103], NULL, 1, 0, 0);
    codeobj_84f1f29944034390171005d6c5eef926 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[103], NULL, 1, 0, 0);
    codeobj_ff355235a1e14405f93dc64ed2fc8b81 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[103], NULL, 1, 0, 0);
    codeobj_dccca4cb2d8ccfded10146c935f56b82 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[103], NULL, 1, 0, 0);
    codeobj_deb1ca35ef6a4e3fe3386906a9f0f08d = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[103], NULL, 1, 0, 0);
    codeobj_9c3c752c6059f51ae31e4db2cfe29f3c = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[103], NULL, 1, 0, 0);
    codeobj_0d5cccfc9e86366b9fbd2778b2ab09fb = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[103], NULL, 1, 0, 0);
    codeobj_7f1b1441c7195e5a6c13a3c33053acac = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[104], NULL, 3, 0, 0);
    codeobj_42ca8498201fced6f97e13f80187ed9a = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[104], NULL, 3, 0, 0);
    codeobj_12d3b8ea5742f421cba41a23dac182c2 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[105], NULL, 7, 0, 0);
    codeobj_94f33f342e56afe574b77e5ec710197d = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[106], NULL, 3, 0, 0);
    codeobj_d96d7be9a4e89bd489b44a911327ecec = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[106], NULL, 3, 0, 0);
    codeobj_23006dcd24ca441cd85254e242022f4b = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[107], NULL, 5, 0, 0);
    codeobj_6a9029a251d52f857e7af28a7870ffc6 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[108], NULL, 5, 0, 0);
    codeobj_c490fbaea9d8d3e4fef63124f55e83af = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[108], NULL, 5, 0, 0);
    codeobj_ca2928a3dddab5b899e196dec085be7d = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[107], NULL, 5, 0, 0);
    codeobj_9ff4098d042281a72d169b41c3218891 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[106], NULL, 3, 0, 0);
    codeobj_0ac9601caa7fd24c4b0e0483ecd609f0 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[109], NULL, 3, 0, 0);
    codeobj_ff22e521ad417e8683d622c87187d4b0 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[103], NULL, 1, 0, 0);
    codeobj_b930b9f02dbfcc304060503b8b969f3b = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[110], NULL, 2, 0, 0);
    codeobj_e737d182b3baac9c1d8ceb32bf61d2f4 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[111], NULL, 2, 0, 0);
    codeobj_37f83e2e4e488d2413743080ea8c6be5 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[111], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__10_on_mouse_release();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__11_on_mouse_scroll();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__12_on_close();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__13_on_mouse_enter();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__14_on_mouse_leave();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__15_on_expose();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__16_on_resize();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__17_on_move();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__18_on_activate();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__19_on_deactivate();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__20_on_show();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__21_on_hide();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__22_on_context_lost();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__23_on_context_state_lost();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__24_on_draw();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__2_on_key_press();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__3_on_key_release();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__4_on_text();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__5_on_text_motion();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__6_on_text_motion_select();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__7_on_mouse_motion();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__8_on_mouse_drag();


static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__9_on_mouse_press();


// The module function definitions.
static PyObject *impl_pyglet$window$event$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_logfile = python_pars[1];
    struct Nuitka_FrameObject *frame_b973ac6ef5a99b1c08a8308e76309825;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b973ac6ef5a99b1c08a8308e76309825 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_logfile);
        tmp_cmp_expr_left_1 = par_logfile;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_assign_source_1 == NULL));
        {
            PyObject *old = par_logfile;
            assert(old != NULL);
            par_logfile = tmp_assign_source_1;
            Py_INCREF(par_logfile);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_b973ac6ef5a99b1c08a8308e76309825)) {
        Py_XDECREF(cache_frame_b973ac6ef5a99b1c08a8308e76309825);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b973ac6ef5a99b1c08a8308e76309825 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b973ac6ef5a99b1c08a8308e76309825 = MAKE_FUNCTION_FRAME(tstate, codeobj_b973ac6ef5a99b1c08a8308e76309825, module_pyglet$window$event, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b973ac6ef5a99b1c08a8308e76309825->m_type_description == NULL);
    frame_b973ac6ef5a99b1c08a8308e76309825 = cache_frame_b973ac6ef5a99b1c08a8308e76309825;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b973ac6ef5a99b1c08a8308e76309825);
    assert(Py_REFCNT(frame_b973ac6ef5a99b1c08a8308e76309825) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_logfile);
        tmp_assattr_value_1 = par_logfile;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b973ac6ef5a99b1c08a8308e76309825, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b973ac6ef5a99b1c08a8308e76309825->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b973ac6ef5a99b1c08a8308e76309825, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b973ac6ef5a99b1c08a8308e76309825,
        type_description_1,
        par_self,
        par_logfile
    );


    // Release cached frame if used for exception.
    if (frame_b973ac6ef5a99b1c08a8308e76309825 == cache_frame_b973ac6ef5a99b1c08a8308e76309825) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b973ac6ef5a99b1c08a8308e76309825);
        cache_frame_b973ac6ef5a99b1c08a8308e76309825 = NULL;
    }

    assertFrameObject(frame_b973ac6ef5a99b1c08a8308e76309825);

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
    CHECK_OBJECT(par_logfile);
    Py_DECREF(par_logfile);
    par_logfile = NULL;
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

    CHECK_OBJECT(par_logfile);
    Py_DECREF(par_logfile);
    par_logfile = NULL;
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


static PyObject *impl_pyglet$window$event$$$function__2_on_key_press(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_symbol = python_pars[1];
    PyObject *par_modifiers = python_pars[2];
    struct Nuitka_FrameObject *frame_7f1b1441c7195e5a6c13a3c33053acac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f1b1441c7195e5a6c13a3c33053acac = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f1b1441c7195e5a6c13a3c33053acac)) {
        Py_XDECREF(cache_frame_7f1b1441c7195e5a6c13a3c33053acac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f1b1441c7195e5a6c13a3c33053acac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f1b1441c7195e5a6c13a3c33053acac = MAKE_FUNCTION_FRAME(tstate, codeobj_7f1b1441c7195e5a6c13a3c33053acac, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f1b1441c7195e5a6c13a3c33053acac->m_type_description == NULL);
    frame_7f1b1441c7195e5a6c13a3c33053acac = cache_frame_7f1b1441c7195e5a6c13a3c33053acac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7f1b1441c7195e5a6c13a3c33053acac);
    assert(Py_REFCNT(frame_7f1b1441c7195e5a6c13a3c33053acac) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[3];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_symbol);
        tmp_args_element_value_1 = par_symbol;
        frame_7f1b1441c7195e5a6c13a3c33053acac->m_frame.f_lineno = 75;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_modifiers);
            tmp_args_element_value_2 = par_modifiers;
            frame_7f1b1441c7195e5a6c13a3c33053acac->m_frame.f_lineno = 75;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7f1b1441c7195e5a6c13a3c33053acac->m_frame.f_lineno = 74;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_7f1b1441c7195e5a6c13a3c33053acac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f1b1441c7195e5a6c13a3c33053acac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f1b1441c7195e5a6c13a3c33053acac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f1b1441c7195e5a6c13a3c33053acac,
        type_description_1,
        par_self,
        par_symbol,
        par_modifiers
    );


    // Release cached frame if used for exception.
    if (frame_7f1b1441c7195e5a6c13a3c33053acac == cache_frame_7f1b1441c7195e5a6c13a3c33053acac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f1b1441c7195e5a6c13a3c33053acac);
        cache_frame_7f1b1441c7195e5a6c13a3c33053acac = NULL;
    }

    assertFrameObject(frame_7f1b1441c7195e5a6c13a3c33053acac);

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


static PyObject *impl_pyglet$window$event$$$function__3_on_key_release(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_symbol = python_pars[1];
    PyObject *par_modifiers = python_pars[2];
    struct Nuitka_FrameObject *frame_42ca8498201fced6f97e13f80187ed9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42ca8498201fced6f97e13f80187ed9a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42ca8498201fced6f97e13f80187ed9a)) {
        Py_XDECREF(cache_frame_42ca8498201fced6f97e13f80187ed9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42ca8498201fced6f97e13f80187ed9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42ca8498201fced6f97e13f80187ed9a = MAKE_FUNCTION_FRAME(tstate, codeobj_42ca8498201fced6f97e13f80187ed9a, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42ca8498201fced6f97e13f80187ed9a->m_type_description == NULL);
    frame_42ca8498201fced6f97e13f80187ed9a = cache_frame_42ca8498201fced6f97e13f80187ed9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_42ca8498201fced6f97e13f80187ed9a);
    assert(Py_REFCNT(frame_42ca8498201fced6f97e13f80187ed9a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[8];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_symbol);
        tmp_args_element_value_1 = par_symbol;
        frame_42ca8498201fced6f97e13f80187ed9a->m_frame.f_lineno = 79;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_modifiers);
            tmp_args_element_value_2 = par_modifiers;
            frame_42ca8498201fced6f97e13f80187ed9a->m_frame.f_lineno = 79;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_42ca8498201fced6f97e13f80187ed9a->m_frame.f_lineno = 78;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_42ca8498201fced6f97e13f80187ed9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42ca8498201fced6f97e13f80187ed9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42ca8498201fced6f97e13f80187ed9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42ca8498201fced6f97e13f80187ed9a,
        type_description_1,
        par_self,
        par_symbol,
        par_modifiers
    );


    // Release cached frame if used for exception.
    if (frame_42ca8498201fced6f97e13f80187ed9a == cache_frame_42ca8498201fced6f97e13f80187ed9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42ca8498201fced6f97e13f80187ed9a);
        cache_frame_42ca8498201fced6f97e13f80187ed9a = NULL;
    }

    assertFrameObject(frame_42ca8498201fced6f97e13f80187ed9a);

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


static PyObject *impl_pyglet$window$event$$$function__4_on_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    struct Nuitka_FrameObject *frame_b930b9f02dbfcc304060503b8b969f3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b930b9f02dbfcc304060503b8b969f3b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b930b9f02dbfcc304060503b8b969f3b)) {
        Py_XDECREF(cache_frame_b930b9f02dbfcc304060503b8b969f3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b930b9f02dbfcc304060503b8b969f3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b930b9f02dbfcc304060503b8b969f3b = MAKE_FUNCTION_FRAME(tstate, codeobj_b930b9f02dbfcc304060503b8b969f3b, module_pyglet$window$event, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b930b9f02dbfcc304060503b8b969f3b->m_type_description == NULL);
    frame_b930b9f02dbfcc304060503b8b969f3b = cache_frame_b930b9f02dbfcc304060503b8b969f3b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b930b9f02dbfcc304060503b8b969f3b);
    assert(Py_REFCNT(frame_b930b9f02dbfcc304060503b8b969f3b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[9];
        CHECK_OBJECT(par_text);
        tmp_mod_expr_right_1 = par_text;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b930b9f02dbfcc304060503b8b969f3b->m_frame.f_lineno = 82;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_b930b9f02dbfcc304060503b8b969f3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b930b9f02dbfcc304060503b8b969f3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b930b9f02dbfcc304060503b8b969f3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b930b9f02dbfcc304060503b8b969f3b,
        type_description_1,
        par_self,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_b930b9f02dbfcc304060503b8b969f3b == cache_frame_b930b9f02dbfcc304060503b8b969f3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b930b9f02dbfcc304060503b8b969f3b);
        cache_frame_b930b9f02dbfcc304060503b8b969f3b = NULL;
    }

    assertFrameObject(frame_b930b9f02dbfcc304060503b8b969f3b);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__5_on_text_motion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_motion = python_pars[1];
    struct Nuitka_FrameObject *frame_e737d182b3baac9c1d8ceb32bf61d2f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4)) {
        Py_XDECREF(cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4 = MAKE_FUNCTION_FRAME(tstate, codeobj_e737d182b3baac9c1d8ceb32bf61d2f4, module_pyglet$window$event, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4->m_type_description == NULL);
    frame_e737d182b3baac9c1d8ceb32bf61d2f4 = cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e737d182b3baac9c1d8ceb32bf61d2f4);
    assert(Py_REFCNT(frame_e737d182b3baac9c1d8ceb32bf61d2f4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[10];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_motion);
        tmp_args_element_value_1 = par_motion;
        frame_e737d182b3baac9c1d8ceb32bf61d2f4->m_frame.f_lineno = 86;
        tmp_mod_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[11], tmp_args_element_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e737d182b3baac9c1d8ceb32bf61d2f4->m_frame.f_lineno = 85;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_e737d182b3baac9c1d8ceb32bf61d2f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e737d182b3baac9c1d8ceb32bf61d2f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e737d182b3baac9c1d8ceb32bf61d2f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e737d182b3baac9c1d8ceb32bf61d2f4,
        type_description_1,
        par_self,
        par_motion
    );


    // Release cached frame if used for exception.
    if (frame_e737d182b3baac9c1d8ceb32bf61d2f4 == cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4);
        cache_frame_e737d182b3baac9c1d8ceb32bf61d2f4 = NULL;
    }

    assertFrameObject(frame_e737d182b3baac9c1d8ceb32bf61d2f4);

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
    CHECK_OBJECT(par_motion);
    Py_DECREF(par_motion);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_motion);
    Py_DECREF(par_motion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__6_on_text_motion_select(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_motion = python_pars[1];
    struct Nuitka_FrameObject *frame_37f83e2e4e488d2413743080ea8c6be5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_37f83e2e4e488d2413743080ea8c6be5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_37f83e2e4e488d2413743080ea8c6be5)) {
        Py_XDECREF(cache_frame_37f83e2e4e488d2413743080ea8c6be5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37f83e2e4e488d2413743080ea8c6be5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37f83e2e4e488d2413743080ea8c6be5 = MAKE_FUNCTION_FRAME(tstate, codeobj_37f83e2e4e488d2413743080ea8c6be5, module_pyglet$window$event, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37f83e2e4e488d2413743080ea8c6be5->m_type_description == NULL);
    frame_37f83e2e4e488d2413743080ea8c6be5 = cache_frame_37f83e2e4e488d2413743080ea8c6be5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_37f83e2e4e488d2413743080ea8c6be5);
    assert(Py_REFCNT(frame_37f83e2e4e488d2413743080ea8c6be5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[12];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_motion);
        tmp_args_element_value_1 = par_motion;
        frame_37f83e2e4e488d2413743080ea8c6be5->m_frame.f_lineno = 90;
        tmp_mod_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[11], tmp_args_element_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_37f83e2e4e488d2413743080ea8c6be5->m_frame.f_lineno = 89;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
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
        exception_tb = MAKE_TRACEBACK(frame_37f83e2e4e488d2413743080ea8c6be5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37f83e2e4e488d2413743080ea8c6be5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37f83e2e4e488d2413743080ea8c6be5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37f83e2e4e488d2413743080ea8c6be5,
        type_description_1,
        par_self,
        par_motion
    );


    // Release cached frame if used for exception.
    if (frame_37f83e2e4e488d2413743080ea8c6be5 == cache_frame_37f83e2e4e488d2413743080ea8c6be5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37f83e2e4e488d2413743080ea8c6be5);
        cache_frame_37f83e2e4e488d2413743080ea8c6be5 = NULL;
    }

    assertFrameObject(frame_37f83e2e4e488d2413743080ea8c6be5);

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
    CHECK_OBJECT(par_motion);
    Py_DECREF(par_motion);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_motion);
    Py_DECREF(par_motion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__7_on_mouse_motion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_dx = python_pars[3];
    PyObject *par_dy = python_pars[4];
    struct Nuitka_FrameObject *frame_23006dcd24ca441cd85254e242022f4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_23006dcd24ca441cd85254e242022f4b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23006dcd24ca441cd85254e242022f4b)) {
        Py_XDECREF(cache_frame_23006dcd24ca441cd85254e242022f4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23006dcd24ca441cd85254e242022f4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23006dcd24ca441cd85254e242022f4b = MAKE_FUNCTION_FRAME(tstate, codeobj_23006dcd24ca441cd85254e242022f4b, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23006dcd24ca441cd85254e242022f4b->m_type_description == NULL);
    frame_23006dcd24ca441cd85254e242022f4b = cache_frame_23006dcd24ca441cd85254e242022f4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_23006dcd24ca441cd85254e242022f4b);
    assert(Py_REFCNT(frame_23006dcd24ca441cd85254e242022f4b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_1 = par_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_dx);
        tmp_tuple_element_1 = par_dx;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_dy);
        tmp_tuple_element_1 = par_dy;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 94;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_23006dcd24ca441cd85254e242022f4b->m_frame.f_lineno = 93;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23006dcd24ca441cd85254e242022f4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23006dcd24ca441cd85254e242022f4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23006dcd24ca441cd85254e242022f4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23006dcd24ca441cd85254e242022f4b,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_dx,
        par_dy
    );


    // Release cached frame if used for exception.
    if (frame_23006dcd24ca441cd85254e242022f4b == cache_frame_23006dcd24ca441cd85254e242022f4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23006dcd24ca441cd85254e242022f4b);
        cache_frame_23006dcd24ca441cd85254e242022f4b = NULL;
    }

    assertFrameObject(frame_23006dcd24ca441cd85254e242022f4b);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dx);
    Py_DECREF(par_dx);
    CHECK_OBJECT(par_dy);
    Py_DECREF(par_dy);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dx);
    Py_DECREF(par_dx);
    CHECK_OBJECT(par_dy);
    Py_DECREF(par_dy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__8_on_mouse_drag(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_dx = python_pars[3];
    PyObject *par_dy = python_pars[4];
    PyObject *par_buttons = python_pars[5];
    PyObject *par_modifiers = python_pars[6];
    struct Nuitka_FrameObject *frame_12d3b8ea5742f421cba41a23dac182c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12d3b8ea5742f421cba41a23dac182c2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12d3b8ea5742f421cba41a23dac182c2)) {
        Py_XDECREF(cache_frame_12d3b8ea5742f421cba41a23dac182c2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12d3b8ea5742f421cba41a23dac182c2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12d3b8ea5742f421cba41a23dac182c2 = MAKE_FUNCTION_FRAME(tstate, codeobj_12d3b8ea5742f421cba41a23dac182c2, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12d3b8ea5742f421cba41a23dac182c2->m_type_description == NULL);
    frame_12d3b8ea5742f421cba41a23dac182c2 = cache_frame_12d3b8ea5742f421cba41a23dac182c2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_12d3b8ea5742f421cba41a23dac182c2);
    assert(Py_REFCNT(frame_12d3b8ea5742f421cba41a23dac182c2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[14];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_y);
            tmp_tuple_element_1 = par_y;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_dx);
            tmp_tuple_element_1 = par_dx;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_dy);
            tmp_tuple_element_1 = par_dy;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_buttons);
            tmp_args_element_value_1 = par_buttons;
            frame_12d3b8ea5742f421cba41a23dac182c2->m_frame.f_lineno = 98;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 4, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_modifiers);
            tmp_args_element_value_2 = par_modifiers;
            frame_12d3b8ea5742f421cba41a23dac182c2->m_frame.f_lineno = 98;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_12d3b8ea5742f421cba41a23dac182c2->m_frame.f_lineno = 97;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12d3b8ea5742f421cba41a23dac182c2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12d3b8ea5742f421cba41a23dac182c2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12d3b8ea5742f421cba41a23dac182c2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12d3b8ea5742f421cba41a23dac182c2,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_dx,
        par_dy,
        par_buttons,
        par_modifiers
    );


    // Release cached frame if used for exception.
    if (frame_12d3b8ea5742f421cba41a23dac182c2 == cache_frame_12d3b8ea5742f421cba41a23dac182c2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12d3b8ea5742f421cba41a23dac182c2);
        cache_frame_12d3b8ea5742f421cba41a23dac182c2 = NULL;
    }

    assertFrameObject(frame_12d3b8ea5742f421cba41a23dac182c2);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dx);
    Py_DECREF(par_dx);
    CHECK_OBJECT(par_dy);
    Py_DECREF(par_dy);
    CHECK_OBJECT(par_buttons);
    Py_DECREF(par_buttons);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dx);
    Py_DECREF(par_dx);
    CHECK_OBJECT(par_dy);
    Py_DECREF(par_dy);
    CHECK_OBJECT(par_buttons);
    Py_DECREF(par_buttons);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__9_on_mouse_press(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_button = python_pars[3];
    PyObject *par_modifiers = python_pars[4];
    struct Nuitka_FrameObject *frame_6a9029a251d52f857e7af28a7870ffc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a9029a251d52f857e7af28a7870ffc6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a9029a251d52f857e7af28a7870ffc6)) {
        Py_XDECREF(cache_frame_6a9029a251d52f857e7af28a7870ffc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a9029a251d52f857e7af28a7870ffc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a9029a251d52f857e7af28a7870ffc6 = MAKE_FUNCTION_FRAME(tstate, codeobj_6a9029a251d52f857e7af28a7870ffc6, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a9029a251d52f857e7af28a7870ffc6->m_type_description == NULL);
    frame_6a9029a251d52f857e7af28a7870ffc6 = cache_frame_6a9029a251d52f857e7af28a7870ffc6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6a9029a251d52f857e7af28a7870ffc6);
    assert(Py_REFCNT(frame_6a9029a251d52f857e7af28a7870ffc6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[17];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_y);
            tmp_tuple_element_1 = par_y;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_button);
            tmp_args_element_value_1 = par_button;
            frame_6a9029a251d52f857e7af28a7870ffc6->m_frame.f_lineno = 103;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_modifiers);
            tmp_args_element_value_2 = par_modifiers;
            frame_6a9029a251d52f857e7af28a7870ffc6->m_frame.f_lineno = 103;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_6a9029a251d52f857e7af28a7870ffc6->m_frame.f_lineno = 102;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a9029a251d52f857e7af28a7870ffc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a9029a251d52f857e7af28a7870ffc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a9029a251d52f857e7af28a7870ffc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a9029a251d52f857e7af28a7870ffc6,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_button,
        par_modifiers
    );


    // Release cached frame if used for exception.
    if (frame_6a9029a251d52f857e7af28a7870ffc6 == cache_frame_6a9029a251d52f857e7af28a7870ffc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a9029a251d52f857e7af28a7870ffc6);
        cache_frame_6a9029a251d52f857e7af28a7870ffc6 = NULL;
    }

    assertFrameObject(frame_6a9029a251d52f857e7af28a7870ffc6);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__10_on_mouse_release(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_button = python_pars[3];
    PyObject *par_modifiers = python_pars[4];
    struct Nuitka_FrameObject *frame_c490fbaea9d8d3e4fef63124f55e83af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c490fbaea9d8d3e4fef63124f55e83af = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c490fbaea9d8d3e4fef63124f55e83af)) {
        Py_XDECREF(cache_frame_c490fbaea9d8d3e4fef63124f55e83af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c490fbaea9d8d3e4fef63124f55e83af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c490fbaea9d8d3e4fef63124f55e83af = MAKE_FUNCTION_FRAME(tstate, codeobj_c490fbaea9d8d3e4fef63124f55e83af, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c490fbaea9d8d3e4fef63124f55e83af->m_type_description == NULL);
    frame_c490fbaea9d8d3e4fef63124f55e83af = cache_frame_c490fbaea9d8d3e4fef63124f55e83af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c490fbaea9d8d3e4fef63124f55e83af);
    assert(Py_REFCNT(frame_c490fbaea9d8d3e4fef63124f55e83af) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[18];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_y);
            tmp_tuple_element_1 = par_y;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_button);
            tmp_args_element_value_1 = par_button;
            frame_c490fbaea9d8d3e4fef63124f55e83af->m_frame.f_lineno = 107;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_modifiers);
            tmp_args_element_value_2 = par_modifiers;
            frame_c490fbaea9d8d3e4fef63124f55e83af->m_frame.f_lineno = 107;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c490fbaea9d8d3e4fef63124f55e83af->m_frame.f_lineno = 106;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c490fbaea9d8d3e4fef63124f55e83af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c490fbaea9d8d3e4fef63124f55e83af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c490fbaea9d8d3e4fef63124f55e83af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c490fbaea9d8d3e4fef63124f55e83af,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_button,
        par_modifiers
    );


    // Release cached frame if used for exception.
    if (frame_c490fbaea9d8d3e4fef63124f55e83af == cache_frame_c490fbaea9d8d3e4fef63124f55e83af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c490fbaea9d8d3e4fef63124f55e83af);
        cache_frame_c490fbaea9d8d3e4fef63124f55e83af = NULL;
    }

    assertFrameObject(frame_c490fbaea9d8d3e4fef63124f55e83af);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);
    CHECK_OBJECT(par_modifiers);
    Py_DECREF(par_modifiers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__11_on_mouse_scroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_dx = python_pars[3];
    PyObject *par_dy = python_pars[4];
    struct Nuitka_FrameObject *frame_ca2928a3dddab5b899e196dec085be7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ca2928a3dddab5b899e196dec085be7d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca2928a3dddab5b899e196dec085be7d)) {
        Py_XDECREF(cache_frame_ca2928a3dddab5b899e196dec085be7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca2928a3dddab5b899e196dec085be7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca2928a3dddab5b899e196dec085be7d = MAKE_FUNCTION_FRAME(tstate, codeobj_ca2928a3dddab5b899e196dec085be7d, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca2928a3dddab5b899e196dec085be7d->m_type_description == NULL);
    frame_ca2928a3dddab5b899e196dec085be7d = cache_frame_ca2928a3dddab5b899e196dec085be7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ca2928a3dddab5b899e196dec085be7d);
    assert(Py_REFCNT(frame_ca2928a3dddab5b899e196dec085be7d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[19];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_1 = par_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_dx);
        tmp_tuple_element_1 = par_dx;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_dy);
        tmp_tuple_element_1 = par_dy;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ca2928a3dddab5b899e196dec085be7d->m_frame.f_lineno = 110;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ca2928a3dddab5b899e196dec085be7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca2928a3dddab5b899e196dec085be7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca2928a3dddab5b899e196dec085be7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca2928a3dddab5b899e196dec085be7d,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_dx,
        par_dy
    );


    // Release cached frame if used for exception.
    if (frame_ca2928a3dddab5b899e196dec085be7d == cache_frame_ca2928a3dddab5b899e196dec085be7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca2928a3dddab5b899e196dec085be7d);
        cache_frame_ca2928a3dddab5b899e196dec085be7d = NULL;
    }

    assertFrameObject(frame_ca2928a3dddab5b899e196dec085be7d);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dx);
    Py_DECREF(par_dx);
    CHECK_OBJECT(par_dy);
    Py_DECREF(par_dy);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dx);
    Py_DECREF(par_dx);
    CHECK_OBJECT(par_dy);
    Py_DECREF(par_dy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__12_on_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91682ca1d34baa8db9bb71f96f732d2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91682ca1d34baa8db9bb71f96f732d2e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91682ca1d34baa8db9bb71f96f732d2e)) {
        Py_XDECREF(cache_frame_91682ca1d34baa8db9bb71f96f732d2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91682ca1d34baa8db9bb71f96f732d2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91682ca1d34baa8db9bb71f96f732d2e = MAKE_FUNCTION_FRAME(tstate, codeobj_91682ca1d34baa8db9bb71f96f732d2e, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91682ca1d34baa8db9bb71f96f732d2e->m_type_description == NULL);
    frame_91682ca1d34baa8db9bb71f96f732d2e = cache_frame_91682ca1d34baa8db9bb71f96f732d2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_91682ca1d34baa8db9bb71f96f732d2e);
    assert(Py_REFCNT(frame_91682ca1d34baa8db9bb71f96f732d2e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_91682ca1d34baa8db9bb71f96f732d2e->m_frame.f_lineno = 114;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[20], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_91682ca1d34baa8db9bb71f96f732d2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91682ca1d34baa8db9bb71f96f732d2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91682ca1d34baa8db9bb71f96f732d2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91682ca1d34baa8db9bb71f96f732d2e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91682ca1d34baa8db9bb71f96f732d2e == cache_frame_91682ca1d34baa8db9bb71f96f732d2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91682ca1d34baa8db9bb71f96f732d2e);
        cache_frame_91682ca1d34baa8db9bb71f96f732d2e = NULL;
    }

    assertFrameObject(frame_91682ca1d34baa8db9bb71f96f732d2e);

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


static PyObject *impl_pyglet$window$event$$$function__13_on_mouse_enter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_94f33f342e56afe574b77e5ec710197d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94f33f342e56afe574b77e5ec710197d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94f33f342e56afe574b77e5ec710197d)) {
        Py_XDECREF(cache_frame_94f33f342e56afe574b77e5ec710197d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94f33f342e56afe574b77e5ec710197d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94f33f342e56afe574b77e5ec710197d = MAKE_FUNCTION_FRAME(tstate, codeobj_94f33f342e56afe574b77e5ec710197d, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94f33f342e56afe574b77e5ec710197d->m_type_description == NULL);
    frame_94f33f342e56afe574b77e5ec710197d = cache_frame_94f33f342e56afe574b77e5ec710197d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94f33f342e56afe574b77e5ec710197d);
    assert(Py_REFCNT(frame_94f33f342e56afe574b77e5ec710197d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[21];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_1 = par_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_94f33f342e56afe574b77e5ec710197d->m_frame.f_lineno = 117;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_94f33f342e56afe574b77e5ec710197d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94f33f342e56afe574b77e5ec710197d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94f33f342e56afe574b77e5ec710197d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94f33f342e56afe574b77e5ec710197d,
        type_description_1,
        par_self,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_94f33f342e56afe574b77e5ec710197d == cache_frame_94f33f342e56afe574b77e5ec710197d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94f33f342e56afe574b77e5ec710197d);
        cache_frame_94f33f342e56afe574b77e5ec710197d = NULL;
    }

    assertFrameObject(frame_94f33f342e56afe574b77e5ec710197d);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__14_on_mouse_leave(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_d96d7be9a4e89bd489b44a911327ecec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d96d7be9a4e89bd489b44a911327ecec = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d96d7be9a4e89bd489b44a911327ecec)) {
        Py_XDECREF(cache_frame_d96d7be9a4e89bd489b44a911327ecec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d96d7be9a4e89bd489b44a911327ecec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d96d7be9a4e89bd489b44a911327ecec = MAKE_FUNCTION_FRAME(tstate, codeobj_d96d7be9a4e89bd489b44a911327ecec, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d96d7be9a4e89bd489b44a911327ecec->m_type_description == NULL);
    frame_d96d7be9a4e89bd489b44a911327ecec = cache_frame_d96d7be9a4e89bd489b44a911327ecec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d96d7be9a4e89bd489b44a911327ecec);
    assert(Py_REFCNT(frame_d96d7be9a4e89bd489b44a911327ecec) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[22];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_1 = par_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d96d7be9a4e89bd489b44a911327ecec->m_frame.f_lineno = 120;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
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
        exception_tb = MAKE_TRACEBACK(frame_d96d7be9a4e89bd489b44a911327ecec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d96d7be9a4e89bd489b44a911327ecec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d96d7be9a4e89bd489b44a911327ecec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d96d7be9a4e89bd489b44a911327ecec,
        type_description_1,
        par_self,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_d96d7be9a4e89bd489b44a911327ecec == cache_frame_d96d7be9a4e89bd489b44a911327ecec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d96d7be9a4e89bd489b44a911327ecec);
        cache_frame_d96d7be9a4e89bd489b44a911327ecec = NULL;
    }

    assertFrameObject(frame_d96d7be9a4e89bd489b44a911327ecec);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__15_on_expose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9c3c752c6059f51ae31e4db2cfe29f3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c)) {
        Py_XDECREF(cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c = MAKE_FUNCTION_FRAME(tstate, codeobj_9c3c752c6059f51ae31e4db2cfe29f3c, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c->m_type_description == NULL);
    frame_9c3c752c6059f51ae31e4db2cfe29f3c = cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9c3c752c6059f51ae31e4db2cfe29f3c);
    assert(Py_REFCNT(frame_9c3c752c6059f51ae31e4db2cfe29f3c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9c3c752c6059f51ae31e4db2cfe29f3c->m_frame.f_lineno = 123;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[23], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_9c3c752c6059f51ae31e4db2cfe29f3c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c3c752c6059f51ae31e4db2cfe29f3c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c3c752c6059f51ae31e4db2cfe29f3c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c3c752c6059f51ae31e4db2cfe29f3c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9c3c752c6059f51ae31e4db2cfe29f3c == cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c);
        cache_frame_9c3c752c6059f51ae31e4db2cfe29f3c = NULL;
    }

    assertFrameObject(frame_9c3c752c6059f51ae31e4db2cfe29f3c);

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


static PyObject *impl_pyglet$window$event$$$function__16_on_resize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width = python_pars[1];
    PyObject *par_height = python_pars[2];
    struct Nuitka_FrameObject *frame_0ac9601caa7fd24c4b0e0483ecd609f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0)) {
        Py_XDECREF(cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0 = MAKE_FUNCTION_FRAME(tstate, codeobj_0ac9601caa7fd24c4b0e0483ecd609f0, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0->m_type_description == NULL);
    frame_0ac9601caa7fd24c4b0e0483ecd609f0 = cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0ac9601caa7fd24c4b0e0483ecd609f0);
    assert(Py_REFCNT(frame_0ac9601caa7fd24c4b0e0483ecd609f0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[24];
        CHECK_OBJECT(par_width);
        tmp_tuple_element_1 = par_width;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_height);
        tmp_tuple_element_1 = par_height;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0ac9601caa7fd24c4b0e0483ecd609f0->m_frame.f_lineno = 126;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_0ac9601caa7fd24c4b0e0483ecd609f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ac9601caa7fd24c4b0e0483ecd609f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ac9601caa7fd24c4b0e0483ecd609f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ac9601caa7fd24c4b0e0483ecd609f0,
        type_description_1,
        par_self,
        par_width,
        par_height
    );


    // Release cached frame if used for exception.
    if (frame_0ac9601caa7fd24c4b0e0483ecd609f0 == cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0);
        cache_frame_0ac9601caa7fd24c4b0e0483ecd609f0 = NULL;
    }

    assertFrameObject(frame_0ac9601caa7fd24c4b0e0483ecd609f0);

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
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
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


static PyObject *impl_pyglet$window$event$$$function__17_on_move(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_9ff4098d042281a72d169b41c3218891;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ff4098d042281a72d169b41c3218891 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ff4098d042281a72d169b41c3218891)) {
        Py_XDECREF(cache_frame_9ff4098d042281a72d169b41c3218891);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ff4098d042281a72d169b41c3218891 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ff4098d042281a72d169b41c3218891 = MAKE_FUNCTION_FRAME(tstate, codeobj_9ff4098d042281a72d169b41c3218891, module_pyglet$window$event, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ff4098d042281a72d169b41c3218891->m_type_description == NULL);
    frame_9ff4098d042281a72d169b41c3218891 = cache_frame_9ff4098d042281a72d169b41c3218891;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ff4098d042281a72d169b41c3218891);
    assert(Py_REFCNT(frame_9ff4098d042281a72d169b41c3218891) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_mod_expr_left_1 = mod_consts[25];
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_1 = par_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9ff4098d042281a72d169b41c3218891->m_frame.f_lineno = 129;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_9ff4098d042281a72d169b41c3218891, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ff4098d042281a72d169b41c3218891->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ff4098d042281a72d169b41c3218891, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ff4098d042281a72d169b41c3218891,
        type_description_1,
        par_self,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_9ff4098d042281a72d169b41c3218891 == cache_frame_9ff4098d042281a72d169b41c3218891) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ff4098d042281a72d169b41c3218891);
        cache_frame_9ff4098d042281a72d169b41c3218891 = NULL;
    }

    assertFrameObject(frame_9ff4098d042281a72d169b41c3218891);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$event$$$function__18_on_activate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_62eed4e392f53d58c0f7e0824bcd7a6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e)) {
        Py_XDECREF(cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e = MAKE_FUNCTION_FRAME(tstate, codeobj_62eed4e392f53d58c0f7e0824bcd7a6e, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e->m_type_description == NULL);
    frame_62eed4e392f53d58c0f7e0824bcd7a6e = cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_62eed4e392f53d58c0f7e0824bcd7a6e);
    assert(Py_REFCNT(frame_62eed4e392f53d58c0f7e0824bcd7a6e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_62eed4e392f53d58c0f7e0824bcd7a6e->m_frame.f_lineno = 132;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[26], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_62eed4e392f53d58c0f7e0824bcd7a6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62eed4e392f53d58c0f7e0824bcd7a6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62eed4e392f53d58c0f7e0824bcd7a6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62eed4e392f53d58c0f7e0824bcd7a6e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_62eed4e392f53d58c0f7e0824bcd7a6e == cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e);
        cache_frame_62eed4e392f53d58c0f7e0824bcd7a6e = NULL;
    }

    assertFrameObject(frame_62eed4e392f53d58c0f7e0824bcd7a6e);

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


static PyObject *impl_pyglet$window$event$$$function__19_on_deactivate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dccca4cb2d8ccfded10146c935f56b82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dccca4cb2d8ccfded10146c935f56b82 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dccca4cb2d8ccfded10146c935f56b82)) {
        Py_XDECREF(cache_frame_dccca4cb2d8ccfded10146c935f56b82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dccca4cb2d8ccfded10146c935f56b82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dccca4cb2d8ccfded10146c935f56b82 = MAKE_FUNCTION_FRAME(tstate, codeobj_dccca4cb2d8ccfded10146c935f56b82, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dccca4cb2d8ccfded10146c935f56b82->m_type_description == NULL);
    frame_dccca4cb2d8ccfded10146c935f56b82 = cache_frame_dccca4cb2d8ccfded10146c935f56b82;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dccca4cb2d8ccfded10146c935f56b82);
    assert(Py_REFCNT(frame_dccca4cb2d8ccfded10146c935f56b82) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dccca4cb2d8ccfded10146c935f56b82->m_frame.f_lineno = 135;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[27], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_dccca4cb2d8ccfded10146c935f56b82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dccca4cb2d8ccfded10146c935f56b82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dccca4cb2d8ccfded10146c935f56b82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dccca4cb2d8ccfded10146c935f56b82,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dccca4cb2d8ccfded10146c935f56b82 == cache_frame_dccca4cb2d8ccfded10146c935f56b82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dccca4cb2d8ccfded10146c935f56b82);
        cache_frame_dccca4cb2d8ccfded10146c935f56b82 = NULL;
    }

    assertFrameObject(frame_dccca4cb2d8ccfded10146c935f56b82);

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


static PyObject *impl_pyglet$window$event$$$function__20_on_show(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ff22e521ad417e8683d622c87187d4b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff22e521ad417e8683d622c87187d4b0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff22e521ad417e8683d622c87187d4b0)) {
        Py_XDECREF(cache_frame_ff22e521ad417e8683d622c87187d4b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff22e521ad417e8683d622c87187d4b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff22e521ad417e8683d622c87187d4b0 = MAKE_FUNCTION_FRAME(tstate, codeobj_ff22e521ad417e8683d622c87187d4b0, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff22e521ad417e8683d622c87187d4b0->m_type_description == NULL);
    frame_ff22e521ad417e8683d622c87187d4b0 = cache_frame_ff22e521ad417e8683d622c87187d4b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ff22e521ad417e8683d622c87187d4b0);
    assert(Py_REFCNT(frame_ff22e521ad417e8683d622c87187d4b0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ff22e521ad417e8683d622c87187d4b0->m_frame.f_lineno = 138;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[28], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_ff22e521ad417e8683d622c87187d4b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff22e521ad417e8683d622c87187d4b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff22e521ad417e8683d622c87187d4b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff22e521ad417e8683d622c87187d4b0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ff22e521ad417e8683d622c87187d4b0 == cache_frame_ff22e521ad417e8683d622c87187d4b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff22e521ad417e8683d622c87187d4b0);
        cache_frame_ff22e521ad417e8683d622c87187d4b0 = NULL;
    }

    assertFrameObject(frame_ff22e521ad417e8683d622c87187d4b0);

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


static PyObject *impl_pyglet$window$event$$$function__21_on_hide(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0d5cccfc9e86366b9fbd2778b2ab09fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb)) {
        Py_XDECREF(cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb = MAKE_FUNCTION_FRAME(tstate, codeobj_0d5cccfc9e86366b9fbd2778b2ab09fb, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb->m_type_description == NULL);
    frame_0d5cccfc9e86366b9fbd2778b2ab09fb = cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0d5cccfc9e86366b9fbd2778b2ab09fb);
    assert(Py_REFCNT(frame_0d5cccfc9e86366b9fbd2778b2ab09fb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0d5cccfc9e86366b9fbd2778b2ab09fb->m_frame.f_lineno = 141;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[29], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
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
        exception_tb = MAKE_TRACEBACK(frame_0d5cccfc9e86366b9fbd2778b2ab09fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d5cccfc9e86366b9fbd2778b2ab09fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d5cccfc9e86366b9fbd2778b2ab09fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d5cccfc9e86366b9fbd2778b2ab09fb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0d5cccfc9e86366b9fbd2778b2ab09fb == cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb);
        cache_frame_0d5cccfc9e86366b9fbd2778b2ab09fb = NULL;
    }

    assertFrameObject(frame_0d5cccfc9e86366b9fbd2778b2ab09fb);

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


static PyObject *impl_pyglet$window$event$$$function__22_on_context_lost(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_84f1f29944034390171005d6c5eef926;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_84f1f29944034390171005d6c5eef926 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_84f1f29944034390171005d6c5eef926)) {
        Py_XDECREF(cache_frame_84f1f29944034390171005d6c5eef926);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84f1f29944034390171005d6c5eef926 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84f1f29944034390171005d6c5eef926 = MAKE_FUNCTION_FRAME(tstate, codeobj_84f1f29944034390171005d6c5eef926, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84f1f29944034390171005d6c5eef926->m_type_description == NULL);
    frame_84f1f29944034390171005d6c5eef926 = cache_frame_84f1f29944034390171005d6c5eef926;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_84f1f29944034390171005d6c5eef926);
    assert(Py_REFCNT(frame_84f1f29944034390171005d6c5eef926) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_84f1f29944034390171005d6c5eef926->m_frame.f_lineno = 144;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[30], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        exception_tb = MAKE_TRACEBACK(frame_84f1f29944034390171005d6c5eef926, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84f1f29944034390171005d6c5eef926->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84f1f29944034390171005d6c5eef926, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84f1f29944034390171005d6c5eef926,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_84f1f29944034390171005d6c5eef926 == cache_frame_84f1f29944034390171005d6c5eef926) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84f1f29944034390171005d6c5eef926);
        cache_frame_84f1f29944034390171005d6c5eef926 = NULL;
    }

    assertFrameObject(frame_84f1f29944034390171005d6c5eef926);

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


static PyObject *impl_pyglet$window$event$$$function__23_on_context_state_lost(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ff355235a1e14405f93dc64ed2fc8b81;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff355235a1e14405f93dc64ed2fc8b81 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff355235a1e14405f93dc64ed2fc8b81)) {
        Py_XDECREF(cache_frame_ff355235a1e14405f93dc64ed2fc8b81);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff355235a1e14405f93dc64ed2fc8b81 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff355235a1e14405f93dc64ed2fc8b81 = MAKE_FUNCTION_FRAME(tstate, codeobj_ff355235a1e14405f93dc64ed2fc8b81, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff355235a1e14405f93dc64ed2fc8b81->m_type_description == NULL);
    frame_ff355235a1e14405f93dc64ed2fc8b81 = cache_frame_ff355235a1e14405f93dc64ed2fc8b81;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ff355235a1e14405f93dc64ed2fc8b81);
    assert(Py_REFCNT(frame_ff355235a1e14405f93dc64ed2fc8b81) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ff355235a1e14405f93dc64ed2fc8b81->m_frame.f_lineno = 147;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[31], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
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
        exception_tb = MAKE_TRACEBACK(frame_ff355235a1e14405f93dc64ed2fc8b81, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff355235a1e14405f93dc64ed2fc8b81->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff355235a1e14405f93dc64ed2fc8b81, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff355235a1e14405f93dc64ed2fc8b81,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ff355235a1e14405f93dc64ed2fc8b81 == cache_frame_ff355235a1e14405f93dc64ed2fc8b81) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff355235a1e14405f93dc64ed2fc8b81);
        cache_frame_ff355235a1e14405f93dc64ed2fc8b81 = NULL;
    }

    assertFrameObject(frame_ff355235a1e14405f93dc64ed2fc8b81);

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


static PyObject *impl_pyglet$window$event$$$function__24_on_draw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_deb1ca35ef6a4e3fe3386906a9f0f08d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d)) {
        Py_XDECREF(cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d = MAKE_FUNCTION_FRAME(tstate, codeobj_deb1ca35ef6a4e3fe3386906a9f0f08d, module_pyglet$window$event, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d->m_type_description == NULL);
    frame_deb1ca35ef6a4e3fe3386906a9f0f08d = cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_deb1ca35ef6a4e3fe3386906a9f0f08d);
    assert(Py_REFCNT(frame_deb1ca35ef6a4e3fe3386906a9f0f08d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_deb1ca35ef6a4e3fe3386906a9f0f08d->m_frame.f_lineno = 150;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[32], kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_deb1ca35ef6a4e3fe3386906a9f0f08d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_deb1ca35ef6a4e3fe3386906a9f0f08d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_deb1ca35ef6a4e3fe3386906a9f0f08d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_deb1ca35ef6a4e3fe3386906a9f0f08d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_deb1ca35ef6a4e3fe3386906a9f0f08d == cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d);
        cache_frame_deb1ca35ef6a4e3fe3386906a9f0f08d = NULL;
    }

    assertFrameObject(frame_deb1ca35ef6a4e3fe3386906a9f0f08d);

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



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__10_on_mouse_release() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__10_on_mouse_release,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_c490fbaea9d8d3e4fef63124f55e83af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__11_on_mouse_scroll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__11_on_mouse_scroll,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_ca2928a3dddab5b899e196dec085be7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__12_on_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__12_on_close,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_91682ca1d34baa8db9bb71f96f732d2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__13_on_mouse_enter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__13_on_mouse_enter,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_94f33f342e56afe574b77e5ec710197d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__14_on_mouse_leave() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__14_on_mouse_leave,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_d96d7be9a4e89bd489b44a911327ecec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__15_on_expose() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__15_on_expose,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_9c3c752c6059f51ae31e4db2cfe29f3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__16_on_resize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__16_on_resize,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_0ac9601caa7fd24c4b0e0483ecd609f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__17_on_move() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__17_on_move,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_9ff4098d042281a72d169b41c3218891,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__18_on_activate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__18_on_activate,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_62eed4e392f53d58c0f7e0824bcd7a6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__19_on_deactivate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__19_on_deactivate,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_dccca4cb2d8ccfded10146c935f56b82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__1___init__,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_b973ac6ef5a99b1c08a8308e76309825,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__20_on_show() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__20_on_show,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_ff22e521ad417e8683d622c87187d4b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__21_on_hide() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__21_on_hide,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_0d5cccfc9e86366b9fbd2778b2ab09fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__22_on_context_lost() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__22_on_context_lost,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_84f1f29944034390171005d6c5eef926,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__23_on_context_state_lost() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__23_on_context_state_lost,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_ff355235a1e14405f93dc64ed2fc8b81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__24_on_draw() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__24_on_draw,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_deb1ca35ef6a4e3fe3386906a9f0f08d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__2_on_key_press() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__2_on_key_press,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_7f1b1441c7195e5a6c13a3c33053acac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__3_on_key_release() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__3_on_key_release,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_42ca8498201fced6f97e13f80187ed9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__4_on_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__4_on_text,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_b930b9f02dbfcc304060503b8b969f3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__5_on_text_motion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__5_on_text_motion,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_e737d182b3baac9c1d8ceb32bf61d2f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__6_on_text_motion_select() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__6_on_text_motion_select,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_37f83e2e4e488d2413743080ea8c6be5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__7_on_mouse_motion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__7_on_mouse_motion,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_23006dcd24ca441cd85254e242022f4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__8_on_mouse_drag() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__8_on_mouse_drag,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_12d3b8ea5742f421cba41a23dac182c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$event$$$function__9_on_mouse_press() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$event$$$function__9_on_mouse_press,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_6a9029a251d52f857e7af28a7870ffc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$event,
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

function_impl_code functable_pyglet$window$event[] = {
    impl_pyglet$window$event$$$function__1___init__,
    impl_pyglet$window$event$$$function__2_on_key_press,
    impl_pyglet$window$event$$$function__3_on_key_release,
    impl_pyglet$window$event$$$function__4_on_text,
    impl_pyglet$window$event$$$function__5_on_text_motion,
    impl_pyglet$window$event$$$function__6_on_text_motion_select,
    impl_pyglet$window$event$$$function__7_on_mouse_motion,
    impl_pyglet$window$event$$$function__8_on_mouse_drag,
    impl_pyglet$window$event$$$function__9_on_mouse_press,
    impl_pyglet$window$event$$$function__10_on_mouse_release,
    impl_pyglet$window$event$$$function__11_on_mouse_scroll,
    impl_pyglet$window$event$$$function__12_on_close,
    impl_pyglet$window$event$$$function__13_on_mouse_enter,
    impl_pyglet$window$event$$$function__14_on_mouse_leave,
    impl_pyglet$window$event$$$function__15_on_expose,
    impl_pyglet$window$event$$$function__16_on_resize,
    impl_pyglet$window$event$$$function__17_on_move,
    impl_pyglet$window$event$$$function__18_on_activate,
    impl_pyglet$window$event$$$function__19_on_deactivate,
    impl_pyglet$window$event$$$function__20_on_show,
    impl_pyglet$window$event$$$function__21_on_hide,
    impl_pyglet$window$event$$$function__22_on_context_lost,
    impl_pyglet$window$event$$$function__23_on_context_state_lost,
    impl_pyglet$window$event$$$function__24_on_draw,
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

    function_impl_code *current = functable_pyglet$window$event;
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

    if (offset > sizeof(functable_pyglet$window$event) || offset < 0) {
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
        functable_pyglet$window$event[offset],
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
        module_pyglet$window$event,
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
PyObject *modulecode_pyglet$window$event(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.window.event");

    // Store the module for future use.
    module_pyglet$window$event = module;

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
        PRINT_STRING("pyglet.window.event: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.window.event: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$window$event\n");

    moduledict_pyglet$window$event = MODULE_DICT(module_pyglet$window$event);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$window$event,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$window$event,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[112]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$window$event,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$window$event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$window$event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$window$event);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$window$event);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_37fadb9984be60bf814d984a2270bba7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_pyglet$window$event$$$class__1_WindowEventLogger_47 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_2);
    }
    frame_37fadb9984be60bf814d984a2270bba7 = MAKE_MODULE_FRAME(codeobj_37fadb9984be60bf814d984a2270bba7, module_pyglet$window$event);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_37fadb9984be60bf814d984a2270bba7);
    assert(Py_REFCNT(frame_37fadb9984be60bf814d984a2270bba7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[41];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$window$event;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[42];
        tmp_level_value_1 = mod_consts[43];
        frame_37fadb9984be60bf814d984a2270bba7->m_frame.f_lineno = 43;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$window$event,
                mod_consts[4],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[41];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$window$event;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[44];
        tmp_level_value_2 = mod_consts[43];
        frame_37fadb9984be60bf814d984a2270bba7->m_frame.f_lineno = 44;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$window$event,
                mod_consts[15],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$window$event$$$class__1_WindowEventLogger_47 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[46], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[47];
        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[34], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[50];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__2_on_key_press();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__3_on_key_release();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[55], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__4_on_text();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__5_on_text_motion();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__6_on_text_motion_select();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__7_on_mouse_motion();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__8_on_mouse_drag();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[65], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__9_on_mouse_press();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[67], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__10_on_mouse_release();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__11_on_mouse_scroll();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__12_on_close();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[73], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__13_on_mouse_enter();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__14_on_mouse_leave();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__15_on_expose();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[79], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__16_on_resize();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__17_on_move();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__18_on_activate();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[85], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__19_on_deactivate();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[87], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__20_on_show();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__21_on_hide();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__22_on_context_lost();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[93], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__23_on_context_state_lost();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$window$event$$$function__24_on_draw();

        tmp_res = PyDict_SetItem(locals_pyglet$window$event$$$class__1_WindowEventLogger_47, mod_consts[97], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[48];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[99];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyglet$window$event$$$class__1_WindowEventLogger_47;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_37fadb9984be60bf814d984a2270bba7->m_frame.f_lineno = 47;
            tmp_assign_source_10 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$window$event$$$class__1_WindowEventLogger_47);
        locals_pyglet$window$event$$$class__1_WindowEventLogger_47 = NULL;
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

        Py_DECREF(locals_pyglet$window$event$$$class__1_WindowEventLogger_47);
        locals_pyglet$window$event$$$class__1_WindowEventLogger_47 = NULL;
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
        exception_lineno = 47;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$window$event, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_9);
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37fadb9984be60bf814d984a2270bba7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37fadb9984be60bf814d984a2270bba7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37fadb9984be60bf814d984a2270bba7, exception_lineno);
    }



    assertFrameObject(frame_37fadb9984be60bf814d984a2270bba7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.window.event", false);

    Py_INCREF(module_pyglet$window$event);
    return module_pyglet$window$event;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$event, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$window$event", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
