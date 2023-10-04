/* Generated code for Python module 'pyglet.font.win32query'
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

/* The "module_pyglet$font$win32query" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$font$win32query;
PyDictObject *moduledict_pyglet$font$win32query;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[207];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[207];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.font.win32query"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 207; i++) {
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
void checkModuleConstants_pyglet$font$win32query(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 207; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_963688a8512aebace346b0c49212be14;
static PyCodeObject *codeobj_e042ccdbb1516af59ae11ebbca4ead93;
static PyCodeObject *codeobj_3ac6a70f2bedccfa48b32809968b0204;
static PyCodeObject *codeobj_0969c30e986e26dfaa299296df52e6e6;
static PyCodeObject *codeobj_fbaa27e8fa08e8c346d54dc906a3560e;
static PyCodeObject *codeobj_276320c4d926525ad41fa5998d63402a;
static PyCodeObject *codeobj_d0509377d3f7936f8c61b412b5fa1789;
static PyCodeObject *codeobj_2c9c97a04f493a4ccfe417a31d438d00;
static PyCodeObject *codeobj_dcd566cfe96238f48bcc8513bab37c05;
static PyCodeObject *codeobj_7a8b2309fc97edd06aca94cfe00e7b20;
static PyCodeObject *codeobj_5b5b11f70d8b2a20711831ef6e403c71;
static PyCodeObject *codeobj_458390ae12cd6ce5bdd046cf3d399902;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[198]); CHECK_OBJECT(module_filename_obj);
    codeobj_963688a8512aebace346b0c49212be14 = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[199], NULL, 1, 0, 0);
    codeobj_e042ccdbb1516af59ae11ebbca4ead93 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[200], mod_consts[200], NULL, NULL, 0, 0, 0);
    codeobj_3ac6a70f2bedccfa48b32809968b0204 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[201], NULL, 0, 0, 0);
    codeobj_0969c30e986e26dfaa299296df52e6e6 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[201], NULL, 0, 0, 0);
    codeobj_fbaa27e8fa08e8c346d54dc906a3560e = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[201], NULL, 0, 0, 0);
    codeobj_276320c4d926525ad41fa5998d63402a = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_NOFREE, mod_consts[185], mod_consts[185], mod_consts[201], NULL, 0, 0, 0);
    codeobj_d0509377d3f7936f8c61b412b5fa1789 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[201], NULL, 0, 0, 0);
    codeobj_2c9c97a04f493a4ccfe417a31d438d00 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[202], NULL, 6, 0, 0);
    codeobj_dcd566cfe96238f48bcc8513bab37c05 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[203], NULL, 4, 0, 0);
    codeobj_7a8b2309fc97edd06aca94cfe00e7b20 = MAKE_CODE_OBJECT(module_filename_obj, 471, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[204], NULL, 2, 0, 0);
    codeobj_5b5b11f70d8b2a20711831ef6e403c71 = MAKE_CODE_OBJECT(module_filename_obj, 457, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[205], NULL, 2, 0, 0);
    codeobj_458390ae12cd6ce5bdd046cf3d399902 = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[206], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__1___init__();


static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__2__enum_font_names();


static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__3_query(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__4_have_font(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__5_font_list(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pyglet$font$win32query$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_vector = python_pars[2];
    PyObject *par_format = python_pars[3];
    PyObject *par_monospace = python_pars[4];
    PyObject *par_family = python_pars[5];
    struct Nuitka_FrameObject *frame_2c9c97a04f493a4ccfe417a31d438d00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c9c97a04f493a4ccfe417a31d438d00 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c9c97a04f493a4ccfe417a31d438d00)) {
        Py_XDECREF(cache_frame_2c9c97a04f493a4ccfe417a31d438d00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c9c97a04f493a4ccfe417a31d438d00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c9c97a04f493a4ccfe417a31d438d00 = MAKE_FUNCTION_FRAME(tstate, codeobj_2c9c97a04f493a4ccfe417a31d438d00, module_pyglet$font$win32query, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c9c97a04f493a4ccfe417a31d438d00->m_type_description == NULL);
    frame_2c9c97a04f493a4ccfe417a31d438d00 = cache_frame_2c9c97a04f493a4ccfe417a31d438d00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2c9c97a04f493a4ccfe417a31d438d00);
    assert(Py_REFCNT(frame_2c9c97a04f493a4ccfe417a31d438d00) == 2);

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


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_vector);
        tmp_assattr_value_2 = par_vector;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_format);
        tmp_assattr_value_3 = par_format;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_monospace);
        tmp_assattr_value_4 = par_monospace;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_family);
        tmp_assattr_value_5 = par_family;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c9c97a04f493a4ccfe417a31d438d00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c9c97a04f493a4ccfe417a31d438d00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c9c97a04f493a4ccfe417a31d438d00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c9c97a04f493a4ccfe417a31d438d00,
        type_description_1,
        par_self,
        par_name,
        par_vector,
        par_format,
        par_monospace,
        par_family
    );


    // Release cached frame if used for exception.
    if (frame_2c9c97a04f493a4ccfe417a31d438d00 == cache_frame_2c9c97a04f493a4ccfe417a31d438d00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c9c97a04f493a4ccfe417a31d438d00);
        cache_frame_2c9c97a04f493a4ccfe417a31d438d00 = NULL;
    }

    assertFrameObject(frame_2c9c97a04f493a4ccfe417a31d438d00);

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
    CHECK_OBJECT(par_vector);
    Py_DECREF(par_vector);
    CHECK_OBJECT(par_format);
    Py_DECREF(par_format);
    CHECK_OBJECT(par_monospace);
    Py_DECREF(par_monospace);
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_vector);
    Py_DECREF(par_vector);
    CHECK_OBJECT(par_format);
    Py_DECREF(par_format);
    CHECK_OBJECT(par_monospace);
    Py_DECREF(par_monospace);
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$font$win32query$$$function__2__enum_font_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_logfont = python_pars[0];
    PyObject *par_textmetricex = python_pars[1];
    PyObject *par_fonttype = python_pars[2];
    PyObject *par_param = python_pars[3];
    PyObject *var_lf = NULL;
    PyObject *var_name = NULL;
    PyObject *var_vector = NULL;
    PyObject *var_fmt = NULL;
    PyObject *var_pitch = NULL;
    PyObject *var_family = NULL;
    PyObject *var_monospace = NULL;
    PyObject *var_charset = NULL;
    PyObject *var_info = NULL;
    PyObject *var_style = NULL;
    struct Nuitka_FrameObject *frame_dcd566cfe96238f48bcc8513bab37c05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dcd566cfe96238f48bcc8513bab37c05 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dcd566cfe96238f48bcc8513bab37c05)) {
        Py_XDECREF(cache_frame_dcd566cfe96238f48bcc8513bab37c05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcd566cfe96238f48bcc8513bab37c05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcd566cfe96238f48bcc8513bab37c05 = MAKE_FUNCTION_FRAME(tstate, codeobj_dcd566cfe96238f48bcc8513bab37c05, module_pyglet$font$win32query, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dcd566cfe96238f48bcc8513bab37c05->m_type_description == NULL);
    frame_dcd566cfe96238f48bcc8513bab37c05 = cache_frame_dcd566cfe96238f48bcc8513bab37c05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dcd566cfe96238f48bcc8513bab37c05);
    assert(Py_REFCNT(frame_dcd566cfe96238f48bcc8513bab37c05) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_logfont);
        tmp_expression_value_1 = par_logfont;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lf == NULL);
        var_lf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_lf);
        tmp_expression_value_2 = var_lf;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_fonttype);
        tmp_bitand_expr_left_1 = par_fonttype;
        tmp_bitand_expr_right_1 = mod_consts[7];
        tmp_condition_result_1 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooooo";
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
        tmp_assign_source_3 = Py_True;
        assert(var_vector == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_vector = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[8];
        assert(var_fmt == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_fmt = tmp_assign_source_4;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        assert(var_vector == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_vector = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[9];
        assert(var_fmt == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_fmt = tmp_assign_source_6;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_lf);
        tmp_expression_value_3 = var_lf;
        tmp_bitand_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_bitand_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_2 = mod_consts[11];
        tmp_assign_source_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_left_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pitch == NULL);
        var_pitch = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_lf);
        tmp_expression_value_4 = var_lf;
        tmp_rshift_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[10]);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_right_1 = mod_consts[7];
        tmp_assign_source_8 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_family == NULL);
        var_family = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_pitch);
        tmp_cmp_expr_left_1 = var_pitch;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_monospace == NULL);
        var_monospace = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_lf);
        tmp_expression_value_5 = var_lf;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[13]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_charset == NULL);
        var_charset = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_2 = var_name;
        CHECK_OBJECT(var_vector);
        tmp_args_element_value_3 = var_vector;
        CHECK_OBJECT(var_fmt);
        tmp_args_element_value_4 = var_fmt;
        CHECK_OBJECT(var_monospace);
        tmp_args_element_value_5 = var_monospace;
        CHECK_OBJECT(var_family);
        tmp_args_element_value_6 = var_family;
        frame_dcd566cfe96238f48bcc8513bab37c05->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dcd566cfe96238f48bcc8513bab37c05->m_frame.f_lineno = 362;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_pitch);
        tmp_cmp_expr_left_2 = var_pitch;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[18];
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_info = tmp_assign_source_11;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_pitch);
        tmp_cmp_expr_left_3 = var_pitch;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[20];
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_info = tmp_assign_source_12;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[21];
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_info = tmp_assign_source_13;
    }
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_info);
        tmp_iadd_expr_left_1 = var_info;
        tmp_mod_expr_left_1 = mod_consts[22];
        tmp_expression_value_7 = DICT_COPY(mod_consts[23]);
        CHECK_OBJECT(par_fonttype);
        tmp_subscript_value_1 = par_fonttype;
        tmp_mod_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_iadd_expr_left_1;
        var_info = tmp_assign_source_14;

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_monospace);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_monospace);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_info);
        tmp_iadd_expr_left_2 = var_info;
        tmp_iadd_expr_right_2 = mod_consts[24];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_2;
        var_info = tmp_assign_source_15;

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(var_info);
        tmp_iadd_expr_left_3 = var_info;
        tmp_iadd_expr_right_3 = mod_consts[25];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_3;
        var_info = tmp_assign_source_16;

    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_LIST_REPEATED(3, mod_consts[26]);
        assert(var_style == NULL);
        var_style = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_lf);
        tmp_expression_value_8 = var_lf;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[27]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 383;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_ass_subvalue_1 = mod_consts[28];
        CHECK_OBJECT(var_style);
        tmp_ass_subscribed_1 = var_style;
        tmp_ass_subscript_1 = mod_consts[29];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_lf);
        tmp_expression_value_9 = var_lf;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[30]);
        if (tmp_attribute_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_ass_subvalue_2 = mod_consts[31];
        if (var_style == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_style;
        tmp_ass_subscript_2 = mod_consts[33];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_lf);
        tmp_expression_value_10 = var_lf;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[34]);
        if (tmp_attribute_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 387;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_ass_subvalue_3 = mod_consts[35];
        if (var_style == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 388;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_style;
        tmp_ass_subscript_3 = mod_consts[36];
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3);
        if (tmp_ass_subscript_res_3 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        CHECK_OBJECT(var_info);
        tmp_iadd_expr_left_4 = var_info;
        tmp_str_arg_value_1 = mod_consts[37];
        if (var_style == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 389;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_style;
        tmp_iadd_expr_right_4 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_4;
        var_info = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_info);
        tmp_iadd_expr_left_5 = var_info;
        tmp_mod_expr_left_2 = mod_consts[38];
        CHECK_OBJECT(var_lf);
        tmp_expression_value_11 = var_lf;
        tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[39]);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_iadd_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_iadd_expr_left_5;
        var_info = tmp_assign_source_19;

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[40]);
        assert(tmp_called_value_3 != NULL);
        tmp_mod_expr_left_3 = mod_consts[41];
        CHECK_OBJECT(var_info);
        tmp_tuple_element_1 = var_info;
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_lf);
            tmp_expression_value_12 = var_lf;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_lf);
            tmp_expression_value_13 = var_lf;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[6]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dcd566cfe96238f48bcc8513bab37c05->m_frame.f_lineno = 395;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcd566cfe96238f48bcc8513bab37c05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcd566cfe96238f48bcc8513bab37c05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcd566cfe96238f48bcc8513bab37c05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcd566cfe96238f48bcc8513bab37c05,
        type_description_1,
        par_logfont,
        par_textmetricex,
        par_fonttype,
        par_param,
        var_lf,
        var_name,
        var_vector,
        var_fmt,
        var_pitch,
        var_family,
        var_monospace,
        var_charset,
        var_info,
        var_style
    );


    // Release cached frame if used for exception.
    if (frame_dcd566cfe96238f48bcc8513bab37c05 == cache_frame_dcd566cfe96238f48bcc8513bab37c05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dcd566cfe96238f48bcc8513bab37c05);
        cache_frame_dcd566cfe96238f48bcc8513bab37c05 = NULL;
    }

    assertFrameObject(frame_dcd566cfe96238f48bcc8513bab37c05);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = mod_consts[33];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lf);
    Py_DECREF(var_lf);
    var_lf = NULL;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_vector);
    Py_DECREF(var_vector);
    var_vector = NULL;
    CHECK_OBJECT(var_fmt);
    Py_DECREF(var_fmt);
    var_fmt = NULL;
    CHECK_OBJECT(var_pitch);
    Py_DECREF(var_pitch);
    var_pitch = NULL;
    CHECK_OBJECT(var_family);
    Py_DECREF(var_family);
    var_family = NULL;
    CHECK_OBJECT(var_monospace);
    Py_DECREF(var_monospace);
    var_monospace = NULL;
    CHECK_OBJECT(var_charset);
    Py_DECREF(var_charset);
    var_charset = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_style);
    var_style = NULL;
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

    Py_XDECREF(var_lf);
    var_lf = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_vector);
    var_vector = NULL;
    Py_XDECREF(var_fmt);
    var_fmt = NULL;
    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    Py_XDECREF(var_family);
    var_family = NULL;
    Py_XDECREF(var_monospace);
    var_monospace = NULL;
    Py_XDECREF(var_charset);
    var_charset = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_style);
    var_style = NULL;
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
    CHECK_OBJECT(par_logfont);
    Py_DECREF(par_logfont);
    CHECK_OBJECT(par_textmetricex);
    Py_DECREF(par_textmetricex);
    CHECK_OBJECT(par_fonttype);
    Py_DECREF(par_fonttype);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_logfont);
    Py_DECREF(par_logfont);
    CHECK_OBJECT(par_textmetricex);
    Py_DECREF(par_textmetricex);
    CHECK_OBJECT(par_fonttype);
    Py_DECREF(par_fonttype);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$font$win32query$$$function__3_query(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_charset = python_pars[0];
    PyObject *var_hdc = NULL;
    PyObject *var_logfont = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_458390ae12cd6ce5bdd046cf3d399902;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_458390ae12cd6ce5bdd046cf3d399902 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_458390ae12cd6ce5bdd046cf3d399902)) {
        Py_XDECREF(cache_frame_458390ae12cd6ce5bdd046cf3d399902);

#if _DEBUG_REFCOUNTS
        if (cache_frame_458390ae12cd6ce5bdd046cf3d399902 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_458390ae12cd6ce5bdd046cf3d399902 = MAKE_FUNCTION_FRAME(tstate, codeobj_458390ae12cd6ce5bdd046cf3d399902, module_pyglet$font$win32query, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_458390ae12cd6ce5bdd046cf3d399902->m_type_description == NULL);
    frame_458390ae12cd6ce5bdd046cf3d399902 = cache_frame_458390ae12cd6ce5bdd046cf3d399902;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_458390ae12cd6ce5bdd046cf3d399902);
    assert(Py_REFCNT(frame_458390ae12cd6ce5bdd046cf3d399902) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_458390ae12cd6ce5bdd046cf3d399902->m_frame.f_lineno = 421;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[44],
            PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_hdc == NULL);
        var_hdc = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_args_element_value_2 = mod_consts[29];
        tmp_args_element_value_3 = mod_consts[29];
        tmp_args_element_value_4 = mod_consts[29];
        tmp_args_element_value_5 = mod_consts[29];
        tmp_args_element_value_6 = mod_consts[29];
        tmp_args_element_value_7 = mod_consts[29];
        tmp_args_element_value_8 = mod_consts[29];
        CHECK_OBJECT(par_charset);
        tmp_args_element_value_9 = par_charset;
        tmp_args_element_value_10 = mod_consts[29];
        tmp_args_element_value_11 = mod_consts[29];
        tmp_args_element_value_12 = mod_consts[29];
        tmp_args_element_value_13 = mod_consts[29];
        tmp_args_element_value_14 = mod_consts[37];
        frame_458390ae12cd6ce5bdd046cf3d399902->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS14(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_logfont == NULL);
        var_logfont = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hdc);
        tmp_args_element_value_15 = var_hdc;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        CHECK_OBJECT(var_logfont);
        tmp_args_element_value_17 = var_logfont;
        frame_458390ae12cd6ce5bdd046cf3d399902->m_frame.f_lineno = 443;
        tmp_args_element_value_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[50], tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 443;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 444;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[29];
        tmp_args_element_value_20 = mod_consts[29];
        frame_458390ae12cd6ce5bdd046cf3d399902->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = Py_None;
        CHECK_OBJECT(var_hdc);
        tmp_args_element_value_22 = var_hdc;
        frame_458390ae12cd6ce5bdd046cf3d399902->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[52],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 452;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
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
        exception_tb = MAKE_TRACEBACK(frame_458390ae12cd6ce5bdd046cf3d399902, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_458390ae12cd6ce5bdd046cf3d399902->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_458390ae12cd6ce5bdd046cf3d399902, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_458390ae12cd6ce5bdd046cf3d399902,
        type_description_1,
        par_charset,
        var_hdc,
        var_logfont,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_458390ae12cd6ce5bdd046cf3d399902 == cache_frame_458390ae12cd6ce5bdd046cf3d399902) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_458390ae12cd6ce5bdd046cf3d399902);
        cache_frame_458390ae12cd6ce5bdd046cf3d399902 = NULL;
    }

    assertFrameObject(frame_458390ae12cd6ce5bdd046cf3d399902);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_hdc);
    Py_DECREF(var_hdc);
    var_hdc = NULL;
    CHECK_OBJECT(var_logfont);
    Py_DECREF(var_logfont);
    var_logfont = NULL;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
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

    Py_XDECREF(var_hdc);
    var_hdc = NULL;
    Py_XDECREF(var_logfont);
    var_logfont = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
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
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$font$win32query$$$function__4_have_font(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_refresh = python_pars[1];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_5b5b11f70d8b2a20711831ef6e403c71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5b5b11f70d8b2a20711831ef6e403c71 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b5b11f70d8b2a20711831ef6e403c71)) {
        Py_XDECREF(cache_frame_5b5b11f70d8b2a20711831ef6e403c71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b5b11f70d8b2a20711831ef6e403c71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b5b11f70d8b2a20711831ef6e403c71 = MAKE_FUNCTION_FRAME(tstate, codeobj_5b5b11f70d8b2a20711831ef6e403c71, module_pyglet$font$win32query, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b5b11f70d8b2a20711831ef6e403c71->m_type_description == NULL);
    frame_5b5b11f70d8b2a20711831ef6e403c71 = cache_frame_5b5b11f70d8b2a20711831ef6e403c71;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5b5b11f70d8b2a20711831ef6e403c71);
    assert(Py_REFCNT(frame_5b5b11f70d8b2a20711831ef6e403c71) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        int tmp_truth_name_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_refresh);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_refresh);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        frame_5b5b11f70d8b2a20711831ef6e403c71->m_frame.f_lineno = 464;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_name;
            Py_INCREF(tmp_closure_1[1]);

            tmp_any_arg_1 = MAKE_GENERATOR_pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b5b11f70d8b2a20711831ef6e403c71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b5b11f70d8b2a20711831ef6e403c71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b5b11f70d8b2a20711831ef6e403c71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b5b11f70d8b2a20711831ef6e403c71,
        type_description_1,
        par_name,
        par_refresh
    );


    // Release cached frame if used for exception.
    if (frame_5b5b11f70d8b2a20711831ef6e403c71 == cache_frame_5b5b11f70d8b2a20711831ef6e403c71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b5b11f70d8b2a20711831ef6e403c71);
        cache_frame_5b5b11f70d8b2a20711831ef6e403c71 = NULL;
    }

    assertFrameObject(frame_5b5b11f70d8b2a20711831ef6e403c71);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_refresh);
    Py_DECREF(par_refresh);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_refresh);
    Py_DECREF(par_refresh);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr_locals {
    PyObject *var_f;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
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

static PyObject *pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr_locals *generator_heap = (struct pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_f = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_963688a8512aebace346b0c49212be14, module_pyglet$font$win32query, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 465;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_f;
            generator_heap->var_f = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_f);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_f);
        tmp_expression_value_2 = generator_heap->var_f;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 465;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[0]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 465;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 465;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 465;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 465;
        generator_heap->type_description_1 = "Noc";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
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
            NULL,
            generator_heap->var_f,
            generator->m_closure[1]
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
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_f);
    generator_heap->var_f = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr_context,
        module_pyglet$font$win32query,
        mod_consts[56],
#if PYTHON_VERSION >= 0x350
        mod_consts[57],
#endif
        codeobj_963688a8512aebace346b0c49212be14,
        closure,
        2,
#if 1
        sizeof(struct pyglet$font$win32query$$$function__4_have_font$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pyglet$font$win32query$$$function__5_font_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_vector_only = python_pars[0];
    PyObject *par_monospace_only = python_pars[1];
    PyObject *var_fonts = NULL;
    PyObject *outline_0_var_f = NULL;
    PyObject *outline_1_var_f = NULL;
    PyObject *outline_2_var_f = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_7a8b2309fc97edd06aca94cfe00e7b20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_7a8b2309fc97edd06aca94cfe00e7b20 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7a8b2309fc97edd06aca94cfe00e7b20)) {
        Py_XDECREF(cache_frame_7a8b2309fc97edd06aca94cfe00e7b20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a8b2309fc97edd06aca94cfe00e7b20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a8b2309fc97edd06aca94cfe00e7b20 = MAKE_FUNCTION_FRAME(tstate, codeobj_7a8b2309fc97edd06aca94cfe00e7b20, module_pyglet$font$win32query, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a8b2309fc97edd06aca94cfe00e7b20->m_type_description == NULL);
    frame_7a8b2309fc97edd06aca94cfe00e7b20 = cache_frame_7a8b2309fc97edd06aca94cfe00e7b20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7a8b2309fc97edd06aca94cfe00e7b20);
    assert(Py_REFCNT(frame_7a8b2309fc97edd06aca94cfe00e7b20) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7a8b2309fc97edd06aca94cfe00e7b20->m_frame.f_lineno = 475;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_fonts == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_fonts = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_vector_only);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_vector_only);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_fonts);
            tmp_iter_arg_1 = var_fonts;
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;
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
                    exception_lineno = 479;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_2;
            CHECK_OBJECT(outline_0_var_f);
            tmp_expression_value_1 = outline_0_var_f;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
            if (tmp_attribute_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
            if (tmp_truth_name_2 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_1);

                exception_lineno = 479;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_attribute_value_1);
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
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


                exception_lineno = 479;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooo";
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
        exception_lineno = 479;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_fonts;
            assert(old != NULL);
            var_fonts = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_monospace_only);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_monospace_only);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_fonts);
            tmp_iter_arg_2 = var_fonts;
            tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_9;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooo";
                    exception_lineno = 481;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_11 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_f;
                outline_1_var_f = tmp_assign_source_11;
                Py_INCREF(outline_1_var_f);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_4;
            CHECK_OBJECT(outline_1_var_f);
            tmp_expression_value_2 = outline_1_var_f;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
            if (tmp_attribute_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
            if (tmp_truth_name_4 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_2);

                exception_lineno = 481;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_attribute_value_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_f);
            tmp_append_value_2 = outline_1_var_f;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
        }
        branch_no_5:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_7 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_f);
        outline_1_var_f = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_f);
        outline_1_var_f = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 481;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = var_fonts;
            assert(old != NULL);
            var_fonts = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[58]);
        assert(tmp_called_value_2 != NULL);
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_fonts);
            tmp_iter_arg_3 = var_fonts;
            tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_1 = "ooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_13;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooo";
                    exception_lineno = 483;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_f;
                outline_2_var_f = tmp_assign_source_15;
                Py_INCREF(outline_2_var_f);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_f);
            tmp_expression_value_3 = outline_2_var_f;
            tmp_append_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
            if (tmp_append_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooo";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_args_element_value_1 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
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
        Py_XDECREF(outline_2_var_f);
        outline_2_var_f = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_f);
        outline_2_var_f = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 483;
        goto frame_exception_exit_1;
        outline_result_3:;
        frame_7a8b2309fc97edd06aca94cfe00e7b20->m_frame.f_lineno = 483;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
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
        exception_tb = MAKE_TRACEBACK(frame_7a8b2309fc97edd06aca94cfe00e7b20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a8b2309fc97edd06aca94cfe00e7b20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a8b2309fc97edd06aca94cfe00e7b20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a8b2309fc97edd06aca94cfe00e7b20,
        type_description_1,
        par_vector_only,
        par_monospace_only,
        var_fonts
    );


    // Release cached frame if used for exception.
    if (frame_7a8b2309fc97edd06aca94cfe00e7b20 == cache_frame_7a8b2309fc97edd06aca94cfe00e7b20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a8b2309fc97edd06aca94cfe00e7b20);
        cache_frame_7a8b2309fc97edd06aca94cfe00e7b20 = NULL;
    }

    assertFrameObject(frame_7a8b2309fc97edd06aca94cfe00e7b20);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fonts);
    Py_DECREF(var_fonts);
    var_fonts = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fonts);
    var_fonts = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_vector_only);
    Py_DECREF(par_vector_only);
    CHECK_OBJECT(par_monospace_only);
    Py_DECREF(par_monospace_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_vector_only);
    Py_DECREF(par_vector_only);
    CHECK_OBJECT(par_monospace_only);
    Py_DECREF(par_monospace_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$font$win32query$$$function__1___init__,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_2c9c97a04f493a4ccfe417a31d438d00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$font$win32query,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__2__enum_font_names() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$font$win32query$$$function__2__enum_font_names,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dcd566cfe96238f48bcc8513bab37c05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$font$win32query,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__3_query(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$font$win32query$$$function__3_query,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_458390ae12cd6ce5bdd046cf3d399902,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$font$win32query,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__4_have_font(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$font$win32query$$$function__4_have_font,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5b5b11f70d8b2a20711831ef6e403c71,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$font$win32query,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$font$win32query$$$function__5_font_list(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$font$win32query$$$function__5_font_list,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a8b2309fc97edd06aca94cfe00e7b20,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$font$win32query,
        mod_consts[59],
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

function_impl_code functable_pyglet$font$win32query[] = {
    impl_pyglet$font$win32query$$$function__1___init__,
    impl_pyglet$font$win32query$$$function__2__enum_font_names,
    impl_pyglet$font$win32query$$$function__3_query,
    impl_pyglet$font$win32query$$$function__4_have_font,
    impl_pyglet$font$win32query$$$function__5_font_list,
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

    function_impl_code *current = functable_pyglet$font$win32query;
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

    if (offset > sizeof(functable_pyglet$font$win32query) || offset < 0) {
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
        functable_pyglet$font$win32query[offset],
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
        module_pyglet$font$win32query,
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
PyObject *modulecode_pyglet$font$win32query(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.font.win32query");

    // Store the module for future use.
    module_pyglet$font$win32query = module;

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
        PRINT_STRING("pyglet.font.win32query: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.font.win32query: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$font$win32query\n");

    moduledict_pyglet$font$win32query = MODULE_DICT(module_pyglet$font$win32query);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$font$win32query,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$font$win32query,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[37]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$font$win32query,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$font$win32query,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$font$win32query,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$font$win32query);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$font$win32query);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
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
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e042ccdbb1516af59ae11ebbca4ead93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_pyglet$font$win32query$$$class__1_FontEntry_120 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
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
    PyObject *locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213 = NULL;
    struct Nuitka_FrameObject *frame_3ac6a70f2bedccfa48b32809968b0204_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221 = NULL;
    struct Nuitka_FrameObject *frame_0969c30e986e26dfaa299296df52e6e6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250 = NULL;
    struct Nuitka_FrameObject *frame_d0509377d3f7936f8c61b412b5fa1789_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277 = NULL;
    struct Nuitka_FrameObject *frame_fbaa27e8fa08e8c346d54dc906a3560e_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284 = NULL;
    struct Nuitka_FrameObject *frame_276320c4d926525ad41fa5998d63402a_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_2);
    }
    frame_e042ccdbb1516af59ae11ebbca4ead93 = MAKE_MODULE_FRAME(codeobj_e042ccdbb1516af59ae11ebbca4ead93, module_pyglet$font$win32query);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e042ccdbb1516af59ae11ebbca4ead93);
    assert(Py_REFCNT(frame_e042ccdbb1516af59ae11ebbca4ead93) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[64], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[65], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST2(mod_consts[67],mod_consts[68]);
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$font$win32query$$$class__1_FontEntry_120 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyDict_SetItem(locals_pyglet$font$win32query$$$class__1_FontEntry_120, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyDict_SetItem(locals_pyglet$font$win32query$$$class__1_FontEntry_120, mod_consts[61], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[16];
        tmp_res = PyDict_SetItem(locals_pyglet$font$win32query$$$class__1_FontEntry_120, mod_consts[77], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyglet$font$win32query$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_pyglet$font$win32query$$$class__1_FontEntry_120, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[16];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyglet$font$win32query$$$class__1_FontEntry_120;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 120;
            tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$font$win32query$$$class__1_FontEntry_120);
        locals_pyglet$font$win32query$$$class__1_FontEntry_120 = NULL;
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

        Py_DECREF(locals_pyglet$font$win32query$$$class__1_FontEntry_120);
        locals_pyglet$font$win32query$$$class__1_FontEntry_120 = NULL;
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
        exception_lineno = 120;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_14 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[82];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$font$win32query;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[83];
        tmp_level_value_1 = mod_consts[29];
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 156;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$font$win32query,
                mod_consts[84],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[84]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$font$win32query,
                mod_consts[46],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[46]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_17);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[85]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[43]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[85]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[47]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[86]);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_assign_source_21 == NULL)) {
            tmp_assign_source_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        assert(!(tmp_assign_source_21 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[89]);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = (PyObject *)moduledict_pyglet$font$win32query;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[127]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 195;
        tmp_expression_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[128]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 195;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_43 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_43;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_44 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 195;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_45 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_46 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 195;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_47 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 195;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_47;
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


                    exception_lineno = 195;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[129];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 195;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_48 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_48);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_49 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_49);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_5;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[131]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_5;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 196;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[132]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_5;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 196;

            goto try_except_handler_5;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto try_except_handler_5;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto try_except_handler_5;
        }
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_ass_subscript_1 == NULL)) {
            tmp_ass_subscript_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto try_except_handler_5;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto try_except_handler_5;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 195;

        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_58);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[141]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_59, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_60 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_11 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = mod_consts[29];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[142]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[142]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_tuple_element_3 = mod_consts[143];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 213;
        tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_14 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[144]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[145];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_name_value_2 = mod_consts[146];
        tmp_default_value_1 = mod_consts[147];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[146]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 213;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_64;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        frame_3ac6a70f2bedccfa48b32809968b0204_2 = MAKE_CLASS_FRAME(tstate, codeobj_3ac6a70f2bedccfa48b32809968b0204, module_pyglet$font$win32query, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3ac6a70f2bedccfa48b32809968b0204_2);
        assert(Py_REFCNT(frame_3ac6a70f2bedccfa48b32809968b0204_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_5;
            tmp_tuple_element_5 = mod_consts[148];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_mult_expr_left_1;
                PyObject *tmp_mult_expr_right_1;
                PyObject *tmp_expression_value_17;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                }

                assert(!(tmp_expression_value_17 == NULL));
                tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[149]);
                if (tmp_mult_expr_left_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                tmp_mult_expr_right_1 = mod_consts[7];
                tmp_tuple_element_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                Py_DECREF(tmp_mult_expr_left_1);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
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
                PyObject *tmp_tuple_element_6;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[150];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_2;
                    PyObject *tmp_mult_expr_right_2;
                    PyObject *tmp_expression_value_18;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_18 == NULL));
                    tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[149]);
                    if (tmp_mult_expr_left_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    tmp_mult_expr_right_2 = mod_consts[36];
                    tmp_tuple_element_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
                    Py_DECREF(tmp_mult_expr_left_2);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                }
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
            tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3ac6a70f2bedccfa48b32809968b0204_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3ac6a70f2bedccfa48b32809968b0204_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3ac6a70f2bedccfa48b32809968b0204_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3ac6a70f2bedccfa48b32809968b0204_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3ac6a70f2bedccfa48b32809968b0204_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_10;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_10;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[143];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 213;
            tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_65 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213);
        locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213 = NULL;
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

        Py_DECREF(locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213);
        locals_pyglet$font$win32query$$$class__2_FONTSIGNATURE_213 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 213;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_65);
    }
    goto try_end_6;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_19 == NULL));
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[141]);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        tmp_assign_source_67 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_67, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_68 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_20 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[29];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_70;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[142]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_22 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[142]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        tmp_tuple_element_9 = mod_consts[153];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_9 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 221;
        tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_23 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts[144]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
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
        tmp_mod_expr_left_2 = mod_consts[145];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_24 = tmp_class_creation_3__metaclass;
        tmp_name_value_3 = mod_consts[146];
        tmp_default_value_2 = mod_consts[147];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_3, tmp_default_value_2);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[146]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 221;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_72;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_13;
        }
        frame_0969c30e986e26dfaa299296df52e6e6_3 = MAKE_CLASS_FRAME(tstate, codeobj_0969c30e986e26dfaa299296df52e6e6, module_pyglet$font$win32query, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0969c30e986e26dfaa299296df52e6e6_3);
        assert(Py_REFCNT(frame_0969c30e986e26dfaa299296df52e6e6_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_11;
            tmp_tuple_element_11 = mod_consts[154];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_26;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_11);
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                }

                assert(!(tmp_expression_value_26 == NULL));
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[155]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 225;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dictset_value = MAKE_LIST_EMPTY(24);
            {
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_tuple_element_22;
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
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_12 = mod_consts[156];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_27;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_27 == NULL));
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[155]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_13 = mod_consts[157];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_28;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_28 == NULL));
                    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[155]);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_14 = mod_consts[158];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_29;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_29 == NULL));
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[155]);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 228;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_15 = mod_consts[159];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_30;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_30 == NULL));
                    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[155]);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
                tmp_tuple_element_16 = mod_consts[160];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_31;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_16);
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_31 == NULL));
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[155]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 230;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_2);
                tmp_tuple_element_17 = mod_consts[161];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_32;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_32 == NULL));
                    tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[155]);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 231;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_2);
                tmp_tuple_element_18 = mod_consts[162];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_33;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_18);
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_33 == NULL));
                    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[155]);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 232;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_18);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_2);
                tmp_tuple_element_19 = mod_consts[163];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_34;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_19);
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_34 == NULL));
                    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[155]);
                    if (tmp_tuple_element_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 233;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_19);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_2);
                tmp_tuple_element_20 = mod_consts[164];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_35;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_20);
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_35 == NULL));
                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[155]);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_2);
                tmp_tuple_element_21 = mod_consts[165];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_36;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_21);
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_36 == NULL));
                    tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[155]);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 235;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_2);
                tmp_tuple_element_22 = mod_consts[166];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_22);
                tmp_tuple_element_22 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[88]);

                if (tmp_tuple_element_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_22 == NULL)) {
                            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
                        }

                        if (tmp_tuple_element_22 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 236;
                            type_description_2 = "o";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_22);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_22);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_2);
                tmp_tuple_element_23 = mod_consts[167];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[88]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_23 == NULL)) {
                            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
                        }

                        if (tmp_tuple_element_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 237;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_23);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_2);
                tmp_tuple_element_24 = mod_consts[168];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[88]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_24 == NULL)) {
                            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
                        }

                        if (tmp_tuple_element_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_24);
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_2);
                tmp_tuple_element_25 = mod_consts[169];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[88]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_25 == NULL)) {
                            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
                        }

                        if (tmp_tuple_element_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 239;
                            type_description_2 = "o";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_25);
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_2);
                tmp_tuple_element_26 = mod_consts[170];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[90]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 240;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_26);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_2);
                tmp_tuple_element_27 = mod_consts[171];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_27);
                tmp_tuple_element_27 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[90]);

                if (tmp_tuple_element_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_27 == NULL)) {
                            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 241;
                            type_description_2 = "o";
                            goto tuple_build_exception_21;
                        }
                        Py_INCREF(tmp_tuple_element_27);
                    } else {
                        goto tuple_build_exception_21;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_27);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_2);
                tmp_tuple_element_28 = mod_consts[172];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[90]);

                if (tmp_tuple_element_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_28 == NULL)) {
                            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 242;
                            type_description_2 = "o";
                            goto tuple_build_exception_22;
                        }
                        Py_INCREF(tmp_tuple_element_28);
                    } else {
                        goto tuple_build_exception_22;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_28);
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_2);
                tmp_tuple_element_29 = mod_consts[173];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[90]);

                if (tmp_tuple_element_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_29 == NULL)) {
                            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_tuple_element_29);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_29);
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_2);
                tmp_tuple_element_30 = mod_consts[174];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[90]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 244;
                            type_description_2 = "o";
                            goto tuple_build_exception_24;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_30);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_2);
                tmp_tuple_element_31 = mod_consts[175];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_37;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_31);
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_37 == NULL));
                    tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[149]);
                    if (tmp_tuple_element_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_2 = "o";
                        goto tuple_build_exception_25;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_31);
                }
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_2);
                tmp_tuple_element_32 = mod_consts[176];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_38;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_32);
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_38 == NULL));
                    tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[177]);
                    if (tmp_tuple_element_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 246;
                        type_description_2 = "o";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_32);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_2);
                tmp_tuple_element_33 = mod_consts[178];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_39;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_33);
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_39 == NULL));
                    tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[177]);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 247;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_2);
                tmp_tuple_element_34 = mod_consts[179];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_40;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_34);
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_40 == NULL));
                    tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[177]);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 248;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0969c30e986e26dfaa299296df52e6e6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0969c30e986e26dfaa299296df52e6e6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0969c30e986e26dfaa299296df52e6e6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0969c30e986e26dfaa299296df52e6e6_3,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_0969c30e986e26dfaa299296df52e6e6_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_13;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_13;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_35 = mod_consts[153];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_35 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 221;
            tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto try_except_handler_13;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_73 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221);
        locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221 = NULL;
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

        Py_DECREF(locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221);
        locals_pyglet$font$win32query$$$class__3_NEWTEXTMETRIC_221 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 221;
        goto try_except_handler_11;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_73);
    }
    goto try_end_7;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_expression_value_41;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_41 == NULL));
        tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[141]);
        if (tmp_tuple_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_assign_source_75 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_75, 0, tmp_tuple_element_36);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_76 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_42 = tmp_class_creation_4__bases;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_3 = tmp_class_creation_4__bases;
        tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_43 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts[142]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_6;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_44 = tmp_class_creation_4__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[142]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_tuple_element_37 = mod_consts[180];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_37 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 250;
        tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_6);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_79;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_45 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts[144]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[145];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_46 = tmp_class_creation_4__metaclass;
        tmp_name_value_4 = mod_consts[146];
        tmp_default_value_3 = mod_consts[147];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_46, tmp_name_value_4, tmp_default_value_3);
        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_47;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_6 = tmp_class_creation_4__prepared;
            tmp_expression_value_47 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_47 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[146]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 250;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_80;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_16;
        }
        frame_d0509377d3f7936f8c61b412b5fa1789_4 = MAKE_CLASS_FRAME(tstate, codeobj_d0509377d3f7936f8c61b412b5fa1789, module_pyglet$font$win32query, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d0509377d3f7936f8c61b412b5fa1789_4);
        assert(Py_REFCNT(frame_d0509377d3f7936f8c61b412b5fa1789_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_39;
            tmp_tuple_element_39 = mod_consts[154];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_48;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_39);
                tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                if (unlikely(tmp_expression_value_48 == NULL)) {
                    tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                }

                assert(!(tmp_expression_value_48 == NULL));
                tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[155]);
                if (tmp_tuple_element_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_2 = "o";
                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_39);
            }
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_dictset_value = MAKE_LIST_EMPTY(24);
            {
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_tuple_element_46;
                PyObject *tmp_tuple_element_47;
                PyObject *tmp_tuple_element_48;
                PyObject *tmp_tuple_element_49;
                PyObject *tmp_tuple_element_50;
                PyObject *tmp_tuple_element_51;
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_tuple_element_53;
                PyObject *tmp_tuple_element_54;
                PyObject *tmp_tuple_element_55;
                PyObject *tmp_tuple_element_56;
                PyObject *tmp_tuple_element_57;
                PyObject *tmp_tuple_element_58;
                PyObject *tmp_tuple_element_59;
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_tuple_element_62;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_40 = mod_consts[156];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_49;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_40);
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_49 == NULL));
                    tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[155]);
                    if (tmp_tuple_element_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 253;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_40);
                }
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_41 = mod_consts[157];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_50;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_41);
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_50 == NULL));
                    tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[155]);
                    if (tmp_tuple_element_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "o";
                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_41);
                }
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_42 = mod_consts[158];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_51;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_42);
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_51 == NULL));
                    tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[155]);
                    if (tmp_tuple_element_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "o";
                        goto tuple_build_exception_33;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_42);
                }
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_43 = mod_consts[159];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_52;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_43);
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_52 == NULL));
                    tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[155]);
                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 256;
                        type_description_2 = "o";
                        goto tuple_build_exception_34;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_43);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_3);
                tmp_tuple_element_44 = mod_consts[160];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_53;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_44);
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_53 == NULL));
                    tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[155]);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_3);
                tmp_tuple_element_45 = mod_consts[161];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_54;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_45);
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_54 == NULL));
                    tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[155]);
                    if (tmp_tuple_element_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 258;
                        type_description_2 = "o";
                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_45);
                }
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_3);
                tmp_tuple_element_46 = mod_consts[162];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_55;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_46);
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_55 == NULL));
                    tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[155]);
                    if (tmp_tuple_element_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 259;
                        type_description_2 = "o";
                        goto tuple_build_exception_37;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_46);
                }
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_3);
                tmp_tuple_element_47 = mod_consts[163];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_56;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_47);
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_56 == NULL));
                    tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[155]);
                    if (tmp_tuple_element_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 260;
                        type_description_2 = "o";
                        goto tuple_build_exception_38;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_47);
                }
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_3);
                tmp_tuple_element_48 = mod_consts[164];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_57;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_48);
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_57 == NULL));
                    tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[155]);
                    if (tmp_tuple_element_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 261;
                        type_description_2 = "o";
                        goto tuple_build_exception_39;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_48);
                }
                goto tuple_build_noexception_39;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_39:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_39:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_3);
                tmp_tuple_element_49 = mod_consts[165];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_58;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_49);
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_58 == NULL));
                    tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[155]);
                    if (tmp_tuple_element_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto tuple_build_exception_40;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_49);
                }
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_3);
                tmp_tuple_element_50 = mod_consts[166];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_59;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_50);
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_59 == NULL));
                    tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[181]);
                    if (tmp_tuple_element_50 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_2 = "o";
                        goto tuple_build_exception_41;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_50);
                }
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_3);
                tmp_tuple_element_51 = mod_consts[167];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_60;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_51);
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_60 == NULL));
                    tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[181]);
                    if (tmp_tuple_element_51 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 264;
                        type_description_2 = "o";
                        goto tuple_build_exception_42;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_51);
                }
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_3);
                tmp_tuple_element_52 = mod_consts[168];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_61;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_52);
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_61 == NULL));
                    tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[181]);
                    if (tmp_tuple_element_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 265;
                        type_description_2 = "o";
                        goto tuple_build_exception_43;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_52);
                }
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_3);
                tmp_tuple_element_53 = mod_consts[169];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_62;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_53);
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_62 == NULL));
                    tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[181]);
                    if (tmp_tuple_element_53 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 266;
                        type_description_2 = "o";
                        goto tuple_build_exception_44;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_53);
                }
                goto tuple_build_noexception_44;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_44:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_44:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_3);
                tmp_tuple_element_54 = mod_consts[170];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_54);
                tmp_tuple_element_54 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[90]);

                if (tmp_tuple_element_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_54 == NULL)) {
                            tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 267;
                            type_description_2 = "o";
                            goto tuple_build_exception_45;
                        }
                        Py_INCREF(tmp_tuple_element_54);
                    } else {
                        goto tuple_build_exception_45;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_54);
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_45:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_3);
                tmp_tuple_element_55 = mod_consts[171];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_55);
                tmp_tuple_element_55 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[90]);

                if (tmp_tuple_element_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_55 == NULL)) {
                            tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_55 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 268;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_tuple_element_55);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_55);
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_3);
                tmp_tuple_element_56 = mod_consts[172];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_56);
                tmp_tuple_element_56 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[90]);

                if (tmp_tuple_element_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_56 == NULL)) {
                            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_56 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 269;
                            type_description_2 = "o";
                            goto tuple_build_exception_47;
                        }
                        Py_INCREF(tmp_tuple_element_56);
                    } else {
                        goto tuple_build_exception_47;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_56);
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_47:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_3);
                tmp_tuple_element_57 = mod_consts[173];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_57);
                tmp_tuple_element_57 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[90]);

                if (tmp_tuple_element_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_57 == NULL)) {
                            tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 270;
                            type_description_2 = "o";
                            goto tuple_build_exception_48;
                        }
                        Py_INCREF(tmp_tuple_element_57);
                    } else {
                        goto tuple_build_exception_48;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_57);
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_3);
                tmp_tuple_element_58 = mod_consts[174];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_58);
                tmp_tuple_element_58 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[90]);

                if (tmp_tuple_element_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_tuple_element_58 == NULL)) {
                            tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
                        }

                        if (tmp_tuple_element_58 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 271;
                            type_description_2 = "o";
                            goto tuple_build_exception_49;
                        }
                        Py_INCREF(tmp_tuple_element_58);
                    } else {
                        goto tuple_build_exception_49;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_58);
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_3);
                tmp_tuple_element_59 = mod_consts[175];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_63;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_59);
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_63 == NULL));
                    tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[149]);
                    if (tmp_tuple_element_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_2 = "o";
                        goto tuple_build_exception_50;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_59);
                }
                goto tuple_build_noexception_50;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_50:;
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_3);
                tmp_tuple_element_60 = mod_consts[176];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_64;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_60);
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_64 == NULL));
                    tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[177]);
                    if (tmp_tuple_element_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_2 = "o";
                        goto tuple_build_exception_51;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_60);
                }
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_51:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_3);
                tmp_tuple_element_61 = mod_consts[178];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_65;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_61);
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_65 == NULL));
                    tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[177]);
                    if (tmp_tuple_element_61 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 274;
                        type_description_2 = "o";
                        goto tuple_build_exception_52;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_61);
                }
                goto tuple_build_noexception_52;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_52:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_52:;
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_3);
                tmp_tuple_element_62 = mod_consts[179];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_66;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_62);
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                    }

                    assert(!(tmp_expression_value_66 == NULL));
                    tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[177]);
                    if (tmp_tuple_element_62 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 275;
                        type_description_2 = "o";
                        goto tuple_build_exception_53;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_62);
                }
                goto tuple_build_noexception_53;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_53:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_53:;
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d0509377d3f7936f8c61b412b5fa1789_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d0509377d3f7936f8c61b412b5fa1789_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d0509377d3f7936f8c61b412b5fa1789_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d0509377d3f7936f8c61b412b5fa1789_4,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_d0509377d3f7936f8c61b412b5fa1789_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_16;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_16;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_63 = mod_consts[180];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_63 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 250;
            tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_16;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_81 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250);
        locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250);
        locals_pyglet$font$win32query$$$class__4_NEWTEXTMETRICW_250 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 250;
        goto try_except_handler_14;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_81);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
        PyObject *tmp_assign_source_83;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_67 == NULL));
        tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[141]);
        if (tmp_tuple_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        tmp_assign_source_83 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_83, 0, tmp_tuple_element_64);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_84 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        tmp_condition_result_14 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_68 = tmp_class_creation_5__bases;
        tmp_subscript_value_4 = mod_consts[29];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_4 = tmp_class_creation_5__bases;
        tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_69 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts[142]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_kwargs_value_8;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_70 = tmp_class_creation_5__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[142]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        tmp_tuple_element_65 = mod_consts[182];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_65 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 277;
        tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_8);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_71 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts[144]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[145];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_72 = tmp_class_creation_5__metaclass;
        tmp_name_value_5 = mod_consts[146];
        tmp_default_value_4 = mod_consts[147];
        tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_72, tmp_name_value_5, tmp_default_value_4);
        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_8 = tmp_class_creation_5__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[146]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 277;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_88;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_89;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[182];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_19;
        }
        frame_fbaa27e8fa08e8c346d54dc906a3560e_5 = MAKE_CLASS_FRAME(tstate, codeobj_fbaa27e8fa08e8c346d54dc906a3560e, module_pyglet$font$win32query, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_fbaa27e8fa08e8c346d54dc906a3560e_5);
        assert(Py_REFCNT(frame_fbaa27e8fa08e8c346d54dc906a3560e_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_67;
            tmp_tuple_element_67 = mod_consts[183];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277, mod_consts[153]);

            if (tmp_tuple_element_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[153]);

                    if (unlikely(tmp_tuple_element_67 == NULL)) {
                        tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
                    }

                    if (tmp_tuple_element_67 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_2 = "o";
                        goto tuple_build_exception_55;
                    }
                    Py_INCREF(tmp_tuple_element_67);
                } else {
                    goto tuple_build_exception_55;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_67);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_68;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_68 = mod_consts[184];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_68);
                tmp_tuple_element_68 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277, mod_consts[143]);

                if (tmp_tuple_element_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_tuple_element_68 == NULL)) {
                            tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
                        }

                        if (tmp_tuple_element_68 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 282;
                            type_description_2 = "o";
                            goto tuple_build_exception_56;
                        }
                        Py_INCREF(tmp_tuple_element_68);
                    } else {
                        goto tuple_build_exception_56;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_68);
                goto tuple_build_noexception_56;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_56:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_56:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fbaa27e8fa08e8c346d54dc906a3560e_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fbaa27e8fa08e8c346d54dc906a3560e_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fbaa27e8fa08e8c346d54dc906a3560e_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fbaa27e8fa08e8c346d54dc906a3560e_5,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_fbaa27e8fa08e8c346d54dc906a3560e_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_19;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_19;
        }
        branch_no_13:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_69 = mod_consts[182];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_69 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_69);
            tmp_tuple_element_69 = locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 277;
            tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto try_except_handler_19;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_90;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_89 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_89);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277);
        locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277);
        locals_pyglet$font$win32query$$$class__5_NEWTEXTMETRICEX_277 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 277;
        goto try_except_handler_17;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_89);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
        PyObject *tmp_assign_source_91;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_74 == NULL));
        tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[141]);
        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_assign_source_91 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_91, 0, tmp_tuple_element_70);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_92 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_condition_result_18 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_75 = tmp_class_creation_6__bases;
        tmp_subscript_value_5 = mod_consts[29];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_5 = tmp_class_creation_6__bases;
        tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_94;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_76 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[142]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_71;
        PyObject *tmp_kwargs_value_10;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_77 = tmp_class_creation_6__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[142]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_tuple_element_71 = mod_consts[185];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_71);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_71 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_71);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_10 = tmp_class_creation_6__class_decl_dict;
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 284;
        tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_10);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_95;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_78 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts[144]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[145];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_79 = tmp_class_creation_6__metaclass;
        tmp_name_value_6 = mod_consts[146];
        tmp_default_value_5 = mod_consts[147];
        tmp_tuple_element_72 = BUILTIN_GETATTR(tstate, tmp_expression_value_79, tmp_name_value_6, tmp_default_value_5);
        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_72);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_10 = tmp_class_creation_6__prepared;
            tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_80 == NULL));
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[146]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_72);
        }
        goto tuple_build_noexception_57;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_57:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 284;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_96;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_97;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[185];
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_22;
        }
        frame_276320c4d926525ad41fa5998d63402a_6 = MAKE_CLASS_FRAME(tstate, codeobj_276320c4d926525ad41fa5998d63402a, module_pyglet$font$win32query, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_276320c4d926525ad41fa5998d63402a_6);
        assert(Py_REFCNT(frame_276320c4d926525ad41fa5998d63402a_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_73;
            tmp_tuple_element_73 = mod_consts[183];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284, mod_consts[180]);

            if (tmp_tuple_element_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[180]);

                    if (unlikely(tmp_tuple_element_73 == NULL)) {
                        tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
                    }

                    if (tmp_tuple_element_73 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 286;
                        type_description_2 = "o";
                        goto tuple_build_exception_58;
                    }
                    Py_INCREF(tmp_tuple_element_73);
                } else {
                    goto tuple_build_exception_58;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_73);
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_74;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_74 = mod_consts[184];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_74);
                tmp_tuple_element_74 = PyObject_GetItem(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284, mod_consts[143]);

                if (tmp_tuple_element_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[143]);

                        if (unlikely(tmp_tuple_element_74 == NULL)) {
                            tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
                        }

                        if (tmp_tuple_element_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 287;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_tuple_element_74);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_74);
                goto tuple_build_noexception_59;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_59:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_59:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_276320c4d926525ad41fa5998d63402a_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_276320c4d926525ad41fa5998d63402a_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_276320c4d926525ad41fa5998d63402a_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_276320c4d926525ad41fa5998d63402a_6,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_276320c4d926525ad41fa5998d63402a_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_22;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_22;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_14 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_75 = mod_consts[185];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_75 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 284;
            tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto try_except_handler_22;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_98;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_97 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_97);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284);
        locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284);
        locals_pyglet$font$win32query$$$class__6_NEWTEXTMETRICEXW_284 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 284;
        goto try_except_handler_20;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_97);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
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
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
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
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_86;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_81 == NULL));
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[186]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_82 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[187]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_83 == NULL));
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[188]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 293;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_16);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_84 == NULL));
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[188]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 294;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_17);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_expression_value_85 == NULL));
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[149]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_expression_value_86 == NULL));
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[189]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_92;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_87 == NULL));
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[186]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_88 == NULL));
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[187]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_89 == NULL));
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[188]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 304;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_19);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        assert(!(tmp_expression_value_90 == NULL));
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[188]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[185]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[185]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 305;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_20);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_expression_value_91 == NULL));
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[149]);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_expression_value_92 == NULL));
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[189]);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_11, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_6;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_97;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_expression_value_93 == NULL));
        tmp_list_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[192]);
        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_6);
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            assert(!(tmp_expression_value_94 == NULL));
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[188]);
            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto list_build_exception_6;
            }
            tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_args_element_value_15 == NULL)) {
                tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
            }

            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 314;

                goto list_build_exception_6;
            }
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 314;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_21);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[190]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM0(tmp_assattr_value_3, 2, tmp_list_element_6);
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            assert(!(tmp_expression_value_95 == NULL));
            tmp_list_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[189]);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 3, tmp_list_element_6);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            assert(!(tmp_expression_value_96 == NULL));
            tmp_list_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[149]);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 4, tmp_list_element_6);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[193]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[194], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_list_element_7;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_102;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        assert(!(tmp_expression_value_98 == NULL));
        tmp_list_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[192]);
        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyList_SET_ITEM(tmp_assattr_value_4, 0, tmp_list_element_7);
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            assert(!(tmp_expression_value_99 == NULL));
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[188]);
            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto list_build_exception_7;
            }
            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_args_element_value_16 == NULL)) {
                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 322;

                goto list_build_exception_7;
            }
            frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 322;
            tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_22);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_4, 1, tmp_list_element_7);
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[191]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
            }

            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM0(tmp_assattr_value_4, 2, tmp_list_element_7);
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            assert(!(tmp_expression_value_100 == NULL));
            tmp_list_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[189]);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_4, 3, tmp_list_element_7);
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            assert(!(tmp_expression_value_101 == NULL));
            tmp_list_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[149]);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_4, 4, tmp_list_element_7);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[48]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[194], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_101;


        tmp_assign_source_101 = MAKE_FUNCTION_pyglet$font$win32query$$$function__2__enum_font_names();

        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_args_element_value_17 == NULL));
        frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame.f_lineno = 400;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_17);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_76;
        tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_76 == NULL)) {
            tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_76);


        tmp_assign_source_103 = MAKE_FUNCTION_pyglet$font$win32query$$$function__3_query(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_103);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e042ccdbb1516af59ae11ebbca4ead93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e042ccdbb1516af59ae11ebbca4ead93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e042ccdbb1516af59ae11ebbca4ead93, exception_lineno);
    }



    assertFrameObject(frame_e042ccdbb1516af59ae11ebbca4ead93);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[196];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_104 = MAKE_FUNCTION_pyglet$font$win32query$$$function__4_have_font(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[197];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_105 = MAKE_FUNCTION_pyglet$font$win32query$$$function__5_font_list(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_105);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.font.win32query", false);

    Py_INCREF(module_pyglet$font$win32query);
    return module_pyglet$font$win32query;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$font$win32query, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$font$win32query", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
