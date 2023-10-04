/* Generated code for Python module 'pyglet.image.codecs.gdiplus'
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

/* The "module_pyglet$image$codecs$gdiplus" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$image$codecs$gdiplus;
PyDictObject *moduledict_pyglet$image$codecs$gdiplus;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[223];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[223];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.image.codecs.gdiplus"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 223; i++) {
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
void checkModuleConstants_pyglet$image$codecs$gdiplus(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 223; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c342bdf8c6f322c4efa8f4d161dc9820;
static PyCodeObject *codeobj_e9a298b6c55efe86584080a4ca95f567;
static PyCodeObject *codeobj_ea6542ff74c8c16e8ededf1a03f68da0;
static PyCodeObject *codeobj_b10de2d44f2fe81e2617a0b64bc42898;
static PyCodeObject *codeobj_28d94f22391f56854f9ff745a0b8621d;
static PyCodeObject *codeobj_bf3e17dd38aa617bfe1861ad434e0f06;
static PyCodeObject *codeobj_2eb1340e8730a5d0efac805b2c25cefe;
static PyCodeObject *codeobj_02a898cb7a6eef318f5be828b197798e;
static PyCodeObject *codeobj_94da9c9c3506fff14b5aa300f5268830;
static PyCodeObject *codeobj_d82a934ff6aac2ba07d162ec6ab52fce;
static PyCodeObject *codeobj_57be29e96a13f47dffec8a5eea7682b1;
static PyCodeObject *codeobj_291188ab7aec9f618efa9e759947177e;
static PyCodeObject *codeobj_106d5cc027836169cdf7f78f516fac28;
static PyCodeObject *codeobj_f36767dda39086a4a981bb42bb27cf54;
static PyCodeObject *codeobj_1f220396c55c2b76f001bd25a605b1b6;
static PyCodeObject *codeobj_26a7b3ed7d6d5513ed070dda91d5610b;
static PyCodeObject *codeobj_699ed339bfdbe23bcfb24054ce9970db;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[212]); CHECK_OBJECT(module_filename_obj);
    codeobj_c342bdf8c6f322c4efa8f4d161dc9820 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[213], mod_consts[213], NULL, NULL, 0, 0, 0);
    codeobj_e9a298b6c55efe86584080a4ca95f567 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ea6542ff74c8c16e8ededf1a03f68da0 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b10de2d44f2fe81e2617a0b64bc42898 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[214], NULL, 0, 0, 0);
    codeobj_28d94f22391f56854f9ff745a0b8621d = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[214], NULL, 0, 0, 0);
    codeobj_bf3e17dd38aa617bfe1861ad434e0f06 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[214], NULL, 0, 0, 0);
    codeobj_2eb1340e8730a5d0efac805b2c25cefe = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[214], NULL, 0, 0, 0);
    codeobj_02a898cb7a6eef318f5be828b197798e = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[215], NULL, 2, 0, 0);
    codeobj_94da9c9c3506fff14b5aa300f5268830 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[216], NULL, 1, 0, 0);
    codeobj_d82a934ff6aac2ba07d162ec6ab52fce = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[217], NULL, 3, 0, 0);
    codeobj_57be29e96a13f47dffec8a5eea7682b1 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[218], NULL, 3, 0, 0);
    codeobj_291188ab7aec9f618efa9e759947177e = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[219], NULL, 3, 0, 0);
    codeobj_106d5cc027836169cdf7f78f516fac28 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[220], NULL, 1, 0, 0);
    codeobj_f36767dda39086a4a981bb42bb27cf54 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], NULL, NULL, 0, 0, 0);
    codeobj_1f220396c55c2b76f001bd25a605b1b6 = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], NULL, NULL, 0, 0, 0);
    codeobj_26a7b3ed7d6d5513ed070dda91d5610b = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[220], NULL, 1, 0, 0);
    codeobj_699ed339bfdbe23bcfb24054ce9970db = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[211], mod_consts[211], mod_consts[221], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__10_init();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__1_get_file_extensions();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__2_get_animation_file_extensions();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__3__load_bitmap();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__4__get_image();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__5__delete_bitmap();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__6_decode();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__7_decode_animation();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__8_get_decoders();


static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__9_get_encoders();


// The module function definitions.
static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__1_get_file_extensions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST8(mod_consts[0]);
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


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__2_get_animation_file_extensions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST1(mod_consts[1]);
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


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__3__load_bitmap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    PyObject *par_file = python_pars[2];
    PyObject *var_data = NULL;
    PyObject *var_hglob = NULL;
    PyObject *var_ptr = NULL;
    PyObject *var_bitmap = NULL;
    PyObject *var_status = NULL;
    struct Nuitka_FrameObject *frame_d82a934ff6aac2ba07d162ec6ab52fce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d82a934ff6aac2ba07d162ec6ab52fce = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d82a934ff6aac2ba07d162ec6ab52fce)) {
        Py_XDECREF(cache_frame_d82a934ff6aac2ba07d162ec6ab52fce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d82a934ff6aac2ba07d162ec6ab52fce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d82a934ff6aac2ba07d162ec6ab52fce = MAKE_FUNCTION_FRAME(tstate, codeobj_d82a934ff6aac2ba07d162ec6ab52fce, module_pyglet$image$codecs$gdiplus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d82a934ff6aac2ba07d162ec6ab52fce->m_type_description == NULL);
    frame_d82a934ff6aac2ba07d162ec6ab52fce = cache_frame_d82a934ff6aac2ba07d162ec6ab52fce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d82a934ff6aac2ba07d162ec6ab52fce);
    assert(Py_REFCNT(frame_d82a934ff6aac2ba07d162ec6ab52fce) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_file);
        tmp_called_instance_1 = par_file;
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 201;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_3 = var_data;
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 204;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hglob == NULL);
        var_hglob = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hglob);
        tmp_args_element_value_4 = var_hglob;
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 205;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[7], tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ptr == NULL);
        var_ptr = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_5 = var_ptr;
        CHECK_OBJECT(var_data);
        tmp_args_element_value_6 = var_data;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_8 = var_data;
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 206;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hglob);
        tmp_args_element_value_9 = var_hglob;
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 207;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[9], tmp_args_element_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 210;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[13]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hglob);
        tmp_args_element_value_10 = var_hglob;
        tmp_args_element_value_11 = Py_True;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 211;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 214;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bitmap == NULL);
        var_bitmap = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_16;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[11]);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_16 = var_bitmap;
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 215;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_status == NULL);
        var_status = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_status);
        tmp_cmp_expr_left_1 = var_status;
        tmp_cmp_expr_right_1 = mod_consts[18];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[11]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 217;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[19]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[21];
        CHECK_OBJECT(par_filename);
        tmp_or_left_value_1 = par_filename;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_file);
        tmp_or_right_value_1 = par_file;
        tmp_mod_expr_right_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_mod_expr_right_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_args_element_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame.f_lineno = 218;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 218;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d82a934ff6aac2ba07d162ec6ab52fce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d82a934ff6aac2ba07d162ec6ab52fce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d82a934ff6aac2ba07d162ec6ab52fce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d82a934ff6aac2ba07d162ec6ab52fce,
        type_description_1,
        par_self,
        par_filename,
        par_file,
        var_data,
        var_hglob,
        var_ptr,
        var_bitmap,
        var_status
    );


    // Release cached frame if used for exception.
    if (frame_d82a934ff6aac2ba07d162ec6ab52fce == cache_frame_d82a934ff6aac2ba07d162ec6ab52fce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d82a934ff6aac2ba07d162ec6ab52fce);
        cache_frame_d82a934ff6aac2ba07d162ec6ab52fce = NULL;
    }

    assertFrameObject(frame_d82a934ff6aac2ba07d162ec6ab52fce);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_bitmap);
    tmp_return_value = var_bitmap;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
    CHECK_OBJECT(var_hglob);
    Py_DECREF(var_hglob);
    var_hglob = NULL;
    CHECK_OBJECT(var_ptr);
    Py_DECREF(var_ptr);
    var_ptr = NULL;
    CHECK_OBJECT(var_bitmap);
    Py_DECREF(var_bitmap);
    var_bitmap = NULL;
    CHECK_OBJECT(var_status);
    Py_DECREF(var_status);
    var_status = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_hglob);
    var_hglob = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_bitmap);
    var_bitmap = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__4__get_image(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bitmap = python_pars[0];
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *var_pf = NULL;
    PyObject *var_fmt = NULL;
    PyObject *var_rect = NULL;
    PyObject *var_bitmap_data = NULL;
    PyObject *var_buffer = NULL;
    struct Nuitka_FrameObject *frame_94da9c9c3506fff14b5aa300f5268830;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_94da9c9c3506fff14b5aa300f5268830 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_94da9c9c3506fff14b5aa300f5268830)) {
        Py_XDECREF(cache_frame_94da9c9c3506fff14b5aa300f5268830);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94da9c9c3506fff14b5aa300f5268830 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94da9c9c3506fff14b5aa300f5268830 = MAKE_FUNCTION_FRAME(tstate, codeobj_94da9c9c3506fff14b5aa300f5268830, module_pyglet$image$codecs$gdiplus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94da9c9c3506fff14b5aa300f5268830->m_type_description == NULL);
    frame_94da9c9c3506fff14b5aa300f5268830 = cache_frame_94da9c9c3506fff14b5aa300f5268830;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94da9c9c3506fff14b5aa300f5268830);
    assert(Py_REFCNT(frame_94da9c9c3506fff14b5aa300f5268830) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 225;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 226;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bitmap);
        tmp_args_element_value_1 = par_bitmap;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_args_element_value_3 = var_width;
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 227;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_args_element_value_5 = var_height;
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 227;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_2;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_expression_value_2 = var_width;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 228;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_width;
            assert(old != NULL);
            var_width = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_expression_value_3 = var_height;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 229;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_height;
            assert(old != NULL);
            var_height = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 232;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pf == NULL);
        var_pf = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[27]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bitmap);
        tmp_args_element_value_8 = par_bitmap;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pf);
        tmp_args_element_value_10 = var_pf;
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 233;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_pf);
        tmp_expression_value_5 = var_pf;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[25]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pf;
            assert(old != NULL);
            var_pf = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[28];
        assert(var_fmt == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_fmt = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_pf);
        tmp_cmp_expr_left_1 = var_pf;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[30];
        {
            PyObject *old = var_fmt;
            assert(old != NULL);
            var_fmt = tmp_assign_source_8;
            Py_INCREF(var_fmt);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_pf);
        tmp_cmp_expr_left_2 = var_pf;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
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
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_pf);
        tmp_cmp_expr_left_3 = var_pf;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_pf);
        tmp_cmp_expr_left_4 = var_pf;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_4, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_4, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_4, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_4, 3, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assign_source_9 == NULL)) {
            tmp_assign_source_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pf;
            assert(old != NULL);
            var_pf = tmp_assign_source_9;
            Py_INCREF(var_pf);
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[30];
        {
            PyObject *old = var_fmt;
            assert(old != NULL);
            var_fmt = tmp_assign_source_10;
            Py_INCREF(var_fmt);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assign_source_11 == NULL)) {
            tmp_assign_source_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pf;
            assert(old != NULL);
            var_pf = tmp_assign_source_11;
            Py_INCREF(var_pf);
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    branch_no_3:;
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 252;
        tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rect == NULL);
        var_rect = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[18];
        CHECK_OBJECT(var_rect);
        tmp_assattr_target_1 = var_rect;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[18];
        CHECK_OBJECT(var_rect);
        tmp_assattr_target_2 = var_rect;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_width);
        tmp_assattr_value_3 = var_width;
        CHECK_OBJECT(var_rect);
        tmp_assattr_target_3 = var_rect;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[40], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_height);
        tmp_assattr_value_4 = var_height;
        CHECK_OBJECT(var_rect);
        tmp_assattr_target_4 = var_rect;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[41], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 257;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bitmap_data == NULL);
        var_bitmap_data = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[43]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bitmap);
        tmp_args_element_value_11 = par_bitmap;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rect);
        tmp_args_element_value_13 = var_rect;
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 258;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pf);
        tmp_args_element_value_15 = var_pf;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap_data);
        tmp_args_element_value_17 = var_bitmap_data;
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 258;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_7;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap_data);
        tmp_expression_value_7 = var_bitmap_data;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[46]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_mult_expr_right_1 = var_height;
        tmp_args_element_value_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 261;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_args_element_value_19 = var_buffer;
        CHECK_OBJECT(var_bitmap_data);
        tmp_expression_value_8 = var_bitmap_data;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[47]);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_args_element_value_22 = var_buffer;
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 262;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_22);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_25;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[48]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bitmap);
        tmp_args_element_value_23 = par_bitmap;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap_data);
        tmp_args_element_value_25 = var_bitmap_data;
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 265;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_25);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_10;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_args_element_value_26 = var_width;
        CHECK_OBJECT(var_height);
        tmp_args_element_value_27 = var_height;
        CHECK_OBJECT(var_fmt);
        tmp_args_element_value_28 = var_fmt;
        CHECK_OBJECT(var_buffer);
        tmp_args_element_value_29 = var_buffer;
        CHECK_OBJECT(var_bitmap_data);
        tmp_expression_value_10 = var_bitmap_data;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[46]);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_94da9c9c3506fff14b5aa300f5268830->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_args_element_value_30);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_94da9c9c3506fff14b5aa300f5268830, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94da9c9c3506fff14b5aa300f5268830->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94da9c9c3506fff14b5aa300f5268830, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94da9c9c3506fff14b5aa300f5268830,
        type_description_1,
        par_bitmap,
        var_width,
        var_height,
        var_pf,
        var_fmt,
        var_rect,
        var_bitmap_data,
        var_buffer
    );


    // Release cached frame if used for exception.
    if (frame_94da9c9c3506fff14b5aa300f5268830 == cache_frame_94da9c9c3506fff14b5aa300f5268830) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94da9c9c3506fff14b5aa300f5268830);
        cache_frame_94da9c9c3506fff14b5aa300f5268830 = NULL;
    }

    assertFrameObject(frame_94da9c9c3506fff14b5aa300f5268830);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    CHECK_OBJECT(var_pf);
    Py_DECREF(var_pf);
    var_pf = NULL;
    CHECK_OBJECT(var_fmt);
    Py_DECREF(var_fmt);
    var_fmt = NULL;
    CHECK_OBJECT(var_rect);
    Py_DECREF(var_rect);
    var_rect = NULL;
    CHECK_OBJECT(var_bitmap_data);
    Py_DECREF(var_bitmap_data);
    var_bitmap_data = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
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

    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_pf);
    var_pf = NULL;
    Py_XDECREF(var_fmt);
    var_fmt = NULL;
    Py_XDECREF(var_rect);
    var_rect = NULL;
    Py_XDECREF(var_bitmap_data);
    var_bitmap_data = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
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
    CHECK_OBJECT(par_bitmap);
    Py_DECREF(par_bitmap);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bitmap);
    Py_DECREF(par_bitmap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__5__delete_bitmap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bitmap = python_pars[1];
    struct Nuitka_FrameObject *frame_02a898cb7a6eef318f5be828b197798e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_02a898cb7a6eef318f5be828b197798e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02a898cb7a6eef318f5be828b197798e)) {
        Py_XDECREF(cache_frame_02a898cb7a6eef318f5be828b197798e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02a898cb7a6eef318f5be828b197798e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02a898cb7a6eef318f5be828b197798e = MAKE_FUNCTION_FRAME(tstate, codeobj_02a898cb7a6eef318f5be828b197798e, module_pyglet$image$codecs$gdiplus, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_02a898cb7a6eef318f5be828b197798e->m_type_description == NULL);
    frame_02a898cb7a6eef318f5be828b197798e = cache_frame_02a898cb7a6eef318f5be828b197798e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_02a898cb7a6eef318f5be828b197798e);
    assert(Py_REFCNT(frame_02a898cb7a6eef318f5be828b197798e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bitmap);
        tmp_args_element_value_1 = par_bitmap;
        frame_02a898cb7a6eef318f5be828b197798e->m_frame.f_lineno = 271;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[50], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_02a898cb7a6eef318f5be828b197798e->m_frame.f_lineno = 272;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[19]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02a898cb7a6eef318f5be828b197798e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02a898cb7a6eef318f5be828b197798e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02a898cb7a6eef318f5be828b197798e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02a898cb7a6eef318f5be828b197798e,
        type_description_1,
        par_self,
        par_bitmap
    );


    // Release cached frame if used for exception.
    if (frame_02a898cb7a6eef318f5be828b197798e == cache_frame_02a898cb7a6eef318f5be828b197798e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_02a898cb7a6eef318f5be828b197798e);
        cache_frame_02a898cb7a6eef318f5be828b197798e = NULL;
    }

    assertFrameObject(frame_02a898cb7a6eef318f5be828b197798e);

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
    CHECK_OBJECT(par_bitmap);
    Py_DECREF(par_bitmap);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bitmap);
    Py_DECREF(par_bitmap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__6_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    PyObject *par_file = python_pars[2];
    PyObject *var_bitmap = NULL;
    PyObject *var_image = NULL;
    struct Nuitka_FrameObject *frame_57be29e96a13f47dffec8a5eea7682b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_57be29e96a13f47dffec8a5eea7682b1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_57be29e96a13f47dffec8a5eea7682b1)) {
        Py_XDECREF(cache_frame_57be29e96a13f47dffec8a5eea7682b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57be29e96a13f47dffec8a5eea7682b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57be29e96a13f47dffec8a5eea7682b1 = MAKE_FUNCTION_FRAME(tstate, codeobj_57be29e96a13f47dffec8a5eea7682b1, module_pyglet$image$codecs$gdiplus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57be29e96a13f47dffec8a5eea7682b1->m_type_description == NULL);
    frame_57be29e96a13f47dffec8a5eea7682b1 = cache_frame_57be29e96a13f47dffec8a5eea7682b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_57be29e96a13f47dffec8a5eea7682b1);
    assert(Py_REFCNT(frame_57be29e96a13f47dffec8a5eea7682b1) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_file);
        tmp_operand_value_1 = par_file;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        tmp_args_element_value_2 = mod_consts[52];
        frame_57be29e96a13f47dffec8a5eea7682b1->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_file;
            assert(old != NULL);
            par_file = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_filename == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_filename;
        CHECK_OBJECT(par_file);
        tmp_args_element_value_4 = par_file;
        frame_57be29e96a13f47dffec8a5eea7682b1->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bitmap == NULL);
        var_bitmap = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_5 = var_bitmap;
        frame_57be29e96a13f47dffec8a5eea7682b1->m_frame.f_lineno = 278;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[55], tmp_args_element_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_image == NULL);
        var_image = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_6 = var_bitmap;
        frame_57be29e96a13f47dffec8a5eea7682b1->m_frame.f_lineno = 279;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[56], tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
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
        exception_tb = MAKE_TRACEBACK(frame_57be29e96a13f47dffec8a5eea7682b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57be29e96a13f47dffec8a5eea7682b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57be29e96a13f47dffec8a5eea7682b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57be29e96a13f47dffec8a5eea7682b1,
        type_description_1,
        par_self,
        par_filename,
        par_file,
        var_bitmap,
        var_image
    );


    // Release cached frame if used for exception.
    if (frame_57be29e96a13f47dffec8a5eea7682b1 == cache_frame_57be29e96a13f47dffec8a5eea7682b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57be29e96a13f47dffec8a5eea7682b1);
        cache_frame_57be29e96a13f47dffec8a5eea7682b1 = NULL;
    }

    assertFrameObject(frame_57be29e96a13f47dffec8a5eea7682b1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_image);
    tmp_return_value = var_image;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    par_file = NULL;
    CHECK_OBJECT(var_bitmap);
    Py_DECREF(var_bitmap);
    var_bitmap = NULL;
    CHECK_OBJECT(var_image);
    Py_DECREF(var_image);
    var_image = NULL;
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

    Py_XDECREF(par_file);
    par_file = NULL;
    Py_XDECREF(var_bitmap);
    var_bitmap = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__7_decode_animation(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    PyObject *par_file = python_pars[2];
    PyObject *var_bitmap = NULL;
    PyObject *var_dimension_count = NULL;
    PyObject *var_dimensions = NULL;
    PyObject *var_frame_count = NULL;
    PyObject *var_prop_id = NULL;
    PyObject *var_prop_size = NULL;
    PyObject *var_prop_buffer = NULL;
    PyObject *var_prop_item = NULL;
    PyObject *var_n_delays = NULL;
    PyObject *var_delays = NULL;
    PyObject *var_frames = NULL;
    PyObject *var_i = NULL;
    PyObject *var_image = NULL;
    PyObject *var_delay = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_291188ab7aec9f618efa9e759947177e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_291188ab7aec9f618efa9e759947177e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_291188ab7aec9f618efa9e759947177e)) {
        Py_XDECREF(cache_frame_291188ab7aec9f618efa9e759947177e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_291188ab7aec9f618efa9e759947177e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_291188ab7aec9f618efa9e759947177e = MAKE_FUNCTION_FRAME(tstate, codeobj_291188ab7aec9f618efa9e759947177e, module_pyglet$image$codecs$gdiplus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_291188ab7aec9f618efa9e759947177e->m_type_description == NULL);
    frame_291188ab7aec9f618efa9e759947177e = cache_frame_291188ab7aec9f618efa9e759947177e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_291188ab7aec9f618efa9e759947177e);
    assert(Py_REFCNT(frame_291188ab7aec9f618efa9e759947177e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_file);
        tmp_operand_value_1 = par_file;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        tmp_args_element_value_2 = mod_consts[52];
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_file;
            assert(old != NULL);
            par_file = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_filename == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_filename;
        CHECK_OBJECT(par_file);
        tmp_args_element_value_4 = par_file;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bitmap == NULL);
        var_bitmap = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 287;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dimension_count == NULL);
        var_dimension_count = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[58]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_5 = var_bitmap;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dimension_count);
        tmp_args_element_value_7 = var_dimension_count;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 288;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_dimension_count);
        tmp_expression_value_3 = var_dimension_count;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[59];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_8 = var_bitmap;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 290;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[56], tmp_args_element_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 291;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[60]);

        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 291;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_4;
        tmp_mult_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mult_expr_left_1 == NULL)) {
            tmp_mult_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dimension_count);
        tmp_expression_value_4 = var_dimension_count;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 294;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dimensions == NULL);
        var_dimensions = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[61]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_9 = var_bitmap;
        CHECK_OBJECT(var_dimensions);
        tmp_args_element_value_10 = var_dimensions;
        CHECK_OBJECT(var_dimension_count);
        tmp_expression_value_6 = var_dimension_count;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 297;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame_count == NULL);
        var_frame_count = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[62]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_12 = var_bitmap;
        CHECK_OBJECT(var_dimensions);
        tmp_args_element_value_13 = var_dimensions;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_count);
        tmp_args_element_value_15 = var_frame_count;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 298;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_id == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_prop_id = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 301;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_size == NULL);
        var_prop_size = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[64]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_16 = var_bitmap;
        CHECK_OBJECT(var_prop_id);
        tmp_args_element_value_17 = var_prop_id;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prop_size);
        tmp_args_element_value_19 = var_prop_size;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 302;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_9;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prop_size);
        tmp_expression_value_9 = var_prop_size;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[25]);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 304;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_buffer == NULL);
        var_prop_buffer = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prop_buffer);
        tmp_args_element_value_21 = var_prop_buffer;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 305;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_23);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_expression_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_args_element_value_22);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[69]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_item == NULL);
        var_prop_item = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_27;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[70]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bitmap);
        tmp_args_element_value_24 = var_bitmap;
        CHECK_OBJECT(var_prop_id);
        tmp_args_element_value_25 = var_prop_id;
        CHECK_OBJECT(var_prop_size);
        tmp_expression_value_12 = var_prop_size;
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[25]);
        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prop_buffer);
        tmp_args_element_value_27 = var_prop_buffer;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_28;
        CHECK_OBJECT(var_prop_item);
        tmp_expression_value_13 = var_prop_item;
        tmp_floordiv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[71]);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_floordiv_expr_left_1);

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_floordiv_expr_left_1);

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 308;
        tmp_floordiv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_28);
        if (tmp_floordiv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_floordiv_expr_left_1);

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        Py_DECREF(tmp_floordiv_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_delays == NULL);
        var_n_delays = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prop_item);
        tmp_expression_value_15 = var_prop_item;
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[25]);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_mult_expr_left_2 == NULL)) {
            tmp_mult_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n_delays);
        tmp_mult_expr_right_2 = var_n_delays;
        tmp_args_element_value_31 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 309;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_expression_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[69]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_delays == NULL);
        var_delays = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
        assert(var_frames == NULL);
        var_frames = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_16;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame_count);
        tmp_expression_value_16 = var_frame_count;
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[25]);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 313;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 313;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_15;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[75]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_bitmap == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_33 = var_bitmap;
        if (var_dimensions == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_34 = var_dimensions;
        CHECK_OBJECT(var_i);
        tmp_args_element_value_35 = var_i;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_36;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_18 = par_self;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[55]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_bitmap == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_36 = var_bitmap;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 315;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_24);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_delays);
        tmp_expression_value_19 = var_delays;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_delay;
            var_delay = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_delay);
        tmp_cmp_expr_left_2 = var_delay;
        tmp_cmp_expr_right_2 = mod_consts[59];
        tmp_condition_result_3 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[79];
        {
            PyObject *old = var_delay;
            assert(old != NULL);
            var_delay = tmp_assign_source_18;
            Py_INCREF(var_delay);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (var_frames == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_20 = var_frames;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[81]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_image);
        tmp_args_element_value_38 = var_image;
        CHECK_OBJECT(var_delay);
        tmp_truediv_expr_left_1 = var_delay;
        tmp_truediv_expr_right_1 = mod_consts[83];
        tmp_args_element_value_39 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_args_element_value_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_args_element_value_39);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 320;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 313;
        type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_40;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = par_self;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[56]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_bitmap == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_40 = var_bitmap;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 322;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_41;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_frames == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_41 = var_frames;
        frame_291188ab7aec9f618efa9e759947177e->m_frame.f_lineno = 324;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_41);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_291188ab7aec9f618efa9e759947177e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_291188ab7aec9f618efa9e759947177e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_291188ab7aec9f618efa9e759947177e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_291188ab7aec9f618efa9e759947177e,
        type_description_1,
        par_self,
        par_filename,
        par_file,
        var_bitmap,
        var_dimension_count,
        var_dimensions,
        var_frame_count,
        var_prop_id,
        var_prop_size,
        var_prop_buffer,
        var_prop_item,
        var_n_delays,
        var_delays,
        var_frames,
        var_i,
        var_image,
        var_delay
    );


    // Release cached frame if used for exception.
    if (frame_291188ab7aec9f618efa9e759947177e == cache_frame_291188ab7aec9f618efa9e759947177e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_291188ab7aec9f618efa9e759947177e);
        cache_frame_291188ab7aec9f618efa9e759947177e = NULL;
    }

    assertFrameObject(frame_291188ab7aec9f618efa9e759947177e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    par_file = NULL;
    Py_XDECREF(var_bitmap);
    var_bitmap = NULL;
    CHECK_OBJECT(var_dimension_count);
    Py_DECREF(var_dimension_count);
    var_dimension_count = NULL;
    Py_XDECREF(var_dimensions);
    var_dimensions = NULL;
    CHECK_OBJECT(var_frame_count);
    Py_DECREF(var_frame_count);
    var_frame_count = NULL;
    CHECK_OBJECT(var_prop_id);
    Py_DECREF(var_prop_id);
    var_prop_id = NULL;
    CHECK_OBJECT(var_prop_size);
    Py_DECREF(var_prop_size);
    var_prop_size = NULL;
    CHECK_OBJECT(var_prop_buffer);
    Py_DECREF(var_prop_buffer);
    var_prop_buffer = NULL;
    CHECK_OBJECT(var_prop_item);
    Py_DECREF(var_prop_item);
    var_prop_item = NULL;
    CHECK_OBJECT(var_n_delays);
    Py_DECREF(var_n_delays);
    var_n_delays = NULL;
    CHECK_OBJECT(var_delays);
    Py_DECREF(var_delays);
    var_delays = NULL;
    Py_XDECREF(var_frames);
    var_frames = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
    Py_XDECREF(var_delay);
    var_delay = NULL;
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

    Py_XDECREF(par_file);
    par_file = NULL;
    Py_XDECREF(var_bitmap);
    var_bitmap = NULL;
    Py_XDECREF(var_dimension_count);
    var_dimension_count = NULL;
    Py_XDECREF(var_dimensions);
    var_dimensions = NULL;
    Py_XDECREF(var_frame_count);
    var_frame_count = NULL;
    Py_XDECREF(var_prop_id);
    var_prop_id = NULL;
    Py_XDECREF(var_prop_size);
    var_prop_size = NULL;
    Py_XDECREF(var_prop_buffer);
    var_prop_buffer = NULL;
    Py_XDECREF(var_prop_item);
    var_prop_item = NULL;
    Py_XDECREF(var_n_delays);
    var_n_delays = NULL;
    Py_XDECREF(var_delays);
    var_delays = NULL;
    Py_XDECREF(var_frames);
    var_frames = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_image);
    var_image = NULL;
    Py_XDECREF(var_delay);
    var_delay = NULL;
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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__8_get_decoders(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f36767dda39086a4a981bb42bb27cf54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f36767dda39086a4a981bb42bb27cf54 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f36767dda39086a4a981bb42bb27cf54)) {
        Py_XDECREF(cache_frame_f36767dda39086a4a981bb42bb27cf54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f36767dda39086a4a981bb42bb27cf54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f36767dda39086a4a981bb42bb27cf54 = MAKE_FUNCTION_FRAME(tstate, codeobj_f36767dda39086a4a981bb42bb27cf54, module_pyglet$image$codecs$gdiplus, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f36767dda39086a4a981bb42bb27cf54->m_type_description == NULL);
    frame_f36767dda39086a4a981bb42bb27cf54 = cache_frame_f36767dda39086a4a981bb42bb27cf54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f36767dda39086a4a981bb42bb27cf54);
    assert(Py_REFCNT(frame_f36767dda39086a4a981bb42bb27cf54) == 2);

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        frame_f36767dda39086a4a981bb42bb27cf54->m_frame.f_lineno = 328;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_f36767dda39086a4a981bb42bb27cf54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f36767dda39086a4a981bb42bb27cf54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f36767dda39086a4a981bb42bb27cf54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f36767dda39086a4a981bb42bb27cf54,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f36767dda39086a4a981bb42bb27cf54 == cache_frame_f36767dda39086a4a981bb42bb27cf54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f36767dda39086a4a981bb42bb27cf54);
        cache_frame_f36767dda39086a4a981bb42bb27cf54 = NULL;
    }

    assertFrameObject(frame_f36767dda39086a4a981bb42bb27cf54);

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


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__9_get_encoders(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$image$codecs$gdiplus$$$function__10_init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_token = NULL;
    PyObject *var_startup_in = NULL;
    PyObject *var_startup_out = NULL;
    struct Nuitka_FrameObject *frame_699ed339bfdbe23bcfb24054ce9970db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_699ed339bfdbe23bcfb24054ce9970db = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_699ed339bfdbe23bcfb24054ce9970db)) {
        Py_XDECREF(cache_frame_699ed339bfdbe23bcfb24054ce9970db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_699ed339bfdbe23bcfb24054ce9970db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_699ed339bfdbe23bcfb24054ce9970db = MAKE_FUNCTION_FRAME(tstate, codeobj_699ed339bfdbe23bcfb24054ce9970db, module_pyglet$image$codecs$gdiplus, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_699ed339bfdbe23bcfb24054ce9970db->m_type_description == NULL);
    frame_699ed339bfdbe23bcfb24054ce9970db = cache_frame_699ed339bfdbe23bcfb24054ce9970db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_699ed339bfdbe23bcfb24054ce9970db);
    assert(Py_REFCNT(frame_699ed339bfdbe23bcfb24054ce9970db) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_699ed339bfdbe23bcfb24054ce9970db->m_frame.f_lineno = 336;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_token == NULL);
        var_token = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_699ed339bfdbe23bcfb24054ce9970db->m_frame.f_lineno = 337;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_startup_in == NULL);
        var_startup_in = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[59];
        CHECK_OBJECT(var_startup_in);
        tmp_assattr_target_1 = var_startup_in;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[88], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_699ed339bfdbe23bcfb24054ce9970db->m_frame.f_lineno = 339;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_startup_out == NULL);
        var_startup_out = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_token);
        tmp_args_element_value_2 = var_token;
        frame_699ed339bfdbe23bcfb24054ce9970db->m_frame.f_lineno = 340;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_startup_in);
        tmp_args_element_value_4 = var_startup_in;
        frame_699ed339bfdbe23bcfb24054ce9970db->m_frame.f_lineno = 340;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_startup_out);
        tmp_args_element_value_6 = var_startup_out;
        frame_699ed339bfdbe23bcfb24054ce9970db->m_frame.f_lineno = 340;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_699ed339bfdbe23bcfb24054ce9970db->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
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
        exception_tb = MAKE_TRACEBACK(frame_699ed339bfdbe23bcfb24054ce9970db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_699ed339bfdbe23bcfb24054ce9970db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_699ed339bfdbe23bcfb24054ce9970db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_699ed339bfdbe23bcfb24054ce9970db,
        type_description_1,
        var_token,
        var_startup_in,
        var_startup_out
    );


    // Release cached frame if used for exception.
    if (frame_699ed339bfdbe23bcfb24054ce9970db == cache_frame_699ed339bfdbe23bcfb24054ce9970db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_699ed339bfdbe23bcfb24054ce9970db);
        cache_frame_699ed339bfdbe23bcfb24054ce9970db = NULL;
    }

    assertFrameObject(frame_699ed339bfdbe23bcfb24054ce9970db);

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
    CHECK_OBJECT(var_token);
    Py_DECREF(var_token);
    var_token = NULL;
    CHECK_OBJECT(var_startup_in);
    Py_DECREF(var_startup_in);
    var_startup_in = NULL;
    CHECK_OBJECT(var_startup_out);
    Py_DECREF(var_startup_out);
    var_startup_out = NULL;
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

    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_startup_in);
    var_startup_in = NULL;
    Py_XDECREF(var_startup_out);
    var_startup_out = NULL;
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



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__10_init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__10_init,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_699ed339bfdbe23bcfb24054ce9970db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__1_get_file_extensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__1_get_file_extensions,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_26a7b3ed7d6d5513ed070dda91d5610b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__2_get_animation_file_extensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__2_get_animation_file_extensions,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_106d5cc027836169cdf7f78f516fac28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__3__load_bitmap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__3__load_bitmap,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_d82a934ff6aac2ba07d162ec6ab52fce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__4__get_image() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__4__get_image,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_94da9c9c3506fff14b5aa300f5268830,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__5__delete_bitmap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__5__delete_bitmap,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_02a898cb7a6eef318f5be828b197798e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__6_decode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__6_decode,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_57be29e96a13f47dffec8a5eea7682b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__7_decode_animation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__7_decode_animation,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_291188ab7aec9f618efa9e759947177e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__8_get_decoders() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__8_get_decoders,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f36767dda39086a4a981bb42bb27cf54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__9_get_encoders() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$image$codecs$gdiplus$$$function__9_get_encoders,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f220396c55c2b76f001bd25a605b1b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$image$codecs$gdiplus,
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

function_impl_code functable_pyglet$image$codecs$gdiplus[] = {
    impl_pyglet$image$codecs$gdiplus$$$function__1_get_file_extensions,
    impl_pyglet$image$codecs$gdiplus$$$function__2_get_animation_file_extensions,
    impl_pyglet$image$codecs$gdiplus$$$function__3__load_bitmap,
    impl_pyglet$image$codecs$gdiplus$$$function__4__get_image,
    impl_pyglet$image$codecs$gdiplus$$$function__5__delete_bitmap,
    impl_pyglet$image$codecs$gdiplus$$$function__6_decode,
    impl_pyglet$image$codecs$gdiplus$$$function__7_decode_animation,
    impl_pyglet$image$codecs$gdiplus$$$function__8_get_decoders,
    impl_pyglet$image$codecs$gdiplus$$$function__9_get_encoders,
    impl_pyglet$image$codecs$gdiplus$$$function__10_init,
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

    function_impl_code *current = functable_pyglet$image$codecs$gdiplus;
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

    if (offset > sizeof(functable_pyglet$image$codecs$gdiplus) || offset < 0) {
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
        functable_pyglet$image$codecs$gdiplus[offset],
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
        module_pyglet$image$codecs$gdiplus,
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
PyObject *modulecode_pyglet$image$codecs$gdiplus(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.image.codecs.gdiplus");

    // Store the module for future use.
    module_pyglet$image$codecs$gdiplus = module;

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
        PRINT_STRING("pyglet.image.codecs.gdiplus: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.image.codecs.gdiplus: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$image$codecs$gdiplus\n");

    moduledict_pyglet$image$codecs$gdiplus = MODULE_DICT(module_pyglet$image$codecs$gdiplus);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$image$codecs$gdiplus,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$image$codecs$gdiplus,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[222]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$image$codecs$gdiplus,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$image$codecs$gdiplus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$image$codecs$gdiplus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$image$codecs$gdiplus);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$image$codecs$gdiplus);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_c342bdf8c6f322c4efa8f4d161dc9820;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_b10de2d44f2fe81e2617a0b64bc42898_2;
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
    PyObject *locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81 = NULL;
    struct Nuitka_FrameObject *frame_28d94f22391f56854f9ff745a0b8621d_3;
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
    PyObject *locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88 = NULL;
    struct Nuitka_FrameObject *frame_e9a298b6c55efe86584080a4ca95f567_4;
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
    PyObject *locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99 = NULL;
    struct Nuitka_FrameObject *frame_2eb1340e8730a5d0efac805b2c25cefe_5;
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
    PyObject *locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108 = NULL;
    struct Nuitka_FrameObject *frame_bf3e17dd38aa617bfe1861ad434e0f06_6;
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
    PyObject *locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191 = NULL;
    struct Nuitka_FrameObject *frame_ea6542ff74c8c16e8ededf1a03f68da0_7;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_2);
    }
    frame_c342bdf8c6f322c4efa8f4d161dc9820 = MAKE_MODULE_FRAME(codeobj_c342bdf8c6f322c4efa8f4d161dc9820, module_pyglet$image$codecs$gdiplus);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c342bdf8c6f322c4efa8f4d161dc9820);
    assert(Py_REFCNT(frame_c342bdf8c6f322c4efa8f4d161dc9820) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[94], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[95], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[97];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[98];
        tmp_level_value_1 = mod_consts[18];
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$image$codecs$gdiplus,
                mod_consts[10],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[99];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_fromlist_value_2 = mod_consts[100];
        tmp_level_value_2 = mod_consts[18];
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 37;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$image$codecs$gdiplus, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[101];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_fromlist_value_3 = mod_consts[100];
        tmp_level_value_3 = mod_consts[18];
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 38;
        tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$image$codecs$gdiplus, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[102];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_fromlist_value_4 = mod_consts[100];
        tmp_level_value_4 = mod_consts[18];
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 39;
        tmp_star_imported_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$image$codecs$gdiplus, true, tmp_star_imported_3);
        Py_DECREF(tmp_star_imported_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[103];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_locals_arg_value_5 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_fromlist_value_5 = mod_consts[100];
        tmp_level_value_5 = mod_consts[18];
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 40;
        tmp_star_imported_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_star_imported_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$image$codecs$gdiplus, true, tmp_star_imported_4);
        Py_DECREF(tmp_star_imported_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[104];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[105];
        tmp_level_value_6 = mod_consts[18];
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 41;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$image$codecs$gdiplus,
                mod_consts[106],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[104];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pyglet$image$codecs$gdiplus;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[107];
        tmp_level_value_7 = mod_consts[18];
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 42;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyglet$image$codecs$gdiplus,
                mod_consts[108],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[108]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assign_source_8 == NULL)) {
            tmp_assign_source_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_29 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
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


            exception_lineno = 72;

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


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[140]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[140]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[87];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 72;
        tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[141]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

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
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[142];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_8 = mod_consts[143];
        tmp_default_value_1 = mod_consts[144];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_8, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[143]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

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


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 72;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_33;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_3;
        }
        frame_b10de2d44f2fe81e2617a0b64bc42898_2 = MAKE_CLASS_FRAME(tstate, codeobj_b10de2d44f2fe81e2617a0b64bc42898, module_pyglet$image$codecs$gdiplus, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b10de2d44f2fe81e2617a0b64bc42898_2);
        assert(Py_REFCNT(frame_b10de2d44f2fe81e2617a0b64bc42898_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[88];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[148]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[148]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[149];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[15]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
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
                tmp_tuple_element_6 = mod_consts[150];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[151]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[151]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[152];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[151]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[151]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b10de2d44f2fe81e2617a0b64bc42898_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b10de2d44f2fe81e2617a0b64bc42898_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b10de2d44f2fe81e2617a0b64bc42898_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b10de2d44f2fe81e2617a0b64bc42898_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_b10de2d44f2fe81e2617a0b64bc42898_2);

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


                exception_lineno = 72;

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
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_8 = mod_consts[87];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_8 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 72;
            tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_34 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72);
        locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72 = NULL;
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

        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72);
        locals_pyglet$image$codecs$gdiplus$$$class__1_GdiplusStartupInput_72 = NULL;
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
        exception_lineno = 72;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_34);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_assign_source_36 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_37 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

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
        tmp_expression_value_8 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[18];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts[140]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

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
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[140]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_tuple_element_10 = mod_consts[89];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_10 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 81;
        tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[141]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[142];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_name_value_9 = mod_consts[143];
        tmp_default_value_2 = mod_consts[144];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_9, tmp_default_value_2);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_13 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[143]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 81;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_41;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        frame_28d94f22391f56854f9ff745a0b8621d_3 = MAKE_CLASS_FRAME(tstate, codeobj_28d94f22391f56854f9ff745a0b8621d, module_pyglet$image$codecs$gdiplus, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_28d94f22391f56854f9ff745a0b8621d_3);
        assert(Py_REFCNT(frame_28d94f22391f56854f9ff745a0b8621d_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_12;
            tmp_tuple_element_12 = mod_consts[155];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81, mod_consts[15]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 83;
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
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_13;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_13 = mod_consts[156];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81, mod_consts[15]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
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
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_28d94f22391f56854f9ff745a0b8621d_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_28d94f22391f56854f9ff745a0b8621d_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_28d94f22391f56854f9ff745a0b8621d_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_28d94f22391f56854f9ff745a0b8621d_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_28d94f22391f56854f9ff745a0b8621d_3);

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


                exception_lineno = 81;

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
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_14 = mod_consts[89];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_14 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 81;
            tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_42 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81);
        locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81 = NULL;
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

        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81);
        locals_pyglet$image$codecs$gdiplus$$$class__2_GdiplusStartupOutput_81 = NULL;
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
        exception_lineno = 81;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_42);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_45 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

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
        tmp_expression_value_14 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[18];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts[140]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

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
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[140]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        tmp_tuple_element_16 = mod_consts[42];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_16 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 88;
        tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_17 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts[141]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

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
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[142];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_name_value_10 = mod_consts[143];
        tmp_default_value_3 = mod_consts[144];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_10, tmp_default_value_3);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[143]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 88;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_49;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_9;
        }
        frame_e9a298b6c55efe86584080a4ca95f567_4 = MAKE_CLASS_FRAME(tstate, codeobj_e9a298b6c55efe86584080a4ca95f567, module_pyglet$image$codecs$gdiplus, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_e9a298b6c55efe86584080a4ca95f567_4);
        assert(Py_REFCNT(frame_e9a298b6c55efe86584080a4ca95f567_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_18;
            tmp_tuple_element_18 = mod_consts[40];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[57]);

            if (tmp_tuple_element_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

                    if (unlikely(tmp_tuple_element_18 == NULL)) {
                        tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
                    }

                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    Py_INCREF(tmp_tuple_element_18);
                } else {
                    goto tuple_build_exception_10;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_18);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_dictset_value = MAKE_LIST_EMPTY(6);
            {
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_tuple_element_23;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_19 = mod_consts[41];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[57]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_19);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_20 = mod_consts[46];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[26]);

                if (tmp_tuple_element_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_20 == NULL)) {
                            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_20);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_20);
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_21 = mod_consts[158];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_21);
                tmp_tuple_element_21 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[26]);

                if (tmp_tuple_element_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_21 == NULL)) {
                            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "o";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_21);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_21);
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_22 = mod_consts[47];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_6;
                    PyObject *tmp_args_element_value_1;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_22);
                    tmp_called_value_6 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[67]);

                    if (tmp_called_value_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

                            if (unlikely(tmp_called_value_6 == NULL)) {
                                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                            }

                            if (tmp_called_value_6 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 94;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_called_value_6);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_args_element_value_1 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[159]);

                    if (tmp_args_element_value_1 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[159]);

                            if (unlikely(tmp_args_element_value_1 == NULL)) {
                                tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
                            }

                            if (tmp_args_element_value_1 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_6);

                                exception_lineno = 94;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_args_element_value_1);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    frame_e9a298b6c55efe86584080a4ca95f567_4->m_frame.f_lineno = 94;
                    tmp_tuple_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
                    Py_DECREF(tmp_called_value_6);
                    Py_DECREF(tmp_args_element_value_1);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
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
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_3);
                tmp_tuple_element_23 = mod_consts[160];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_7;
                    PyObject *tmp_args_element_value_2;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
                    tmp_called_value_7 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[67]);

                    if (tmp_called_value_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

                            if (unlikely(tmp_called_value_7 == NULL)) {
                                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                            }

                            if (tmp_called_value_7 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 95;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_called_value_7);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_args_element_value_2 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[57]);

                    if (tmp_args_element_value_2 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

                            if (unlikely(tmp_args_element_value_2 == NULL)) {
                                tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
                            }

                            if (tmp_args_element_value_2 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_7);

                                exception_lineno = 95;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_args_element_value_2);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    frame_e9a298b6c55efe86584080a4ca95f567_4->m_frame.f_lineno = 95;
                    tmp_tuple_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
                    Py_DECREF(tmp_called_value_7);
                    Py_DECREF(tmp_args_element_value_2);
                    if (tmp_tuple_element_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
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
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e9a298b6c55efe86584080a4ca95f567_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e9a298b6c55efe86584080a4ca95f567_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e9a298b6c55efe86584080a4ca95f567_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e9a298b6c55efe86584080a4ca95f567_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_e9a298b6c55efe86584080a4ca95f567_4);

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


                exception_lineno = 88;

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
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_24 = mod_consts[42];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_24 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 88;
            tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_50 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88);
        locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88 = NULL;
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

        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88);
        locals_pyglet$image$codecs$gdiplus$$$class__3_BitmapData_88 = NULL;
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
        exception_lineno = 88;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_50);
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
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_25;
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        tmp_assign_source_52 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_53 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

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
        tmp_expression_value_20 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[18];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_55 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[140]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

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
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_22 = tmp_class_creation_4__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[140]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        tmp_tuple_element_26 = mod_consts[37];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_26 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 99;
        tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_23 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts[141]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

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
        PyObject *tmp_expression_value_24;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[142];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_24 = tmp_class_creation_4__metaclass;
        tmp_name_value_11 = mod_consts[143];
        tmp_default_value_4 = mod_consts[144];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_11, tmp_default_value_4);
        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[143]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

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


            exception_lineno = 99;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 99;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_57;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_12;
        }
        frame_2eb1340e8730a5d0efac805b2c25cefe_5 = MAKE_CLASS_FRAME(tstate, codeobj_2eb1340e8730a5d0efac805b2c25cefe, module_pyglet$image$codecs$gdiplus, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2eb1340e8730a5d0efac805b2c25cefe_5);
        assert(Py_REFCNT(frame_2eb1340e8730a5d0efac805b2c25cefe_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_28;
            tmp_tuple_element_28 = mod_consts[38];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[26]);

            if (tmp_tuple_element_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_tuple_element_28 == NULL)) {
                        tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                    }

                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto tuple_build_exception_17;
                    }
                    Py_INCREF(tmp_tuple_element_28);
                } else {
                    goto tuple_build_exception_17;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_28);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_tuple_element_31;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_29 = mod_consts[39];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[26]);

                if (tmp_tuple_element_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_29 == NULL)) {
                            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_tuple_element_29);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_29);
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
                tmp_tuple_element_30 = mod_consts[40];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[26]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "o";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_30);
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
                tmp_tuple_element_31 = mod_consts[41];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[26]);

                if (tmp_tuple_element_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_31 == NULL)) {
                            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_31);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_31);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2eb1340e8730a5d0efac805b2c25cefe_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2eb1340e8730a5d0efac805b2c25cefe_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2eb1340e8730a5d0efac805b2c25cefe_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2eb1340e8730a5d0efac805b2c25cefe_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_2eb1340e8730a5d0efac805b2c25cefe_5);

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


                exception_lineno = 99;

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
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_32 = mod_consts[37];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_32 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 99;
            tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_58 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99);
        locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99 = NULL;
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

        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99);
        locals_pyglet$image$codecs$gdiplus$$$class__4_Rect_99 = NULL;
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
        exception_lineno = 99;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_58);
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
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_33;
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_assign_source_60 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_60, 0, tmp_tuple_element_33);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_61 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

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
        tmp_expression_value_26 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[18];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_63 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_27 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts[140]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

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
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_28 = tmp_class_creation_5__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[140]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_tuple_element_34 = mod_consts[68];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_34 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 108;
        tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_29 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts[141]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

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
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[142];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_30 = tmp_class_creation_5__metaclass;
        tmp_name_value_12 = mod_consts[143];
        tmp_default_value_5 = mod_consts[144];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_12, tmp_default_value_5);
        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_31 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[143]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 108;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_65;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_66;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_15;
        }
        frame_bf3e17dd38aa617bfe1861ad434e0f06_6 = MAKE_CLASS_FRAME(tstate, codeobj_bf3e17dd38aa617bfe1861ad434e0f06, module_pyglet$image$codecs$gdiplus, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bf3e17dd38aa617bfe1861ad434e0f06_6);
        assert(Py_REFCNT(frame_bf3e17dd38aa617bfe1861ad434e0f06_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_36;
            tmp_tuple_element_36 = mod_consts[161];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[57]);

            if (tmp_tuple_element_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

                    if (unlikely(tmp_tuple_element_36 == NULL)) {
                        tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
                    }

                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto tuple_build_exception_22;
                    }
                    Py_INCREF(tmp_tuple_element_36);
                } else {
                    goto tuple_build_exception_22;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_36);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_tuple_element_39;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_37 = mod_consts[71];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_37);
                tmp_tuple_element_37 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[86]);

                if (tmp_tuple_element_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[86]);

                        if (unlikely(tmp_tuple_element_37 == NULL)) {
                            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
                        }

                        if (tmp_tuple_element_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 111;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_tuple_element_37);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_37);
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_tuple_element_38 = mod_consts[162];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[163]);

                if (tmp_tuple_element_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[163]);

                        if (unlikely(tmp_tuple_element_38 == NULL)) {
                            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
                        }

                        if (tmp_tuple_element_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
                            type_description_2 = "o";
                            goto tuple_build_exception_24;
                        }
                        Py_INCREF(tmp_tuple_element_38);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_38);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
                tmp_tuple_element_39 = mod_consts[25];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_39);
                tmp_tuple_element_39 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[15]);

                if (tmp_tuple_element_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_tuple_element_39 == NULL)) {
                            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
                        }

                        if (tmp_tuple_element_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_tuple_element_39);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_39);
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_5);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bf3e17dd38aa617bfe1861ad434e0f06_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bf3e17dd38aa617bfe1861ad434e0f06_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bf3e17dd38aa617bfe1861ad434e0f06_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bf3e17dd38aa617bfe1861ad434e0f06_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_bf3e17dd38aa617bfe1861ad434e0f06_6);

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


                exception_lineno = 108;

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
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_40 = mod_consts[68];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_40 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_40);
            tmp_tuple_element_40 = locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 108;
            tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_66 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108);
        locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108 = NULL;
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

        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108);
        locals_pyglet$image$codecs$gdiplus$$$class__5_PropertyItem_108 = NULL;
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
        exception_lineno = 108;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_66);
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
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 117;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_3);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 118;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_4);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_32;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[43]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[168], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_list_element_6;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_33;
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_4, 0, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_4, 1, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_4, 2, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_4, 3, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_4, 4, tmp_list_element_6);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[43]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[169], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_34;
        tmp_assattr_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_5 == NULL)) {
            tmp_assattr_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[48]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[168], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_list_element_7;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_35;
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_6, 0, tmp_list_element_7);
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_value_6, 1, tmp_list_element_7);
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[48]);
        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[169], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_36;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[170]);
        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[168], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_expression_value_37;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_8, 0, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_value_8, 1, tmp_list_element_8);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[170]);
        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[169], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_38;
        tmp_assattr_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_9 == NULL)) {
            tmp_assattr_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[171]);
        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[168], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_39;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_5;
            PyList_SET_ITEM0(tmp_assattr_value_10, 0, tmp_list_element_9);
            tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_list_element_9 == NULL)) {
                tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_10, 1, tmp_list_element_9);
            tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_list_element_9 == NULL)) {
                tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_10, 2, tmp_list_element_9);
            tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_list_element_9 == NULL)) {
                tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_10, 3, tmp_list_element_9);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[172]);

            if (unlikely(tmp_args_element_value_5 == NULL)) {
                tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
            }

            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 128;
            tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_5);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_10, 4, tmp_list_element_9);
            tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_list_element_9 == NULL)) {
                tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_10, 5, tmp_list_element_9);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[171]);
        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[169], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_40;
        tmp_assattr_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_11 == NULL)) {
            tmp_assattr_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[17]);
        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[168], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_list_element_10;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_41;
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_12, 0, tmp_list_element_10);
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto list_build_exception_10;
        }
        PyList_SET_ITEM0(tmp_assattr_value_12, 1, tmp_list_element_10);
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[17]);
        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[169], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_42;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[173]);
        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[168], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_list_element_11;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_43;
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_14 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_14, 0, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_14, 1, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_14, 2, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_14, 3, tmp_list_element_11);
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto list_build_exception_11;
        }
        PyList_SET_ITEM0(tmp_assattr_value_14, 4, tmp_list_element_11);
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[173]);
        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[169], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_expression_value_44;
        tmp_assattr_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_15 == NULL)) {
            tmp_assattr_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[174]);
        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[168], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_expression_value_45;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_16, 0, tmp_list_element_12);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_value_16, 1, tmp_list_element_12);
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_value_16, 2, tmp_list_element_12);
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_16);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[174]);
        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[169], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_expression_value_46;
        tmp_assattr_value_17 = Py_None;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[176]);
        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[168], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_47;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_18 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_18, 0, tmp_list_element_13);
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[176]);
        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[169], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_48;
        tmp_assattr_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_19 == NULL)) {
            tmp_assattr_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[177]);
        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[168], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_list_element_14;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_49;
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_20, 0, tmp_list_element_14);
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto list_build_exception_13;
        }
        PyList_SET_ITEM0(tmp_assattr_value_20, 1, tmp_list_element_14);
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[177]);
        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[169], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_50;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[50]);
        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[168], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_list_element_15;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_51;
        tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_15 == NULL)) {
            tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_22, 0, tmp_list_element_15);
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[50]);
        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[169], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_52;
        tmp_assattr_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_23 == NULL)) {
            tmp_assattr_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[178]);
        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[168], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_list_element_16;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_expression_value_53;
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_24 = MAKE_LIST_EMPTY(7);
        PyList_SET_ITEM0(tmp_assattr_value_24, 0, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_24, 1, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_24, 2, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_24, 3, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_24, 4, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_24, 5, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_24, 6, tmp_list_element_16);
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_assattr_value_24);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_24);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[178]);
        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_24);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[169], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_target_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_expression_value_54;
        tmp_assattr_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_25 == NULL)) {
            tmp_assattr_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[179]);
        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[168], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_target_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_list_element_17;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_55;
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_26 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_26, 0, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_assattr_value_26, 1, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[181]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_assattr_value_26, 2, tmp_list_element_17);
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_assattr_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_26);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[179]);
        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_26);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[169], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_56;
        tmp_assattr_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_27 == NULL)) {
            tmp_assattr_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[182]);
        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[168], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_list_element_18;
        PyObject *tmp_assattr_target_28;
        PyObject *tmp_expression_value_57;
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_28 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_28, 0, tmp_list_element_18);
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto list_build_exception_16;
        }
        PyList_SET_ITEM0(tmp_assattr_value_28, 1, tmp_list_element_18);
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_assattr_value_28);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[182]);
        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[169], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_target_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_assattr_target_29;
        PyObject *tmp_expression_value_58;
        tmp_assattr_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_29 == NULL)) {
            tmp_assattr_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[183]);
        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[168], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_target_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_list_element_19;
        PyObject *tmp_assattr_target_30;
        PyObject *tmp_expression_value_59;
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_30 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_30, 0, tmp_list_element_19);
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_30, 1, tmp_list_element_19);
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_assattr_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_30);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[183]);
        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_30);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[169], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_target_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_assattr_target_31;
        PyObject *tmp_expression_value_60;
        tmp_assattr_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_31 == NULL)) {
            tmp_assattr_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[184]);
        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[168], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_target_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_list_element_20;
        PyObject *tmp_assattr_target_32;
        PyObject *tmp_expression_value_61;
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_32 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_32, 0, tmp_list_element_20);
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_32, 1, tmp_list_element_20);
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_32, 2, tmp_list_element_20);
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_32, 3, tmp_list_element_20);
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_assattr_value_32);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_32);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[184]);
        if (tmp_assattr_target_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_32);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[169], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_target_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_assattr_target_33;
        PyObject *tmp_expression_value_62;
        tmp_assattr_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_33 == NULL)) {
            tmp_assattr_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[23]);
        if (tmp_assattr_target_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[168], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_target_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_list_element_21;
        PyObject *tmp_assattr_target_34;
        PyObject *tmp_expression_value_63;
        tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_21 == NULL)) {
            tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_34 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_7;
            PyList_SET_ITEM0(tmp_assattr_value_34, 0, tmp_list_element_21);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_19;
            }
            tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_args_element_value_6 == NULL)) {
                tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_19;
            }
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 152;
            tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_6);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_assattr_value_34, 1, tmp_list_element_21);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_19;
            }
            tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_args_element_value_7 == NULL)) {
                tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_19;
            }
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 152;
            tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_7);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_assattr_value_34, 2, tmp_list_element_21);
        }
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_assattr_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[23]);
        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[169], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_target_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_assattr_target_35;
        PyObject *tmp_expression_value_64;
        tmp_assattr_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_35 == NULL)) {
            tmp_assattr_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[185]);
        if (tmp_assattr_target_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[168], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_target_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_list_element_22;
        PyObject *tmp_assattr_target_36;
        PyObject *tmp_expression_value_65;
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_36 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_36, 0, tmp_list_element_22);
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_36, 1, tmp_list_element_22);
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_assattr_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_36);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[185]);
        if (tmp_assattr_target_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_36);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[169], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_target_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_assattr_target_37;
        PyObject *tmp_expression_value_66;
        tmp_assattr_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_37 == NULL)) {
            tmp_assattr_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[27]);
        if (tmp_assattr_target_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[168], tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_target_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_list_element_23;
        PyObject *tmp_assattr_target_38;
        PyObject *tmp_expression_value_67;
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_38 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_38, 0, tmp_list_element_23);
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto list_build_exception_21;
        }
        PyList_SET_ITEM0(tmp_assattr_value_38, 1, tmp_list_element_23);
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_assattr_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_38);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[27]);
        if (tmp_assattr_target_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_38);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[169], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_target_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_assattr_target_39;
        PyObject *tmp_expression_value_68;
        tmp_assattr_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_39 == NULL)) {
            tmp_assattr_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[70]);
        if (tmp_assattr_target_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[168], tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_target_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_list_element_24;
        PyObject *tmp_assattr_target_40;
        PyObject *tmp_expression_value_69;
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_40 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_40, 0, tmp_list_element_24);
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_40, 1, tmp_list_element_24);
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_40, 2, tmp_list_element_24);
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto list_build_exception_22;
        }
        PyList_SET_ITEM0(tmp_assattr_value_40, 3, tmp_list_element_24);
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_assattr_value_40);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[70]);
        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[169], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_target_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_assattr_target_41;
        PyObject *tmp_expression_value_70;
        tmp_assattr_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_41 == NULL)) {
            tmp_assattr_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[64]);
        if (tmp_assattr_target_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[168], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_target_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_list_element_25;
        PyObject *tmp_assattr_target_42;
        PyObject *tmp_expression_value_71;
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_42 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_42, 0, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_assattr_value_42, 1, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_assattr_value_42, 2, tmp_list_element_25);
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_assattr_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_42);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[64]);
        if (tmp_assattr_target_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_42);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[169], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_target_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_assattr_target_43;
        PyObject *tmp_expression_value_72;
        tmp_assattr_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_43 == NULL)) {
            tmp_assattr_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[186]);
        if (tmp_assattr_target_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[168], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_target_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_list_element_26;
        PyObject *tmp_assattr_target_44;
        PyObject *tmp_expression_value_73;
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_44 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_44, 0, tmp_list_element_26);
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_44, 1, tmp_list_element_26);
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_assattr_value_44);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_44);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[186]);
        if (tmp_assattr_target_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_44);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[169], tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_target_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_assattr_target_45;
        PyObject *tmp_expression_value_74;
        tmp_assattr_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_45 == NULL)) {
            tmp_assattr_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[62]);
        if (tmp_assattr_target_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[168], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_target_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_list_element_27;
        PyObject *tmp_assattr_target_46;
        PyObject *tmp_expression_value_75;
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_46 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_46, 0, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_46, 1, tmp_list_element_27);
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto list_build_exception_25;
        }
        PyList_SET_ITEM0(tmp_assattr_value_46, 2, tmp_list_element_27);
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_assattr_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_46);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[62]);
        if (tmp_assattr_target_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_46);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[169], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_target_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_assattr_target_47;
        PyObject *tmp_expression_value_76;
        tmp_assattr_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_47 == NULL)) {
            tmp_assattr_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[58]);
        if (tmp_assattr_target_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[168], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_target_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_list_element_28;
        PyObject *tmp_assattr_target_48;
        PyObject *tmp_expression_value_77;
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_48 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_48, 0, tmp_list_element_28);
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto list_build_exception_26;
        }
        PyList_SET_ITEM0(tmp_assattr_value_48, 1, tmp_list_element_28);
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_assattr_value_48);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[58]);
        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[169], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_target_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_assattr_target_49;
        PyObject *tmp_expression_value_78;
        tmp_assattr_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_49 == NULL)) {
            tmp_assattr_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[61]);
        if (tmp_assattr_target_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[168], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_target_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_list_element_29;
        PyObject *tmp_assattr_target_50;
        PyObject *tmp_expression_value_79;
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_50 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_50, 0, tmp_list_element_29);
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto list_build_exception_27;
        }
        PyList_SET_ITEM0(tmp_assattr_value_50, 1, tmp_list_element_29);
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto list_build_exception_27;
        }
        PyList_SET_ITEM0(tmp_assattr_value_50, 2, tmp_list_element_29);
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_assattr_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[61]);
        if (tmp_assattr_target_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[169], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_target_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_assattr_target_51;
        PyObject *tmp_expression_value_80;
        tmp_assattr_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_51 == NULL)) {
            tmp_assattr_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[75]);
        if (tmp_assattr_target_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[168], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_target_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_list_element_30;
        PyObject *tmp_assattr_target_52;
        PyObject *tmp_expression_value_81;
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_52 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_52, 0, tmp_list_element_30);
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto list_build_exception_28;
        }
        PyList_SET_ITEM0(tmp_assattr_value_52, 1, tmp_list_element_30);
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto list_build_exception_28;
        }
        PyList_SET_ITEM0(tmp_assattr_value_52, 2, tmp_list_element_30);
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_assattr_value_52);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[75]);
        if (tmp_assattr_target_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[169], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_target_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_assattr_target_53;
        PyObject *tmp_expression_value_82;
        tmp_assattr_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_53 == NULL)) {
            tmp_assattr_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[187]);
        if (tmp_assattr_target_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[168], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_target_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_list_element_31;
        PyObject *tmp_assattr_target_54;
        PyObject *tmp_expression_value_83;
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_54 = MAKE_LIST_EMPTY(9);
        PyList_SET_ITEM0(tmp_assattr_value_54, 0, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 1, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 2, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 3, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 4, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 5, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 6, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 7, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto list_build_exception_29;
        }
        PyList_SET_ITEM0(tmp_assattr_value_54, 8, tmp_list_element_31);
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_assattr_value_54);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[187]);
        if (tmp_assattr_target_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[169], tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_target_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_assattr_target_55;
        PyObject *tmp_expression_value_84;
        tmp_assattr_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_55 == NULL)) {
            tmp_assattr_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[188]);
        if (tmp_assattr_target_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[168], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_target_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_list_element_32;
        PyObject *tmp_assattr_target_56;
        PyObject *tmp_expression_value_85;
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_56 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_56, 0, tmp_list_element_32);
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[188]);
        if (tmp_assattr_target_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[169], tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_target_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_assattr_target_57;
        PyObject *tmp_expression_value_86;
        tmp_assattr_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_57 == NULL)) {
            tmp_assattr_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[189]);
        if (tmp_assattr_target_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[168], tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_target_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_list_element_33;
        PyObject *tmp_assattr_target_58;
        PyObject *tmp_expression_value_87;
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_58 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_58, 0, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto list_build_exception_30;
        }
        PyList_SET_ITEM0(tmp_assattr_value_58, 1, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto list_build_exception_30;
        }
        PyList_SET_ITEM0(tmp_assattr_value_58, 2, tmp_list_element_33);
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_assattr_value_58);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_58);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[189]);
        if (tmp_assattr_target_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_58);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[169], tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_target_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_assattr_target_59;
        PyObject *tmp_expression_value_88;
        tmp_assattr_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_59 == NULL)) {
            tmp_assattr_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[190]);
        if (tmp_assattr_target_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[168], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_target_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_list_element_34;
        PyObject *tmp_assattr_target_60;
        PyObject *tmp_expression_value_89;
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_60 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_60, 0, tmp_list_element_34);
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_60, 1, tmp_list_element_34);
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_assattr_value_60);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_60);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[190]);
        if (tmp_assattr_target_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_60);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[169], tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_target_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_assattr_target_61;
        PyObject *tmp_expression_value_90;
        tmp_assattr_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_61 == NULL)) {
            tmp_assattr_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[191]);
        if (tmp_assattr_target_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[168], tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_target_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_62;
        PyObject *tmp_list_element_35;
        PyObject *tmp_assattr_target_62;
        PyObject *tmp_expression_value_91;
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_62 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_62, 0, tmp_list_element_35);
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto list_build_exception_32;
        }
        PyList_SET_ITEM0(tmp_assattr_value_62, 1, tmp_list_element_35);
        goto list_build_noexception_32;
        // Exception handling pass through code for list_build:
        list_build_exception_32:;
        Py_DECREF(tmp_assattr_value_62);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_32:;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_62);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[191]);
        if (tmp_assattr_target_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_62);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_62, mod_consts[169], tmp_assattr_value_62);
        Py_DECREF(tmp_assattr_value_62);
        Py_DECREF(tmp_assattr_target_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_63;
        PyObject *tmp_assattr_target_63;
        PyObject *tmp_expression_value_92;
        tmp_assattr_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_63 == NULL)) {
            tmp_assattr_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[192]);
        if (tmp_assattr_target_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_63, mod_consts[168], tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_target_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_64;
        PyObject *tmp_list_element_36;
        PyObject *tmp_assattr_target_64;
        PyObject *tmp_expression_value_93;
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_64 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_64, 0, tmp_list_element_36);
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto list_build_exception_33;
        }
        PyList_SET_ITEM0(tmp_assattr_value_64, 1, tmp_list_element_36);
        goto list_build_noexception_33;
        // Exception handling pass through code for list_build:
        list_build_exception_33:;
        Py_DECREF(tmp_assattr_value_64);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_33:;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_64);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[192]);
        if (tmp_assattr_target_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_64);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_64, mod_consts[169], tmp_assattr_value_64);
        Py_DECREF(tmp_assattr_value_64);
        Py_DECREF(tmp_assattr_target_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_65;
        PyObject *tmp_assattr_target_65;
        PyObject *tmp_expression_value_94;
        tmp_assattr_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_65 == NULL)) {
            tmp_assattr_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[193]);
        if (tmp_assattr_target_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_65, mod_consts[168], tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_target_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_66;
        PyObject *tmp_list_element_37;
        PyObject *tmp_assattr_target_66;
        PyObject *tmp_expression_value_95;
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_66 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_66, 0, tmp_list_element_37);
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_66);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[193]);
        if (tmp_assattr_target_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_66);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_66, mod_consts[169], tmp_assattr_value_66);
        Py_DECREF(tmp_assattr_value_66);
        Py_DECREF(tmp_assattr_target_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_67;
        PyObject *tmp_assattr_target_67;
        PyObject *tmp_expression_value_96;
        tmp_assattr_value_67 = Py_None;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[194]);
        if (tmp_assattr_target_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_67, mod_consts[168], tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_target_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_68;
        PyObject *tmp_list_element_38;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_assattr_target_68;
        PyObject *tmp_expression_value_97;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 186;
        tmp_list_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_8);
        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_68 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_68, 0, tmp_list_element_38);
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_68);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[194]);
        if (tmp_assattr_target_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_68);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_68, mod_consts[169], tmp_assattr_value_68);
        Py_DECREF(tmp_assattr_value_68);
        Py_DECREF(tmp_assattr_target_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_69;
        PyObject *tmp_assattr_target_69;
        PyObject *tmp_expression_value_98;
        tmp_assattr_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_value_69 == NULL)) {
            tmp_assattr_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_assattr_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[90]);
        if (tmp_assattr_target_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_69, mod_consts[168], tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_target_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_70;
        PyObject *tmp_list_element_39;
        PyObject *tmp_assattr_target_70;
        PyObject *tmp_expression_value_99;
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_70 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_70, 0, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto list_build_exception_34;
        }
        PyList_SET_ITEM0(tmp_assattr_value_70, 1, tmp_list_element_39);
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto list_build_exception_34;
        }
        PyList_SET_ITEM0(tmp_assattr_value_70, 2, tmp_list_element_39);
        goto list_build_noexception_34;
        // Exception handling pass through code for list_build:
        list_build_exception_34:;
        Py_DECREF(tmp_assattr_value_70);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_34:;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_70);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[90]);
        if (tmp_assattr_target_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_70);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_70, mod_consts[169], tmp_assattr_value_70);
        Py_DECREF(tmp_assattr_value_70);
        Py_DECREF(tmp_assattr_target_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_tuple_element_41;
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_tuple_element_41 == NULL)) {
            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_tuple_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        tmp_assign_source_70 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_70, 0, tmp_tuple_element_41);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_71 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

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
        tmp_expression_value_100 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[18];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_100, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_73 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_101;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_101 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_101, mod_consts[140]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

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
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_102 = tmp_class_creation_6__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[140]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        tmp_tuple_element_42 = mod_consts[85];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_42 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 191;
        tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_103;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_103 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_103, mod_consts[141]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

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
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[142];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_104 = tmp_class_creation_6__metaclass;
        tmp_name_value_13 = mod_consts[143];
        tmp_default_value_6 = mod_consts[144];
        tmp_tuple_element_43 = BUILTIN_GETATTR(tstate, tmp_expression_value_104, tmp_name_value_13, tmp_default_value_6);
        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_105;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_105 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_105 == NULL));
            tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[143]);
            Py_DECREF(tmp_expression_value_105);
            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 191;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_75;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_76;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_18;
        }
        frame_ea6542ff74c8c16e8ededf1a03f68da0_7 = MAKE_CLASS_FRAME(tstate, codeobj_ea6542ff74c8c16e8ededf1a03f68da0, module_pyglet$image$codecs$gdiplus, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ea6542ff74c8c16e8ededf1a03f68da0_7);
        assert(Py_REFCNT(frame_ea6542ff74c8c16e8ededf1a03f68da0_7) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__1_get_file_extensions();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[197], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__2_get_animation_file_extensions();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[199], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__3__load_bitmap();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_9;
            tmp_called_value_20 = PyObject_GetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[202]);

            if (tmp_called_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[202]);

                    if (unlikely(tmp_called_value_20 == NULL)) {
                        tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
                    }

                    if (tmp_called_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_20);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_value_9 = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__4__get_image();

            frame_ea6542ff74c8c16e8ededf1a03f68da0_7->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__5__delete_bitmap();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[56], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__6_decode();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[205], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__7_decode_animation();

        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[207], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ea6542ff74c8c16e8ededf1a03f68da0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ea6542ff74c8c16e8ededf1a03f68da0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ea6542ff74c8c16e8ededf1a03f68da0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ea6542ff74c8c16e8ededf1a03f68da0_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_ea6542ff74c8c16e8ededf1a03f68da0_7);

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


                exception_lineno = 191;

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
        tmp_res = PyObject_SetItem(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_21 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_44 = mod_consts[85];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_44 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_44);
            tmp_tuple_element_44 = locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 191;
            tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_77;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_76 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191);
        locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191 = NULL;
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

        Py_DECREF(locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191);
        locals_pyglet$image$codecs$gdiplus$$$class__6_GDIPlusDecoder_191 = NULL;
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
        exception_lineno = 191;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_76);
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
        PyObject *tmp_assign_source_78;


        tmp_assign_source_78 = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__8_get_decoders();

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__9_get_encoders();

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;


        tmp_assign_source_80 = MAKE_FUNCTION_pyglet$image$codecs$gdiplus$$$function__10_init();

        UPDATE_STRING_DICT1(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_80);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_1;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        assert(!(tmp_called_value_22 == NULL));
        frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame.f_lineno = 346;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c342bdf8c6f322c4efa8f4d161dc9820, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c342bdf8c6f322c4efa8f4d161dc9820->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c342bdf8c6f322c4efa8f4d161dc9820, exception_lineno);
    }



    assertFrameObject(frame_c342bdf8c6f322c4efa8f4d161dc9820);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.image.codecs.gdiplus", false);

    Py_INCREF(module_pyglet$image$codecs$gdiplus);
    return module_pyglet$image$codecs$gdiplus;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$image$codecs$gdiplus, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$image$codecs$gdiplus", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
