/* Generated code for Python module 'pyglet.image.codecs.s3tc'
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

/* The "module_pyglet$image$codecs$s3tc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$image$codecs$s3tc;
PyDictObject *moduledict_pyglet$image$codecs$s3tc;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[132];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[132];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.image.codecs.s3tc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 132; i++) {
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
void checkModuleConstants_pyglet$image$codecs$s3tc(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 132; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e41dbe239908228e5cf46b09cf8c7d8b;
static PyCodeObject *codeobj_3a230e990b4f9284433bc60d626bf6ba;
static PyCodeObject *codeobj_cc8ad940dba989e887708d7ed37a5a17;
static PyCodeObject *codeobj_b0fd43180ceea0d202236d17f054481e;
static PyCodeObject *codeobj_be496a9391f476bcd79145c3af8e8256;
static PyCodeObject *codeobj_514dac68179bfab23ba2116780927473;
static PyCodeObject *codeobj_30e8c2ccc68a86baff3e38baecf154ac;
static PyCodeObject *codeobj_bcef095b98731203c97763f4ccb456f1;
static PyCodeObject *codeobj_f3b2be1207153872e376a46fbc9f09d2;
static PyCodeObject *codeobj_1a17e20d7ddccdfb109c106e29e12bc5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[120]); CHECK_OBJECT(module_filename_obj);
    codeobj_e41dbe239908228e5cf46b09cf8c7d8b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[121], mod_consts[121], NULL, NULL, 0, 0, 0);
    codeobj_3a230e990b4f9284433bc60d626bf6ba = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[122], NULL, 0, 0, 0);
    codeobj_cc8ad940dba989e887708d7ed37a5a17 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[123], mod_consts[122], 6, 0, 0);
    codeobj_b0fd43180ceea0d202236d17f054481e = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[124], NULL, 1, 0, 0);
    codeobj_be496a9391f476bcd79145c3af8e8256 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[125], NULL, 3, 0, 0);
    codeobj_514dac68179bfab23ba2116780927473 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[126], NULL, 3, 0, 0);
    codeobj_30e8c2ccc68a86baff3e38baecf154ac = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[127], NULL, 3, 0, 0);
    codeobj_bcef095b98731203c97763f4ccb456f1 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[128], NULL, 3, 0, 0);
    codeobj_f3b2be1207153872e376a46fbc9f09d2 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[129], NULL, 3, 0, 0);
    codeobj_1a17e20d7ddccdfb109c106e29e12bc5 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[130], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__1___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__2_unpack();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__3__get_texture();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__4_get_texture(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__5_decode_dxt1_rgb();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__6_decode_dxt1_rgba();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__7_decode_dxt3();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__8_decode_dxt5();


// The module function definitions.
static PyObject *impl_pyglet$image$codecs$s3tc$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width = python_pars[1];
    PyObject *par_height = python_pars[2];
    PyObject *par_fmt = python_pars[3];
    PyObject *par_packed_format = python_pars[4];
    PyObject *par_data = python_pars[5];
    struct Nuitka_FrameObject *frame_cc8ad940dba989e887708d7ed37a5a17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cc8ad940dba989e887708d7ed37a5a17 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc8ad940dba989e887708d7ed37a5a17)) {
        Py_XDECREF(cache_frame_cc8ad940dba989e887708d7ed37a5a17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc8ad940dba989e887708d7ed37a5a17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc8ad940dba989e887708d7ed37a5a17 = MAKE_FUNCTION_FRAME(tstate, codeobj_cc8ad940dba989e887708d7ed37a5a17, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc8ad940dba989e887708d7ed37a5a17->m_type_description == NULL);
    frame_cc8ad940dba989e887708d7ed37a5a17 = cache_frame_cc8ad940dba989e887708d7ed37a5a17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cc8ad940dba989e887708d7ed37a5a17);
    assert(Py_REFCNT(frame_cc8ad940dba989e887708d7ed37a5a17) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 56;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pyglet$image$codecs$s3tc, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_args_element_value_1 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_2 = par_height;
        frame_cc8ad940dba989e887708d7ed37a5a17->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fmt);
        tmp_assattr_value_1 = par_fmt;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_packed_format);
        tmp_assattr_value_2 = par_packed_format;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_data);
        tmp_assattr_value_3 = par_data;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[4], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc8ad940dba989e887708d7ed37a5a17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc8ad940dba989e887708d7ed37a5a17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc8ad940dba989e887708d7ed37a5a17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc8ad940dba989e887708d7ed37a5a17,
        type_description_1,
        par_self,
        par_width,
        par_height,
        par_fmt,
        par_packed_format,
        par_data,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cc8ad940dba989e887708d7ed37a5a17 == cache_frame_cc8ad940dba989e887708d7ed37a5a17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc8ad940dba989e887708d7ed37a5a17);
        cache_frame_cc8ad940dba989e887708d7ed37a5a17 = NULL;
    }

    assertFrameObject(frame_cc8ad940dba989e887708d7ed37a5a17);

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
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    CHECK_OBJECT(par_packed_format);
    Py_DECREF(par_packed_format);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
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
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    CHECK_OBJECT(par_packed_format);
    Py_DECREF(par_packed_format);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$s3tc$$$function__2_unpack(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_i = NULL;
    PyObject *var_out = NULL;
    PyObject *var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1a17e20d7ddccdfb109c106e29e12bc5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1a17e20d7ddccdfb109c106e29e12bc5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1a17e20d7ddccdfb109c106e29e12bc5)) {
        Py_XDECREF(cache_frame_1a17e20d7ddccdfb109c106e29e12bc5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a17e20d7ddccdfb109c106e29e12bc5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a17e20d7ddccdfb109c106e29e12bc5 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a17e20d7ddccdfb109c106e29e12bc5, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a17e20d7ddccdfb109c106e29e12bc5->m_type_description == NULL);
    frame_1a17e20d7ddccdfb109c106e29e12bc5 = cache_frame_1a17e20d7ddccdfb109c106e29e12bc5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a17e20d7ddccdfb109c106e29e12bc5);
    assert(Py_REFCNT(frame_1a17e20d7ddccdfb109c106e29e12bc5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
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
        tmp_assign_source_1 = mod_consts[6];
        assert(var_i == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_i = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_mult_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[10]);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[11];
        tmp_mult_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1a17e20d7ddccdfb109c106e29e12bc5->m_frame.f_lineno = 65;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[4]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 66;
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
            PyObject *old = var_c;
            var_c = tmp_assign_source_5;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_c);
        tmp_bitand_expr_left_1 = var_c;
        tmp_bitand_expr_right_1 = mod_consts[12];
        tmp_lshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_lshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_1 = mod_consts[11];
        tmp_ass_subvalue_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        Py_DECREF(tmp_lshift_expr_left_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = var_i;
        tmp_add_expr_right_1 = mod_consts[15];
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_c);
        tmp_bitand_expr_left_2 = var_c;
        tmp_bitand_expr_right_2 = mod_consts[16];
        tmp_rshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_1 = mod_consts[11];
        tmp_ass_subvalue_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 68;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_2 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 68;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_2 = var_i;
        tmp_add_expr_right_2 = mod_consts[17];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 68;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_c);
        tmp_bitand_expr_left_3 = var_c;
        tmp_bitand_expr_right_3 = mod_consts[18];
        tmp_rshift_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_rshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_2 = mod_consts[19];
        tmp_ass_subvalue_3 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        Py_DECREF(tmp_rshift_expr_left_2);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_3 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscript_3 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 70;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_i;
        tmp_iadd_expr_right_1 = mod_consts[11];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_1;
        var_i = tmp_assign_source_6;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 66;
        type_description_1 = "oooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = var_out;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assattr_value_2 == NULL)) {
            tmp_assattr_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a17e20d7ddccdfb109c106e29e12bc5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a17e20d7ddccdfb109c106e29e12bc5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a17e20d7ddccdfb109c106e29e12bc5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a17e20d7ddccdfb109c106e29e12bc5,
        type_description_1,
        par_self,
        var_i,
        var_out,
        var_c
    );


    // Release cached frame if used for exception.
    if (frame_1a17e20d7ddccdfb109c106e29e12bc5 == cache_frame_1a17e20d7ddccdfb109c106e29e12bc5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a17e20d7ddccdfb109c106e29e12bc5);
        cache_frame_1a17e20d7ddccdfb109c106e29e12bc5 = NULL;
    }

    assertFrameObject(frame_1a17e20d7ddccdfb109c106e29e12bc5);

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
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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


static PyObject *impl_pyglet$image$codecs$s3tc$$$function__3__get_texture(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_texture = NULL;
    struct Nuitka_FrameObject *frame_b0fd43180ceea0d202236d17f054481e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b0fd43180ceea0d202236d17f054481e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b0fd43180ceea0d202236d17f054481e)) {
        Py_XDECREF(cache_frame_b0fd43180ceea0d202236d17f054481e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0fd43180ceea0d202236d17f054481e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0fd43180ceea0d202236d17f054481e = MAKE_FUNCTION_FRAME(tstate, codeobj_b0fd43180ceea0d202236d17f054481e, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0fd43180ceea0d202236d17f054481e->m_type_description == NULL);
    frame_b0fd43180ceea0d202236d17f054481e = cache_frame_b0fd43180ceea0d202236d17f054481e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b0fd43180ceea0d202236d17f054481e);
    assert(Py_REFCNT(frame_b0fd43180ceea0d202236d17f054481e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[21]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = Py_None;
        frame_b0fd43180ceea0d202236d17f054481e->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_texture == NULL);
        var_texture = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_texture);
        tmp_expression_value_6 = var_texture;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[26]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_texture);
        tmp_expression_value_7 = var_texture;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b0fd43180ceea0d202236d17f054481e->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_texture);
        tmp_expression_value_8 = var_texture;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[26]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b0fd43180ceea0d202236d17f054481e->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b0fd43180ceea0d202236d17f054481e->m_frame.f_lineno = 82;
        tmp_operand_value_1 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_1,
            mod_consts[32],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_b0fd43180ceea0d202236d17f054481e->m_frame.f_lineno = 83;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[34]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_16;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_texture);
        tmp_expression_value_9 = var_texture;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[26]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_texture);
        tmp_expression_value_10 = var_texture;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[36]);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[2]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[9]);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[10]);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[2]);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[3]);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[4]);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b0fd43180ceea0d202236d17f054481e->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_texture);
        tmp_assattr_value_1 = var_texture;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_b0fd43180ceea0d202236d17f054481e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0fd43180ceea0d202236d17f054481e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0fd43180ceea0d202236d17f054481e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0fd43180ceea0d202236d17f054481e,
        type_description_1,
        par_self,
        var_texture
    );


    // Release cached frame if used for exception.
    if (frame_b0fd43180ceea0d202236d17f054481e == cache_frame_b0fd43180ceea0d202236d17f054481e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0fd43180ceea0d202236d17f054481e);
        cache_frame_b0fd43180ceea0d202236d17f054481e = NULL;
    }

    assertFrameObject(frame_b0fd43180ceea0d202236d17f054481e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_texture);
    tmp_return_value = var_texture;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_texture);
    var_texture = NULL;
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

    Py_XDECREF(var_texture);
    var_texture = NULL;
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


static PyObject *impl_pyglet$image$codecs$s3tc$$$function__4_get_texture(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rectangle = python_pars[1];
    PyObject *par_force_rectangle = python_pars[2];
    struct Nuitka_FrameObject *frame_f3b2be1207153872e376a46fbc9f09d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3b2be1207153872e376a46fbc9f09d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3b2be1207153872e376a46fbc9f09d2)) {
        Py_XDECREF(cache_frame_f3b2be1207153872e376a46fbc9f09d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3b2be1207153872e376a46fbc9f09d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3b2be1207153872e376a46fbc9f09d2 = MAKE_FUNCTION_FRAME(tstate, codeobj_f3b2be1207153872e376a46fbc9f09d2, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3b2be1207153872e376a46fbc9f09d2->m_type_description == NULL);
    frame_f3b2be1207153872e376a46fbc9f09d2 = cache_frame_f3b2be1207153872e376a46fbc9f09d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f3b2be1207153872e376a46fbc9f09d2);
    assert(Py_REFCNT(frame_f3b2be1207153872e376a46fbc9f09d2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f3b2be1207153872e376a46fbc9f09d2->m_frame.f_lineno = 98;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3b2be1207153872e376a46fbc9f09d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3b2be1207153872e376a46fbc9f09d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3b2be1207153872e376a46fbc9f09d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3b2be1207153872e376a46fbc9f09d2,
        type_description_1,
        par_self,
        par_rectangle,
        par_force_rectangle
    );


    // Release cached frame if used for exception.
    if (frame_f3b2be1207153872e376a46fbc9f09d2 == cache_frame_f3b2be1207153872e376a46fbc9f09d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3b2be1207153872e376a46fbc9f09d2);
        cache_frame_f3b2be1207153872e376a46fbc9f09d2 = NULL;
    }

    assertFrameObject(frame_f3b2be1207153872e376a46fbc9f09d2);

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
    CHECK_OBJECT(par_rectangle);
    Py_DECREF(par_rectangle);
    CHECK_OBJECT(par_force_rectangle);
    Py_DECREF(par_force_rectangle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rectangle);
    Py_DECREF(par_rectangle);
    CHECK_OBJECT(par_force_rectangle);
    Py_DECREF(par_force_rectangle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$s3tc$$$function__5_decode_dxt1_rgb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_width = python_pars[1];
    PyObject *par_height = python_pars[2];
    PyObject *var_out = NULL;
    PyObject *var_image_offset = NULL;
    PyObject *var_c0_lo = NULL;
    PyObject *var_c0_hi = NULL;
    PyObject *var_c1_lo = NULL;
    PyObject *var_c1_hi = NULL;
    PyObject *var_b0 = NULL;
    PyObject *var_b1 = NULL;
    PyObject *var_b2 = NULL;
    PyObject *var_b3 = NULL;
    PyObject *var_color0 = NULL;
    PyObject *var_color1 = NULL;
    PyObject *var_bits = NULL;
    PyObject *var_r0 = NULL;
    PyObject *var_g0 = NULL;
    PyObject *var_r1 = NULL;
    PyObject *var_g1 = NULL;
    PyObject *var_i = NULL;
    PyObject *var_y = NULL;
    PyObject *var_x = NULL;
    PyObject *var_code = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *var_advance_row = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_be496a9391f476bcd79145c3af8e8256;
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
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_be496a9391f476bcd79145c3af8e8256 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_be496a9391f476bcd79145c3af8e8256)) {
        Py_XDECREF(cache_frame_be496a9391f476bcd79145c3af8e8256);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be496a9391f476bcd79145c3af8e8256 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be496a9391f476bcd79145c3af8e8256 = MAKE_FUNCTION_FRAME(tstate, codeobj_be496a9391f476bcd79145c3af8e8256, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be496a9391f476bcd79145c3af8e8256->m_type_description == NULL);
    frame_be496a9391f476bcd79145c3af8e8256 = cache_frame_be496a9391f476bcd79145c3af8e8256;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_be496a9391f476bcd79145c3af8e8256);
    assert(Py_REFCNT(frame_be496a9391f476bcd79145c3af8e8256) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_mult_expr_left_2 = par_width;
        CHECK_OBJECT(par_height);
        tmp_mult_expr_right_2 = par_height;
        tmp_mult_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 103;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[6];
        assert(var_image_offset == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_image_offset = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 107;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 107;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 8);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 8);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 8);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 8);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_5, 4, 8);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_5;
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_6, 5, 8);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_6;
            tmp_tuple_unpack_1__element_6 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_7, 6, 8);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_7;
            tmp_tuple_unpack_1__element_7 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_8, 7, 8);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_8;
            tmp_tuple_unpack_1__element_8 = tmp_assign_source_13;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 107;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 107;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_c0_lo;
            var_c0_lo = tmp_assign_source_14;
            Py_INCREF(var_c0_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_c0_hi;
            var_c0_hi = tmp_assign_source_15;
            Py_INCREF(var_c0_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_c1_lo;
            var_c1_lo = tmp_assign_source_16;
            Py_INCREF(var_c1_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_c1_hi;
            var_c1_hi = tmp_assign_source_17;
            Py_INCREF(var_c1_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = var_b0;
            var_b0 = tmp_assign_source_18;
            Py_INCREF(var_b0);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_6;
        {
            PyObject *old = var_b1;
            var_b1 = tmp_assign_source_19;
            Py_INCREF(var_b1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_7;
        {
            PyObject *old = var_b2;
            var_b2 = tmp_assign_source_20;
            Py_INCREF(var_b2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_8;
        {
            PyObject *old = var_b3;
            var_b3 = tmp_assign_source_21;
            Py_INCREF(var_b3);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_lo);
        tmp_args_element_value_2 = var_c0_lo;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 108;
        tmp_bitor_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_hi);
        tmp_args_element_value_3 = var_c0_hi;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 108;
        tmp_lshift_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_lshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_1 = mod_consts[19];
        tmp_bitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        Py_DECREF(tmp_lshift_expr_left_1);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_22 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color0;
            var_color0 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_lo);
        tmp_args_element_value_4 = var_c1_lo;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 109;
        tmp_bitor_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_hi);
        tmp_args_element_value_5 = var_c1_hi;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 109;
        tmp_lshift_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_lshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_2 = mod_consts[19];
        tmp_bitor_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        Py_DECREF(tmp_lshift_expr_left_2);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_23 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color1;
            var_color1 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_lshift_expr_left_3;
        PyObject *tmp_lshift_expr_right_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_lshift_expr_left_4;
        PyObject *tmp_lshift_expr_right_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_lshift_expr_left_5;
        PyObject *tmp_lshift_expr_right_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b0);
        tmp_args_element_value_6 = var_b0;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 110;
        tmp_bitor_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_bitor_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b1);
        tmp_args_element_value_7 = var_b1;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 110;
        tmp_lshift_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        if (tmp_lshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_3 = mod_consts[19];
        tmp_bitor_expr_right_5 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_3, tmp_lshift_expr_right_3);
        Py_DECREF(tmp_lshift_expr_left_3);
        if (tmp_bitor_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        Py_DECREF(tmp_bitor_expr_right_5);
        if (tmp_bitor_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b2);
        tmp_args_element_value_8 = var_b2;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 110;
        tmp_lshift_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        if (tmp_lshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_4 = mod_consts[44];
        tmp_bitor_expr_right_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_4, tmp_lshift_expr_right_4);
        Py_DECREF(tmp_lshift_expr_left_4);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b3);
        tmp_args_element_value_9 = var_b3;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 110;
        tmp_lshift_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_lshift_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_5 = mod_consts[45];
        tmp_bitor_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_5, tmp_lshift_expr_right_5);
        Py_DECREF(tmp_lshift_expr_left_5);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_24 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bits;
            var_bits = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_1 = var_color0;
        tmp_bitand_expr_right_1 = mod_consts[12];
        tmp_assign_source_25 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r0;
            var_r0 = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_2 = var_color0;
        tmp_bitand_expr_right_2 = mod_consts[16];
        tmp_rshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_1 = mod_consts[46];
        tmp_assign_source_26 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g0;
            var_g0 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_3 = var_color0;
        tmp_bitand_expr_right_3 = mod_consts[18];
        tmp_rshift_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_rshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_2 = mod_consts[47];
        tmp_assign_source_27 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        Py_DECREF(tmp_rshift_expr_left_2);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b0;
            assert(old != NULL);
            var_b0 = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_4 = var_color1;
        tmp_bitand_expr_right_4 = mod_consts[12];
        tmp_assign_source_28 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_rshift_expr_left_3;
        PyObject *tmp_rshift_expr_right_3;
        PyObject *tmp_bitand_expr_left_5;
        PyObject *tmp_bitand_expr_right_5;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_5 = var_color1;
        tmp_bitand_expr_right_5 = mod_consts[16];
        tmp_rshift_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
        if (tmp_rshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_3 = mod_consts[46];
        tmp_assign_source_29 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_3, tmp_rshift_expr_right_3);
        Py_DECREF(tmp_rshift_expr_left_3);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g1;
            var_g1 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_rshift_expr_left_4;
        PyObject *tmp_rshift_expr_right_4;
        PyObject *tmp_bitand_expr_left_6;
        PyObject *tmp_bitand_expr_right_6;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_6 = var_color1;
        tmp_bitand_expr_right_6 = mod_consts[18];
        tmp_rshift_expr_left_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
        if (tmp_rshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_4 = mod_consts[47];
        tmp_assign_source_30 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_4, tmp_rshift_expr_right_4);
        Py_DECREF(tmp_rshift_expr_left_4);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b1;
            assert(old != NULL);
            var_b1 = tmp_assign_source_30;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_31 = var_image_offset;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_31;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 121;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[50]);

        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_33 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 121;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_34 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_34;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 122;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[50]);

        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_35 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_36 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 122;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_37 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_37;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_bitand_expr_left_7;
        PyObject *tmp_bitand_expr_right_7;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_bitand_expr_left_7 = var_bits;
        tmp_bitand_expr_right_7 = mod_consts[11];
        tmp_assign_source_38 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_code;
            var_code = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_1 = var_code;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_color0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subvalue_1 = var_color0;
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_1 = var_out;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_2 = var_code;
        tmp_cmp_expr_right_2 = mod_consts[17];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (var_color1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subvalue_2 = var_color1;
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_2 = var_out;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_3 = var_code;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_color0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_4 = var_color0;
        if (var_color1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_right_4 = var_color1;
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = mod_consts[6];
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_3 = var_out;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscript_3 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_5 = var_code;
        tmp_cmp_expr_right_5 = mod_consts[15];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (var_color0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_6 = var_color0;
        if (var_color1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_right_6 = var_color1;
        tmp_and_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_mult_expr_left_3 = mod_consts[15];
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_3 = var_r0;
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_r1 == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_1 = var_r1;
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_1 = mod_consts[11];
        tmp_assign_source_39 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_mult_expr_left_4 = mod_consts[15];
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_4 = var_g0;
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_g1 == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_2 = var_g1;
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_2 = mod_consts[11];
        tmp_assign_source_40 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_mult_expr_left_5 = mod_consts[15];
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_5 = var_b0;
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_b1 == NULL) {
            Py_DECREF(tmp_add_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_3 = var_b1;
        tmp_floordiv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_floordiv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_3 = mod_consts[11];
        tmp_assign_source_41 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        Py_DECREF(tmp_floordiv_expr_left_3);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_7 = var_code;
        tmp_cmp_expr_right_7 = mod_consts[11];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (var_color0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_8 = var_color0;
        if (var_color1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_right_8 = var_color1;
        tmp_and_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_5 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_floordiv_expr_left_4;
        PyObject *tmp_floordiv_expr_right_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_4 = var_r0;
        tmp_mult_expr_left_6 = mod_consts[15];
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_6 = var_r1;
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_floordiv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_4 = mod_consts[11];
        tmp_assign_source_42 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
        Py_DECREF(tmp_floordiv_expr_left_4);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_floordiv_expr_left_5;
        PyObject *tmp_floordiv_expr_right_5;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_5 = var_g0;
        tmp_mult_expr_left_7 = mod_consts[15];
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_7 = var_g1;
        tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_floordiv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_5 = mod_consts[11];
        tmp_assign_source_43 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_5, tmp_floordiv_expr_right_5);
        Py_DECREF(tmp_floordiv_expr_left_5);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_floordiv_expr_left_6;
        PyObject *tmp_floordiv_expr_right_6;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_6 = var_b0;
        tmp_mult_expr_left_8 = mod_consts[15];
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_8 = var_b1;
        tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_floordiv_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_6 = mod_consts[11];
        tmp_assign_source_44 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_6, tmp_floordiv_expr_right_6);
        Py_DECREF(tmp_floordiv_expr_left_6);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_9 = var_code;
        tmp_cmp_expr_right_9 = mod_consts[15];
        tmp_and_left_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_and_left_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_4);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        Py_DECREF(tmp_and_left_value_4);
        if (var_color0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_10 = var_color0;
        if (var_color1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_right_10 = var_color1;
        tmp_and_right_value_4 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_right_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_operand_value_1 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_operand_value_1 = tmp_and_left_value_4;
        and_end_4:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 141;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_floordiv_expr_left_7;
        PyObject *tmp_floordiv_expr_right_7;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_7 = var_r0;
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_7 = var_r1;
        tmp_floordiv_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_floordiv_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_7 = mod_consts[15];
        tmp_assign_source_45 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_7, tmp_floordiv_expr_right_7);
        Py_DECREF(tmp_floordiv_expr_left_7);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_floordiv_expr_left_8;
        PyObject *tmp_floordiv_expr_right_8;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_8 = var_g0;
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_8 = var_g1;
        tmp_floordiv_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_floordiv_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_8 = mod_consts[15];
        tmp_assign_source_46 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_8, tmp_floordiv_expr_right_8);
        Py_DECREF(tmp_floordiv_expr_left_8);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_floordiv_expr_left_9;
        PyObject *tmp_floordiv_expr_right_9;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_9 = var_b0;
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_9 = var_b1;
        tmp_floordiv_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_floordiv_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_9 = mod_consts[15];
        tmp_assign_source_47 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_9, tmp_floordiv_expr_right_9);
        Py_DECREF(tmp_floordiv_expr_left_9);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_bitor_expr_left_6;
        PyObject *tmp_bitor_expr_right_6;
        PyObject *tmp_bitor_expr_left_7;
        PyObject *tmp_bitor_expr_right_7;
        PyObject *tmp_lshift_expr_left_6;
        PyObject *tmp_lshift_expr_right_6;
        PyObject *tmp_lshift_expr_left_7;
        PyObject *tmp_lshift_expr_right_7;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_r);
        tmp_bitor_expr_left_7 = var_r;
        CHECK_OBJECT(var_g);
        tmp_lshift_expr_left_6 = var_g;
        tmp_lshift_expr_right_6 = mod_consts[46];
        tmp_bitor_expr_right_7 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_6, tmp_lshift_expr_right_6);
        if (tmp_bitor_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_bitor_expr_left_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
        Py_DECREF(tmp_bitor_expr_right_7);
        if (tmp_bitor_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_b);
        tmp_lshift_expr_left_7 = var_b;
        tmp_lshift_expr_right_7 = mod_consts[47];
        tmp_bitor_expr_right_6 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_7, tmp_lshift_expr_right_7);
        if (tmp_bitor_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
        Py_DECREF(tmp_bitor_expr_left_6);
        Py_DECREF(tmp_bitor_expr_right_6);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_4 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscript_4 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_irshift_expr_left_1;
        PyObject *tmp_irshift_expr_right_1;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_irshift_expr_left_1 = var_bits;
        tmp_irshift_expr_right_1 = mod_consts[15];
        tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_1, tmp_irshift_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_48 = tmp_irshift_expr_left_1;
        var_bits = tmp_assign_source_48;

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_1 = var_i;
        tmp_iadd_expr_right_1 = mod_consts[17];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_49 = tmp_iadd_expr_left_1;
        var_i = tmp_assign_source_49;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 122;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_2 = var_i;
        if (par_width == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_sub_expr_left_1 = par_width;
        tmp_sub_expr_right_1 = mod_consts[60];
        tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_50 = tmp_iadd_expr_left_2;
        var_i = tmp_assign_source_50;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 121;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_10 = var_image_offset;
        tmp_add_expr_right_10 = mod_consts[60];
        tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_width == NULL) {
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = par_width;
        tmp_cmp_expr_left_11 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_11 = mod_consts[6];
        tmp_assign_source_51 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_advance_row;
            var_advance_row = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_image_offset;
        if (par_width == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_10 = par_width;
        tmp_mult_expr_right_10 = mod_consts[11];
        tmp_mult_expr_left_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        if (tmp_mult_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_advance_row);
        tmp_mult_expr_right_9 = var_advance_row;
        tmp_add_expr_left_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        Py_DECREF(tmp_mult_expr_left_9);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_11 = mod_consts[60];
        tmp_iadd_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_52 = tmp_iadd_expr_left_3;
        var_image_offset = tmp_assign_source_52;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 107;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_width == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_11 = par_height;
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_out;
        frame_be496a9391f476bcd79145c3af8e8256->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_12, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_be496a9391f476bcd79145c3af8e8256, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be496a9391f476bcd79145c3af8e8256->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be496a9391f476bcd79145c3af8e8256, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be496a9391f476bcd79145c3af8e8256,
        type_description_1,
        par_data,
        par_width,
        par_height,
        var_out,
        var_image_offset,
        var_c0_lo,
        var_c0_hi,
        var_c1_lo,
        var_c1_hi,
        var_b0,
        var_b1,
        var_b2,
        var_b3,
        var_color0,
        var_color1,
        var_bits,
        var_r0,
        var_g0,
        var_r1,
        var_g1,
        var_i,
        var_y,
        var_x,
        var_code,
        var_r,
        var_g,
        var_b,
        var_advance_row
    );


    // Release cached frame if used for exception.
    if (frame_be496a9391f476bcd79145c3af8e8256 == cache_frame_be496a9391f476bcd79145c3af8e8256) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be496a9391f476bcd79145c3af8e8256);
        cache_frame_be496a9391f476bcd79145c3af8e8256 = NULL;
    }

    assertFrameObject(frame_be496a9391f476bcd79145c3af8e8256);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
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


static PyObject *impl_pyglet$image$codecs$s3tc$$$function__6_decode_dxt1_rgba(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_width = python_pars[1];
    PyObject *par_height = python_pars[2];
    PyObject *var_out = NULL;
    PyObject *var_pitch = NULL;
    PyObject *var_image_offset = NULL;
    PyObject *var_c0_lo = NULL;
    PyObject *var_c0_hi = NULL;
    PyObject *var_c1_lo = NULL;
    PyObject *var_c1_hi = NULL;
    PyObject *var_b0 = NULL;
    PyObject *var_b1 = NULL;
    PyObject *var_b2 = NULL;
    PyObject *var_b3 = NULL;
    PyObject *var_color0 = NULL;
    PyObject *var_color1 = NULL;
    PyObject *var_bits = NULL;
    PyObject *var_r0 = NULL;
    PyObject *var_g0 = NULL;
    PyObject *var_r1 = NULL;
    PyObject *var_g1 = NULL;
    PyObject *var_i = NULL;
    PyObject *var_y = NULL;
    PyObject *var_x = NULL;
    PyObject *var_code = NULL;
    PyObject *var_a = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *var_advance_row = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_514dac68179bfab23ba2116780927473;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_514dac68179bfab23ba2116780927473 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_514dac68179bfab23ba2116780927473)) {
        Py_XDECREF(cache_frame_514dac68179bfab23ba2116780927473);

#if _DEBUG_REFCOUNTS
        if (cache_frame_514dac68179bfab23ba2116780927473 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_514dac68179bfab23ba2116780927473 = MAKE_FUNCTION_FRAME(tstate, codeobj_514dac68179bfab23ba2116780927473, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_514dac68179bfab23ba2116780927473->m_type_description == NULL);
    frame_514dac68179bfab23ba2116780927473 = cache_frame_514dac68179bfab23ba2116780927473;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_514dac68179bfab23ba2116780927473);
    assert(Py_REFCNT(frame_514dac68179bfab23ba2116780927473) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_mult_expr_left_3 = par_width;
        CHECK_OBJECT(par_height);
        tmp_mult_expr_right_3 = par_height;
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[60];
        tmp_mult_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 160;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        CHECK_OBJECT(par_width);
        tmp_lshift_expr_left_1 = par_width;
        tmp_lshift_expr_right_1 = mod_consts[15];
        tmp_assign_source_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pitch == NULL);
        var_pitch = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[6];
        assert(var_image_offset == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_image_offset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 165;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooooooooooooo";
                exception_lineno = 165;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 8);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 8);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 8);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 8);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_5, 4, 8);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_5;
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_6, 5, 8);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_6;
            tmp_tuple_unpack_1__element_6 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_7, 6, 8);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_7;
            tmp_tuple_unpack_1__element_7 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_8, 7, 8);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_8;
            tmp_tuple_unpack_1__element_8 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 165;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 165;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_c0_lo;
            var_c0_lo = tmp_assign_source_15;
            Py_INCREF(var_c0_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_c0_hi;
            var_c0_hi = tmp_assign_source_16;
            Py_INCREF(var_c0_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_c1_lo;
            var_c1_lo = tmp_assign_source_17;
            Py_INCREF(var_c1_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_c1_hi;
            var_c1_hi = tmp_assign_source_18;
            Py_INCREF(var_c1_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = var_b0;
            var_b0 = tmp_assign_source_19;
            Py_INCREF(var_b0);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_6;
        {
            PyObject *old = var_b1;
            var_b1 = tmp_assign_source_20;
            Py_INCREF(var_b1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_7;
        {
            PyObject *old = var_b2;
            var_b2 = tmp_assign_source_21;
            Py_INCREF(var_b2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_8;
        {
            PyObject *old = var_b3;
            var_b3 = tmp_assign_source_22;
            Py_INCREF(var_b3);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_lo);
        tmp_args_element_value_2 = var_c0_lo;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 166;
        tmp_bitor_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_hi);
        tmp_args_element_value_3 = var_c0_hi;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 166;
        tmp_lshift_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_lshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_2 = mod_consts[19];
        tmp_bitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        Py_DECREF(tmp_lshift_expr_left_2);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_23 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color0;
            var_color0 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_lshift_expr_left_3;
        PyObject *tmp_lshift_expr_right_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_lo);
        tmp_args_element_value_4 = var_c1_lo;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 167;
        tmp_bitor_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_hi);
        tmp_args_element_value_5 = var_c1_hi;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 167;
        tmp_lshift_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_lshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_3 = mod_consts[19];
        tmp_bitor_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_3, tmp_lshift_expr_right_3);
        Py_DECREF(tmp_lshift_expr_left_3);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_24 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color1;
            var_color1 = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_lshift_expr_left_4;
        PyObject *tmp_lshift_expr_right_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_lshift_expr_left_5;
        PyObject *tmp_lshift_expr_right_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_lshift_expr_left_6;
        PyObject *tmp_lshift_expr_right_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b0);
        tmp_args_element_value_6 = var_b0;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 168;
        tmp_bitor_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_bitor_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b1);
        tmp_args_element_value_7 = var_b1;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 168;
        tmp_lshift_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        if (tmp_lshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_4 = mod_consts[19];
        tmp_bitor_expr_right_5 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_4, tmp_lshift_expr_right_4);
        Py_DECREF(tmp_lshift_expr_left_4);
        if (tmp_bitor_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        Py_DECREF(tmp_bitor_expr_right_5);
        if (tmp_bitor_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b2);
        tmp_args_element_value_8 = var_b2;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 168;
        tmp_lshift_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        if (tmp_lshift_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_5 = mod_consts[44];
        tmp_bitor_expr_right_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_5, tmp_lshift_expr_right_5);
        Py_DECREF(tmp_lshift_expr_left_5);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b3);
        tmp_args_element_value_9 = var_b3;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 168;
        tmp_lshift_expr_left_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_lshift_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_6 = mod_consts[45];
        tmp_bitor_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_6, tmp_lshift_expr_right_6);
        Py_DECREF(tmp_lshift_expr_left_6);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_25 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bits;
            var_bits = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_1 = var_color0;
        tmp_bitand_expr_right_1 = mod_consts[12];
        tmp_assign_source_26 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r0;
            var_r0 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_2 = var_color0;
        tmp_bitand_expr_right_2 = mod_consts[16];
        tmp_rshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_1 = mod_consts[46];
        tmp_assign_source_27 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g0;
            var_g0 = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_3 = var_color0;
        tmp_bitand_expr_right_3 = mod_consts[18];
        tmp_rshift_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_rshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_2 = mod_consts[47];
        tmp_assign_source_28 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        Py_DECREF(tmp_rshift_expr_left_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b0;
            assert(old != NULL);
            var_b0 = tmp_assign_source_28;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_4 = var_color1;
        tmp_bitand_expr_right_4 = mod_consts[12];
        tmp_assign_source_29 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_rshift_expr_left_3;
        PyObject *tmp_rshift_expr_right_3;
        PyObject *tmp_bitand_expr_left_5;
        PyObject *tmp_bitand_expr_right_5;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_5 = var_color1;
        tmp_bitand_expr_right_5 = mod_consts[16];
        tmp_rshift_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
        if (tmp_rshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_3 = mod_consts[46];
        tmp_assign_source_30 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_3, tmp_rshift_expr_right_3);
        Py_DECREF(tmp_rshift_expr_left_3);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g1;
            var_g1 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_rshift_expr_left_4;
        PyObject *tmp_rshift_expr_right_4;
        PyObject *tmp_bitand_expr_left_6;
        PyObject *tmp_bitand_expr_right_6;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_6 = var_color1;
        tmp_bitand_expr_right_6 = mod_consts[18];
        tmp_rshift_expr_left_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
        if (tmp_rshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_4 = mod_consts[47];
        tmp_assign_source_31 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_4, tmp_rshift_expr_right_4);
        Py_DECREF(tmp_rshift_expr_left_4);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b1;
            assert(old != NULL);
            var_b1 = tmp_assign_source_31;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_32 = var_image_offset;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_32;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 179;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[50]);

        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_33 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_34 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooooo";
                exception_lineno = 179;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_35 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_35;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 180;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[50]);

        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_36 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_37 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooooo";
                exception_lineno = 180;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_38 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_38;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_bitand_expr_left_7;
        PyObject *tmp_bitand_expr_right_7;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_bitand_expr_left_7 = var_bits;
        tmp_bitand_expr_right_7 = mod_consts[11];
        tmp_assign_source_39 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_code;
            var_code = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[63];
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_40;
            Py_INCREF(var_a);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_1 = var_code;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_tuple_element_1;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = var_r0;
        tmp_iter_arg_5 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 0, tmp_tuple_element_1);
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_g0;
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 1, tmp_tuple_element_1);
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_b0;
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_5);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_41 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        assert(!(tmp_assign_source_41 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT(tstate, tmp_unpack_9, 0, 3);
        if (tmp_assign_source_42 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT(tstate, tmp_unpack_10, 1, 3);
        if (tmp_assign_source_43 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT(tstate, tmp_unpack_11, 2, 3);
        if (tmp_assign_source_44 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_44;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 185;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[64];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_45 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_45;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_46 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_46;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_47 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_47;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_2 = var_code;
        tmp_cmp_expr_right_2 = mod_consts[17];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_tuple_element_2;
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_tuple_element_2 = var_r1;
        tmp_iter_arg_6 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 0, tmp_tuple_element_2);
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_g1;
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 1, tmp_tuple_element_2);
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_b1;
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_6);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_48 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        assert(!(tmp_assign_source_48 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT(tstate, tmp_unpack_12, 0, 3);
        if (tmp_assign_source_49 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 187;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT(tstate, tmp_unpack_13, 1, 3);
        if (tmp_assign_source_50 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 187;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tstate, tmp_unpack_14, 2, 3);
        if (tmp_assign_source_51 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 187;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_51;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 187;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[64];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 187;
            goto try_except_handler_10;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_52 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_52;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_53 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_53;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_54 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_54;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_3 = var_code;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_4 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_4 = var_color1;
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[6];
        {
            PyObject *old = tmp_assign_unpack_1__assign_source;
            tmp_assign_unpack_1__assign_source = tmp_assign_source_55;
            Py_INCREF(tmp_assign_unpack_1__assign_source);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_56 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_56;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_57 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_57;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_58 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_58;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_59 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_a;
            assert(old != NULL);
            var_a = tmp_assign_source_59;
            Py_INCREF(var_a);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_5 = var_code;
        tmp_cmp_expr_right_5 = mod_consts[15];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_6 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_6 = var_color1;
        tmp_and_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_mult_expr_left_4 = mod_consts[15];
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_4 = var_r0;
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_r1 == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_1 = var_r1;
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_1 = mod_consts[11];
        tmp_assign_source_60 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_mult_expr_left_5 = mod_consts[15];
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_5 = var_g0;
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_g1 == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_2 = var_g1;
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_2 = mod_consts[11];
        tmp_assign_source_61 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_mult_expr_left_6 = mod_consts[15];
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_6 = var_b0;
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_b1 == NULL) {
            Py_DECREF(tmp_add_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_3 = var_b1;
        tmp_floordiv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_floordiv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_3 = mod_consts[11];
        tmp_assign_source_62 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        Py_DECREF(tmp_floordiv_expr_left_3);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_7 = var_code;
        tmp_cmp_expr_right_7 = mod_consts[11];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_8 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_8 = var_color1;
        tmp_and_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_5 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_floordiv_expr_left_4;
        PyObject *tmp_floordiv_expr_right_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_4 = var_r0;
        tmp_mult_expr_left_7 = mod_consts[15];
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_7 = var_r1;
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_floordiv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_4 = mod_consts[11];
        tmp_assign_source_63 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
        Py_DECREF(tmp_floordiv_expr_left_4);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_floordiv_expr_left_5;
        PyObject *tmp_floordiv_expr_right_5;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_5 = var_g0;
        tmp_mult_expr_left_8 = mod_consts[15];
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_8 = var_g1;
        tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_floordiv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_5 = mod_consts[11];
        tmp_assign_source_64 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_5, tmp_floordiv_expr_right_5);
        Py_DECREF(tmp_floordiv_expr_left_5);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_floordiv_expr_left_6;
        PyObject *tmp_floordiv_expr_right_6;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_6 = var_b0;
        tmp_mult_expr_left_9 = mod_consts[15];
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_9 = var_b1;
        tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_floordiv_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_6 = mod_consts[11];
        tmp_assign_source_65 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_6, tmp_floordiv_expr_right_6);
        Py_DECREF(tmp_floordiv_expr_left_6);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_9 = var_code;
        tmp_cmp_expr_right_9 = mod_consts[15];
        tmp_and_left_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_and_left_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_4);

            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        Py_DECREF(tmp_and_left_value_4);
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_10 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_10 = var_color1;
        tmp_and_right_value_4 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_right_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_operand_value_1 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_operand_value_1 = tmp_and_left_value_4;
        and_end_4:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 200;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_floordiv_expr_left_7;
        PyObject *tmp_floordiv_expr_right_7;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_7 = var_r0;
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_7 = var_r1;
        tmp_floordiv_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_floordiv_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_7 = mod_consts[15];
        tmp_assign_source_66 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_7, tmp_floordiv_expr_right_7);
        Py_DECREF(tmp_floordiv_expr_left_7);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_floordiv_expr_left_8;
        PyObject *tmp_floordiv_expr_right_8;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_8 = var_g0;
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_8 = var_g1;
        tmp_floordiv_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_floordiv_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_8 = mod_consts[15];
        tmp_assign_source_67 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_8, tmp_floordiv_expr_right_8);
        Py_DECREF(tmp_floordiv_expr_left_8);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_floordiv_expr_left_9;
        PyObject *tmp_floordiv_expr_right_9;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_9 = var_b0;
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_9 = var_b1;
        tmp_floordiv_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_floordiv_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_9 = mod_consts[15];
        tmp_assign_source_68 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_9, tmp_floordiv_expr_right_9);
        Py_DECREF(tmp_floordiv_expr_left_9);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_lshift_expr_left_7;
        PyObject *tmp_lshift_expr_right_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_b);
        tmp_lshift_expr_left_7 = var_b;
        tmp_lshift_expr_right_7 = mod_consts[11];
        tmp_ass_subvalue_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_7, tmp_lshift_expr_right_7);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_1 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_lshift_expr_left_8;
        PyObject *tmp_lshift_expr_right_8;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        CHECK_OBJECT(var_g);
        tmp_lshift_expr_left_8 = var_g;
        tmp_lshift_expr_right_8 = mod_consts[15];
        tmp_ass_subvalue_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_8, tmp_lshift_expr_right_8);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_2 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_10 = var_i;
        tmp_add_expr_right_10 = mod_consts[17];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_lshift_expr_left_9;
        PyObject *tmp_lshift_expr_right_9;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        CHECK_OBJECT(var_r);
        tmp_lshift_expr_left_9 = var_r;
        tmp_lshift_expr_right_9 = mod_consts[11];
        tmp_ass_subvalue_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_9, tmp_lshift_expr_right_9);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_3 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_11 = var_i;
        tmp_add_expr_right_11 = mod_consts[15];
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_ass_subscript_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_lshift_expr_left_10;
        PyObject *tmp_lshift_expr_right_10;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        CHECK_OBJECT(var_a);
        tmp_lshift_expr_left_10 = var_a;
        tmp_lshift_expr_right_10 = mod_consts[60];
        tmp_ass_subvalue_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_OBJECT(tmp_lshift_expr_left_10, tmp_lshift_expr_right_10);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_4 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_12 = var_i;
        tmp_add_expr_right_12 = mod_consts[11];
        tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_ass_subscript_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_irshift_expr_left_1;
        PyObject *tmp_irshift_expr_right_1;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_irshift_expr_left_1 = var_bits;
        tmp_irshift_expr_right_1 = mod_consts[15];
        tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_1, tmp_irshift_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_69 = tmp_irshift_expr_left_1;
        var_bits = tmp_assign_source_69;

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_1 = var_i;
        tmp_iadd_expr_right_1 = mod_consts[60];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_70 = tmp_iadd_expr_left_1;
        var_i = tmp_assign_source_70;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 180;
        type_description_1 = "oooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_5;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_2 = var_i;
        if (var_pitch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_sub_expr_left_1 = var_pitch;
        tmp_sub_expr_right_1 = mod_consts[44];
        tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_71 = tmp_iadd_expr_left_2;
        var_i = tmp_assign_source_71;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 179;
        type_description_1 = "oooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_13 = var_image_offset;
        tmp_add_expr_right_13 = mod_consts[44];
        tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_13, tmp_add_expr_right_13);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_pitch == NULL) {
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = var_pitch;
        tmp_cmp_expr_left_11 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_11 = mod_consts[6];
        tmp_assign_source_72 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_advance_row;
            var_advance_row = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_image_offset;
        if (var_pitch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_11 = var_pitch;
        tmp_mult_expr_right_11 = mod_consts[11];
        tmp_mult_expr_left_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        if (tmp_mult_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_advance_row);
        tmp_mult_expr_right_10 = var_advance_row;
        tmp_add_expr_left_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        Py_DECREF(tmp_mult_expr_left_10);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_14 = mod_consts[44];
        tmp_iadd_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_73 = tmp_iadd_expr_left_3;
        var_image_offset = tmp_assign_source_73;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 165;
        type_description_1 = "oooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_args_element_value_10 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_11 = par_height;
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_out;
        frame_514dac68179bfab23ba2116780927473->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_12, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_514dac68179bfab23ba2116780927473, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_514dac68179bfab23ba2116780927473->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_514dac68179bfab23ba2116780927473, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_514dac68179bfab23ba2116780927473,
        type_description_1,
        par_data,
        par_width,
        par_height,
        var_out,
        var_pitch,
        var_image_offset,
        var_c0_lo,
        var_c0_hi,
        var_c1_lo,
        var_c1_hi,
        var_b0,
        var_b1,
        var_b2,
        var_b3,
        var_color0,
        var_color1,
        var_bits,
        var_r0,
        var_g0,
        var_r1,
        var_g1,
        var_i,
        var_y,
        var_x,
        var_code,
        var_a,
        var_r,
        var_g,
        var_b,
        var_advance_row
    );


    // Release cached frame if used for exception.
    if (frame_514dac68179bfab23ba2116780927473 == cache_frame_514dac68179bfab23ba2116780927473) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_514dac68179bfab23ba2116780927473);
        cache_frame_514dac68179bfab23ba2116780927473 = NULL;
    }

    assertFrameObject(frame_514dac68179bfab23ba2116780927473);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
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


static PyObject *impl_pyglet$image$codecs$s3tc$$$function__7_decode_dxt3(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_width = python_pars[1];
    PyObject *par_height = python_pars[2];
    PyObject *var_out = NULL;
    PyObject *var_pitch = NULL;
    PyObject *var_image_offset = NULL;
    PyObject *var_a0 = NULL;
    PyObject *var_a1 = NULL;
    PyObject *var_a2 = NULL;
    PyObject *var_a3 = NULL;
    PyObject *var_a4 = NULL;
    PyObject *var_a5 = NULL;
    PyObject *var_a6 = NULL;
    PyObject *var_a7 = NULL;
    PyObject *var_c0_lo = NULL;
    PyObject *var_c0_hi = NULL;
    PyObject *var_c1_lo = NULL;
    PyObject *var_c1_hi = NULL;
    PyObject *var_b0 = NULL;
    PyObject *var_b1 = NULL;
    PyObject *var_b2 = NULL;
    PyObject *var_b3 = NULL;
    PyObject *var_color0 = NULL;
    PyObject *var_color1 = NULL;
    PyObject *var_bits = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_r0 = NULL;
    PyObject *var_g0 = NULL;
    PyObject *var_r1 = NULL;
    PyObject *var_g1 = NULL;
    PyObject *var_i = NULL;
    PyObject *var_y = NULL;
    PyObject *var_x = NULL;
    PyObject *var_code = NULL;
    PyObject *var_a = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *var_advance_row = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_11 = NULL;
    PyObject *tmp_tuple_unpack_1__element_12 = NULL;
    PyObject *tmp_tuple_unpack_1__element_13 = NULL;
    PyObject *tmp_tuple_unpack_1__element_14 = NULL;
    PyObject *tmp_tuple_unpack_1__element_15 = NULL;
    PyObject *tmp_tuple_unpack_1__element_16 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_30e8c2ccc68a86baff3e38baecf154ac;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_30e8c2ccc68a86baff3e38baecf154ac = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_30e8c2ccc68a86baff3e38baecf154ac)) {
        Py_XDECREF(cache_frame_30e8c2ccc68a86baff3e38baecf154ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30e8c2ccc68a86baff3e38baecf154ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30e8c2ccc68a86baff3e38baecf154ac = MAKE_FUNCTION_FRAME(tstate, codeobj_30e8c2ccc68a86baff3e38baecf154ac, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30e8c2ccc68a86baff3e38baecf154ac->m_type_description == NULL);
    frame_30e8c2ccc68a86baff3e38baecf154ac = cache_frame_30e8c2ccc68a86baff3e38baecf154ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_30e8c2ccc68a86baff3e38baecf154ac);
    assert(Py_REFCNT(frame_30e8c2ccc68a86baff3e38baecf154ac) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_mult_expr_left_3 = par_width;
        CHECK_OBJECT(par_height);
        tmp_mult_expr_right_3 = par_height;
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[60];
        tmp_mult_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 223;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        CHECK_OBJECT(par_width);
        tmp_lshift_expr_left_1 = par_width;
        tmp_lshift_expr_right_1 = mod_consts[15];
        tmp_assign_source_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pitch == NULL);
        var_pitch = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[6];
        assert(var_image_offset == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_image_offset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 230;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 228;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 16);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 16);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 16);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 16);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_5, 4, 16);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_5;
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_6, 5, 16);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_6;
            tmp_tuple_unpack_1__element_6 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_7, 6, 16);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_7;
            tmp_tuple_unpack_1__element_7 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_8, 7, 16);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_8;
            tmp_tuple_unpack_1__element_8 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, tmp_unpack_9, 8, 16);
        if (tmp_assign_source_15 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_9;
            tmp_tuple_unpack_1__element_9 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_10, 9, 16);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_10;
            tmp_tuple_unpack_1__element_10 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_11, 10, 16);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_11;
            tmp_tuple_unpack_1__element_11 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_12, 11, 16);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_12;
            tmp_tuple_unpack_1__element_12 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_13, 12, 16);
        if (tmp_assign_source_19 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_13;
            tmp_tuple_unpack_1__element_13 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_14, 13, 16);
        if (tmp_assign_source_20 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_14;
            tmp_tuple_unpack_1__element_14 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tstate, tmp_unpack_15, 14, 16);
        if (tmp_assign_source_21 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_15;
            tmp_tuple_unpack_1__element_15 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_16, 15, 16);
        if (tmp_assign_source_22 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_16;
            tmp_tuple_unpack_1__element_16 = tmp_assign_source_22;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 228;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 228;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_13);
    tmp_tuple_unpack_1__element_13 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_14);
    tmp_tuple_unpack_1__element_14 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_15);
    tmp_tuple_unpack_1__element_15 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_16);
    tmp_tuple_unpack_1__element_16 = NULL;
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
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_a0;
            var_a0 = tmp_assign_source_23;
            Py_INCREF(var_a0);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_a1;
            var_a1 = tmp_assign_source_24;
            Py_INCREF(var_a1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_a2;
            var_a2 = tmp_assign_source_25;
            Py_INCREF(var_a2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_a3;
            var_a3 = tmp_assign_source_26;
            Py_INCREF(var_a3);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = var_a4;
            var_a4 = tmp_assign_source_27;
            Py_INCREF(var_a4);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_28 = tmp_tuple_unpack_1__element_6;
        {
            PyObject *old = var_a5;
            var_a5 = tmp_assign_source_28;
            Py_INCREF(var_a5);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_29 = tmp_tuple_unpack_1__element_7;
        {
            PyObject *old = var_a6;
            var_a6 = tmp_assign_source_29;
            Py_INCREF(var_a6);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_30 = tmp_tuple_unpack_1__element_8;
        {
            PyObject *old = var_a7;
            var_a7 = tmp_assign_source_30;
            Py_INCREF(var_a7);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_31 = tmp_tuple_unpack_1__element_9;
        {
            PyObject *old = var_c0_lo;
            var_c0_lo = tmp_assign_source_31;
            Py_INCREF(var_c0_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_32 = tmp_tuple_unpack_1__element_10;
        {
            PyObject *old = var_c0_hi;
            var_c0_hi = tmp_assign_source_32;
            Py_INCREF(var_c0_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_11);
        tmp_assign_source_33 = tmp_tuple_unpack_1__element_11;
        {
            PyObject *old = var_c1_lo;
            var_c1_lo = tmp_assign_source_33;
            Py_INCREF(var_c1_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;

    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_12);
        tmp_assign_source_34 = tmp_tuple_unpack_1__element_12;
        {
            PyObject *old = var_c1_hi;
            var_c1_hi = tmp_assign_source_34;
            Py_INCREF(var_c1_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_13);
        tmp_assign_source_35 = tmp_tuple_unpack_1__element_13;
        {
            PyObject *old = var_b0;
            var_b0 = tmp_assign_source_35;
            Py_INCREF(var_b0);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_13);
    tmp_tuple_unpack_1__element_13 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_14);
        tmp_assign_source_36 = tmp_tuple_unpack_1__element_14;
        {
            PyObject *old = var_b1;
            var_b1 = tmp_assign_source_36;
            Py_INCREF(var_b1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_14);
    tmp_tuple_unpack_1__element_14 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_15);
        tmp_assign_source_37 = tmp_tuple_unpack_1__element_15;
        {
            PyObject *old = var_b2;
            var_b2 = tmp_assign_source_37;
            Py_INCREF(var_b2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_15);
    tmp_tuple_unpack_1__element_15 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_16);
        tmp_assign_source_38 = tmp_tuple_unpack_1__element_16;
        {
            PyObject *old = var_b3;
            var_b3 = tmp_assign_source_38;
            Py_INCREF(var_b3);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_16);
    tmp_tuple_unpack_1__element_16 = NULL;

    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_lo);
        tmp_args_element_value_2 = var_c0_lo;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 231;
        tmp_bitor_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_hi);
        tmp_args_element_value_3 = var_c0_hi;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 231;
        tmp_lshift_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_lshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_2 = mod_consts[19];
        tmp_bitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        Py_DECREF(tmp_lshift_expr_left_2);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_39 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color0;
            var_color0 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_lshift_expr_left_3;
        PyObject *tmp_lshift_expr_right_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_lo);
        tmp_args_element_value_4 = var_c1_lo;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 232;
        tmp_bitor_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_hi);
        tmp_args_element_value_5 = var_c1_hi;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 232;
        tmp_lshift_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_lshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_3 = mod_consts[19];
        tmp_bitor_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_3, tmp_lshift_expr_right_3);
        Py_DECREF(tmp_lshift_expr_left_3);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_40 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color1;
            var_color1 = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_lshift_expr_left_4;
        PyObject *tmp_lshift_expr_right_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_lshift_expr_left_5;
        PyObject *tmp_lshift_expr_right_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_lshift_expr_left_6;
        PyObject *tmp_lshift_expr_right_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b0);
        tmp_args_element_value_6 = var_b0;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 233;
        tmp_bitor_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_bitor_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b1);
        tmp_args_element_value_7 = var_b1;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 233;
        tmp_lshift_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        if (tmp_lshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_4 = mod_consts[19];
        tmp_bitor_expr_right_5 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_4, tmp_lshift_expr_right_4);
        Py_DECREF(tmp_lshift_expr_left_4);
        if (tmp_bitor_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        Py_DECREF(tmp_bitor_expr_right_5);
        if (tmp_bitor_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b2);
        tmp_args_element_value_8 = var_b2;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 233;
        tmp_lshift_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        if (tmp_lshift_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_5 = mod_consts[44];
        tmp_bitor_expr_right_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_5, tmp_lshift_expr_right_5);
        Py_DECREF(tmp_lshift_expr_left_5);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b3);
        tmp_args_element_value_9 = var_b3;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 233;
        tmp_lshift_expr_left_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_lshift_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_6 = mod_consts[45];
        tmp_bitor_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_6, tmp_lshift_expr_right_6);
        Py_DECREF(tmp_lshift_expr_left_6);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_41 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bits;
            var_bits = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_bitor_expr_left_6;
        PyObject *tmp_bitor_expr_right_6;
        PyObject *tmp_bitor_expr_left_7;
        PyObject *tmp_bitor_expr_right_7;
        PyObject *tmp_bitor_expr_left_8;
        PyObject *tmp_bitor_expr_right_8;
        PyObject *tmp_bitor_expr_left_9;
        PyObject *tmp_bitor_expr_right_9;
        PyObject *tmp_bitor_expr_left_10;
        PyObject *tmp_bitor_expr_right_10;
        PyObject *tmp_bitor_expr_left_11;
        PyObject *tmp_bitor_expr_right_11;
        PyObject *tmp_bitor_expr_left_12;
        PyObject *tmp_bitor_expr_right_12;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_lshift_expr_left_7;
        PyObject *tmp_lshift_expr_right_7;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_lshift_expr_left_8;
        PyObject *tmp_lshift_expr_right_8;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_lshift_expr_left_9;
        PyObject *tmp_lshift_expr_right_9;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_lshift_expr_left_10;
        PyObject *tmp_lshift_expr_right_10;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_lshift_expr_left_11;
        PyObject *tmp_lshift_expr_right_11;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_lshift_expr_left_12;
        PyObject *tmp_lshift_expr_right_12;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_lshift_expr_left_13;
        PyObject *tmp_lshift_expr_right_13;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a0);
        tmp_args_element_value_10 = var_a0;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 234;
        tmp_bitor_expr_left_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_bitor_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_12);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a1);
        tmp_args_element_value_11 = var_a1;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 234;
        tmp_lshift_expr_left_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
        if (tmp_lshift_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_12);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_7 = mod_consts[19];
        tmp_bitor_expr_right_12 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_7, tmp_lshift_expr_right_7);
        Py_DECREF(tmp_lshift_expr_left_7);
        if (tmp_bitor_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_12);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_11 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_12, tmp_bitor_expr_right_12);
        Py_DECREF(tmp_bitor_expr_left_12);
        Py_DECREF(tmp_bitor_expr_right_12);
        if (tmp_bitor_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_11);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a2);
        tmp_args_element_value_12 = var_a2;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 234;
        tmp_lshift_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
        if (tmp_lshift_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_11);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_8 = mod_consts[44];
        tmp_bitor_expr_right_11 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_8, tmp_lshift_expr_right_8);
        Py_DECREF(tmp_lshift_expr_left_8);
        if (tmp_bitor_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_11);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_10 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_11, tmp_bitor_expr_right_11);
        Py_DECREF(tmp_bitor_expr_left_11);
        Py_DECREF(tmp_bitor_expr_right_11);
        if (tmp_bitor_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a3);
        tmp_args_element_value_13 = var_a3;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 234;
        tmp_lshift_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_13);
        if (tmp_lshift_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_9 = mod_consts[45];
        tmp_bitor_expr_right_10 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_9, tmp_lshift_expr_right_9);
        Py_DECREF(tmp_lshift_expr_left_9);
        if (tmp_bitor_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_9 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_10, tmp_bitor_expr_right_10);
        Py_DECREF(tmp_bitor_expr_left_10);
        Py_DECREF(tmp_bitor_expr_right_10);
        if (tmp_bitor_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a4);
        tmp_args_element_value_14 = var_a4;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 235;
        tmp_lshift_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
        if (tmp_lshift_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_10 = mod_consts[69];
        tmp_bitor_expr_right_9 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_10, tmp_lshift_expr_right_10);
        Py_DECREF(tmp_lshift_expr_left_10);
        if (tmp_bitor_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_9, tmp_bitor_expr_right_9);
        Py_DECREF(tmp_bitor_expr_left_9);
        Py_DECREF(tmp_bitor_expr_right_9);
        if (tmp_bitor_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a5);
        tmp_args_element_value_15 = var_a5;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 235;
        tmp_lshift_expr_left_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_15);
        if (tmp_lshift_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_11 = mod_consts[70];
        tmp_bitor_expr_right_8 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_11, tmp_lshift_expr_right_11);
        Py_DECREF(tmp_lshift_expr_left_11);
        if (tmp_bitor_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_8, tmp_bitor_expr_right_8);
        Py_DECREF(tmp_bitor_expr_left_8);
        Py_DECREF(tmp_bitor_expr_right_8);
        if (tmp_bitor_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a6);
        tmp_args_element_value_16 = var_a6;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 235;
        tmp_lshift_expr_left_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
        if (tmp_lshift_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_12 = mod_consts[71];
        tmp_bitor_expr_right_7 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_12, tmp_lshift_expr_right_12);
        Py_DECREF(tmp_lshift_expr_left_12);
        if (tmp_bitor_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
        Py_DECREF(tmp_bitor_expr_left_7);
        Py_DECREF(tmp_bitor_expr_right_7);
        if (tmp_bitor_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_a7);
        tmp_args_element_value_17 = var_a7;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 235;
        tmp_lshift_expr_left_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_17);
        if (tmp_lshift_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_13 = mod_consts[72];
        tmp_bitor_expr_right_6 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_13, tmp_lshift_expr_right_13);
        Py_DECREF(tmp_lshift_expr_left_13);
        if (tmp_bitor_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_42 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
        Py_DECREF(tmp_bitor_expr_left_6);
        Py_DECREF(tmp_bitor_expr_right_6);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_1 = var_color0;
        tmp_bitand_expr_right_1 = mod_consts[12];
        tmp_assign_source_43 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r0;
            var_r0 = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_2 = var_color0;
        tmp_bitand_expr_right_2 = mod_consts[16];
        tmp_rshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_1 = mod_consts[46];
        tmp_assign_source_44 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g0;
            var_g0 = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_3 = var_color0;
        tmp_bitand_expr_right_3 = mod_consts[18];
        tmp_rshift_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_rshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_2 = mod_consts[47];
        tmp_assign_source_45 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        Py_DECREF(tmp_rshift_expr_left_2);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b0;
            assert(old != NULL);
            var_b0 = tmp_assign_source_45;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_4 = var_color1;
        tmp_bitand_expr_right_4 = mod_consts[12];
        tmp_assign_source_46 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_rshift_expr_left_3;
        PyObject *tmp_rshift_expr_right_3;
        PyObject *tmp_bitand_expr_left_5;
        PyObject *tmp_bitand_expr_right_5;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_5 = var_color1;
        tmp_bitand_expr_right_5 = mod_consts[16];
        tmp_rshift_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
        if (tmp_rshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_3 = mod_consts[46];
        tmp_assign_source_47 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_3, tmp_rshift_expr_right_3);
        Py_DECREF(tmp_rshift_expr_left_3);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g1;
            var_g1 = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_rshift_expr_left_4;
        PyObject *tmp_rshift_expr_right_4;
        PyObject *tmp_bitand_expr_left_6;
        PyObject *tmp_bitand_expr_right_6;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_6 = var_color1;
        tmp_bitand_expr_right_6 = mod_consts[18];
        tmp_rshift_expr_left_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
        if (tmp_rshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_4 = mod_consts[47];
        tmp_assign_source_48 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_4, tmp_rshift_expr_right_4);
        Py_DECREF(tmp_rshift_expr_left_4);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b1;
            assert(old != NULL);
            var_b1 = tmp_assign_source_48;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_49 = var_image_offset;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_49;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 246;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[50]);

        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_50 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_51 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 246;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_52 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_52;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 247;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[50]);

        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_53 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_54 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_54 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 247;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_55 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_55;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_bitand_expr_left_7;
        PyObject *tmp_bitand_expr_right_7;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_bitand_expr_left_7 = var_bits;
        tmp_bitand_expr_right_7 = mod_consts[11];
        tmp_assign_source_56 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_code;
            var_code = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_bitand_expr_left_8;
        PyObject *tmp_bitand_expr_right_8;
        if (var_alpha == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_bitand_expr_left_8 = var_alpha;
        tmp_bitand_expr_right_8 = mod_consts[74];
        tmp_assign_source_57 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_8, tmp_bitand_expr_right_8);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_1 = var_code;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_tuple_element_1;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = var_r0;
        tmp_iter_arg_5 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 0, tmp_tuple_element_1);
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_g0;
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 1, tmp_tuple_element_1);
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_b0;
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_5);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_58 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        assert(!(tmp_assign_source_58 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_59 = UNPACK_NEXT(tstate, tmp_unpack_17, 0, 3);
        if (tmp_assign_source_59 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 252;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_60 = UNPACK_NEXT(tstate, tmp_unpack_18, 1, 3);
        if (tmp_assign_source_60 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 252;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT(tstate, tmp_unpack_19, 2, 3);
        if (tmp_assign_source_61 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 252;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_61;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 252;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[64];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 252;
            goto try_except_handler_8;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_62 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_62;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_63 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_63;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_64 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_64;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_2 = var_code;
        tmp_cmp_expr_right_2 = mod_consts[17];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_tuple_element_2;
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_tuple_element_2 = var_r1;
        tmp_iter_arg_6 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 0, tmp_tuple_element_2);
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_g1;
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 1, tmp_tuple_element_2);
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_b1;
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_6);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_65 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        assert(!(tmp_assign_source_65 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_66 = UNPACK_NEXT(tstate, tmp_unpack_20, 0, 3);
        if (tmp_assign_source_66 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_67 = UNPACK_NEXT(tstate, tmp_unpack_21, 1, 3);
        if (tmp_assign_source_67 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tstate, tmp_unpack_22, 2, 3);
        if (tmp_assign_source_68 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_68;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 254;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[64];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_10;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_69 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_69;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_70 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_70;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_71 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_71;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_3 = var_code;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_4 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_4 = var_color1;
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[6];
        {
            PyObject *old = tmp_assign_unpack_1__assign_source;
            tmp_assign_unpack_1__assign_source = tmp_assign_source_72;
            Py_INCREF(tmp_assign_unpack_1__assign_source);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_73 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_73;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_74 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_74;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_75 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_75;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_5 = var_code;
        tmp_cmp_expr_right_5 = mod_consts[15];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_6 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_6 = var_color1;
        tmp_and_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_mult_expr_left_4 = mod_consts[15];
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_4 = var_r0;
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_r1 == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_1 = var_r1;
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_1 = mod_consts[11];
        tmp_assign_source_76 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_mult_expr_left_5 = mod_consts[15];
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_5 = var_g0;
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_g1 == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_2 = var_g1;
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_2 = mod_consts[11];
        tmp_assign_source_77 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_mult_expr_left_6 = mod_consts[15];
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_6 = var_b0;
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_b1 == NULL) {
            Py_DECREF(tmp_add_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_3 = var_b1;
        tmp_floordiv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_floordiv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_3 = mod_consts[11];
        tmp_assign_source_78 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        Py_DECREF(tmp_floordiv_expr_left_3);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_7 = var_code;
        tmp_cmp_expr_right_7 = mod_consts[11];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_8 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_8 = var_color1;
        tmp_and_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_5 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_floordiv_expr_left_4;
        PyObject *tmp_floordiv_expr_right_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_4 = var_r0;
        tmp_mult_expr_left_7 = mod_consts[15];
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_7 = var_r1;
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_floordiv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_4 = mod_consts[11];
        tmp_assign_source_79 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
        Py_DECREF(tmp_floordiv_expr_left_4);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_floordiv_expr_left_5;
        PyObject *tmp_floordiv_expr_right_5;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_5 = var_g0;
        tmp_mult_expr_left_8 = mod_consts[15];
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_8 = var_g1;
        tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_floordiv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_5 = mod_consts[11];
        tmp_assign_source_80 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_5, tmp_floordiv_expr_right_5);
        Py_DECREF(tmp_floordiv_expr_left_5);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_floordiv_expr_left_6;
        PyObject *tmp_floordiv_expr_right_6;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_6 = var_b0;
        tmp_mult_expr_left_9 = mod_consts[15];
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_9 = var_b1;
        tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_floordiv_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_6 = mod_consts[11];
        tmp_assign_source_81 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_6, tmp_floordiv_expr_right_6);
        Py_DECREF(tmp_floordiv_expr_left_6);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_9 = var_code;
        tmp_cmp_expr_right_9 = mod_consts[15];
        tmp_and_left_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_and_left_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_4);

            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        Py_DECREF(tmp_and_left_value_4);
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_10 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_10 = var_color1;
        tmp_and_right_value_4 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_right_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_operand_value_1 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_operand_value_1 = tmp_and_left_value_4;
        and_end_4:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 267;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_floordiv_expr_left_7;
        PyObject *tmp_floordiv_expr_right_7;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_7 = var_r0;
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_7 = var_r1;
        tmp_floordiv_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_floordiv_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_7 = mod_consts[15];
        tmp_assign_source_82 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_7, tmp_floordiv_expr_right_7);
        Py_DECREF(tmp_floordiv_expr_left_7);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_floordiv_expr_left_8;
        PyObject *tmp_floordiv_expr_right_8;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_8 = var_g0;
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_8 = var_g1;
        tmp_floordiv_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_floordiv_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_8 = mod_consts[15];
        tmp_assign_source_83 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_8, tmp_floordiv_expr_right_8);
        Py_DECREF(tmp_floordiv_expr_left_8);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_floordiv_expr_left_9;
        PyObject *tmp_floordiv_expr_right_9;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_9 = var_b0;
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_9 = var_b1;
        tmp_floordiv_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_floordiv_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_9 = mod_consts[15];
        tmp_assign_source_84 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_9, tmp_floordiv_expr_right_9);
        Py_DECREF(tmp_floordiv_expr_left_9);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_lshift_expr_left_14;
        PyObject *tmp_lshift_expr_right_14;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_b);
        tmp_lshift_expr_left_14 = var_b;
        tmp_lshift_expr_right_14 = mod_consts[11];
        tmp_ass_subvalue_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_14, tmp_lshift_expr_right_14);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_1 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_lshift_expr_left_15;
        PyObject *tmp_lshift_expr_right_15;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        CHECK_OBJECT(var_g);
        tmp_lshift_expr_left_15 = var_g;
        tmp_lshift_expr_right_15 = mod_consts[15];
        tmp_ass_subvalue_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_15, tmp_lshift_expr_right_15);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_2 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_10 = var_i;
        tmp_add_expr_right_10 = mod_consts[17];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_lshift_expr_left_16;
        PyObject *tmp_lshift_expr_right_16;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        CHECK_OBJECT(var_r);
        tmp_lshift_expr_left_16 = var_r;
        tmp_lshift_expr_right_16 = mod_consts[11];
        tmp_ass_subvalue_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_16, tmp_lshift_expr_right_16);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_3 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_11 = var_i;
        tmp_add_expr_right_11 = mod_consts[15];
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_ass_subscript_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_lshift_expr_left_17;
        PyObject *tmp_lshift_expr_right_17;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        CHECK_OBJECT(var_a);
        tmp_lshift_expr_left_17 = var_a;
        tmp_lshift_expr_right_17 = mod_consts[60];
        tmp_ass_subvalue_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_17, tmp_lshift_expr_right_17);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_4 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_12 = var_i;
        tmp_add_expr_right_12 = mod_consts[11];
        tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_ass_subscript_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_irshift_expr_left_1;
        PyObject *tmp_irshift_expr_right_1;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_irshift_expr_left_1 = var_bits;
        tmp_irshift_expr_right_1 = mod_consts[15];
        tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_1, tmp_irshift_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_85 = tmp_irshift_expr_left_1;
        var_bits = tmp_assign_source_85;

    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_irshift_expr_left_2;
        PyObject *tmp_irshift_expr_right_2;
        if (var_alpha == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_irshift_expr_left_2 = var_alpha;
        tmp_irshift_expr_right_2 = mod_consts[60];
        tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_2, tmp_irshift_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_86 = tmp_irshift_expr_left_2;
        var_alpha = tmp_assign_source_86;

    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_1 = var_i;
        tmp_iadd_expr_right_1 = mod_consts[60];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_87 = tmp_iadd_expr_left_1;
        var_i = tmp_assign_source_87;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 247;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_5;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_2 = var_i;
        if (var_pitch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_sub_expr_left_1 = var_pitch;
        tmp_sub_expr_right_1 = mod_consts[44];
        tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_88 = tmp_iadd_expr_left_2;
        var_i = tmp_assign_source_88;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 246;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_13 = var_image_offset;
        tmp_add_expr_right_13 = mod_consts[44];
        tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_13, tmp_add_expr_right_13);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_pitch == NULL) {
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = var_pitch;
        tmp_cmp_expr_left_11 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_11 = mod_consts[6];
        tmp_assign_source_89 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_advance_row;
            var_advance_row = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_image_offset;
        if (var_pitch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_11 = var_pitch;
        tmp_mult_expr_right_11 = mod_consts[11];
        tmp_mult_expr_left_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        if (tmp_mult_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_advance_row);
        tmp_mult_expr_right_10 = var_advance_row;
        tmp_add_expr_left_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        Py_DECREF(tmp_mult_expr_left_10);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_14 = mod_consts[44];
        tmp_iadd_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_90 = tmp_iadd_expr_left_3;
        var_image_offset = tmp_assign_source_90;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 228;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_args_element_value_18 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_19 = par_height;
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = var_out;
        frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_20, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_30e8c2ccc68a86baff3e38baecf154ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30e8c2ccc68a86baff3e38baecf154ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30e8c2ccc68a86baff3e38baecf154ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30e8c2ccc68a86baff3e38baecf154ac,
        type_description_1,
        par_data,
        par_width,
        par_height,
        var_out,
        var_pitch,
        var_image_offset,
        var_a0,
        var_a1,
        var_a2,
        var_a3,
        var_a4,
        var_a5,
        var_a6,
        var_a7,
        var_c0_lo,
        var_c0_hi,
        var_c1_lo,
        var_c1_hi,
        var_b0,
        var_b1,
        var_b2,
        var_b3,
        var_color0,
        var_color1,
        var_bits,
        var_alpha,
        var_r0,
        var_g0,
        var_r1,
        var_g1,
        var_i,
        var_y,
        var_x,
        var_code,
        var_a,
        var_r,
        var_g,
        var_b,
        var_advance_row
    );


    // Release cached frame if used for exception.
    if (frame_30e8c2ccc68a86baff3e38baecf154ac == cache_frame_30e8c2ccc68a86baff3e38baecf154ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30e8c2ccc68a86baff3e38baecf154ac);
        cache_frame_30e8c2ccc68a86baff3e38baecf154ac = NULL;
    }

    assertFrameObject(frame_30e8c2ccc68a86baff3e38baecf154ac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_a0);
    var_a0 = NULL;
    Py_XDECREF(var_a1);
    var_a1 = NULL;
    Py_XDECREF(var_a2);
    var_a2 = NULL;
    Py_XDECREF(var_a3);
    var_a3 = NULL;
    Py_XDECREF(var_a4);
    var_a4 = NULL;
    Py_XDECREF(var_a5);
    var_a5 = NULL;
    Py_XDECREF(var_a6);
    var_a6 = NULL;
    Py_XDECREF(var_a7);
    var_a7 = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_a0);
    var_a0 = NULL;
    Py_XDECREF(var_a1);
    var_a1 = NULL;
    Py_XDECREF(var_a2);
    var_a2 = NULL;
    Py_XDECREF(var_a3);
    var_a3 = NULL;
    Py_XDECREF(var_a4);
    var_a4 = NULL;
    Py_XDECREF(var_a5);
    var_a5 = NULL;
    Py_XDECREF(var_a6);
    var_a6 = NULL;
    Py_XDECREF(var_a7);
    var_a7 = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
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


static PyObject *impl_pyglet$image$codecs$s3tc$$$function__8_decode_dxt5(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_width = python_pars[1];
    PyObject *par_height = python_pars[2];
    PyObject *var_out = NULL;
    PyObject *var_pitch = NULL;
    PyObject *var_image_offset = NULL;
    PyObject *var_alpha0 = NULL;
    PyObject *var_alpha1 = NULL;
    PyObject *var_ab0 = NULL;
    PyObject *var_ab1 = NULL;
    PyObject *var_ab2 = NULL;
    PyObject *var_ab3 = NULL;
    PyObject *var_ab4 = NULL;
    PyObject *var_ab5 = NULL;
    PyObject *var_c0_lo = NULL;
    PyObject *var_c0_hi = NULL;
    PyObject *var_c1_lo = NULL;
    PyObject *var_c1_hi = NULL;
    PyObject *var_b0 = NULL;
    PyObject *var_b1 = NULL;
    PyObject *var_b2 = NULL;
    PyObject *var_b3 = NULL;
    PyObject *var_color0 = NULL;
    PyObject *var_color1 = NULL;
    PyObject *var_bits = NULL;
    PyObject *var_abits = NULL;
    PyObject *var_r0 = NULL;
    PyObject *var_g0 = NULL;
    PyObject *var_r1 = NULL;
    PyObject *var_g1 = NULL;
    PyObject *var_i = NULL;
    PyObject *var_y = NULL;
    PyObject *var_x = NULL;
    PyObject *var_code = NULL;
    PyObject *var_acode = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *var_a = NULL;
    PyObject *var_advance_row = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_11 = NULL;
    PyObject *tmp_tuple_unpack_1__element_12 = NULL;
    PyObject *tmp_tuple_unpack_1__element_13 = NULL;
    PyObject *tmp_tuple_unpack_1__element_14 = NULL;
    PyObject *tmp_tuple_unpack_1__element_15 = NULL;
    PyObject *tmp_tuple_unpack_1__element_16 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bcef095b98731203c97763f4ccb456f1;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bcef095b98731203c97763f4ccb456f1 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bcef095b98731203c97763f4ccb456f1)) {
        Py_XDECREF(cache_frame_bcef095b98731203c97763f4ccb456f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcef095b98731203c97763f4ccb456f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcef095b98731203c97763f4ccb456f1 = MAKE_FUNCTION_FRAME(tstate, codeobj_bcef095b98731203c97763f4ccb456f1, module_pyglet$image$codecs$s3tc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bcef095b98731203c97763f4ccb456f1->m_type_description == NULL);
    frame_bcef095b98731203c97763f4ccb456f1 = cache_frame_bcef095b98731203c97763f4ccb456f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bcef095b98731203c97763f4ccb456f1);
    assert(Py_REFCNT(frame_bcef095b98731203c97763f4ccb456f1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_mult_expr_left_3 = par_width;
        CHECK_OBJECT(par_height);
        tmp_mult_expr_right_3 = par_height;
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[60];
        tmp_mult_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 291;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        CHECK_OBJECT(par_width);
        tmp_lshift_expr_left_1 = par_width;
        tmp_lshift_expr_right_1 = mod_consts[15];
        tmp_assign_source_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pitch == NULL);
        var_pitch = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[6];
        assert(var_image_offset == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_image_offset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 298;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 296;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 16);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 16);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 16);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 16);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_5, 4, 16);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_5;
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_6, 5, 16);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_6;
            tmp_tuple_unpack_1__element_6 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_7, 6, 16);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_7;
            tmp_tuple_unpack_1__element_7 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_8, 7, 16);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_8;
            tmp_tuple_unpack_1__element_8 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, tmp_unpack_9, 8, 16);
        if (tmp_assign_source_15 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_9;
            tmp_tuple_unpack_1__element_9 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_10, 9, 16);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_10;
            tmp_tuple_unpack_1__element_10 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_11, 10, 16);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_11;
            tmp_tuple_unpack_1__element_11 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_12, 11, 16);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_12;
            tmp_tuple_unpack_1__element_12 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_13, 12, 16);
        if (tmp_assign_source_19 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_13;
            tmp_tuple_unpack_1__element_13 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_14, 13, 16);
        if (tmp_assign_source_20 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_14;
            tmp_tuple_unpack_1__element_14 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tstate, tmp_unpack_15, 14, 16);
        if (tmp_assign_source_21 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_15;
            tmp_tuple_unpack_1__element_15 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_16, 15, 16);
        if (tmp_assign_source_22 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_16;
            tmp_tuple_unpack_1__element_16 = tmp_assign_source_22;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 296;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_13);
    tmp_tuple_unpack_1__element_13 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_14);
    tmp_tuple_unpack_1__element_14 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_15);
    tmp_tuple_unpack_1__element_15 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_16);
    tmp_tuple_unpack_1__element_16 = NULL;
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
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_alpha0;
            var_alpha0 = tmp_assign_source_23;
            Py_INCREF(var_alpha0);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_alpha1;
            var_alpha1 = tmp_assign_source_24;
            Py_INCREF(var_alpha1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_ab0;
            var_ab0 = tmp_assign_source_25;
            Py_INCREF(var_ab0);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_ab1;
            var_ab1 = tmp_assign_source_26;
            Py_INCREF(var_ab1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = var_ab2;
            var_ab2 = tmp_assign_source_27;
            Py_INCREF(var_ab2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_28 = tmp_tuple_unpack_1__element_6;
        {
            PyObject *old = var_ab3;
            var_ab3 = tmp_assign_source_28;
            Py_INCREF(var_ab3);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_29 = tmp_tuple_unpack_1__element_7;
        {
            PyObject *old = var_ab4;
            var_ab4 = tmp_assign_source_29;
            Py_INCREF(var_ab4);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
        tmp_assign_source_30 = tmp_tuple_unpack_1__element_8;
        {
            PyObject *old = var_ab5;
            var_ab5 = tmp_assign_source_30;
            Py_INCREF(var_ab5);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_8);
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_9);
        tmp_assign_source_31 = tmp_tuple_unpack_1__element_9;
        {
            PyObject *old = var_c0_lo;
            var_c0_lo = tmp_assign_source_31;
            Py_INCREF(var_c0_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_9);
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_10);
        tmp_assign_source_32 = tmp_tuple_unpack_1__element_10;
        {
            PyObject *old = var_c0_hi;
            var_c0_hi = tmp_assign_source_32;
            Py_INCREF(var_c0_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_10);
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_11);
        tmp_assign_source_33 = tmp_tuple_unpack_1__element_11;
        {
            PyObject *old = var_c1_lo;
            var_c1_lo = tmp_assign_source_33;
            Py_INCREF(var_c1_lo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_11);
    tmp_tuple_unpack_1__element_11 = NULL;

    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_12);
        tmp_assign_source_34 = tmp_tuple_unpack_1__element_12;
        {
            PyObject *old = var_c1_hi;
            var_c1_hi = tmp_assign_source_34;
            Py_INCREF(var_c1_hi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_12);
    tmp_tuple_unpack_1__element_12 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_13);
        tmp_assign_source_35 = tmp_tuple_unpack_1__element_13;
        {
            PyObject *old = var_b0;
            var_b0 = tmp_assign_source_35;
            Py_INCREF(var_b0);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_13);
    tmp_tuple_unpack_1__element_13 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_14);
        tmp_assign_source_36 = tmp_tuple_unpack_1__element_14;
        {
            PyObject *old = var_b1;
            var_b1 = tmp_assign_source_36;
            Py_INCREF(var_b1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_14);
    tmp_tuple_unpack_1__element_14 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_15);
        tmp_assign_source_37 = tmp_tuple_unpack_1__element_15;
        {
            PyObject *old = var_b2;
            var_b2 = tmp_assign_source_37;
            Py_INCREF(var_b2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_15);
    tmp_tuple_unpack_1__element_15 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_16);
        tmp_assign_source_38 = tmp_tuple_unpack_1__element_16;
        {
            PyObject *old = var_b3;
            var_b3 = tmp_assign_source_38;
            Py_INCREF(var_b3);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_16);
    tmp_tuple_unpack_1__element_16 = NULL;

    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_lo);
        tmp_args_element_value_2 = var_c0_lo;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 299;
        tmp_bitor_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c0_hi);
        tmp_args_element_value_3 = var_c0_hi;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 299;
        tmp_lshift_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_lshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_2 = mod_consts[19];
        tmp_bitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        Py_DECREF(tmp_lshift_expr_left_2);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_39 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color0;
            var_color0 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_lshift_expr_left_3;
        PyObject *tmp_lshift_expr_right_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_lo);
        tmp_args_element_value_4 = var_c1_lo;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 300;
        tmp_bitor_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c1_hi);
        tmp_args_element_value_5 = var_c1_hi;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 300;
        tmp_lshift_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_lshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_3 = mod_consts[19];
        tmp_bitor_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_3, tmp_lshift_expr_right_3);
        Py_DECREF(tmp_lshift_expr_left_3);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_40 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color1;
            var_color1 = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_alpha0);
        tmp_args_element_value_6 = var_alpha0;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 301;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_alpha0;
            assert(old != NULL);
            var_alpha0 = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_alpha1);
        tmp_args_element_value_7 = var_alpha1;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 302;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_alpha1;
            assert(old != NULL);
            var_alpha1 = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_lshift_expr_left_4;
        PyObject *tmp_lshift_expr_right_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_lshift_expr_left_5;
        PyObject *tmp_lshift_expr_right_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_lshift_expr_left_6;
        PyObject *tmp_lshift_expr_right_6;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b0);
        tmp_args_element_value_8 = var_b0;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 303;
        tmp_bitor_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        if (tmp_bitor_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b1);
        tmp_args_element_value_9 = var_b1;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 303;
        tmp_lshift_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_lshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_4 = mod_consts[19];
        tmp_bitor_expr_right_5 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_4, tmp_lshift_expr_right_4);
        Py_DECREF(tmp_lshift_expr_left_4);
        if (tmp_bitor_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        Py_DECREF(tmp_bitor_expr_right_5);
        if (tmp_bitor_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b2);
        tmp_args_element_value_10 = var_b2;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 303;
        tmp_lshift_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_lshift_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_5 = mod_consts[44];
        tmp_bitor_expr_right_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_5, tmp_lshift_expr_right_5);
        Py_DECREF(tmp_lshift_expr_left_5);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_b3);
        tmp_args_element_value_11 = var_b3;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 303;
        tmp_lshift_expr_left_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
        if (tmp_lshift_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_6 = mod_consts[45];
        tmp_bitor_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_6, tmp_lshift_expr_right_6);
        Py_DECREF(tmp_lshift_expr_left_6);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_43 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bits;
            var_bits = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_bitor_expr_left_6;
        PyObject *tmp_bitor_expr_right_6;
        PyObject *tmp_bitor_expr_left_7;
        PyObject *tmp_bitor_expr_right_7;
        PyObject *tmp_bitor_expr_left_8;
        PyObject *tmp_bitor_expr_right_8;
        PyObject *tmp_bitor_expr_left_9;
        PyObject *tmp_bitor_expr_right_9;
        PyObject *tmp_bitor_expr_left_10;
        PyObject *tmp_bitor_expr_right_10;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_lshift_expr_left_7;
        PyObject *tmp_lshift_expr_right_7;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_lshift_expr_left_8;
        PyObject *tmp_lshift_expr_right_8;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_lshift_expr_left_9;
        PyObject *tmp_lshift_expr_right_9;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_lshift_expr_left_10;
        PyObject *tmp_lshift_expr_right_10;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_lshift_expr_left_11;
        PyObject *tmp_lshift_expr_right_11;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ab0);
        tmp_args_element_value_12 = var_ab0;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 304;
        tmp_bitor_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
        if (tmp_bitor_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ab1);
        tmp_args_element_value_13 = var_ab1;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 304;
        tmp_lshift_expr_left_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_13);
        if (tmp_lshift_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_7 = mod_consts[19];
        tmp_bitor_expr_right_10 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_7, tmp_lshift_expr_right_7);
        Py_DECREF(tmp_lshift_expr_left_7);
        if (tmp_bitor_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_10);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_9 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_10, tmp_bitor_expr_right_10);
        Py_DECREF(tmp_bitor_expr_left_10);
        Py_DECREF(tmp_bitor_expr_right_10);
        if (tmp_bitor_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ab2);
        tmp_args_element_value_14 = var_ab2;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 304;
        tmp_lshift_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
        if (tmp_lshift_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_8 = mod_consts[44];
        tmp_bitor_expr_right_9 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_8, tmp_lshift_expr_right_8);
        Py_DECREF(tmp_lshift_expr_left_8);
        if (tmp_bitor_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_9);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_9, tmp_bitor_expr_right_9);
        Py_DECREF(tmp_bitor_expr_left_9);
        Py_DECREF(tmp_bitor_expr_right_9);
        if (tmp_bitor_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ab3);
        tmp_args_element_value_15 = var_ab3;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 304;
        tmp_lshift_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_15);
        if (tmp_lshift_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_9 = mod_consts[45];
        tmp_bitor_expr_right_8 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_9, tmp_lshift_expr_right_9);
        Py_DECREF(tmp_lshift_expr_left_9);
        if (tmp_bitor_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_8);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_8, tmp_bitor_expr_right_8);
        Py_DECREF(tmp_bitor_expr_left_8);
        Py_DECREF(tmp_bitor_expr_right_8);
        if (tmp_bitor_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ab4);
        tmp_args_element_value_16 = var_ab4;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 305;
        tmp_lshift_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
        if (tmp_lshift_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_10 = mod_consts[69];
        tmp_bitor_expr_right_7 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_10, tmp_lshift_expr_right_10);
        Py_DECREF(tmp_lshift_expr_left_10);
        if (tmp_bitor_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_7);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitor_expr_left_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
        Py_DECREF(tmp_bitor_expr_left_7);
        Py_DECREF(tmp_bitor_expr_right_7);
        if (tmp_bitor_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ab5);
        tmp_args_element_value_17 = var_ab5;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 305;
        tmp_lshift_expr_left_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_17);
        if (tmp_lshift_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_lshift_expr_right_11 = mod_consts[70];
        tmp_bitor_expr_right_6 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_11, tmp_lshift_expr_right_11);
        Py_DECREF(tmp_lshift_expr_left_11);
        if (tmp_bitor_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_44 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
        Py_DECREF(tmp_bitor_expr_left_6);
        Py_DECREF(tmp_bitor_expr_right_6);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_abits;
            var_abits = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_1 = var_color0;
        tmp_bitand_expr_right_1 = mod_consts[12];
        tmp_assign_source_45 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r0;
            var_r0 = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_2 = var_color0;
        tmp_bitand_expr_right_2 = mod_consts[16];
        tmp_rshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_1 = mod_consts[46];
        tmp_assign_source_46 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g0;
            var_g0 = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        CHECK_OBJECT(var_color0);
        tmp_bitand_expr_left_3 = var_color0;
        tmp_bitand_expr_right_3 = mod_consts[18];
        tmp_rshift_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        if (tmp_rshift_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_2 = mod_consts[47];
        tmp_assign_source_47 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        Py_DECREF(tmp_rshift_expr_left_2);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b0;
            assert(old != NULL);
            var_b0 = tmp_assign_source_47;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_4 = var_color1;
        tmp_bitand_expr_right_4 = mod_consts[12];
        tmp_assign_source_48 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_rshift_expr_left_3;
        PyObject *tmp_rshift_expr_right_3;
        PyObject *tmp_bitand_expr_left_5;
        PyObject *tmp_bitand_expr_right_5;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_5 = var_color1;
        tmp_bitand_expr_right_5 = mod_consts[16];
        tmp_rshift_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
        if (tmp_rshift_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_3 = mod_consts[46];
        tmp_assign_source_49 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_3, tmp_rshift_expr_right_3);
        Py_DECREF(tmp_rshift_expr_left_3);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_g1;
            var_g1 = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_rshift_expr_left_4;
        PyObject *tmp_rshift_expr_right_4;
        PyObject *tmp_bitand_expr_left_6;
        PyObject *tmp_bitand_expr_right_6;
        CHECK_OBJECT(var_color1);
        tmp_bitand_expr_left_6 = var_color1;
        tmp_bitand_expr_right_6 = mod_consts[18];
        tmp_rshift_expr_left_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
        if (tmp_rshift_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_rshift_expr_right_4 = mod_consts[47];
        tmp_assign_source_50 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_4, tmp_rshift_expr_right_4);
        Py_DECREF(tmp_rshift_expr_left_4);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_b1;
            assert(old != NULL);
            var_b1 = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_51 = var_image_offset;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_51;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 316;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[50]);

        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_52 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_53 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_53 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 316;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_54 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_54;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 317;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[50]);

        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_55 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_56 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_56 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 317;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_57 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_57;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_bitand_expr_left_7;
        PyObject *tmp_bitand_expr_right_7;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_bitand_expr_left_7 = var_bits;
        tmp_bitand_expr_right_7 = mod_consts[11];
        tmp_assign_source_58 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_code;
            var_code = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_bitand_expr_left_8;
        PyObject *tmp_bitand_expr_right_8;
        if (var_abits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_bitand_expr_left_8 = var_abits;
        tmp_bitand_expr_right_8 = mod_consts[76];
        tmp_assign_source_59 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_8, tmp_bitand_expr_right_8);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_acode;
            var_acode = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_1 = var_code;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_tuple_element_1;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_tuple_element_1 = var_r0;
        tmp_iter_arg_5 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 0, tmp_tuple_element_1);
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_g0;
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 1, tmp_tuple_element_1);
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_b0;
        PyTuple_SET_ITEM0(tmp_iter_arg_5, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_5);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_60 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        assert(!(tmp_assign_source_60 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT(tstate, tmp_unpack_17, 0, 3);
        if (tmp_assign_source_61 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tstate, tmp_unpack_18, 1, 3);
        if (tmp_assign_source_62 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_63 = UNPACK_NEXT(tstate, tmp_unpack_19, 2, 3);
        if (tmp_assign_source_63 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_63;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 322;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[64];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_8;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_64 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_64;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_65 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_65;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_66 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_66;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_2 = var_code;
        tmp_cmp_expr_right_2 = mod_consts[17];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_tuple_element_2;
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 324;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_tuple_element_2 = var_r1;
        tmp_iter_arg_6 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 0, tmp_tuple_element_2);
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 324;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_g1;
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 1, tmp_tuple_element_2);
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 324;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_b1;
        PyTuple_SET_ITEM0(tmp_iter_arg_6, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_6);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_67 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        assert(!(tmp_assign_source_67 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tstate, tmp_unpack_20, 0, 3);
        if (tmp_assign_source_68 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 324;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tstate, tmp_unpack_21, 1, 3);
        if (tmp_assign_source_69 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 324;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_70 = UNPACK_NEXT(tstate, tmp_unpack_22, 2, 3);
        if (tmp_assign_source_70 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 324;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_70;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 324;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[64];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 324;
            goto try_except_handler_10;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_71 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_71;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_72 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_72;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_73 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_73;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_3 = var_code;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_4 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_4 = var_color1;
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[6];
        {
            PyObject *old = tmp_assign_unpack_1__assign_source;
            tmp_assign_unpack_1__assign_source = tmp_assign_source_74;
            Py_INCREF(tmp_assign_unpack_1__assign_source);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_75 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_75;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_76 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_76;
            Py_INCREF(var_g);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_77 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_77;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_5 = var_code;
        tmp_cmp_expr_right_5 = mod_consts[15];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_6 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_6 = var_color1;
        tmp_and_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_mult_expr_left_4 = mod_consts[15];
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_4 = var_r0;
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_r1 == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_1 = var_r1;
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_1 = mod_consts[11];
        tmp_assign_source_78 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_mult_expr_left_5 = mod_consts[15];
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_5 = var_g0;
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_g1 == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_2 = var_g1;
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_2 = mod_consts[11];
        tmp_assign_source_79 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_mult_expr_left_6 = mod_consts[15];
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_6 = var_b0;
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_b1 == NULL) {
            Py_DECREF(tmp_add_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_3 = var_b1;
        tmp_floordiv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_floordiv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_3 = mod_consts[11];
        tmp_assign_source_80 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        Py_DECREF(tmp_floordiv_expr_left_3);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_7 = var_code;
        tmp_cmp_expr_right_7 = mod_consts[11];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_8 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_8 = var_color1;
        tmp_and_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_5 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_floordiv_expr_left_4;
        PyObject *tmp_floordiv_expr_right_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_4 = var_r0;
        tmp_mult_expr_left_7 = mod_consts[15];
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_7 = var_r1;
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_floordiv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_4 = mod_consts[11];
        tmp_assign_source_81 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
        Py_DECREF(tmp_floordiv_expr_left_4);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_floordiv_expr_left_5;
        PyObject *tmp_floordiv_expr_right_5;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_5 = var_g0;
        tmp_mult_expr_left_8 = mod_consts[15];
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_8 = var_g1;
        tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_floordiv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_5 = mod_consts[11];
        tmp_assign_source_82 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_5, tmp_floordiv_expr_right_5);
        Py_DECREF(tmp_floordiv_expr_left_5);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_floordiv_expr_left_6;
        PyObject *tmp_floordiv_expr_right_6;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_6 = var_b0;
        tmp_mult_expr_left_9 = mod_consts[15];
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_9 = var_b1;
        tmp_add_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_floordiv_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_6 = mod_consts[11];
        tmp_assign_source_83 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_6, tmp_floordiv_expr_right_6);
        Py_DECREF(tmp_floordiv_expr_left_6);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_code);
        tmp_cmp_expr_left_9 = var_code;
        tmp_cmp_expr_right_9 = mod_consts[15];
        tmp_and_left_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_and_left_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_4);

            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        Py_DECREF(tmp_and_left_value_4);
        CHECK_OBJECT(var_color0);
        tmp_cmp_expr_left_10 = var_color0;
        CHECK_OBJECT(var_color1);
        tmp_cmp_expr_right_10 = var_color1;
        tmp_and_right_value_4 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_right_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_operand_value_1 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_operand_value_1 = tmp_and_left_value_4;
        and_end_4:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 337;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        if (var_r0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_7 = var_r0;
        if (var_r1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_7 = var_r1;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_truediv_expr_right_1 = mod_consts[15];
        tmp_assign_source_84 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (var_g0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 339;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_8 = var_g0;
        if (var_g1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 339;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_8 = var_g1;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_truediv_expr_right_2 = mod_consts[15];
        tmp_assign_source_85 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_g;
            var_g = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        if (var_b0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_9 = var_b0;
        if (var_b1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_9 = var_b1;
        tmp_truediv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_truediv_expr_right_3 = mod_consts[15];
        tmp_assign_source_86 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_11 = var_acode;
        tmp_cmp_expr_right_11 = mod_consts[6];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_87;
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assign_source_87 = var_alpha0;
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_87;
            Py_INCREF(var_a);
            Py_XDECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_12 = var_acode;
        tmp_cmp_expr_right_12 = mod_consts[17];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_88;
        if (var_alpha1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assign_source_88 = var_alpha1;
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_88;
            Py_INCREF(var_a);
            Py_XDECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_13 = var_alpha0;
        if (var_alpha1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_right_13 = var_alpha1;
        tmp_condition_result_9 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_14 = var_acode;
        tmp_cmp_expr_right_14 = mod_consts[15];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_floordiv_expr_left_7;
        PyObject *tmp_floordiv_expr_right_7;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        tmp_mult_expr_left_10 = mod_consts[79];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_10 = var_alpha0;
        tmp_add_expr_left_10 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_11 = mod_consts[17];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_11 = var_alpha1;
        tmp_add_expr_right_10 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        if (tmp_add_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_floordiv_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_7 = mod_consts[76];
        tmp_assign_source_89 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_7, tmp_floordiv_expr_right_7);
        Py_DECREF(tmp_floordiv_expr_left_7);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_15 = var_acode;
        tmp_cmp_expr_right_15 = mod_consts[11];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_floordiv_expr_left_8;
        PyObject *tmp_floordiv_expr_right_8;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_mult_expr_left_12;
        PyObject *tmp_mult_expr_right_12;
        PyObject *tmp_mult_expr_left_13;
        PyObject *tmp_mult_expr_right_13;
        tmp_mult_expr_left_12 = mod_consts[46];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_12 = var_alpha0;
        tmp_add_expr_left_11 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_12, tmp_mult_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_13 = mod_consts[15];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_13 = var_alpha1;
        tmp_add_expr_right_11 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_13, tmp_mult_expr_right_13);
        if (tmp_add_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_floordiv_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_8 = mod_consts[76];
        tmp_assign_source_90 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_8, tmp_floordiv_expr_right_8);
        Py_DECREF(tmp_floordiv_expr_left_8);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_16 = var_acode;
        tmp_cmp_expr_right_16 = mod_consts[60];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_floordiv_expr_left_9;
        PyObject *tmp_floordiv_expr_right_9;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_mult_expr_left_14;
        PyObject *tmp_mult_expr_right_14;
        PyObject *tmp_mult_expr_left_15;
        PyObject *tmp_mult_expr_right_15;
        tmp_mult_expr_left_14 = mod_consts[60];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_14 = var_alpha0;
        tmp_add_expr_left_12 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_14, tmp_mult_expr_right_14);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_15 = mod_consts[11];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_15 = var_alpha1;
        tmp_add_expr_right_12 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_15, tmp_mult_expr_right_15);
        if (tmp_add_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_floordiv_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_9 = mod_consts[76];
        tmp_assign_source_91 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_9, tmp_floordiv_expr_right_9);
        Py_DECREF(tmp_floordiv_expr_left_9);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_17 = var_acode;
        tmp_cmp_expr_right_17 = mod_consts[46];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_floordiv_expr_left_10;
        PyObject *tmp_floordiv_expr_right_10;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_mult_expr_left_16;
        PyObject *tmp_mult_expr_right_16;
        PyObject *tmp_mult_expr_left_17;
        PyObject *tmp_mult_expr_right_17;
        tmp_mult_expr_left_16 = mod_consts[11];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_16 = var_alpha0;
        tmp_add_expr_left_13 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_16, tmp_mult_expr_right_16);
        if (tmp_add_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_17 = mod_consts[60];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_17 = var_alpha1;
        tmp_add_expr_right_13 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_17, tmp_mult_expr_right_17);
        if (tmp_add_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_13);

            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        Py_DECREF(tmp_add_expr_right_13);
        if (tmp_floordiv_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_10 = mod_consts[76];
        tmp_assign_source_92 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_10, tmp_floordiv_expr_right_10);
        Py_DECREF(tmp_floordiv_expr_left_10);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_18 = var_acode;
        tmp_cmp_expr_right_18 = mod_consts[79];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_floordiv_expr_left_11;
        PyObject *tmp_floordiv_expr_right_11;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_mult_expr_left_18;
        PyObject *tmp_mult_expr_right_18;
        PyObject *tmp_mult_expr_left_19;
        PyObject *tmp_mult_expr_right_19;
        tmp_mult_expr_left_18 = mod_consts[15];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_18 = var_alpha0;
        tmp_add_expr_left_14 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_18, tmp_mult_expr_right_18);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_19 = mod_consts[46];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_19 = var_alpha1;
        tmp_add_expr_right_14 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_19, tmp_mult_expr_right_19);
        if (tmp_add_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_floordiv_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_11 = mod_consts[76];
        tmp_assign_source_93 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_11, tmp_floordiv_expr_right_11);
        Py_DECREF(tmp_floordiv_expr_left_11);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    goto branch_end_14;
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_19 = var_acode;
        tmp_cmp_expr_right_19 = mod_consts[76];
        tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 358;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_floordiv_expr_left_12;
        PyObject *tmp_floordiv_expr_right_12;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_mult_expr_left_20;
        PyObject *tmp_mult_expr_right_20;
        PyObject *tmp_mult_expr_left_21;
        PyObject *tmp_mult_expr_right_21;
        tmp_mult_expr_left_20 = mod_consts[17];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_20 = var_alpha0;
        tmp_add_expr_left_15 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_20, tmp_mult_expr_right_20);
        if (tmp_add_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_21 = mod_consts[79];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_21 = var_alpha1;
        tmp_add_expr_right_15 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_21, tmp_mult_expr_right_21);
        if (tmp_add_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        Py_DECREF(tmp_add_expr_right_15);
        if (tmp_floordiv_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_12 = mod_consts[76];
        tmp_assign_source_94 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_12, tmp_floordiv_expr_right_12);
        Py_DECREF(tmp_floordiv_expr_left_12);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_20 = var_acode;
        tmp_cmp_expr_right_20 = mod_consts[15];
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_floordiv_expr_left_13;
        PyObject *tmp_floordiv_expr_right_13;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_mult_expr_left_22;
        PyObject *tmp_mult_expr_right_22;
        PyObject *tmp_mult_expr_left_23;
        PyObject *tmp_mult_expr_right_23;
        tmp_mult_expr_left_22 = mod_consts[60];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_22 = var_alpha0;
        tmp_add_expr_left_16 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_22, tmp_mult_expr_right_22);
        if (tmp_add_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_23 = mod_consts[17];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_23 = var_alpha1;
        tmp_add_expr_right_16 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_23, tmp_mult_expr_right_23);
        if (tmp_add_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        Py_DECREF(tmp_add_expr_right_16);
        if (tmp_floordiv_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_13 = mod_consts[46];
        tmp_assign_source_95 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_13, tmp_floordiv_expr_right_13);
        Py_DECREF(tmp_floordiv_expr_left_13);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_21 = var_acode;
        tmp_cmp_expr_right_21 = mod_consts[11];
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_floordiv_expr_left_14;
        PyObject *tmp_floordiv_expr_right_14;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_mult_expr_left_24;
        PyObject *tmp_mult_expr_right_24;
        PyObject *tmp_mult_expr_left_25;
        PyObject *tmp_mult_expr_right_25;
        tmp_mult_expr_left_24 = mod_consts[11];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_24 = var_alpha0;
        tmp_add_expr_left_17 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_24, tmp_mult_expr_right_24);
        if (tmp_add_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_25 = mod_consts[15];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_25 = var_alpha1;
        tmp_add_expr_right_17 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_25, tmp_mult_expr_right_25);
        if (tmp_add_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        Py_DECREF(tmp_add_expr_right_17);
        if (tmp_floordiv_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_14 = mod_consts[46];
        tmp_assign_source_96 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_14, tmp_floordiv_expr_right_14);
        Py_DECREF(tmp_floordiv_expr_left_14);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_22 = var_acode;
        tmp_cmp_expr_right_22 = mod_consts[60];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_floordiv_expr_left_15;
        PyObject *tmp_floordiv_expr_right_15;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        PyObject *tmp_mult_expr_left_26;
        PyObject *tmp_mult_expr_right_26;
        PyObject *tmp_mult_expr_left_27;
        PyObject *tmp_mult_expr_right_27;
        tmp_mult_expr_left_26 = mod_consts[15];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_26 = var_alpha0;
        tmp_add_expr_left_18 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_26, tmp_mult_expr_right_26);
        if (tmp_add_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_27 = mod_consts[11];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_27 = var_alpha1;
        tmp_add_expr_right_18 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_27, tmp_mult_expr_right_27);
        if (tmp_add_expr_right_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        Py_DECREF(tmp_add_expr_left_18);
        Py_DECREF(tmp_add_expr_right_18);
        if (tmp_floordiv_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_15 = mod_consts[46];
        tmp_assign_source_97 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_15, tmp_floordiv_expr_right_15);
        Py_DECREF(tmp_floordiv_expr_left_15);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    goto branch_end_18;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_23 = var_acode;
        tmp_cmp_expr_right_23 = mod_consts[46];
        tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_floordiv_expr_left_16;
        PyObject *tmp_floordiv_expr_right_16;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_mult_expr_left_28;
        PyObject *tmp_mult_expr_right_28;
        PyObject *tmp_mult_expr_left_29;
        PyObject *tmp_mult_expr_right_29;
        tmp_mult_expr_left_28 = mod_consts[17];
        if (var_alpha0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_28 = var_alpha0;
        tmp_add_expr_left_19 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_28, tmp_mult_expr_right_28);
        if (tmp_add_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mult_expr_left_29 = mod_consts[60];
        if (var_alpha1 == NULL) {
            Py_DECREF(tmp_add_expr_left_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_29 = var_alpha1;
        tmp_add_expr_right_19 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_29, tmp_mult_expr_right_29);
        if (tmp_add_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        Py_DECREF(tmp_add_expr_right_19);
        if (tmp_floordiv_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_floordiv_expr_right_16 = mod_consts[46];
        tmp_assign_source_98 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_16, tmp_floordiv_expr_right_16);
        Py_DECREF(tmp_floordiv_expr_left_16);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    goto branch_end_19;
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_24 = var_acode;
        tmp_cmp_expr_right_24 = mod_consts[79];
        tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[6];
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_99;
            Py_INCREF(var_a);
            Py_XDECREF(old);
        }

    }
    goto branch_end_20;
    branch_no_20:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        CHECK_OBJECT(var_acode);
        tmp_cmp_expr_left_25 = var_acode;
        tmp_cmp_expr_right_25 = mod_consts[76];
        tmp_operand_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 372;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_21:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[63];
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_100;
            Py_INCREF(var_a);
            Py_XDECREF(old);
        }

    }
    branch_end_20:;
    branch_end_19:;
    branch_end_18:;
    branch_end_17:;
    branch_end_16:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_lshift_expr_left_12;
        PyObject *tmp_lshift_expr_right_12;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_b);
        tmp_lshift_expr_left_12 = var_b;
        tmp_lshift_expr_right_12 = mod_consts[11];
        tmp_ass_subvalue_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_12, tmp_lshift_expr_right_12);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_1 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_lshift_expr_left_13;
        PyObject *tmp_lshift_expr_right_13;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        CHECK_OBJECT(var_g);
        tmp_lshift_expr_left_13 = var_g;
        tmp_lshift_expr_right_13 = mod_consts[15];
        tmp_ass_subvalue_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_13, tmp_lshift_expr_right_13);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_2 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_20 = var_i;
        tmp_add_expr_right_20 = mod_consts[17];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_20, tmp_add_expr_right_20);
        if (tmp_ass_subscript_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_lshift_expr_left_14;
        PyObject *tmp_lshift_expr_right_14;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        CHECK_OBJECT(var_r);
        tmp_lshift_expr_left_14 = var_r;
        tmp_lshift_expr_right_14 = mod_consts[11];
        tmp_ass_subvalue_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_14, tmp_lshift_expr_right_14);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_out == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_3 = var_out;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_21 = var_i;
        tmp_add_expr_right_21 = mod_consts[15];
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_21, tmp_add_expr_right_21);
        if (tmp_ass_subscript_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        CHECK_OBJECT(var_a);
        tmp_ass_subvalue_4 = var_a;
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_4 = var_out;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_22 = var_i;
        tmp_add_expr_right_22 = mod_consts[11];
        tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_22, tmp_add_expr_right_22);
        if (tmp_ass_subscript_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_irshift_expr_left_1;
        PyObject *tmp_irshift_expr_right_1;
        if (var_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_irshift_expr_left_1 = var_bits;
        tmp_irshift_expr_right_1 = mod_consts[15];
        tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_1, tmp_irshift_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_101 = tmp_irshift_expr_left_1;
        var_bits = tmp_assign_source_101;

    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_irshift_expr_left_2;
        PyObject *tmp_irshift_expr_right_2;
        if (var_abits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_irshift_expr_left_2 = var_abits;
        tmp_irshift_expr_right_2 = mod_consts[11];
        tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_2, tmp_irshift_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_102 = tmp_irshift_expr_left_2;
        var_abits = tmp_assign_source_102;

    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 382;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_1 = var_i;
        tmp_iadd_expr_right_1 = mod_consts[60];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_103 = tmp_iadd_expr_left_1;
        var_i = tmp_assign_source_103;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 317;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_5;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 383;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_2 = var_i;
        if (var_pitch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 383;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_sub_expr_left_1 = var_pitch;
        tmp_sub_expr_right_1 = mod_consts[44];
        tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_104 = tmp_iadd_expr_left_2;
        var_i = tmp_assign_source_104;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 316;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_23;
        PyObject *tmp_add_expr_right_23;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_23 = var_image_offset;
        tmp_add_expr_right_23 = mod_consts[44];
        tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_23, tmp_add_expr_right_23);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_pitch == NULL) {
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_right_1 = var_pitch;
        tmp_cmp_expr_left_26 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_cmp_expr_left_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_26 = mod_consts[6];
        tmp_assign_source_105 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        Py_DECREF(tmp_cmp_expr_left_26);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_advance_row;
            var_advance_row = tmp_assign_source_105;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_add_expr_left_24;
        PyObject *tmp_add_expr_right_24;
        PyObject *tmp_mult_expr_left_30;
        PyObject *tmp_mult_expr_right_30;
        PyObject *tmp_mult_expr_left_31;
        PyObject *tmp_mult_expr_right_31;
        if (var_image_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_image_offset;
        if (var_pitch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_31 = var_pitch;
        tmp_mult_expr_right_31 = mod_consts[11];
        tmp_mult_expr_left_30 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_31, tmp_mult_expr_right_31);
        if (tmp_mult_expr_left_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_advance_row);
        tmp_mult_expr_right_30 = var_advance_row;
        tmp_add_expr_left_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_30, tmp_mult_expr_right_30);
        Py_DECREF(tmp_mult_expr_left_30);
        if (tmp_add_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_24 = mod_consts[44];
        tmp_iadd_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_24, tmp_add_expr_right_24);
        Py_DECREF(tmp_add_expr_left_24);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_106 = tmp_iadd_expr_left_3;
        var_image_offset = tmp_assign_source_106;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 296;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_args_element_value_18 = par_width;
        CHECK_OBJECT(par_height);
        tmp_args_element_value_19 = par_height;
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_out == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 389;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = var_out;
        frame_bcef095b98731203c97763f4ccb456f1->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_20, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_bcef095b98731203c97763f4ccb456f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcef095b98731203c97763f4ccb456f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcef095b98731203c97763f4ccb456f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcef095b98731203c97763f4ccb456f1,
        type_description_1,
        par_data,
        par_width,
        par_height,
        var_out,
        var_pitch,
        var_image_offset,
        var_alpha0,
        var_alpha1,
        var_ab0,
        var_ab1,
        var_ab2,
        var_ab3,
        var_ab4,
        var_ab5,
        var_c0_lo,
        var_c0_hi,
        var_c1_lo,
        var_c1_hi,
        var_b0,
        var_b1,
        var_b2,
        var_b3,
        var_color0,
        var_color1,
        var_bits,
        var_abits,
        var_r0,
        var_g0,
        var_r1,
        var_g1,
        var_i,
        var_y,
        var_x,
        var_code,
        var_acode,
        var_r,
        var_g,
        var_b,
        var_a,
        var_advance_row
    );


    // Release cached frame if used for exception.
    if (frame_bcef095b98731203c97763f4ccb456f1 == cache_frame_bcef095b98731203c97763f4ccb456f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bcef095b98731203c97763f4ccb456f1);
        cache_frame_bcef095b98731203c97763f4ccb456f1 = NULL;
    }

    assertFrameObject(frame_bcef095b98731203c97763f4ccb456f1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_alpha0);
    var_alpha0 = NULL;
    Py_XDECREF(var_alpha1);
    var_alpha1 = NULL;
    Py_XDECREF(var_ab0);
    var_ab0 = NULL;
    Py_XDECREF(var_ab1);
    var_ab1 = NULL;
    Py_XDECREF(var_ab2);
    var_ab2 = NULL;
    Py_XDECREF(var_ab3);
    var_ab3 = NULL;
    Py_XDECREF(var_ab4);
    var_ab4 = NULL;
    Py_XDECREF(var_ab5);
    var_ab5 = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_abits);
    var_abits = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_acode);
    var_acode = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_image_offset);
    var_image_offset = NULL;
    Py_XDECREF(var_alpha0);
    var_alpha0 = NULL;
    Py_XDECREF(var_alpha1);
    var_alpha1 = NULL;
    Py_XDECREF(var_ab0);
    var_ab0 = NULL;
    Py_XDECREF(var_ab1);
    var_ab1 = NULL;
    Py_XDECREF(var_ab2);
    var_ab2 = NULL;
    Py_XDECREF(var_ab3);
    var_ab3 = NULL;
    Py_XDECREF(var_ab4);
    var_ab4 = NULL;
    Py_XDECREF(var_ab5);
    var_ab5 = NULL;
    Py_XDECREF(var_c0_lo);
    var_c0_lo = NULL;
    Py_XDECREF(var_c0_hi);
    var_c0_hi = NULL;
    Py_XDECREF(var_c1_lo);
    var_c1_lo = NULL;
    Py_XDECREF(var_c1_hi);
    var_c1_hi = NULL;
    Py_XDECREF(var_b0);
    var_b0 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_b3);
    var_b3 = NULL;
    Py_XDECREF(var_color0);
    var_color0 = NULL;
    Py_XDECREF(var_color1);
    var_color1 = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_abits);
    var_abits = NULL;
    Py_XDECREF(var_r0);
    var_r0 = NULL;
    Py_XDECREF(var_g0);
    var_g0 = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_acode);
    var_acode = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_advance_row);
    var_advance_row = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
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



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__1___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_cc8ad940dba989e887708d7ed37a5a17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__2_unpack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__2_unpack,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_1a17e20d7ddccdfb109c106e29e12bc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__3__get_texture() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__3__get_texture,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_b0fd43180ceea0d202236d17f054481e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__4_get_texture(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__4_get_texture,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_f3b2be1207153872e376a46fbc9f09d2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__5_decode_dxt1_rgb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__5_decode_dxt1_rgb,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be496a9391f476bcd79145c3af8e8256,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__6_decode_dxt1_rgba() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__6_decode_dxt1_rgba,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_514dac68179bfab23ba2116780927473,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__7_decode_dxt3() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__7_decode_dxt3,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_30e8c2ccc68a86baff3e38baecf154ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__8_decode_dxt5() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$s3tc$$$function__8_decode_dxt5,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bcef095b98731203c97763f4ccb456f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$s3tc,
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

function_impl_code functable_pyglet$image$codecs$s3tc[] = {
    impl_pyglet$image$codecs$s3tc$$$function__1___init__,
    impl_pyglet$image$codecs$s3tc$$$function__2_unpack,
    impl_pyglet$image$codecs$s3tc$$$function__3__get_texture,
    impl_pyglet$image$codecs$s3tc$$$function__4_get_texture,
    impl_pyglet$image$codecs$s3tc$$$function__5_decode_dxt1_rgb,
    impl_pyglet$image$codecs$s3tc$$$function__6_decode_dxt1_rgba,
    impl_pyglet$image$codecs$s3tc$$$function__7_decode_dxt3,
    impl_pyglet$image$codecs$s3tc$$$function__8_decode_dxt5,
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

    function_impl_code *current = functable_pyglet$image$codecs$s3tc;
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

    if (offset > sizeof(functable_pyglet$image$codecs$s3tc) || offset < 0) {
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
        functable_pyglet$image$codecs$s3tc[offset],
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
        module_pyglet$image$codecs$s3tc,
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
PyObject *modulecode_pyglet$image$codecs$s3tc(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.image.codecs.s3tc");

    // Store the module for future use.
    module_pyglet$image$codecs$s3tc = module;

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
        PRINT_STRING("pyglet.image.codecs.s3tc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.image.codecs.s3tc: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$image$codecs$s3tc\n");

    moduledict_pyglet$image$codecs$s3tc = MODULE_DICT(module_pyglet$image$codecs$s3tc);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$image$codecs$s3tc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$image$codecs$s3tc,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[131]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$image$codecs$s3tc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$image$codecs$s3tc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$image$codecs$s3tc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$image$codecs$s3tc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$image$codecs$s3tc);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e41dbe239908228e5cf46b09cf8c7d8b;
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
    PyObject *locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3a230e990b4f9284433bc60d626bf6ba_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_2);
    }
    frame_e41dbe239908228e5cf46b09cf8c7d8b = MAKE_MODULE_FRAME(codeobj_e41dbe239908228e5cf46b09cf8c7d8b, module_pyglet$image$codecs$s3tc);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e41dbe239908228e5cf46b09cf8c7d8b);
    assert(Py_REFCNT(frame_e41dbe239908228e5cf46b09cf8c7d8b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[85], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[87];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$image$codecs$s3tc;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[6];
        frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 41;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[88];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$image$codecs$s3tc;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_pyglet$image$codecs$s3tc;
        tmp_fromlist_value_2 = mod_consts[89];
        tmp_level_value_2 = mod_consts[6];
        frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 44;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$image$codecs$s3tc, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[88];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$image$codecs$s3tc;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[90];
        tmp_level_value_3 = mod_consts[6];
        frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 45;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$image$codecs$s3tc,
                mod_consts[31],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[91];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyglet$image$codecs$s3tc;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[92];
        tmp_level_value_4 = mod_consts[6];
        frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 46;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$image$codecs$s3tc,
                mod_consts[93],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[93]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyglet$image$codecs$s3tc,
                mod_consts[22],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[22]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[95]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 48;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_1, mod_consts[96], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[94]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[95]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 49;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_2, mod_consts[98], kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_5 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[6];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[99]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[99]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[61];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 52;
        tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[100]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
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
        PyObject *tmp_expression_value_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[101];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_name_value_5 = mod_consts[102];
        tmp_default_value_1 = mod_consts[103];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_5, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[102]);
            Py_DECREF(tmp_expression_value_10);
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
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 52;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_18;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_4;
        }
        frame_3a230e990b4f9284433bc60d626bf6ba_2 = MAKE_CLASS_FRAME(tstate, codeobj_3a230e990b4f9284433bc60d626bf6ba, module_pyglet$image$codecs$s3tc, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3a230e990b4f9284433bc60d626bf6ba_2);
        assert(Py_REFCNT(frame_3a230e990b4f9284433bc60d626bf6ba_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__1___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__2_unpack();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[34], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__3__get_texture();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[37], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_4 = PyObject_GetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[110]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[110]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_1 = PyObject_GetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[37]);

            if (unlikely(tmp_args_element_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[37]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 92;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 92;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            frame_3a230e990b4f9284433bc60d626bf6ba_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[112];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__4_get_texture(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3a230e990b4f9284433bc60d626bf6ba_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3a230e990b4f9284433bc60d626bf6ba_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3a230e990b4f9284433bc60d626bf6ba_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3a230e990b4f9284433bc60d626bf6ba_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3a230e990b4f9284433bc60d626bf6ba_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
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

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[61];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame.f_lineno = 52;
            tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_4;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_19);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_18 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52);
        locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52 = NULL;
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

        Py_DECREF(locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52);
        locals_pyglet$image$codecs$s3tc$$$class__1_PackedImageData_52 = NULL;
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
        exception_lineno = 52;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_18);
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e41dbe239908228e5cf46b09cf8c7d8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e41dbe239908228e5cf46b09cf8c7d8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e41dbe239908228e5cf46b09cf8c7d8b, exception_lineno);
    }



    assertFrameObject(frame_e41dbe239908228e5cf46b09cf8c7d8b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__5_decode_dxt1_rgb();

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__6_decode_dxt1_rgba();

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__7_decode_dxt3();

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_pyglet$image$codecs$s3tc$$$function__8_decode_dxt5();

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_23);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.image.codecs.s3tc", false);

    Py_INCREF(module_pyglet$image$codecs$s3tc);
    return module_pyglet$image$codecs$s3tc;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$s3tc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$image$codecs$s3tc", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
