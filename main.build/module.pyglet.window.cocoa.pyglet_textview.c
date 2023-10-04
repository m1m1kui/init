/* Generated code for Python module 'pyglet.window.cocoa.pyglet_textview'
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

/* The "module_pyglet$window$cocoa$pyglet_textview" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$window$cocoa$pyglet_textview;
PyDictObject *moduledict_pyglet$window$cocoa$pyglet_textview;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[147];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[147];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.window.cocoa.pyglet_textview"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 147; i++) {
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
void checkModuleConstants_pyglet$window$cocoa$pyglet_textview(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 147; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_260b593f9231187b9daf20e0ada4bc35;
static PyCodeObject *codeobj_df520a2a4c252dc5b05873f605e75d4e;
static PyCodeObject *codeobj_b31bc9dfd43fdc495a58f36e7f15eb64;
static PyCodeObject *codeobj_c8841646e4fff57bd0ea11895830bb5b;
static PyCodeObject *codeobj_5f3e1e4d7df9edcfce9c1fc420437ac4;
static PyCodeObject *codeobj_904a511ab9a6b7f239250bae7168b1ce;
static PyCodeObject *codeobj_0af4cf166f8d9b4503caf2166be39675;
static PyCodeObject *codeobj_ad5143ad0ead5cc12ab0e8e8aa14142e;
static PyCodeObject *codeobj_b41cc237e6f1ecba895878e55440a8d4;
static PyCodeObject *codeobj_e35178234fceca082e054f7d4a6e7cd9;
static PyCodeObject *codeobj_e1b7f784ed42c0aa9f871ea23f20e3b3;
static PyCodeObject *codeobj_00c634c9f99a4166ed9496bc25a1b190;
static PyCodeObject *codeobj_65b729ceef6449ff9bcf6a38c022b9cd;
static PyCodeObject *codeobj_fb2b0d6491135bfd6e689fc93a19e4f9;
static PyCodeObject *codeobj_c6da750fd8f51e5018e1aab1007fcab5;
static PyCodeObject *codeobj_75edcdeacba041850e8ea9be1d50b0b8;
static PyCodeObject *codeobj_0c3bd580b7922abb154476422b284820;
static PyCodeObject *codeobj_d0bd370226878295fe9953ddaebcf091;
static PyCodeObject *codeobj_4e816bdd35eba471f1e58bec4590d1e5;
static PyCodeObject *codeobj_905df400fc16d37d29ffa8a3563bb444;
static PyCodeObject *codeobj_29f06a22d2e3f3afc603af2e69051d94;
static PyCodeObject *codeobj_406811c9810ceba4bcad822e94be1de3;
static PyCodeObject *codeobj_0204b920d3a9bdd97cefed6222cbcb9a;
static PyCodeObject *codeobj_843980e14e0226c9631ff8e19aac48a1;
static PyCodeObject *codeobj_42ffcee96ee3fe3af11b393df0936aec;
static PyCodeObject *codeobj_faac23fba3946629d9594293cb26a660;
static PyCodeObject *codeobj_0344bbe19e7fa688aa1b3c6d65767f91;
static PyCodeObject *codeobj_979060429c203bed11fb2b14d14f655f;
static PyCodeObject *codeobj_d63505b5e0d7eb7ac13ceb02e6a1ef25;
static PyCodeObject *codeobj_cecf7f1dff53bd11a4fc415826bfd79d;
static PyCodeObject *codeobj_5b868921b2a06cd1e0e45772b0f6f5cd;
static PyCodeObject *codeobj_484b1b83671ca7e32748acc8bddb40e7;
static PyCodeObject *codeobj_494e918b60be3a38a7757b4f26c24097;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[137]); CHECK_OBJECT(module_filename_obj);
    codeobj_260b593f9231187b9daf20e0ada4bc35 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[138], mod_consts[138], NULL, NULL, 0, 0, 0);
    codeobj_df520a2a4c252dc5b05873f605e75d4e = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[139], NULL, 0, 0, 0);
    codeobj_b31bc9dfd43fdc495a58f36e7f15eb64 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[140], NULL, 1, 0, 0);
    codeobj_c8841646e4fff57bd0ea11895830bb5b = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[141], NULL, 2, 0, 0);
    codeobj_5f3e1e4d7df9edcfce9c1fc420437ac4 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[141], NULL, 2, 0, 0);
    codeobj_904a511ab9a6b7f239250bae7168b1ce = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[142], NULL, 2, 0, 0);
    codeobj_0af4cf166f8d9b4503caf2166be39675 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[143], NULL, 2, 0, 0);
    codeobj_ad5143ad0ead5cc12ab0e8e8aa14142e = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[144], NULL, 2, 0, 0);
    codeobj_b41cc237e6f1ecba895878e55440a8d4 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[145], NULL, 2, 0, 0);
    codeobj_e35178234fceca082e054f7d4a6e7cd9 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[141], NULL, 2, 0, 0);
    codeobj_e1b7f784ed42c0aa9f871ea23f20e3b3 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[141], NULL, 2, 0, 0);
    codeobj_00c634c9f99a4166ed9496bc25a1b190 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[141], NULL, 2, 0, 0);
    codeobj_65b729ceef6449ff9bcf6a38c022b9cd = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[141], NULL, 2, 0, 0);
    codeobj_fb2b0d6491135bfd6e689fc93a19e4f9 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[141], NULL, 2, 0, 0);
    codeobj_c6da750fd8f51e5018e1aab1007fcab5 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[141], NULL, 2, 0, 0);
    codeobj_75edcdeacba041850e8ea9be1d50b0b8 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[141], NULL, 2, 0, 0);
    codeobj_0c3bd580b7922abb154476422b284820 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[141], NULL, 2, 0, 0);
    codeobj_d0bd370226878295fe9953ddaebcf091 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[141], NULL, 2, 0, 0);
    codeobj_4e816bdd35eba471f1e58bec4590d1e5 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[141], NULL, 2, 0, 0);
    codeobj_905df400fc16d37d29ffa8a3563bb444 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[141], NULL, 2, 0, 0);
    codeobj_29f06a22d2e3f3afc603af2e69051d94 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[141], NULL, 2, 0, 0);
    codeobj_406811c9810ceba4bcad822e94be1de3 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[141], NULL, 2, 0, 0);
    codeobj_0204b920d3a9bdd97cefed6222cbcb9a = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[141], NULL, 2, 0, 0);
    codeobj_843980e14e0226c9631ff8e19aac48a1 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[141], NULL, 2, 0, 0);
    codeobj_42ffcee96ee3fe3af11b393df0936aec = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[141], NULL, 2, 0, 0);
    codeobj_faac23fba3946629d9594293cb26a660 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[141], NULL, 2, 0, 0);
    codeobj_0344bbe19e7fa688aa1b3c6d65767f91 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[141], NULL, 2, 0, 0);
    codeobj_979060429c203bed11fb2b14d14f655f = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[141], NULL, 2, 0, 0);
    codeobj_d63505b5e0d7eb7ac13ceb02e6a1ef25 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[141], NULL, 2, 0, 0);
    codeobj_cecf7f1dff53bd11a4fc415826bfd79d = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[141], NULL, 2, 0, 0);
    codeobj_5b868921b2a06cd1e0e45772b0f6f5cd = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[141], NULL, 2, 0, 0);
    codeobj_484b1b83671ca7e32748acc8bddb40e7 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[141], NULL, 2, 0, 0);
    codeobj_494e918b60be3a38a7757b4f26c24097 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[141], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__10_moveWordLeft_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__11_moveWordRight_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__12_moveToBeginningOfLine_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__13_moveToEndOfLine_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__14_scrollPageUp_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__15_scrollPageDown_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__16_scrollToBeginningOfDocument_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__17_scrollToEndOfDocument_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__18_deleteBackward_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__19_deleteForward_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__1_initWithCocoaWindow_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__20_moveUpAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__21_moveDownAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__22_moveLeftAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__23_moveRightAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__24_moveWordLeftAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__25_moveWordRightAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__26_moveToBeginningOfLineAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__27_moveToEndOfLineAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__28_pageUpAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__29_pageDownAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__2_dealloc();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__30_moveToBeginningOfDocumentAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__31_moveToEndOfDocumentAndModifySelection_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__3_keyDown_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__4_insertText_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__5_insertNewline_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__6_moveUp_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__7_moveDown_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__8_moveLeft_();


static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__9_moveRight_();


// The module function definitions.
static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__1_initWithCocoaWindow_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_window = python_pars[1];
    struct Nuitka_FrameObject *frame_904a511ab9a6b7f239250bae7168b1ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_904a511ab9a6b7f239250bae7168b1ce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_904a511ab9a6b7f239250bae7168b1ce)) {
        Py_XDECREF(cache_frame_904a511ab9a6b7f239250bae7168b1ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_904a511ab9a6b7f239250bae7168b1ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_904a511ab9a6b7f239250bae7168b1ce = MAKE_FUNCTION_FRAME(tstate, codeobj_904a511ab9a6b7f239250bae7168b1ce, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_904a511ab9a6b7f239250bae7168b1ce->m_type_description == NULL);
    frame_904a511ab9a6b7f239250bae7168b1ce = cache_frame_904a511ab9a6b7f239250bae7168b1ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_904a511ab9a6b7f239250bae7168b1ce);
    assert(Py_REFCNT(frame_904a511ab9a6b7f239250bae7168b1ce) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        tmp_args_element_value_3 = mod_consts[2];
        frame_904a511ab9a6b7f239250bae7168b1ce->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_904a511ab9a6b7f239250bae7168b1ce->m_frame.f_lineno = 54;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_self;
            assert(old != NULL);
            par_self = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_self);
        tmp_operand_value_1 = par_self;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_window);
        tmp_assattr_value_1 = par_window;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_904a511ab9a6b7f239250bae7168b1ce->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_904a511ab9a6b7f239250bae7168b1ce->m_frame.f_lineno = 60;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[7]);

        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
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
        exception_tb = MAKE_TRACEBACK(frame_904a511ab9a6b7f239250bae7168b1ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_904a511ab9a6b7f239250bae7168b1ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_904a511ab9a6b7f239250bae7168b1ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_904a511ab9a6b7f239250bae7168b1ce,
        type_description_1,
        par_self,
        par_window
    );


    // Release cached frame if used for exception.
    if (frame_904a511ab9a6b7f239250bae7168b1ce == cache_frame_904a511ab9a6b7f239250bae7168b1ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_904a511ab9a6b7f239250bae7168b1ce);
        cache_frame_904a511ab9a6b7f239250bae7168b1ce = NULL;
    }

    assertFrameObject(frame_904a511ab9a6b7f239250bae7168b1ce);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
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
    CHECK_OBJECT(par_window);
    Py_DECREF(par_window);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_window);
    Py_DECREF(par_window);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__2_dealloc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b31bc9dfd43fdc495a58f36e7f15eb64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64)) {
        Py_XDECREF(cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64 = MAKE_FUNCTION_FRAME(tstate, codeobj_b31bc9dfd43fdc495a58f36e7f15eb64, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64->m_type_description == NULL);
    frame_b31bc9dfd43fdc495a58f36e7f15eb64 = cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b31bc9dfd43fdc495a58f36e7f15eb64);
    assert(Py_REFCNT(frame_b31bc9dfd43fdc495a58f36e7f15eb64) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b31bc9dfd43fdc495a58f36e7f15eb64->m_frame.f_lineno = 65;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[9]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_b31bc9dfd43fdc495a58f36e7f15eb64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b31bc9dfd43fdc495a58f36e7f15eb64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b31bc9dfd43fdc495a58f36e7f15eb64, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b31bc9dfd43fdc495a58f36e7f15eb64,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b31bc9dfd43fdc495a58f36e7f15eb64 == cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64);
        cache_frame_b31bc9dfd43fdc495a58f36e7f15eb64 = NULL;
    }

    assertFrameObject(frame_b31bc9dfd43fdc495a58f36e7f15eb64);

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


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__3_keyDown_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_nsevent = python_pars[1];
    PyObject *var_array = NULL;
    struct Nuitka_FrameObject *frame_b41cc237e6f1ecba895878e55440a8d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b41cc237e6f1ecba895878e55440a8d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b41cc237e6f1ecba895878e55440a8d4)) {
        Py_XDECREF(cache_frame_b41cc237e6f1ecba895878e55440a8d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b41cc237e6f1ecba895878e55440a8d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b41cc237e6f1ecba895878e55440a8d4 = MAKE_FUNCTION_FRAME(tstate, codeobj_b41cc237e6f1ecba895878e55440a8d4, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b41cc237e6f1ecba895878e55440a8d4->m_type_description == NULL);
    frame_b41cc237e6f1ecba895878e55440a8d4 = cache_frame_b41cc237e6f1ecba895878e55440a8d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b41cc237e6f1ecba895878e55440a8d4);
    assert(Py_REFCNT(frame_b41cc237e6f1ecba895878e55440a8d4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nsevent);
        tmp_args_element_value_1 = par_nsevent;
        frame_b41cc237e6f1ecba895878e55440a8d4->m_frame.f_lineno = 69;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[11], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_array == NULL);
        var_array = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_array);
        tmp_args_element_value_2 = var_array;
        frame_b41cc237e6f1ecba895878e55440a8d4->m_frame.f_lineno = 70;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[12], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_b41cc237e6f1ecba895878e55440a8d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b41cc237e6f1ecba895878e55440a8d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b41cc237e6f1ecba895878e55440a8d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b41cc237e6f1ecba895878e55440a8d4,
        type_description_1,
        par_self,
        par_nsevent,
        var_array
    );


    // Release cached frame if used for exception.
    if (frame_b41cc237e6f1ecba895878e55440a8d4 == cache_frame_b41cc237e6f1ecba895878e55440a8d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b41cc237e6f1ecba895878e55440a8d4);
        cache_frame_b41cc237e6f1ecba895878e55440a8d4 = NULL;
    }

    assertFrameObject(frame_b41cc237e6f1ecba895878e55440a8d4);

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
    CHECK_OBJECT(var_array);
    Py_DECREF(var_array);
    var_array = NULL;
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

    Py_XDECREF(var_array);
    var_array = NULL;
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
    CHECK_OBJECT(par_nsevent);
    Py_DECREF(par_nsevent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_nsevent);
    Py_DECREF(par_nsevent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__4_insertText_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    struct Nuitka_FrameObject *frame_ad5143ad0ead5cc12ab0e8e8aa14142e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e)) {
        Py_XDECREF(cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e = MAKE_FUNCTION_FRAME(tstate, codeobj_ad5143ad0ead5cc12ab0e8e8aa14142e, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e->m_type_description == NULL);
    frame_ad5143ad0ead5cc12ab0e8e8aa14142e = cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ad5143ad0ead5cc12ab0e8e8aa14142e);
    assert(Py_REFCNT(frame_ad5143ad0ead5cc12ab0e8e8aa14142e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        frame_ad5143ad0ead5cc12ab0e8e8aa14142e->m_frame.f_lineno = 74;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_text;
            assert(old != NULL);
            par_text = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ad5143ad0ead5cc12ab0e8e8aa14142e->m_frame.f_lineno = 75;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_expression_value_4 = par_text;
        tmp_subscript_value_1 = mod_consts[17];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ad5143ad0ead5cc12ab0e8e8aa14142e->m_frame.f_lineno = 77;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[18];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[20];
        CHECK_OBJECT(par_text);
        tmp_args_element_value_5 = par_text;
        frame_ad5143ad0ead5cc12ab0e8e8aa14142e->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad5143ad0ead5cc12ab0e8e8aa14142e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad5143ad0ead5cc12ab0e8e8aa14142e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad5143ad0ead5cc12ab0e8e8aa14142e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad5143ad0ead5cc12ab0e8e8aa14142e,
        type_description_1,
        par_self,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_ad5143ad0ead5cc12ab0e8e8aa14142e == cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e);
        cache_frame_ad5143ad0ead5cc12ab0e8e8aa14142e = NULL;
    }

    assertFrameObject(frame_ad5143ad0ead5cc12ab0e8e8aa14142e);

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
    Py_XDECREF(par_text);
    par_text = NULL;
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

    Py_XDECREF(par_text);
    par_text = NULL;
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


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__5_insertNewline_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    PyObject *var_event = NULL;
    PyObject *var_chars = NULL;
    PyObject *var_ch = NULL;
    struct Nuitka_FrameObject *frame_0af4cf166f8d9b4503caf2166be39675;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0af4cf166f8d9b4503caf2166be39675 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0af4cf166f8d9b4503caf2166be39675)) {
        Py_XDECREF(cache_frame_0af4cf166f8d9b4503caf2166be39675);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0af4cf166f8d9b4503caf2166be39675 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0af4cf166f8d9b4503caf2166be39675 = MAKE_FUNCTION_FRAME(tstate, codeobj_0af4cf166f8d9b4503caf2166be39675, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0af4cf166f8d9b4503caf2166be39675->m_type_description == NULL);
    frame_0af4cf166f8d9b4503caf2166be39675 = cache_frame_0af4cf166f8d9b4503caf2166be39675;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0af4cf166f8d9b4503caf2166be39675);
    assert(Py_REFCNT(frame_0af4cf166f8d9b4503caf2166be39675) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0af4cf166f8d9b4503caf2166be39675->m_frame.f_lineno = 84;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[22]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0af4cf166f8d9b4503caf2166be39675->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[23]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_event == NULL);
        var_event = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_event);
        tmp_called_instance_3 = var_event;
        frame_0af4cf166f8d9b4503caf2166be39675->m_frame.f_lineno = 85;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[24]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_chars == NULL);
        var_chars = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_chr_arg_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_chars);
        tmp_called_instance_4 = var_chars;
        frame_0af4cf166f8d9b4503caf2166be39675->m_frame.f_lineno = 86;
        tmp_chr_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[25],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_chr_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
        Py_DECREF(tmp_chr_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ch == NULL);
        var_ch = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_ch);
        tmp_cmp_expr_left_1 = var_ch;
        tmp_cmp_expr_right_1 = mod_consts[27];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0af4cf166f8d9b4503caf2166be39675->m_frame.f_lineno = 88;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_5,
            mod_consts[19],
            &PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_0af4cf166f8d9b4503caf2166be39675, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0af4cf166f8d9b4503caf2166be39675->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0af4cf166f8d9b4503caf2166be39675, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0af4cf166f8d9b4503caf2166be39675,
        type_description_1,
        par_self,
        par_sender,
        var_event,
        var_chars,
        var_ch
    );


    // Release cached frame if used for exception.
    if (frame_0af4cf166f8d9b4503caf2166be39675 == cache_frame_0af4cf166f8d9b4503caf2166be39675) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0af4cf166f8d9b4503caf2166be39675);
        cache_frame_0af4cf166f8d9b4503caf2166be39675 = NULL;
    }

    assertFrameObject(frame_0af4cf166f8d9b4503caf2166be39675);

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
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    CHECK_OBJECT(var_chars);
    Py_DECREF(var_chars);
    var_chars = NULL;
    CHECK_OBJECT(var_ch);
    Py_DECREF(var_ch);
    var_ch = NULL;
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

    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_chars);
    var_chars = NULL;
    Py_XDECREF(var_ch);
    var_ch = NULL;
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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__6_moveUp_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_0204b920d3a9bdd97cefed6222cbcb9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0204b920d3a9bdd97cefed6222cbcb9a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0204b920d3a9bdd97cefed6222cbcb9a)) {
        Py_XDECREF(cache_frame_0204b920d3a9bdd97cefed6222cbcb9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0204b920d3a9bdd97cefed6222cbcb9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0204b920d3a9bdd97cefed6222cbcb9a = MAKE_FUNCTION_FRAME(tstate, codeobj_0204b920d3a9bdd97cefed6222cbcb9a, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0204b920d3a9bdd97cefed6222cbcb9a->m_type_description == NULL);
    frame_0204b920d3a9bdd97cefed6222cbcb9a = cache_frame_0204b920d3a9bdd97cefed6222cbcb9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0204b920d3a9bdd97cefed6222cbcb9a);
    assert(Py_REFCNT(frame_0204b920d3a9bdd97cefed6222cbcb9a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[31]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0204b920d3a9bdd97cefed6222cbcb9a->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_0204b920d3a9bdd97cefed6222cbcb9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0204b920d3a9bdd97cefed6222cbcb9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0204b920d3a9bdd97cefed6222cbcb9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0204b920d3a9bdd97cefed6222cbcb9a,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_0204b920d3a9bdd97cefed6222cbcb9a == cache_frame_0204b920d3a9bdd97cefed6222cbcb9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0204b920d3a9bdd97cefed6222cbcb9a);
        cache_frame_0204b920d3a9bdd97cefed6222cbcb9a = NULL;
    }

    assertFrameObject(frame_0204b920d3a9bdd97cefed6222cbcb9a);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__7_moveDown_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_e1b7f784ed42c0aa9f871ea23f20e3b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3)) {
        Py_XDECREF(cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3 = MAKE_FUNCTION_FRAME(tstate, codeobj_e1b7f784ed42c0aa9f871ea23f20e3b3, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3->m_type_description == NULL);
    frame_e1b7f784ed42c0aa9f871ea23f20e3b3 = cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e1b7f784ed42c0aa9f871ea23f20e3b3);
    assert(Py_REFCNT(frame_e1b7f784ed42c0aa9f871ea23f20e3b3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[32]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e1b7f784ed42c0aa9f871ea23f20e3b3->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_e1b7f784ed42c0aa9f871ea23f20e3b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1b7f784ed42c0aa9f871ea23f20e3b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1b7f784ed42c0aa9f871ea23f20e3b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1b7f784ed42c0aa9f871ea23f20e3b3,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_e1b7f784ed42c0aa9f871ea23f20e3b3 == cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3);
        cache_frame_e1b7f784ed42c0aa9f871ea23f20e3b3 = NULL;
    }

    assertFrameObject(frame_e1b7f784ed42c0aa9f871ea23f20e3b3);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__8_moveLeft_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_65b729ceef6449ff9bcf6a38c022b9cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65b729ceef6449ff9bcf6a38c022b9cd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65b729ceef6449ff9bcf6a38c022b9cd)) {
        Py_XDECREF(cache_frame_65b729ceef6449ff9bcf6a38c022b9cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65b729ceef6449ff9bcf6a38c022b9cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65b729ceef6449ff9bcf6a38c022b9cd = MAKE_FUNCTION_FRAME(tstate, codeobj_65b729ceef6449ff9bcf6a38c022b9cd, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65b729ceef6449ff9bcf6a38c022b9cd->m_type_description == NULL);
    frame_65b729ceef6449ff9bcf6a38c022b9cd = cache_frame_65b729ceef6449ff9bcf6a38c022b9cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_65b729ceef6449ff9bcf6a38c022b9cd);
    assert(Py_REFCNT(frame_65b729ceef6449ff9bcf6a38c022b9cd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[33]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_65b729ceef6449ff9bcf6a38c022b9cd->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_65b729ceef6449ff9bcf6a38c022b9cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65b729ceef6449ff9bcf6a38c022b9cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65b729ceef6449ff9bcf6a38c022b9cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65b729ceef6449ff9bcf6a38c022b9cd,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_65b729ceef6449ff9bcf6a38c022b9cd == cache_frame_65b729ceef6449ff9bcf6a38c022b9cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65b729ceef6449ff9bcf6a38c022b9cd);
        cache_frame_65b729ceef6449ff9bcf6a38c022b9cd = NULL;
    }

    assertFrameObject(frame_65b729ceef6449ff9bcf6a38c022b9cd);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__9_moveRight_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_c6da750fd8f51e5018e1aab1007fcab5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c6da750fd8f51e5018e1aab1007fcab5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c6da750fd8f51e5018e1aab1007fcab5)) {
        Py_XDECREF(cache_frame_c6da750fd8f51e5018e1aab1007fcab5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6da750fd8f51e5018e1aab1007fcab5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6da750fd8f51e5018e1aab1007fcab5 = MAKE_FUNCTION_FRAME(tstate, codeobj_c6da750fd8f51e5018e1aab1007fcab5, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c6da750fd8f51e5018e1aab1007fcab5->m_type_description == NULL);
    frame_c6da750fd8f51e5018e1aab1007fcab5 = cache_frame_c6da750fd8f51e5018e1aab1007fcab5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c6da750fd8f51e5018e1aab1007fcab5);
    assert(Py_REFCNT(frame_c6da750fd8f51e5018e1aab1007fcab5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[34]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c6da750fd8f51e5018e1aab1007fcab5->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_c6da750fd8f51e5018e1aab1007fcab5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6da750fd8f51e5018e1aab1007fcab5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6da750fd8f51e5018e1aab1007fcab5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6da750fd8f51e5018e1aab1007fcab5,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_c6da750fd8f51e5018e1aab1007fcab5 == cache_frame_c6da750fd8f51e5018e1aab1007fcab5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c6da750fd8f51e5018e1aab1007fcab5);
        cache_frame_c6da750fd8f51e5018e1aab1007fcab5 = NULL;
    }

    assertFrameObject(frame_c6da750fd8f51e5018e1aab1007fcab5);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__10_moveWordLeft_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_42ffcee96ee3fe3af11b393df0936aec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42ffcee96ee3fe3af11b393df0936aec = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42ffcee96ee3fe3af11b393df0936aec)) {
        Py_XDECREF(cache_frame_42ffcee96ee3fe3af11b393df0936aec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42ffcee96ee3fe3af11b393df0936aec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42ffcee96ee3fe3af11b393df0936aec = MAKE_FUNCTION_FRAME(tstate, codeobj_42ffcee96ee3fe3af11b393df0936aec, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42ffcee96ee3fe3af11b393df0936aec->m_type_description == NULL);
    frame_42ffcee96ee3fe3af11b393df0936aec = cache_frame_42ffcee96ee3fe3af11b393df0936aec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_42ffcee96ee3fe3af11b393df0936aec);
    assert(Py_REFCNT(frame_42ffcee96ee3fe3af11b393df0936aec) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_42ffcee96ee3fe3af11b393df0936aec->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_42ffcee96ee3fe3af11b393df0936aec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42ffcee96ee3fe3af11b393df0936aec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42ffcee96ee3fe3af11b393df0936aec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42ffcee96ee3fe3af11b393df0936aec,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_42ffcee96ee3fe3af11b393df0936aec == cache_frame_42ffcee96ee3fe3af11b393df0936aec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42ffcee96ee3fe3af11b393df0936aec);
        cache_frame_42ffcee96ee3fe3af11b393df0936aec = NULL;
    }

    assertFrameObject(frame_42ffcee96ee3fe3af11b393df0936aec);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__11_moveWordRight_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_0344bbe19e7fa688aa1b3c6d65767f91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0344bbe19e7fa688aa1b3c6d65767f91 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0344bbe19e7fa688aa1b3c6d65767f91)) {
        Py_XDECREF(cache_frame_0344bbe19e7fa688aa1b3c6d65767f91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0344bbe19e7fa688aa1b3c6d65767f91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0344bbe19e7fa688aa1b3c6d65767f91 = MAKE_FUNCTION_FRAME(tstate, codeobj_0344bbe19e7fa688aa1b3c6d65767f91, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0344bbe19e7fa688aa1b3c6d65767f91->m_type_description == NULL);
    frame_0344bbe19e7fa688aa1b3c6d65767f91 = cache_frame_0344bbe19e7fa688aa1b3c6d65767f91;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0344bbe19e7fa688aa1b3c6d65767f91);
    assert(Py_REFCNT(frame_0344bbe19e7fa688aa1b3c6d65767f91) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[36]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0344bbe19e7fa688aa1b3c6d65767f91->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
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
        exception_tb = MAKE_TRACEBACK(frame_0344bbe19e7fa688aa1b3c6d65767f91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0344bbe19e7fa688aa1b3c6d65767f91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0344bbe19e7fa688aa1b3c6d65767f91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0344bbe19e7fa688aa1b3c6d65767f91,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_0344bbe19e7fa688aa1b3c6d65767f91 == cache_frame_0344bbe19e7fa688aa1b3c6d65767f91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0344bbe19e7fa688aa1b3c6d65767f91);
        cache_frame_0344bbe19e7fa688aa1b3c6d65767f91 = NULL;
    }

    assertFrameObject(frame_0344bbe19e7fa688aa1b3c6d65767f91);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__12_moveToBeginningOfLine_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_d0bd370226878295fe9953ddaebcf091;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0bd370226878295fe9953ddaebcf091 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0bd370226878295fe9953ddaebcf091)) {
        Py_XDECREF(cache_frame_d0bd370226878295fe9953ddaebcf091);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0bd370226878295fe9953ddaebcf091 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0bd370226878295fe9953ddaebcf091 = MAKE_FUNCTION_FRAME(tstate, codeobj_d0bd370226878295fe9953ddaebcf091, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0bd370226878295fe9953ddaebcf091->m_type_description == NULL);
    frame_d0bd370226878295fe9953ddaebcf091 = cache_frame_d0bd370226878295fe9953ddaebcf091;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0bd370226878295fe9953ddaebcf091);
    assert(Py_REFCNT(frame_d0bd370226878295fe9953ddaebcf091) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[37]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d0bd370226878295fe9953ddaebcf091->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_d0bd370226878295fe9953ddaebcf091, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0bd370226878295fe9953ddaebcf091->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0bd370226878295fe9953ddaebcf091, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0bd370226878295fe9953ddaebcf091,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_d0bd370226878295fe9953ddaebcf091 == cache_frame_d0bd370226878295fe9953ddaebcf091) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0bd370226878295fe9953ddaebcf091);
        cache_frame_d0bd370226878295fe9953ddaebcf091 = NULL;
    }

    assertFrameObject(frame_d0bd370226878295fe9953ddaebcf091);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__13_moveToEndOfLine_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_29f06a22d2e3f3afc603af2e69051d94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29f06a22d2e3f3afc603af2e69051d94 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29f06a22d2e3f3afc603af2e69051d94)) {
        Py_XDECREF(cache_frame_29f06a22d2e3f3afc603af2e69051d94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29f06a22d2e3f3afc603af2e69051d94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29f06a22d2e3f3afc603af2e69051d94 = MAKE_FUNCTION_FRAME(tstate, codeobj_29f06a22d2e3f3afc603af2e69051d94, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29f06a22d2e3f3afc603af2e69051d94->m_type_description == NULL);
    frame_29f06a22d2e3f3afc603af2e69051d94 = cache_frame_29f06a22d2e3f3afc603af2e69051d94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_29f06a22d2e3f3afc603af2e69051d94);
    assert(Py_REFCNT(frame_29f06a22d2e3f3afc603af2e69051d94) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_29f06a22d2e3f3afc603af2e69051d94->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_29f06a22d2e3f3afc603af2e69051d94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29f06a22d2e3f3afc603af2e69051d94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29f06a22d2e3f3afc603af2e69051d94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29f06a22d2e3f3afc603af2e69051d94,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_29f06a22d2e3f3afc603af2e69051d94 == cache_frame_29f06a22d2e3f3afc603af2e69051d94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29f06a22d2e3f3afc603af2e69051d94);
        cache_frame_29f06a22d2e3f3afc603af2e69051d94 = NULL;
    }

    assertFrameObject(frame_29f06a22d2e3f3afc603af2e69051d94);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__14_scrollPageUp_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_5b868921b2a06cd1e0e45772b0f6f5cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd)) {
        Py_XDECREF(cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd = MAKE_FUNCTION_FRAME(tstate, codeobj_5b868921b2a06cd1e0e45772b0f6f5cd, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd->m_type_description == NULL);
    frame_5b868921b2a06cd1e0e45772b0f6f5cd = cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5b868921b2a06cd1e0e45772b0f6f5cd);
    assert(Py_REFCNT(frame_5b868921b2a06cd1e0e45772b0f6f5cd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[39]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5b868921b2a06cd1e0e45772b0f6f5cd->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_5b868921b2a06cd1e0e45772b0f6f5cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b868921b2a06cd1e0e45772b0f6f5cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b868921b2a06cd1e0e45772b0f6f5cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b868921b2a06cd1e0e45772b0f6f5cd,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_5b868921b2a06cd1e0e45772b0f6f5cd == cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd);
        cache_frame_5b868921b2a06cd1e0e45772b0f6f5cd = NULL;
    }

    assertFrameObject(frame_5b868921b2a06cd1e0e45772b0f6f5cd);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__15_scrollPageDown_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_cecf7f1dff53bd11a4fc415826bfd79d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cecf7f1dff53bd11a4fc415826bfd79d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cecf7f1dff53bd11a4fc415826bfd79d)) {
        Py_XDECREF(cache_frame_cecf7f1dff53bd11a4fc415826bfd79d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cecf7f1dff53bd11a4fc415826bfd79d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cecf7f1dff53bd11a4fc415826bfd79d = MAKE_FUNCTION_FRAME(tstate, codeobj_cecf7f1dff53bd11a4fc415826bfd79d, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cecf7f1dff53bd11a4fc415826bfd79d->m_type_description == NULL);
    frame_cecf7f1dff53bd11a4fc415826bfd79d = cache_frame_cecf7f1dff53bd11a4fc415826bfd79d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cecf7f1dff53bd11a4fc415826bfd79d);
    assert(Py_REFCNT(frame_cecf7f1dff53bd11a4fc415826bfd79d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cecf7f1dff53bd11a4fc415826bfd79d->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_cecf7f1dff53bd11a4fc415826bfd79d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cecf7f1dff53bd11a4fc415826bfd79d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cecf7f1dff53bd11a4fc415826bfd79d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cecf7f1dff53bd11a4fc415826bfd79d,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_cecf7f1dff53bd11a4fc415826bfd79d == cache_frame_cecf7f1dff53bd11a4fc415826bfd79d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cecf7f1dff53bd11a4fc415826bfd79d);
        cache_frame_cecf7f1dff53bd11a4fc415826bfd79d = NULL;
    }

    assertFrameObject(frame_cecf7f1dff53bd11a4fc415826bfd79d);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__16_scrollToBeginningOfDocument_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_484b1b83671ca7e32748acc8bddb40e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_484b1b83671ca7e32748acc8bddb40e7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_484b1b83671ca7e32748acc8bddb40e7)) {
        Py_XDECREF(cache_frame_484b1b83671ca7e32748acc8bddb40e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_484b1b83671ca7e32748acc8bddb40e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_484b1b83671ca7e32748acc8bddb40e7 = MAKE_FUNCTION_FRAME(tstate, codeobj_484b1b83671ca7e32748acc8bddb40e7, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_484b1b83671ca7e32748acc8bddb40e7->m_type_description == NULL);
    frame_484b1b83671ca7e32748acc8bddb40e7 = cache_frame_484b1b83671ca7e32748acc8bddb40e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_484b1b83671ca7e32748acc8bddb40e7);
    assert(Py_REFCNT(frame_484b1b83671ca7e32748acc8bddb40e7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_484b1b83671ca7e32748acc8bddb40e7->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_484b1b83671ca7e32748acc8bddb40e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_484b1b83671ca7e32748acc8bddb40e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_484b1b83671ca7e32748acc8bddb40e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_484b1b83671ca7e32748acc8bddb40e7,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_484b1b83671ca7e32748acc8bddb40e7 == cache_frame_484b1b83671ca7e32748acc8bddb40e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_484b1b83671ca7e32748acc8bddb40e7);
        cache_frame_484b1b83671ca7e32748acc8bddb40e7 = NULL;
    }

    assertFrameObject(frame_484b1b83671ca7e32748acc8bddb40e7);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__17_scrollToEndOfDocument_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_494e918b60be3a38a7757b4f26c24097;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_494e918b60be3a38a7757b4f26c24097 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_494e918b60be3a38a7757b4f26c24097)) {
        Py_XDECREF(cache_frame_494e918b60be3a38a7757b4f26c24097);

#if _DEBUG_REFCOUNTS
        if (cache_frame_494e918b60be3a38a7757b4f26c24097 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_494e918b60be3a38a7757b4f26c24097 = MAKE_FUNCTION_FRAME(tstate, codeobj_494e918b60be3a38a7757b4f26c24097, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_494e918b60be3a38a7757b4f26c24097->m_type_description == NULL);
    frame_494e918b60be3a38a7757b4f26c24097 = cache_frame_494e918b60be3a38a7757b4f26c24097;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_494e918b60be3a38a7757b4f26c24097);
    assert(Py_REFCNT(frame_494e918b60be3a38a7757b4f26c24097) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[42]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_494e918b60be3a38a7757b4f26c24097->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_494e918b60be3a38a7757b4f26c24097, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_494e918b60be3a38a7757b4f26c24097->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_494e918b60be3a38a7757b4f26c24097, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_494e918b60be3a38a7757b4f26c24097,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_494e918b60be3a38a7757b4f26c24097 == cache_frame_494e918b60be3a38a7757b4f26c24097) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_494e918b60be3a38a7757b4f26c24097);
        cache_frame_494e918b60be3a38a7757b4f26c24097 = NULL;
    }

    assertFrameObject(frame_494e918b60be3a38a7757b4f26c24097);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__18_deleteBackward_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_c8841646e4fff57bd0ea11895830bb5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8841646e4fff57bd0ea11895830bb5b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8841646e4fff57bd0ea11895830bb5b)) {
        Py_XDECREF(cache_frame_c8841646e4fff57bd0ea11895830bb5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8841646e4fff57bd0ea11895830bb5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8841646e4fff57bd0ea11895830bb5b = MAKE_FUNCTION_FRAME(tstate, codeobj_c8841646e4fff57bd0ea11895830bb5b, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8841646e4fff57bd0ea11895830bb5b->m_type_description == NULL);
    frame_c8841646e4fff57bd0ea11895830bb5b = cache_frame_c8841646e4fff57bd0ea11895830bb5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c8841646e4fff57bd0ea11895830bb5b);
    assert(Py_REFCNT(frame_c8841646e4fff57bd0ea11895830bb5b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[43]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c8841646e4fff57bd0ea11895830bb5b->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_c8841646e4fff57bd0ea11895830bb5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8841646e4fff57bd0ea11895830bb5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8841646e4fff57bd0ea11895830bb5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8841646e4fff57bd0ea11895830bb5b,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_c8841646e4fff57bd0ea11895830bb5b == cache_frame_c8841646e4fff57bd0ea11895830bb5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8841646e4fff57bd0ea11895830bb5b);
        cache_frame_c8841646e4fff57bd0ea11895830bb5b = NULL;
    }

    assertFrameObject(frame_c8841646e4fff57bd0ea11895830bb5b);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__19_deleteForward_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_5f3e1e4d7df9edcfce9c1fc420437ac4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4)) {
        Py_XDECREF(cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4 = MAKE_FUNCTION_FRAME(tstate, codeobj_5f3e1e4d7df9edcfce9c1fc420437ac4, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4->m_type_description == NULL);
    frame_5f3e1e4d7df9edcfce9c1fc420437ac4 = cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5f3e1e4d7df9edcfce9c1fc420437ac4);
    assert(Py_REFCNT(frame_5f3e1e4d7df9edcfce9c1fc420437ac4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[44]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5f3e1e4d7df9edcfce9c1fc420437ac4->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        exception_tb = MAKE_TRACEBACK(frame_5f3e1e4d7df9edcfce9c1fc420437ac4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f3e1e4d7df9edcfce9c1fc420437ac4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f3e1e4d7df9edcfce9c1fc420437ac4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f3e1e4d7df9edcfce9c1fc420437ac4,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_5f3e1e4d7df9edcfce9c1fc420437ac4 == cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4);
        cache_frame_5f3e1e4d7df9edcfce9c1fc420437ac4 = NULL;
    }

    assertFrameObject(frame_5f3e1e4d7df9edcfce9c1fc420437ac4);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__20_moveUpAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_406811c9810ceba4bcad822e94be1de3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_406811c9810ceba4bcad822e94be1de3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_406811c9810ceba4bcad822e94be1de3)) {
        Py_XDECREF(cache_frame_406811c9810ceba4bcad822e94be1de3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_406811c9810ceba4bcad822e94be1de3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_406811c9810ceba4bcad822e94be1de3 = MAKE_FUNCTION_FRAME(tstate, codeobj_406811c9810ceba4bcad822e94be1de3, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_406811c9810ceba4bcad822e94be1de3->m_type_description == NULL);
    frame_406811c9810ceba4bcad822e94be1de3 = cache_frame_406811c9810ceba4bcad822e94be1de3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_406811c9810ceba4bcad822e94be1de3);
    assert(Py_REFCNT(frame_406811c9810ceba4bcad822e94be1de3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[31]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_406811c9810ceba4bcad822e94be1de3->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_406811c9810ceba4bcad822e94be1de3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_406811c9810ceba4bcad822e94be1de3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_406811c9810ceba4bcad822e94be1de3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_406811c9810ceba4bcad822e94be1de3,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_406811c9810ceba4bcad822e94be1de3 == cache_frame_406811c9810ceba4bcad822e94be1de3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_406811c9810ceba4bcad822e94be1de3);
        cache_frame_406811c9810ceba4bcad822e94be1de3 = NULL;
    }

    assertFrameObject(frame_406811c9810ceba4bcad822e94be1de3);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__21_moveDownAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_e35178234fceca082e054f7d4a6e7cd9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e35178234fceca082e054f7d4a6e7cd9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e35178234fceca082e054f7d4a6e7cd9)) {
        Py_XDECREF(cache_frame_e35178234fceca082e054f7d4a6e7cd9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e35178234fceca082e054f7d4a6e7cd9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e35178234fceca082e054f7d4a6e7cd9 = MAKE_FUNCTION_FRAME(tstate, codeobj_e35178234fceca082e054f7d4a6e7cd9, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e35178234fceca082e054f7d4a6e7cd9->m_type_description == NULL);
    frame_e35178234fceca082e054f7d4a6e7cd9 = cache_frame_e35178234fceca082e054f7d4a6e7cd9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e35178234fceca082e054f7d4a6e7cd9);
    assert(Py_REFCNT(frame_e35178234fceca082e054f7d4a6e7cd9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[32]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e35178234fceca082e054f7d4a6e7cd9->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_e35178234fceca082e054f7d4a6e7cd9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e35178234fceca082e054f7d4a6e7cd9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e35178234fceca082e054f7d4a6e7cd9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e35178234fceca082e054f7d4a6e7cd9,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_e35178234fceca082e054f7d4a6e7cd9 == cache_frame_e35178234fceca082e054f7d4a6e7cd9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e35178234fceca082e054f7d4a6e7cd9);
        cache_frame_e35178234fceca082e054f7d4a6e7cd9 = NULL;
    }

    assertFrameObject(frame_e35178234fceca082e054f7d4a6e7cd9);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__22_moveLeftAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_00c634c9f99a4166ed9496bc25a1b190;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00c634c9f99a4166ed9496bc25a1b190 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00c634c9f99a4166ed9496bc25a1b190)) {
        Py_XDECREF(cache_frame_00c634c9f99a4166ed9496bc25a1b190);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00c634c9f99a4166ed9496bc25a1b190 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00c634c9f99a4166ed9496bc25a1b190 = MAKE_FUNCTION_FRAME(tstate, codeobj_00c634c9f99a4166ed9496bc25a1b190, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00c634c9f99a4166ed9496bc25a1b190->m_type_description == NULL);
    frame_00c634c9f99a4166ed9496bc25a1b190 = cache_frame_00c634c9f99a4166ed9496bc25a1b190;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_00c634c9f99a4166ed9496bc25a1b190);
    assert(Py_REFCNT(frame_00c634c9f99a4166ed9496bc25a1b190) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[33]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_00c634c9f99a4166ed9496bc25a1b190->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_00c634c9f99a4166ed9496bc25a1b190, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00c634c9f99a4166ed9496bc25a1b190->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00c634c9f99a4166ed9496bc25a1b190, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00c634c9f99a4166ed9496bc25a1b190,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_00c634c9f99a4166ed9496bc25a1b190 == cache_frame_00c634c9f99a4166ed9496bc25a1b190) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00c634c9f99a4166ed9496bc25a1b190);
        cache_frame_00c634c9f99a4166ed9496bc25a1b190 = NULL;
    }

    assertFrameObject(frame_00c634c9f99a4166ed9496bc25a1b190);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__23_moveRightAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_fb2b0d6491135bfd6e689fc93a19e4f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9)) {
        Py_XDECREF(cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9 = MAKE_FUNCTION_FRAME(tstate, codeobj_fb2b0d6491135bfd6e689fc93a19e4f9, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9->m_type_description == NULL);
    frame_fb2b0d6491135bfd6e689fc93a19e4f9 = cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fb2b0d6491135bfd6e689fc93a19e4f9);
    assert(Py_REFCNT(frame_fb2b0d6491135bfd6e689fc93a19e4f9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[34]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fb2b0d6491135bfd6e689fc93a19e4f9->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
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
        exception_tb = MAKE_TRACEBACK(frame_fb2b0d6491135bfd6e689fc93a19e4f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb2b0d6491135bfd6e689fc93a19e4f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb2b0d6491135bfd6e689fc93a19e4f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb2b0d6491135bfd6e689fc93a19e4f9,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_fb2b0d6491135bfd6e689fc93a19e4f9 == cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9);
        cache_frame_fb2b0d6491135bfd6e689fc93a19e4f9 = NULL;
    }

    assertFrameObject(frame_fb2b0d6491135bfd6e689fc93a19e4f9);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__24_moveWordLeftAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_843980e14e0226c9631ff8e19aac48a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_843980e14e0226c9631ff8e19aac48a1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_843980e14e0226c9631ff8e19aac48a1)) {
        Py_XDECREF(cache_frame_843980e14e0226c9631ff8e19aac48a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_843980e14e0226c9631ff8e19aac48a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_843980e14e0226c9631ff8e19aac48a1 = MAKE_FUNCTION_FRAME(tstate, codeobj_843980e14e0226c9631ff8e19aac48a1, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_843980e14e0226c9631ff8e19aac48a1->m_type_description == NULL);
    frame_843980e14e0226c9631ff8e19aac48a1 = cache_frame_843980e14e0226c9631ff8e19aac48a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_843980e14e0226c9631ff8e19aac48a1);
    assert(Py_REFCNT(frame_843980e14e0226c9631ff8e19aac48a1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_843980e14e0226c9631ff8e19aac48a1->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_843980e14e0226c9631ff8e19aac48a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_843980e14e0226c9631ff8e19aac48a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_843980e14e0226c9631ff8e19aac48a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_843980e14e0226c9631ff8e19aac48a1,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_843980e14e0226c9631ff8e19aac48a1 == cache_frame_843980e14e0226c9631ff8e19aac48a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_843980e14e0226c9631ff8e19aac48a1);
        cache_frame_843980e14e0226c9631ff8e19aac48a1 = NULL;
    }

    assertFrameObject(frame_843980e14e0226c9631ff8e19aac48a1);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__25_moveWordRightAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_faac23fba3946629d9594293cb26a660;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_faac23fba3946629d9594293cb26a660 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_faac23fba3946629d9594293cb26a660)) {
        Py_XDECREF(cache_frame_faac23fba3946629d9594293cb26a660);

#if _DEBUG_REFCOUNTS
        if (cache_frame_faac23fba3946629d9594293cb26a660 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_faac23fba3946629d9594293cb26a660 = MAKE_FUNCTION_FRAME(tstate, codeobj_faac23fba3946629d9594293cb26a660, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_faac23fba3946629d9594293cb26a660->m_type_description == NULL);
    frame_faac23fba3946629d9594293cb26a660 = cache_frame_faac23fba3946629d9594293cb26a660;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_faac23fba3946629d9594293cb26a660);
    assert(Py_REFCNT(frame_faac23fba3946629d9594293cb26a660) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[36]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_faac23fba3946629d9594293cb26a660->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_faac23fba3946629d9594293cb26a660, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_faac23fba3946629d9594293cb26a660->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faac23fba3946629d9594293cb26a660, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_faac23fba3946629d9594293cb26a660,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_faac23fba3946629d9594293cb26a660 == cache_frame_faac23fba3946629d9594293cb26a660) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_faac23fba3946629d9594293cb26a660);
        cache_frame_faac23fba3946629d9594293cb26a660 = NULL;
    }

    assertFrameObject(frame_faac23fba3946629d9594293cb26a660);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__26_moveToBeginningOfLineAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_0c3bd580b7922abb154476422b284820;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c3bd580b7922abb154476422b284820 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c3bd580b7922abb154476422b284820)) {
        Py_XDECREF(cache_frame_0c3bd580b7922abb154476422b284820);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c3bd580b7922abb154476422b284820 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c3bd580b7922abb154476422b284820 = MAKE_FUNCTION_FRAME(tstate, codeobj_0c3bd580b7922abb154476422b284820, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c3bd580b7922abb154476422b284820->m_type_description == NULL);
    frame_0c3bd580b7922abb154476422b284820 = cache_frame_0c3bd580b7922abb154476422b284820;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0c3bd580b7922abb154476422b284820);
    assert(Py_REFCNT(frame_0c3bd580b7922abb154476422b284820) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[37]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0c3bd580b7922abb154476422b284820->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
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
        exception_tb = MAKE_TRACEBACK(frame_0c3bd580b7922abb154476422b284820, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c3bd580b7922abb154476422b284820->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c3bd580b7922abb154476422b284820, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c3bd580b7922abb154476422b284820,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_0c3bd580b7922abb154476422b284820 == cache_frame_0c3bd580b7922abb154476422b284820) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c3bd580b7922abb154476422b284820);
        cache_frame_0c3bd580b7922abb154476422b284820 = NULL;
    }

    assertFrameObject(frame_0c3bd580b7922abb154476422b284820);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__27_moveToEndOfLineAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_905df400fc16d37d29ffa8a3563bb444;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_905df400fc16d37d29ffa8a3563bb444 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_905df400fc16d37d29ffa8a3563bb444)) {
        Py_XDECREF(cache_frame_905df400fc16d37d29ffa8a3563bb444);

#if _DEBUG_REFCOUNTS
        if (cache_frame_905df400fc16d37d29ffa8a3563bb444 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_905df400fc16d37d29ffa8a3563bb444 = MAKE_FUNCTION_FRAME(tstate, codeobj_905df400fc16d37d29ffa8a3563bb444, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_905df400fc16d37d29ffa8a3563bb444->m_type_description == NULL);
    frame_905df400fc16d37d29ffa8a3563bb444 = cache_frame_905df400fc16d37d29ffa8a3563bb444;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_905df400fc16d37d29ffa8a3563bb444);
    assert(Py_REFCNT(frame_905df400fc16d37d29ffa8a3563bb444) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_905df400fc16d37d29ffa8a3563bb444->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
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
        exception_tb = MAKE_TRACEBACK(frame_905df400fc16d37d29ffa8a3563bb444, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_905df400fc16d37d29ffa8a3563bb444->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_905df400fc16d37d29ffa8a3563bb444, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_905df400fc16d37d29ffa8a3563bb444,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_905df400fc16d37d29ffa8a3563bb444 == cache_frame_905df400fc16d37d29ffa8a3563bb444) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_905df400fc16d37d29ffa8a3563bb444);
        cache_frame_905df400fc16d37d29ffa8a3563bb444 = NULL;
    }

    assertFrameObject(frame_905df400fc16d37d29ffa8a3563bb444);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__28_pageUpAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_d63505b5e0d7eb7ac13ceb02e6a1ef25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25)) {
        Py_XDECREF(cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25 = MAKE_FUNCTION_FRAME(tstate, codeobj_d63505b5e0d7eb7ac13ceb02e6a1ef25, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25->m_type_description == NULL);
    frame_d63505b5e0d7eb7ac13ceb02e6a1ef25 = cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d63505b5e0d7eb7ac13ceb02e6a1ef25);
    assert(Py_REFCNT(frame_d63505b5e0d7eb7ac13ceb02e6a1ef25) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[39]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d63505b5e0d7eb7ac13ceb02e6a1ef25->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
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
        exception_tb = MAKE_TRACEBACK(frame_d63505b5e0d7eb7ac13ceb02e6a1ef25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d63505b5e0d7eb7ac13ceb02e6a1ef25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d63505b5e0d7eb7ac13ceb02e6a1ef25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d63505b5e0d7eb7ac13ceb02e6a1ef25,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_d63505b5e0d7eb7ac13ceb02e6a1ef25 == cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25);
        cache_frame_d63505b5e0d7eb7ac13ceb02e6a1ef25 = NULL;
    }

    assertFrameObject(frame_d63505b5e0d7eb7ac13ceb02e6a1ef25);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__29_pageDownAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_979060429c203bed11fb2b14d14f655f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_979060429c203bed11fb2b14d14f655f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_979060429c203bed11fb2b14d14f655f)) {
        Py_XDECREF(cache_frame_979060429c203bed11fb2b14d14f655f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_979060429c203bed11fb2b14d14f655f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_979060429c203bed11fb2b14d14f655f = MAKE_FUNCTION_FRAME(tstate, codeobj_979060429c203bed11fb2b14d14f655f, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_979060429c203bed11fb2b14d14f655f->m_type_description == NULL);
    frame_979060429c203bed11fb2b14d14f655f = cache_frame_979060429c203bed11fb2b14d14f655f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_979060429c203bed11fb2b14d14f655f);
    assert(Py_REFCNT(frame_979060429c203bed11fb2b14d14f655f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_979060429c203bed11fb2b14d14f655f->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
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
        exception_tb = MAKE_TRACEBACK(frame_979060429c203bed11fb2b14d14f655f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_979060429c203bed11fb2b14d14f655f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_979060429c203bed11fb2b14d14f655f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_979060429c203bed11fb2b14d14f655f,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_979060429c203bed11fb2b14d14f655f == cache_frame_979060429c203bed11fb2b14d14f655f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_979060429c203bed11fb2b14d14f655f);
        cache_frame_979060429c203bed11fb2b14d14f655f = NULL;
    }

    assertFrameObject(frame_979060429c203bed11fb2b14d14f655f);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__30_moveToBeginningOfDocumentAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_75edcdeacba041850e8ea9be1d50b0b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_75edcdeacba041850e8ea9be1d50b0b8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_75edcdeacba041850e8ea9be1d50b0b8)) {
        Py_XDECREF(cache_frame_75edcdeacba041850e8ea9be1d50b0b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75edcdeacba041850e8ea9be1d50b0b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75edcdeacba041850e8ea9be1d50b0b8 = MAKE_FUNCTION_FRAME(tstate, codeobj_75edcdeacba041850e8ea9be1d50b0b8, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_75edcdeacba041850e8ea9be1d50b0b8->m_type_description == NULL);
    frame_75edcdeacba041850e8ea9be1d50b0b8 = cache_frame_75edcdeacba041850e8ea9be1d50b0b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_75edcdeacba041850e8ea9be1d50b0b8);
    assert(Py_REFCNT(frame_75edcdeacba041850e8ea9be1d50b0b8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_75edcdeacba041850e8ea9be1d50b0b8->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_75edcdeacba041850e8ea9be1d50b0b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75edcdeacba041850e8ea9be1d50b0b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75edcdeacba041850e8ea9be1d50b0b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75edcdeacba041850e8ea9be1d50b0b8,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_75edcdeacba041850e8ea9be1d50b0b8 == cache_frame_75edcdeacba041850e8ea9be1d50b0b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_75edcdeacba041850e8ea9be1d50b0b8);
        cache_frame_75edcdeacba041850e8ea9be1d50b0b8 = NULL;
    }

    assertFrameObject(frame_75edcdeacba041850e8ea9be1d50b0b8);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyglet$window$cocoa$pyglet_textview$$$function__31_moveToEndOfDocumentAndModifySelection_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sender = python_pars[1];
    struct Nuitka_FrameObject *frame_4e816bdd35eba471f1e58bec4590d1e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e816bdd35eba471f1e58bec4590d1e5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e816bdd35eba471f1e58bec4590d1e5)) {
        Py_XDECREF(cache_frame_4e816bdd35eba471f1e58bec4590d1e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e816bdd35eba471f1e58bec4590d1e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e816bdd35eba471f1e58bec4590d1e5 = MAKE_FUNCTION_FRAME(tstate, codeobj_4e816bdd35eba471f1e58bec4590d1e5, module_pyglet$window$cocoa$pyglet_textview, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e816bdd35eba471f1e58bec4590d1e5->m_type_description == NULL);
    frame_4e816bdd35eba471f1e58bec4590d1e5 = cache_frame_4e816bdd35eba471f1e58bec4590d1e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4e816bdd35eba471f1e58bec4590d1e5);
    assert(Py_REFCNT(frame_4e816bdd35eba471f1e58bec4590d1e5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[45];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[42]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4e816bdd35eba471f1e58bec4590d1e5->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_4e816bdd35eba471f1e58bec4590d1e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e816bdd35eba471f1e58bec4590d1e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e816bdd35eba471f1e58bec4590d1e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e816bdd35eba471f1e58bec4590d1e5,
        type_description_1,
        par_self,
        par_sender
    );


    // Release cached frame if used for exception.
    if (frame_4e816bdd35eba471f1e58bec4590d1e5 == cache_frame_4e816bdd35eba471f1e58bec4590d1e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e816bdd35eba471f1e58bec4590d1e5);
        cache_frame_4e816bdd35eba471f1e58bec4590d1e5 = NULL;
    }

    assertFrameObject(frame_4e816bdd35eba471f1e58bec4590d1e5);

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
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sender);
    Py_DECREF(par_sender);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__10_moveWordLeft_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__10_moveWordLeft_,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_42ffcee96ee3fe3af11b393df0936aec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__11_moveWordRight_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__11_moveWordRight_,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_0344bbe19e7fa688aa1b3c6d65767f91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__12_moveToBeginningOfLine_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__12_moveToBeginningOfLine_,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_d0bd370226878295fe9953ddaebcf091,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__13_moveToEndOfLine_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__13_moveToEndOfLine_,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_29f06a22d2e3f3afc603af2e69051d94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__14_scrollPageUp_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__14_scrollPageUp_,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_5b868921b2a06cd1e0e45772b0f6f5cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__15_scrollPageDown_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__15_scrollPageDown_,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_cecf7f1dff53bd11a4fc415826bfd79d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__16_scrollToBeginningOfDocument_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__16_scrollToBeginningOfDocument_,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_484b1b83671ca7e32748acc8bddb40e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__17_scrollToEndOfDocument_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__17_scrollToEndOfDocument_,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_494e918b60be3a38a7757b4f26c24097,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__18_deleteBackward_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__18_deleteBackward_,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_c8841646e4fff57bd0ea11895830bb5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__19_deleteForward_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__19_deleteForward_,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_5f3e1e4d7df9edcfce9c1fc420437ac4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__1_initWithCocoaWindow_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__1_initWithCocoaWindow_,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_904a511ab9a6b7f239250bae7168b1ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__20_moveUpAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__20_moveUpAndModifySelection_,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_406811c9810ceba4bcad822e94be1de3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__21_moveDownAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__21_moveDownAndModifySelection_,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_e35178234fceca082e054f7d4a6e7cd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__22_moveLeftAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__22_moveLeftAndModifySelection_,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_00c634c9f99a4166ed9496bc25a1b190,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__23_moveRightAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__23_moveRightAndModifySelection_,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_fb2b0d6491135bfd6e689fc93a19e4f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__24_moveWordLeftAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__24_moveWordLeftAndModifySelection_,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_843980e14e0226c9631ff8e19aac48a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__25_moveWordRightAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__25_moveWordRightAndModifySelection_,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_faac23fba3946629d9594293cb26a660,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__26_moveToBeginningOfLineAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__26_moveToBeginningOfLineAndModifySelection_,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_0c3bd580b7922abb154476422b284820,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__27_moveToEndOfLineAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__27_moveToEndOfLineAndModifySelection_,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_905df400fc16d37d29ffa8a3563bb444,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__28_pageUpAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__28_pageUpAndModifySelection_,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_d63505b5e0d7eb7ac13ceb02e6a1ef25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__29_pageDownAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__29_pageDownAndModifySelection_,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_979060429c203bed11fb2b14d14f655f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__2_dealloc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__2_dealloc,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_b31bc9dfd43fdc495a58f36e7f15eb64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__30_moveToBeginningOfDocumentAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__30_moveToBeginningOfDocumentAndModifySelection_,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_75edcdeacba041850e8ea9be1d50b0b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__31_moveToEndOfDocumentAndModifySelection_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__31_moveToEndOfDocumentAndModifySelection_,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_4e816bdd35eba471f1e58bec4590d1e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__3_keyDown_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__3_keyDown_,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_b41cc237e6f1ecba895878e55440a8d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__4_insertText_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__4_insertText_,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_ad5143ad0ead5cc12ab0e8e8aa14142e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__5_insertNewline_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__5_insertNewline_,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_0af4cf166f8d9b4503caf2166be39675,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__6_moveUp_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__6_moveUp_,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_0204b920d3a9bdd97cefed6222cbcb9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__7_moveDown_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__7_moveDown_,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_e1b7f784ed42c0aa9f871ea23f20e3b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__8_moveLeft_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__8_moveLeft_,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_65b729ceef6449ff9bcf6a38c022b9cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__9_moveRight_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$window$cocoa$pyglet_textview$$$function__9_moveRight_,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_c6da750fd8f51e5018e1aab1007fcab5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$window$cocoa$pyglet_textview,
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

function_impl_code functable_pyglet$window$cocoa$pyglet_textview[] = {
    impl_pyglet$window$cocoa$pyglet_textview$$$function__1_initWithCocoaWindow_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__2_dealloc,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__3_keyDown_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__4_insertText_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__5_insertNewline_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__6_moveUp_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__7_moveDown_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__8_moveLeft_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__9_moveRight_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__10_moveWordLeft_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__11_moveWordRight_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__12_moveToBeginningOfLine_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__13_moveToEndOfLine_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__14_scrollPageUp_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__15_scrollPageDown_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__16_scrollToBeginningOfDocument_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__17_scrollToEndOfDocument_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__18_deleteBackward_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__19_deleteForward_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__20_moveUpAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__21_moveDownAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__22_moveLeftAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__23_moveRightAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__24_moveWordLeftAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__25_moveWordRightAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__26_moveToBeginningOfLineAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__27_moveToEndOfLineAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__28_pageUpAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__29_pageDownAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__30_moveToBeginningOfDocumentAndModifySelection_,
    impl_pyglet$window$cocoa$pyglet_textview$$$function__31_moveToEndOfDocumentAndModifySelection_,
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

    function_impl_code *current = functable_pyglet$window$cocoa$pyglet_textview;
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

    if (offset > sizeof(functable_pyglet$window$cocoa$pyglet_textview) || offset < 0) {
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
        functable_pyglet$window$cocoa$pyglet_textview[offset],
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
        module_pyglet$window$cocoa$pyglet_textview,
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
PyObject *modulecode_pyglet$window$cocoa$pyglet_textview(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.window.cocoa.pyglet_textview");

    // Store the module for future use.
    module_pyglet$window$cocoa$pyglet_textview = module;

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
        PRINT_STRING("pyglet.window.cocoa.pyglet_textview: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.window.cocoa.pyglet_textview: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$window$cocoa$pyglet_textview\n");

    moduledict_pyglet$window$cocoa$pyglet_textview = MODULE_DICT(module_pyglet$window$cocoa$pyglet_textview);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$window$cocoa$pyglet_textview,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$window$cocoa$pyglet_textview,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[146]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$window$cocoa$pyglet_textview,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$window$cocoa$pyglet_textview,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$window$cocoa$pyglet_textview,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$window$cocoa$pyglet_textview);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$window$cocoa$pyglet_textview);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_260b593f9231187b9daf20e0ada4bc35;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_df520a2a4c252dc5b05873f605e75d4e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_2);
    }
    frame_260b593f9231187b9daf20e0ada4bc35 = MAKE_MODULE_FRAME(codeobj_260b593f9231187b9daf20e0ada4bc35, module_pyglet$window$cocoa$pyglet_textview);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_260b593f9231187b9daf20e0ada4bc35);
    assert(Py_REFCNT(frame_260b593f9231187b9daf20e0ada4bc35) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[17];
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 36;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[52];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[53];
        tmp_level_value_2 = mod_consts[17];
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 38;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[30],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[54];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[55];
        tmp_level_value_3 = mod_consts[17];
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 40;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[56],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[56]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[57],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[57]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[0],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[0]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[54];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[58];
        tmp_level_value_4 = mod_consts[17];
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 41;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[59],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[59]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[1],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[1]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[54];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[60];
        tmp_level_value_5 = mod_consts[17];
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 42;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[6],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[6]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pyglet$window$cocoa$pyglet_textview,
                mod_consts[13],
                mod_consts[17]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[13]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_15);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 44;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[61]);

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 45;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[62]);

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[64], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[66], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_df520a2a4c252dc5b05873f605e75d4e_2 = MAKE_CLASS_FRAME(tstate, codeobj_df520a2a4c252dc5b05873f605e75d4e, module_pyglet$window$cocoa$pyglet_textview, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_df520a2a4c252dc5b05873f605e75d4e_2);
        assert(Py_REFCNT(frame_df520a2a4c252dc5b05873f605e75d4e_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_3;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[67]);

            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_args_element_value_2;
            tmp_expression_value_1 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_expression_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[69]);
            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_1 = mod_consts[70];
            tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_add_expr_right_1 == NULL)) {
                tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_add_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 52;
            tmp_called_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__1_initWithCocoaWindow_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 63;
            tmp_called_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_1,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[73], 0)
            );

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__2_dealloc();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_4;
            tmp_called_instance_2 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 67;
            tmp_called_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_2,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__3_keyDown_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 67;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_5;
            tmp_called_instance_3 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 72;
            tmp_called_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_3,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__4_insertText_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_4 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 80;
            tmp_called_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_4,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__5_insertNewline_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_7;
            tmp_called_instance_5 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 90;
            tmp_called_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_5,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__6_moveUp_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_8;
            tmp_called_instance_6 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 94;
            tmp_called_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_6,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_8 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__7_moveDown_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 94;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_7 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 98;
            tmp_called_value_12 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_7,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__8_moveLeft_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 98;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_10;
            tmp_called_instance_8 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 102;
            tmp_called_value_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_8,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__9_moveRight_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 102;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_11;
            tmp_called_instance_9 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 106;
            tmp_called_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_9,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__10_moveWordLeft_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_10 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 110;
            tmp_called_value_15 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_10,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__11_moveWordRight_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_13;
            tmp_called_instance_11 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 114;
            tmp_called_value_16 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_11,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__12_moveToBeginningOfLine_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 114;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_14;
            tmp_called_instance_12 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 118;
            tmp_called_value_17 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_12,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_14 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__13_moveToEndOfLine_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[97], tmp_dictset_value);
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
            PyObject *tmp_called_value_18;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_13 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 122;
            tmp_called_value_18 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_13,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__14_scrollPageUp_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_16;
            tmp_called_instance_14 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 126;
            tmp_called_value_19 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_14,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_16 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__15_scrollPageDown_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_value_17;
            tmp_called_instance_15 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 130;
            tmp_called_value_20 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_15,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_17 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__16_scrollToBeginningOfDocument_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_18;
            tmp_called_instance_16 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 134;
            tmp_called_value_21 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_16,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__17_scrollToEndOfDocument_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_value_19;
            tmp_called_instance_17 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 138;
            tmp_called_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_17,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__18_deleteBackward_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_value_20;
            tmp_called_instance_18 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 142;
            tmp_called_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_18,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_20 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__19_deleteForward_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 142;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_value_21;
            tmp_called_instance_19 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 146;
            tmp_called_value_24 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_19,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__20_moveUpAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 146;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_value_22;
            tmp_called_instance_20 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 150;
            tmp_called_value_25 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_20,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__21_moveDownAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_value_23;
            tmp_called_instance_21 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 154;
            tmp_called_value_26 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_21,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_23 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__22_moveLeftAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_value_24;
            tmp_called_instance_22 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 158;
            tmp_called_value_27 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_22,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_24 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__23_moveRightAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_value_25;
            tmp_called_instance_23 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 162;
            tmp_called_value_28 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_23,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__24_moveWordLeftAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_value_26;
            tmp_called_instance_24 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 166;
            tmp_called_value_29 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_24,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_26 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__25_moveWordRightAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_value_27;
            tmp_called_instance_25 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 170;
            tmp_called_value_30 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_25,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__26_moveToBeginningOfLineAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_value_28;
            tmp_called_instance_26 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 174;
            tmp_called_value_31 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_26,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__27_moveToEndOfLineAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_value_29;
            tmp_called_instance_27 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 178;
            tmp_called_value_32 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_27,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_29 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__28_pageUpAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 178;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_29);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_value_30;
            tmp_called_instance_28 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 182;
            tmp_called_value_33 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_28,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_30 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__29_pageDownAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_value_31;
            tmp_called_instance_29 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 186;
            tmp_called_value_34 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_29,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_31 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__30_moveToBeginningOfDocumentAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 186;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_value_32;
            tmp_called_instance_30 = DICT_GET_ITEM0(tstate, locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[68]);

            if (unlikely(tmp_called_instance_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[68]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 190;
            tmp_called_value_35 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_30,
                mod_consts[69],
                PyTuple_GET_ITEM(mod_consts[76], 0)
            );

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_32 = MAKE_FUNCTION_pyglet$window$cocoa$pyglet_textview$$$function__31_moveToEndOfDocumentAndModifySelection_();

            frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_32);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49, mod_consts[133], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_df520a2a4c252dc5b05873f605e75d4e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_df520a2a4c252dc5b05873f605e75d4e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_df520a2a4c252dc5b05873f605e75d4e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_df520a2a4c252dc5b05873f605e75d4e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_df520a2a4c252dc5b05873f605e75d4e_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_36 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[65];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[135];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 49;
            tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49);
        locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49 = NULL;
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

        Py_DECREF(locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49);
        locals_pyglet$window$cocoa$pyglet_textview$$$class__1_PygletTextView_Implementation_49 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 49;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_20);
    }
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_260b593f9231187b9daf20e0ada4bc35->m_frame.f_lineno = 195;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_37, mod_consts[136]);

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_22);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_260b593f9231187b9daf20e0ada4bc35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_260b593f9231187b9daf20e0ada4bc35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_260b593f9231187b9daf20e0ada4bc35, exception_lineno);
    }



    assertFrameObject(frame_260b593f9231187b9daf20e0ada4bc35);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.window.cocoa.pyglet_textview", false);

    Py_INCREF(module_pyglet$window$cocoa$pyglet_textview);
    return module_pyglet$window$cocoa$pyglet_textview;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$window$cocoa$pyglet_textview, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$window$cocoa$pyglet_textview", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
